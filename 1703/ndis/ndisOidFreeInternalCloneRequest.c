/*
 * XREFs of ndisOidFreeInternalCloneRequest @ 0x1C000C1E4
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000B2E0 (ndisFDoOidRequestInternal.c)
 *     ndisMAbortRequests @ 0x1C0025880 (ndisMAbortRequests.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00454B8 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     NdisMDirectOidRequestComplete @ 0x1C0045760 (NdisMDirectOidRequestComplete.c)
 *     NdisMOidRequestComplete @ 0x1C00457E0 (NdisMOidRequestComplete.c)
 *     NdisFDirectOidRequestComplete @ 0x1C0059660 (NdisFDirectOidRequestComplete.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C005A180 (ndisFInvokeDirectOidRequest.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C005FCE8 (ndisMInvokeDirectOidRequest.c)
 *     ndisMInvokeOidRequest @ 0x1C00A5080 (ndisMInvokeOidRequest.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
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
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqd(41LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a2, v4, *(_DWORD *)(a2 + 32));
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
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_qq(180LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, *(_QWORD *)(a2 + 24), a2);
    if ( v13 )
    {
      *(_BYTE *)(v13 + 232) = *(_BYTE *)(a2 + 232);
      *(_DWORD *)(v13 + 152) = *(_DWORD *)(a2 + 152);
    }
    ExFreePoolWithTag((PVOID)a2, 0);
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_qq(181LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v12, 0LL);
  }
  else if ( (unsigned __int8)byte_1C0092612 >= 2u )
  {
    WPP_SF_(42LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids);
  }
  if ( a4 )
    *a4 = v4;
}
