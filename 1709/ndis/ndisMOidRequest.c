/*
 * XREFs of ndisMOidRequest @ 0x1C00094B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0005910 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisQueueOidRequest @ 0x1C000B550 (ndisQueueOidRequest.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     NdisMIndicateStatusEx @ 0x1C0011180 (NdisMIndicateStatusEx.c)
 *     ndisOidPMAddRemove @ 0x1C001E894 (ndisOidPMAddRemove.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qqqDD @ 0x1C0042EC8 (WPP_SF_qqqDD.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     NdisMResetMiniport @ 0x1C005E520 (NdisMResetMiniport.c)
 *     WPP_SF_qDL @ 0x1C005E974 (WPP_SF_qDL.c)
 */

__int64 __fastcall ndisMOidRequest(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // esi
  __int64 v4; // r15
  char v5; // r12
  unsigned __int8 v8; // bl
  KIRQL v9; // di
  struct _NDIS_OPEN_BLOCK *i; // rax
  KIRQL v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // eax
  int v17; // eax
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // [rsp+44h] [rbp-C4h] BYREF
  int v21; // [rsp+48h] [rbp-C0h]
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-B8h] BYREF

  v2 = *(_DWORD *)(a2 + 32);
  v3 = 0;
  v4 = 0LL;
  v21 = v2;
  v5 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqd(14LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, v2);
  v8 = 0;
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_qD(108LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, 6LL);
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  for ( i = ndisGlobalOpenList; i; i = i->NextGlobalOpen )
  {
    if ( i == (struct _NDIS_OPEN_BLOCK *)a1 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 232));
      if ( (*(_DWORD *)(a1 + 224) & 0x8000) == 0 && *(_DWORD *)(a1 + 228) )
      {
        v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 696));
        NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 688));
        ++*(_DWORD *)(a1 + 228);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 696), v11);
        v8 = 1;
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 232));
      v5 = 0;
      break;
    }
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v9);
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_qDL(v13, v12, a1, 6LL, v8);
  if ( v8 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = 1;
    if ( (*(_DWORD *)(v4 + 3704) & 0x400) == 0 )
      *(_BYTE *)(a2 + 232) = 1;
    v14 = *(_DWORD *)(a2 + 4);
    if ( v14 == 1 )
    {
      v17 = *(_DWORD *)(a2 + 32);
      if ( v17 == 66058 )
      {
        if ( *(_DWORD *)(a2 + 48) >= 4u )
        {
          v20 = **(_DWORD **)(a2 + 40);
          memset(&StatusIndication, 0, sizeof(StatusIndication));
          StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
          StatusIndication.StatusBuffer = &v20;
          StatusIndication.SourceHandle = (void *)v4;
          StatusIndication.StatusCode = 1073807384;
          StatusIndication.StatusBufferSize = 4;
          NdisMIndicateStatusEx((NDIS_HANDLE)v4, &StatusIndication);
        }
        else
        {
          v3 = -1073676266;
        }
        goto LABEL_36;
      }
      if ( v17 == 66066 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL) & 0x20000000) != 0 )
          NdisMResetMiniport(v4);
        else
          v3 = -1073741637;
        goto LABEL_36;
      }
    }
    else if ( !v14 && *(_DWORD *)(a2 + 32) == 66059 )
    {
      if ( *(_DWORD *)(a2 + 48) >= 8u )
      {
        **(_QWORD **)(a2 + 40) = *(_QWORD *)(v4 + 768);
        *(_DWORD *)(a2 + 52) = *(_QWORD *)(v4 + 768) != 0LL ? 8 : 0;
      }
      else
      {
        v3 = -1073676268;
      }
      goto LABEL_36;
    }
    memset((void *)(a2 + 72), 0, 0x60uLL);
    *(_DWORD *)(a2 + 88) |= 0x20u;
    *(_QWORD *)(a2 + 104) = a1;
    *(_QWORD *)(a2 + 96) = 0LL;
    if ( *(_DWORD *)(a2 + 4) == 1
      && (v18 = *(_DWORD *)(a2 + 32) + 50265846, v18 <= 5)
      && (v19 = 43, _bittest(&v19, v18)) )
    {
      v15 = ndisOidPMAddRemove((NDIS_HANDLE)v4, 0LL, a2);
    }
    else
    {
      v15 = ndisQueueOidRequest(a2, v4, 0LL, 0LL);
    }
    v3 = v15;
  }
  else
  {
    v3 = -1073676286;
  }
  if ( v3 != 259 && v5 == 1 )
LABEL_36:
    ndisMDereferenceOpenUnlocked(a1);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqqDD(15LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, v4, a2, v21, v3);
  return v3;
}
