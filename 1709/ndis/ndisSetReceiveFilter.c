/*
 * XREFs of ndisSetReceiveFilter @ 0x1C003B5FC
 * Callers:
 *     ndisOidPreRcvFilterSetFilter @ 0x1C00DA6A0 (ndisOidPreRcvFilterSetFilter.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0002AA0 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C00045E4 (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisReferenceOpenByHandle @ 0x1C000510C (ndisReferenceOpenByHandle.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0005910 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     ndisAddReceiveFilterToList @ 0x1C0039614 (ndisAddReceiveFilterToList.c)
 *     ndisDereferenceReceiveQueue @ 0x1C0039FEC (ndisDereferenceReceiveQueue.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C003A17C (ndisFindReceiveQueueByQueueId.c)
 *     ndisIovFindVPortByVPortId @ 0x1C006C07C (ndisIovFindVPortByVPortId.c)
 */

char __fastcall ndisSetReceiveFilter(__int64 a1)
{
  __int64 v1; // r14
  __int64 *ReceiveQueueByQueueId; // rbp
  __int64 v3; // rbx
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 VPortByVPortId; // r15
  char v8; // si
  int v9; // ecx
  __int64 v10; // rax
  char v11; // r14
  char v12; // r15
  _BYTE *OidSourceHandle; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // al
  bool v17; // zf
  unsigned int v18; // r14d
  unsigned __int64 v19; // rcx
  int v20; // eax
  PVOID PoolWithTag; // rax
  KIRQL v22; // r10
  unsigned int v23; // edx
  KIRQL v24; // r14
  KIRQL v25; // dl
  _BYTE *v26; // r12
  unsigned int v27; // r8d
  __int64 v28; // rcx
  int v29; // r10d
  _BYTE *v30; // rax
  _BYTE *v31; // r14
  __int64 v32; // r9
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  int v36; // r10d
  int v37; // eax
  __int64 **v38; // rdx
  __int64 v39; // r8
  __int64 *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  int v45; // [rsp+30h] [rbp-78h]
  unsigned int v46; // [rsp+34h] [rbp-74h]
  unsigned int Size; // [rsp+38h] [rbp-70h]
  unsigned int Size_4; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v49; // [rsp+40h] [rbp-68h]
  __int64 v50; // [rsp+48h] [rbp-60h]
  __int64 v51; // [rsp+58h] [rbp-50h]
  char v52; // [rsp+B0h] [rbp+8h]
  char v53; // [rsp+C0h] [rbp+18h]
  unsigned int v54; // [rsp+C8h] [rbp+20h]
  KIRQL v55; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  ReceiveQueueByQueueId = 0LL;
  v3 = *(_QWORD *)a1;
  v50 = 0LL;
  v45 = 0;
  v5 = *(_QWORD *)(v1 + 40);
  v6 = 0LL;
  VPortByVPortId = 0LL;
  v51 = v5;
  v46 = 0;
  v8 = 1;
  v52 = 0;
  v53 = 0;
  if ( (unsigned __int8)byte_1C0098760 >= 4u )
    WPP_SF_q(0x14u, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v3);
  v9 = 36;
  Size = 36;
  if ( *(_BYTE *)(v5 + 1) >= 2u )
  {
    v9 = 44;
    Size = 44;
    v46 = *(_DWORD *)(v5 + 40);
  }
  v10 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 40) = -1073741637;
  *(_DWORD *)(v10 + 64) = v9;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = 0;
  if ( !ndisReferenceMiniport(v3) )
  {
    *(_DWORD *)(a1 + 40) = -1073676286;
    v11 = 0;
    v12 = 0;
LABEL_20:
    v16 = 0;
    goto LABEL_21;
  }
  OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1);
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v50 = (__int64)OidSourceHandle;
    if ( !ndisReferenceOpenByHandle((__int64)OidSourceHandle, 0xBu) )
    {
      *(_DWORD *)(a1 + 40) = -1073676286;
      v11 = 0;
LABEL_19:
      v12 = 1;
      goto LABEL_20;
    }
    v52 = 1;
  }
  if ( *(_QWORD *)(v3 + 4712)
    && (ndisIovNicSwitchWithoutIovSupported(v3) || (v15 = *(_QWORD *)(v3 + 4640)) != 0 && (*(_BYTE *)(v15 + 8) & 3) == 3) )
  {
    if ( *(_DWORD *)(v5 + 12) )
      goto LABEL_17;
    VPortByVPortId = ndisIovFindVPortByVPortId(v14, v46);
    if ( !VPortByVPortId )
      goto LABEL_17;
    if ( !v46 )
      goto LABEL_34;
    v17 = *(_QWORD *)(VPortByVPortId + 80) == v50;
  }
  else
  {
    v17 = v46 == 0;
  }
  if ( !v17 )
  {
LABEL_17:
    *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_18:
    v11 = v52;
    goto LABEL_19;
  }
