/*
 * XREFs of ndisOidCloneForCompatibility @ 0x1C000DAC0
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000CFF0 (ndisFDoOidRequestInternal.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C0059C10 (ndisFInvokeDirectOidRequest.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C00606A8 (ndisMInvokeDirectOidRequest.c)
 *     ndisMInvokeOidRequest @ 0x1C00AEFF0 (ndisMInvokeOidRequest.c)
 * Callees:
 *     NdisAllocateCloneOidRequest @ 0x1C000DCB0 (NdisAllocateCloneOidRequest.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 */

NDIS_STATUS __fastcall ndisOidCloneForCompatibility(_BYTE *a1, __int64 a2, char a3, PNDIS_OID_REQUEST *a4)
{
  _BYTE *v4; // rbx
  KSPIN_LOCK *v5; // rdi
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  char v11; // r14
  NDIS_STATUS result; // eax
  PNDIS_OID_REQUEST v13; // rcx
  KIRQL v14; // al
  KSPIN_LOCK *v15; // rcx
  unsigned __int8 v16; // al
  __int64 v17; // rcx

  v4 = a1;
  v5 = 0LL;
  if ( *a1 != 5 )
  {
    v5 = (KSPIN_LOCK *)a1;
    v4 = 0LL;
  }
  if ( v4 )
  {
    v9 = *((_QWORD *)v4 + 2);
    v10 = *(_BYTE *)(v9 + 100);
    if ( v10 > 6u || v10 == 6 && *(_BYTE *)(v9 + 101) >= 0x32u )
      goto LABEL_7;
  }
  else
  {
    v16 = *((_BYTE *)v5 + 32);
    if ( v16 > 6u || v16 == 6 && *((_BYTE *)v5 + 33) >= 0x32u )
    {
LABEL_7:
      v11 = 1;
      if ( *(_BYTE *)(a2 + 1) == 1 )
        goto LABEL_8;
      return 0;
    }
  }
  v11 = 0;
  if ( *(_BYTE *)(a2 + 1) != 2 && *(_WORD *)(a2 + 2) == 236 )
    return 0;
LABEL_8:
  result = NdisAllocateCloneOidRequest(*(NDIS_HANDLE *)(a2 + 104), (PNDIS_OID_REQUEST)a2, 0x7172444Eu, a4);
  if ( result )
    return result;
  v13 = *a4;
  if ( v11 )
  {
    v13->Header.Revision = 2;
    (*a4)->Header.Size = 248;
    if ( (unsigned __int8)byte_1C0099612 < 4u )
      goto LABEL_11;
    v17 = 55LL;
  }
  else
  {
    v13->Header.Revision = 1;
    (*a4)->Header.Size = 236;
    if ( (unsigned __int8)byte_1C0099612 < 4u )
      goto LABEL_11;
    v17 = 56LL;
  }
  WPP_SF_qqd(v17, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a2, *a4, *(_DWORD *)(a2 + 32));
LABEL_11:
  *(_DWORD *)&(*a4)->NdisReserved[16] |= 0x8000000u;
  if ( a3 && (*(_DWORD *)(a2 + 88) & 0x400) == 0 )
  {
    if ( v4 )
    {
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4 + 18);
      v15 = (KSPIN_LOCK *)(v4 + 144);
      *((_QWORD *)v4 + 19) = KeGetCurrentThread();
      *((_DWORD *)v4 + 40) = 2298026;
      *((_QWORD *)v4 + 23) = *a4;
      *((_QWORD *)v4 + 19) = 0LL;
      *((_DWORD *)v4 + 40) = 0;
    }
    else
    {
      v14 = KeAcquireSpinLockRaiseToDpc(v5 + 12);
      v15 = v5 + 12;
      v5[65] = (KSPIN_LOCK)KeGetCurrentThread();
      *((_DWORD *)v5 + 464) = 2298032;
      v5[277] = (KSPIN_LOCK)*a4;
      v5[65] = 0LL;
      *((_DWORD *)v5 + 464) = 0;
    }
    KeReleaseSpinLock(v15, v14);
  }
  return 0;
}
