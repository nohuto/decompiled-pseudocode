/*
 * XREFs of ndisMOidRequest @ 0x1C000A070
 * Callers:
 *     <none>
 * Callees:
 *     ndisQueueOidRequest @ 0x1C000C3B0 (ndisQueueOidRequest.c)
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C1F0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C001CCB0 (NdisMIndicateStatusEx.c)
 *     ndisOidPMAddRemove @ 0x1C00248FC (ndisOidPMAddRemove.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     WPP_SF_qqqDD @ 0x1C0044014 (WPP_SF_qqqDD.c)
 *     NdisMResetMiniport @ 0x1C005EF20 (NdisMResetMiniport.c)
 *     WPP_SF_qDL @ 0x1C005F414 (WPP_SF_qDL.c)
 */

__int64 __fastcall ndisMOidRequest(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // esi
  __int64 v4; // r15
  char v5; // r12
  unsigned __int8 v8; // bl
  KIRQL v9; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rcx
  KIRQL v11; // di
  KIRQL v12; // bl
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // eax
  int v18; // eax
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // ebx
  KIRQL v22; // [rsp+40h] [rbp-C8h]
  int v23; // [rsp+44h] [rbp-C4h] BYREF
  int v24; // [rsp+48h] [rbp-C0h]
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-B8h] BYREF

  v2 = *(_DWORD *)(a2 + 32);
  v3 = 0;
  v4 = 0LL;
  v24 = v2;
  v5 = 0;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqd(14LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a2, v2);
  v8 = 0;
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qD(111LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, 6LL);
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = ndisGlobalOpenList;
  v11 = v9;
  v22 = v9;
  if ( ndisGlobalOpenList )
  {
    while ( NextGlobalOpen != (struct _NDIS_OPEN_BLOCK *)a1 )
    {
      NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
      if ( !NextGlobalOpen )
        goto LABEL_13;
    }
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 232));
    if ( (*(_DWORD *)(a1 + 224) & 0x8000) == 0 && *(_DWORD *)(a1 + 228) )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 696));
      NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 688));
      ++*(_DWORD *)(a1 + 228);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 696), v12);
      v11 = v22;
      v8 = 1;
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 232));
    v5 = 0;
  }
LABEL_13:
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v11);
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qDL(v14, v13, a1, 6LL, v8);
  if ( !v8 )
  {
    v3 = -1073676286;
    goto LABEL_24;
  }
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 1;
  if ( (*(_DWORD *)(v4 + 3704) & 0x400) == 0 )
    *(_BYTE *)(a2 + 232) = 1;
  v15 = *(_DWORD *)(a2 + 4);
  if ( v15 == 1 )
  {
    v18 = *(_DWORD *)(a2 + 32);
    if ( v18 == 66058 )
    {
      if ( *(_DWORD *)(a2 + 48) >= 4u )
      {
        v23 = **(_DWORD **)(a2 + 40);
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.StatusBuffer = &v23;
        StatusIndication.SourceHandle = (void *)v4;
        StatusIndication.StatusCode = 1073807384;
        StatusIndication.StatusBufferSize = 4;
        NdisMIndicateStatusEx((NDIS_HANDLE)v4, &StatusIndication);
      }
      else
      {
        v3 = -1073676266;
      }
      goto LABEL_35;
    }
    if ( v18 == 66066 )
    {
      v21 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL) & 0x20000000;
      if ( v21 )
        NdisMResetMiniport(v4);
      v16 = v21 == 0 ? 0xC00000BB : 0;
      goto LABEL_23;
    }
  }
  else if ( !v15 && *(_DWORD *)(a2 + 32) == 66059 )
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
    goto LABEL_35;
  }
  memset((void *)(a2 + 72), 0, 0x60uLL);
  *(_DWORD *)(a2 + 88) |= 0x20u;
  *(_QWORD *)(a2 + 104) = a1;
  *(_QWORD *)(a2 + 96) = 0LL;
  if ( *(_DWORD *)(a2 + 4) == 1 && (v19 = *(_DWORD *)(a2 + 32) + 50265846, v19 <= 5) && (v20 = 43, _bittest(&v20, v19)) )
    v16 = ndisOidPMAddRemove((NDIS_HANDLE)v4, 0LL, (PNDIS_OID_REQUEST)a2);
  else
    v16 = ndisQueueOidRequest(a2, v4, 0LL, 0LL);
LABEL_23:
  v3 = v16;
LABEL_24:
  if ( v3 != 259 && v5 == 1 )
  {
LABEL_35:
    LOBYTE(v13) = 6;
    ndisMDereferenceOpenUnlocked(a1, v13);
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqqDD(15LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, v4, a2, v24, v3);
  return v3;
}