LABEL_34:
  v18 = -1;
  v19 = *(unsigned int *)(v5 + 24) * (unsigned __int64)*(unsigned int *)(v5 + 28);
  v20 = -1;
  if ( v19 <= 0xFFFFFFFF )
    v20 = *(_DWORD *)(v5 + 24) * *(_DWORD *)(v5 + 28);
  v54 = v20;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v19 > 0xFFFFFFFF ? 0xC0000095 : 0) )
    goto LABEL_18;
  if ( v54 + 184 >= 0xB8 )
    v18 = v54 + 184;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v54 >= 0xFFFFFF48 ? 0xC0000095 : 0) )
    goto LABEL_18;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x6672444Eu);
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_18;
  memset(PoolWithTag, 0, v18);
  *(_DWORD *)(v6 + 48) = 0;
  *(_QWORD *)(v6 + 64) = v50;
  *(_DWORD *)(v6 + 80) = 1;
  *(_QWORD *)(v6 + 56) = v3;
  memmove((void *)(v6 + 132), (const void *)v5, Size);
  *(_DWORD *)(v6 + 152) = 184;
  memmove(
    (void *)(v6 + 184),
    (const void *)(v5 + *(unsigned int *)(v5 + 20)),
    (unsigned int)(*(_DWORD *)(v5 + 24) * *(_DWORD *)(v5 + 28)));
  *(_QWORD *)(v6 + 176) = VPortByVPortId;
  *(_QWORD *)(v6 + 40) = v6 + 32;
  *(_QWORD *)(v6 + 32) = v6 + 32;
  v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1856) = 2688955;
  v23 = *(_DWORD *)(v5 + 12);
  if ( v23 )
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v3, v23);
  else
    ReceiveQueueByQueueId = *(__int64 **)(v3 + 4400);
  if ( ReceiveQueueByQueueId )
  {
    ++*((_DWORD *)ReceiveQueueByQueueId + 20);
    v53 = 1;
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v22);
  if ( !ReceiveQueueByQueueId )
    goto LABEL_48;
  if ( *(_DWORD *)(v5 + 12) )
  {
    if ( v50 )
    {
      if ( v50 != ReceiveQueueByQueueId[9] )
      {
LABEL_48:
        *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_49:
        v11 = v52;
        v12 = 1;
        v16 = v53;
        goto LABEL_21;
      }
    }
    else if ( *((_DWORD *)ReceiveQueueByQueueId + 34) == 1 )
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
      goto LABEL_49;
    }
  }
  v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  v55 = v24;
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1856) = 2689031;
  *(_QWORD *)(v6 + 72) = ReceiveQueueByQueueId;
  if ( (unsigned int)(*(_DWORD *)(v3 + 3540) + 1) > 0x5555555 )
  {
    v25 = v24;
LABEL_55:
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v25);
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_49;
  }
  v26 = *(_BYTE **)(v3 + 3528);
  v27 = *(_DWORD *)(v3 + 3536);
  Size_4 = v27;
  if ( v26 && (v28 = 0LL, v27) )
  {
    v29 = 0;
    v30 = *(_BYTE **)(v3 + 3528);
    while ( *v30 == 0xFF )
    {
      v29 += 8;
      v28 = (unsigned int)(v28 + 1);
      ++v30;
      v45 = v29;
      if ( (unsigned int)v28 >= v27 )
        goto LABEL_63;
    }
    v32 = (unsigned int)v28;
    v33 = 1;
    v34 = (unsigned __int8)v26[v28];
    v35 = 0;
    while ( (v34 & v33) != 0 )
    {
      v33 *= 2;
      if ( (unsigned int)++v35 >= 8 )
        goto LABEL_63;
    }
    v36 = v35 + v29;
    v26[v32] = v34 | v33;
    v45 = v36;
  }
  else
  {
LABEL_63:
    v49 = v27 + 64;
    v31 = ExAllocatePoolWithTag(NonPagedPoolNx, v27 + 64, 0x7571444Eu);
    if ( !v31 )
    {
      v25 = v55;
      goto LABEL_55;
    }
    memset(&v31[Size_4], 0, 0x40uLL);
    if ( v26 )
    {
      memmove(v31, v26, Size_4);
      v31[Size_4] = 1;
      ExFreePoolWithTag(v26, 0);
      v36 = v45;
    }
    else
    {
      *v31 = 3;
      v36 = 1;
      v45 = 1;
    }
    *(_QWORD *)(v3 + 3528) = v31;
    v24 = v55;
    *(_DWORD *)(v3 + 3536) = v49;
  }
  *(_DWORD *)(v51 + 16) = v36;
  *(_DWORD *)(v6 + 148) = v36;
  *(_DWORD *)(v6 + 48) = v36;
  v37 = ndisAddReceiveFilterToList(v3, v6);
  *(_DWORD *)(a1 + 40) = v37;
  if ( v37 )
  {
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v24);
    goto LABEL_49;
  }
  ++*((_DWORD *)ReceiveQueueByQueueId + 21);
  v38 = (__int64 **)(ReceiveQueueByQueueId + 4);
  v39 = ReceiveQueueByQueueId[4];
  v40 = (__int64 *)(v6 + 16);
  if ( *(__int64 **)(v39 + 8) != ReceiveQueueByQueueId + 4 )
    __fastfail(3u);
  *v40 = v39;
  *(_QWORD *)(v6 + 24) = v38;
  *(_QWORD *)(v39 + 8) = v40;
  *v38 = v40;
  if ( VPortByVPortId )
  {
    ++*(_DWORD *)(VPortByVPortId + 864);
    v41 = (_QWORD *)(VPortByVPortId + 872);
    v42 = *(_QWORD *)(VPortByVPortId + 872);
    if ( *(_QWORD *)(v42 + 8) != VPortByVPortId + 872 )
      __fastfail(3u);
    *(_QWORD *)(v6 + 32) = v42;
    *(_QWORD *)(v6 + 40) = v41;
    *(_QWORD *)(v42 + 8) = v6 + 32;
    *v41 = v6 + 32;
    v43 = *(_QWORD *)(VPortByVPortId + 88);
    if ( v46 )
      ++*(_DWORD *)(v43 + 656);
    else
      ++*(_DWORD *)(v43 + 652);
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v24);
  v16 = 0;
  v12 = 0;
  v11 = 0;
  v8 = 0;
LABEL_21:
  if ( *(_DWORD *)(a1 + 40) )
  {
    if ( v16 )
      ndisDereferenceReceiveQueue(ReceiveQueueByQueueId);
    if ( v11 )
      ndisMDereferenceOpenUnlocked(v50);
    if ( v12 )
      ndisDereferenceMiniport(v3, 0x46u);
    if ( v6 )
      ExFreePoolWithTag((PVOID)v6, 0);
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = Size;
  }
  if ( (unsigned __int8)byte_1C0098760 >= 4u )
    WPP_SF_qdD(0x15u, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v3, *(_DWORD *)(a1 + 40), v45);
  return v8;
}
