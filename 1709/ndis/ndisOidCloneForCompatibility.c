/*
 * XREFs of ndisOidCloneForCompatibility @ 0x1C000CCD8
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000C1D0 (ndisFDoOidRequestInternal.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C0059504 (ndisFInvokeDirectOidRequest.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C005FC6C (ndisMInvokeDirectOidRequest.c)
 *     ndisMInvokeOidRequest @ 0x1C00B9A74 (ndisMInvokeOidRequest.c)
 * Callees:
 *     NdisAllocateCloneOidRequest @ 0x1C000CEC0 (NdisAllocateCloneOidRequest.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisOidCloneForCompatibility(_BYTE *a1, __int64 a2, char a3, PNDIS_OID_REQUEST *a4)
{
  _BYTE *v4; // rsi
  KSPIN_LOCK *v5; // rbp
  unsigned int CloneOidRequest; // r15d
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  char v12; // r14
  KIRQL v13; // al
  KSPIN_LOCK *v14; // rcx
  unsigned __int8 v16; // al
  __int64 v17; // rcx

  v4 = a1;
  v5 = 0LL;
  if ( *a1 != 5 )
  {
    v5 = (KSPIN_LOCK *)a1;
    v4 = 0LL;
  }
  CloneOidRequest = 0;
  if ( v4 )
  {
    v10 = *((_QWORD *)v4 + 2);
    v11 = *(_BYTE *)(v10 + 100);
    if ( v11 <= 6u && (v11 != 6 || *(_BYTE *)(v10 + 101) < 0x32u) )
      goto LABEL_7;
LABEL_10:
    v12 = 1;
    if ( *(_BYTE *)(a2 + 1) != 1 )
      return CloneOidRequest;
    goto LABEL_11;
  }
  v16 = *((_BYTE *)v5 + 32);
  if ( v16 > 6u || v16 == 6 && *((_BYTE *)v5 + 33) >= 0x32u )
    goto LABEL_10;
LABEL_7:
  v12 = 0;
  if ( *(_BYTE *)(a2 + 1) != 2 && *(_WORD *)(a2 + 2) == 236 )
    return CloneOidRequest;
LABEL_11:
  CloneOidRequest = NdisAllocateCloneOidRequest(*(NDIS_HANDLE *)(a2 + 104), (PNDIS_OID_REQUEST)a2, 0x7172444Eu, a4);
  if ( CloneOidRequest )
    return CloneOidRequest;
  if ( v12 )
  {
    (*a4)->Header.Revision = 2;
    (*a4)->Header.Size = 248;
    if ( (unsigned __int8)byte_1C0098752 < 4u )
      goto LABEL_14;
    v17 = 55LL;
LABEL_28:
    WPP_SF_qqd(v17, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a2, *a4, *(_DWORD *)(a2 + 32));
    goto LABEL_14;
  }
  (*a4)->Header.Revision = 1;
  (*a4)->Header.Size = 236;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v17 = 56LL;
    goto LABEL_28;
  }
LABEL_14:
  *(_DWORD *)&(*a4)->NdisReserved[16] |= 0x8000000u;
  if ( a3 && (*(_DWORD *)(a2 + 88) & 0x400) == 0 )
  {
    if ( v4 )
    {
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4 + 18);
      v14 = (KSPIN_LOCK *)(v4 + 144);
      *((_QWORD *)v4 + 19) = KeGetCurrentThread();
      *((_DWORD *)v4 + 40) = 2298031;
      *((_QWORD *)v4 + 23) = *a4;
      *((_QWORD *)v4 + 19) = 0LL;
      *((_DWORD *)v4 + 40) = 0;
    }
    else
    {
      v13 = KeAcquireSpinLockRaiseToDpc(v5 + 12);
      v14 = v5 + 12;
      v5[65] = (KSPIN_LOCK)KeGetCurrentThread();
      *((_DWORD *)v5 + 464) = 2298037;
      v5[277] = (KSPIN_LOCK)*a4;
      v5[65] = 0LL;
      *((_DWORD *)v5 + 464) = 0;
    }
    KeReleaseSpinLock(v14, v13);
  }
  return CloneOidRequest;
}
