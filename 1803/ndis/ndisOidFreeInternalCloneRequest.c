/*
 * XREFs of ndisOidFreeInternalCloneRequest @ 0x1C000E4F8
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000CFF0 (ndisFDoOidRequestInternal.c)
 *     ndisMAbortRequests @ 0x1C00124B0 (ndisMAbortRequests.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0043260 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     NdisMDirectOidRequestComplete @ 0x1C0043740 (NdisMDirectOidRequestComplete.c)
 *     NdisMOidRequestComplete @ 0x1C00437C0 (NdisMOidRequestComplete.c)
 *     NdisFDirectOidRequestComplete @ 0x1C0059130 (NdisFDirectOidRequestComplete.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C0059C10 (ndisFInvokeDirectOidRequest.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C00606A8 (ndisMInvokeDirectOidRequest.c)
 *     ndisMInvokeOidRequest @ 0x1C00AEFF0 (ndisMInvokeOidRequest.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 */

void __fastcall ndisOidFreeInternalCloneRequest(KSPIN_LOCK *a1, __int64 a2, char a3, KSPIN_LOCK *a4)
{
  KSPIN_LOCK v4; // rsi
  KSPIN_LOCK *v5; // r14
  KSPIN_LOCK *v6; // rbp
  KIRQL v10; // al
  KSPIN_LOCK *v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rbx

  v4 = *(_QWORD *)(a2 + 96);
  v5 = a1;
  v6 = 0LL;
  if ( *(_BYTE *)a1 != 5 )
  {
    v6 = a1;
    v5 = 0LL;
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqd(41LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a2, v4, *(_DWORD *)(a2 + 32));
  if ( v4 )
  {
    *(_QWORD *)(a2 + 96) = 0LL;
    if ( *(_DWORD *)(a2 + 4) == 12 )
    {
      *(_DWORD *)(v4 + 60) = *(_DWORD *)(a2 + 60);
      *(_DWORD *)(v4 + 64) = *(_DWORD *)(a2 + 64);
      *(_DWORD *)(v4 + 68) = *(_DWORD *)(a2 + 68);
      *(_QWORD *)(v4 + 40) = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(v4 + 48) = *(_DWORD *)(a2 + 48);
      *(_DWORD *)(v4 + 52) = *(_DWORD *)(a2 + 52);
    }
    else
    {
      *(_DWORD *)(v4 + 52) = *(_DWORD *)(a2 + 52);
      *(_DWORD *)(v4 + 56) = *(_DWORD *)(a2 + 56);
      *(_QWORD *)(v4 + 40) = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(v4 + 48) = *(_DWORD *)(a2 + 48);
    }
    if ( a3 && (*(_DWORD *)(v4 + 88) & 0x400) == 0 )
    {
      if ( v5 )
      {
        v10 = KeAcquireSpinLockRaiseToDpc(v5 + 18);
        v11 = v5 + 18;
        v5[23] = v4;
        v5[19] = 0LL;
        *((_DWORD *)v5 + 40) = 0;
      }
      else
      {
        v10 = KeAcquireSpinLockRaiseToDpc(v6 + 12);
        v11 = v6 + 12;
        v6[277] = v4;
        v6[65] = 0LL;
        *((_DWORD *)v6 + 464) = 0;
      }
      KeReleaseSpinLock(v11, v10);
    }
    v12 = *(_QWORD *)(a2 + 24);
    v13 = *(_QWORD *)(a2 + 96);
    if ( (unsigned __int8)byte_1C0099612 >= 4u )
      WPP_SF_qq(195LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, *(_QWORD *)(a2 + 24), a2);
    if ( v13 )
    {
      *(_BYTE *)(v13 + 232) = *(_BYTE *)(a2 + 232);
      *(_DWORD *)(v13 + 152) = *(_DWORD *)(a2 + 152);
    }
    ExFreePoolWithTag((PVOID)a2, 0);
    if ( (unsigned __int8)byte_1C0099612 >= 4u )
      WPP_SF_qq(196LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v12, 0LL);
  }
  else if ( (unsigned __int8)byte_1C0099612 >= 2u )
  {
    WPP_SF_(42LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids);
  }
  if ( a4 )
    *a4 = v4;
}
