/*
 * XREFs of ndisSetReceiveFilter @ 0x1C003C958
 * Callers:
 *     ndisOidPreRcvFilterSetFilter @ 0x1C00DC260 (ndisOidPreRcvFilterSetFilter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C001A044 (ndisIovNicSwitchWithoutIovSupported.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C1F0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceOpenByHandle @ 0x1C001C400 (ndisReferenceOpenByHandle.c)
 *     ndisGetOidSourceHandle @ 0x1C0020ACC (ndisGetOidSourceHandle.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0025040 (NdisConvertNtStatusToNdisStatus.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisAddReceiveFilterToList @ 0x1C003A9AC (ndisAddReceiveFilterToList.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003B378 (ndisDereferenceReceiveQueue.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C003B508 (ndisFindReceiveQueueByQueueId.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     ndisIovFindVPortByVPortId @ 0x1C006C8D8 (ndisIovFindVPortByVPortId.c)
 */

char __fastcall ndisSetReceiveFilter(__int64 a1)
{
  __int64 v1; // r14
  __int64 *ReceiveQueueByQueueId; // rbp
  __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 VPortByVPortId; // r12
  char v8; // si
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // r14
  char v14; // r15
  _BYTE *OidSourceHandle; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // al
  bool v19; // zf
  __int64 v20; // rax
  unsigned int v21; // r14d
  __int64 v22; // rcx
  unsigned int v23; // r15d
  unsigned __int64 v24; // rcx
  PVOID PoolWithTag; // rax
  _DWORD *v26; // r14
  KIRQL v27; // r10
  unsigned int v28; // edx
  KIRQL v29; // cl
  KIRQL v30; // dl
  KSPIN_LOCK *v31; // rcx
  _BYTE *v32; // r15
  unsigned int v33; // r8d
  __int64 v34; // rax
  int v35; // r10d
  _BYTE *v36; // rcx
  _BYTE *v37; // r14
  __int64 v38; // r9
  int v39; // ecx
  int v40; // eax
  int v41; // edx
  int v42; // r10d
  int v43; // eax
  __int64 **v44; // rdx
  __int64 v45; // r8
  __int64 *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  int v51; // [rsp+30h] [rbp-78h]
  unsigned int v52; // [rsp+34h] [rbp-74h]
  unsigned int Size; // [rsp+38h] [rbp-70h]
  unsigned int Size_4; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v55; // [rsp+40h] [rbp-68h]
  __int64 v56; // [rsp+48h] [rbp-60h]
  _DWORD *Src; // [rsp+50h] [rbp-58h]
  char v58; // [rsp+B0h] [rbp+8h]
  char v59; // [rsp+C0h] [rbp+18h]
  KIRQL NewIrql; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  ReceiveQueueByQueueId = 0LL;
  v3 = *(_QWORD *)a1;
  v56 = 0LL;
  v51 = 0;
  v5 = *(_QWORD *)(v1 + 40);
  v6 = 0LL;
  VPortByVPortId = 0LL;
  Src = (_DWORD *)v5;
  v52 = 0;
  v8 = 1;
  v58 = 0;
  v59 = 0;
  v9 = v1;
  if ( (unsigned __int8)byte_1C0099620 >= 4u )
  {
    WPP_SF_q(0x14u, &WPP_968189b415313035a5e13c3867538638_Traceguids, v3);
    v9 = *(_QWORD *)(a1 + 32);
  }
  v10 = *(_BYTE *)(v5 + 1);
  if ( v10 >= 2u )
    v52 = *(_DWORD *)(v5 + 40);
  *(_DWORD *)(a1 + 40) = -1073741637;
  *(_DWORD *)(v9 + 64) = v10 < 2u ? 36 : 44;
  Size_4 = v10 < 2u ? 36 : 44;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = 0;
  if ( !ndisReferenceMiniport(v3) )
  {
    *(_DWORD *)(a1 + 40) = -1073676286;
    v13 = 0;
    v14 = 0;
LABEL_20:
    v18 = 0;
    goto LABEL_21;
  }
  OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1);
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v56 = (__int64)OidSourceHandle;
    if ( !ndisReferenceOpenByHandle((__int64)OidSourceHandle, 0xBu) )
    {
      *(_DWORD *)(a1 + 40) = -1073676286;
      v13 = 0;
LABEL_19:
      v14 = 1;
      goto LABEL_20;
    }
    v58 = 1;
  }
  if ( *(_QWORD *)(v3 + 4712)
    && (ndisIovNicSwitchWithoutIovSupported(v3) || (v17 = *(_QWORD *)(v3 + 4640)) != 0 && (*(_BYTE *)(v17 + 8) & 3) == 3) )
  {
    if ( *(_DWORD *)(v5 + 12) )
      goto LABEL_17;
    VPortByVPortId = ndisIovFindVPortByVPortId(v16, v52);
    if ( !VPortByVPortId )
      goto LABEL_17;
    if ( !v52 )
      goto LABEL_34;
    v19 = *(_QWORD *)(VPortByVPortId + 80) == v56;
  }
  else
  {
    v19 = v52 == 0;
  }
  if ( !v19 )
  {
LABEL_17:
    *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_18:
    v13 = v58;
    goto LABEL_19;
  }
LABEL_34:
  v20 = *(unsigned int *)(v5 + 24);
  v21 = -1;
  v22 = *(unsigned int *)(v5 + 28);
  v23 = -1;
  v24 = v20 * v22;
  if ( v24 <= 0xFFFFFFFF )
    v23 = v24;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v24 > 0xFFFFFFFF ? 0xC0000095 : 0) )
    goto LABEL_18;
  if ( v23 + 184 >= 0xB8 )
    v21 = v23 + 184;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v23 >= 0xFFFFFF48 ? 0xC0000095 : 0) )
    goto LABEL_18;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x6672444Eu);
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_18;
  memset(PoolWithTag, 0, v21);
  v26 = Src;
  *(_DWORD *)(v6 + 48) = 0;
  *(_QWORD *)(v6 + 64) = v56;
  *(_DWORD *)(v6 + 80) = 1;
  *(_QWORD *)(v6 + 56) = v3;
  memmove((void *)(v6 + 132), Src, Size_4);
  *(_DWORD *)(v6 + 152) = 184;
  memmove((void *)(v6 + 184), (char *)v26 + (unsigned int)v26[5], (unsigned int)(v26[6] * v26[7]));
  *(_QWORD *)(v6 + 176) = VPortByVPortId;
  *(_QWORD *)(v6 + 40) = v6 + 32;
  *(_QWORD *)(v6 + 32) = v6 + 32;
  v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1856) = 2688784;
  v28 = Src[3];
  if ( v28 )
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v3, v28);
  else
    ReceiveQueueByQueueId = *(__int64 **)(v3 + 4400);
  if ( ReceiveQueueByQueueId )
  {
    ++*((_DWORD *)ReceiveQueueByQueueId + 20);
    v59 = 1;
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v27);
  if ( !ReceiveQueueByQueueId )
    goto LABEL_48;
  if ( Src[3] )
  {
    if ( v56 )
    {
      if ( v56 != ReceiveQueueByQueueId[9] )
      {
LABEL_48:
        *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_49:
        v13 = v58;
        v14 = 1;
        v18 = v59;
        goto LABEL_21;
      }
    }
    else if ( *((_DWORD *)ReceiveQueueByQueueId + 34) == 1 )
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
      goto LABEL_49;
    }
  }
  v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  NewIrql = v29;
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1856) = 2688847;
  *(_QWORD *)(v6 + 72) = ReceiveQueueByQueueId;
  if ( (unsigned int)(*(_DWORD *)(v3 + 3540) + 1) > 0x5555555 )
  {
    v30 = v29;
    v31 = (KSPIN_LOCK *)(v3 + 96);
LABEL_55:
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock(v31, v30);
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_49;
  }
  v32 = *(_BYTE **)(v3 + 3528);
  v33 = *(_DWORD *)(v3 + 3536);
  Size = v33;
  if ( v32 && (v34 = 0LL, v33) )
  {
    v35 = 0;
    v36 = *(_BYTE **)(v3 + 3528);
    while ( *v36 == 0xFF )
    {
      v35 += 8;
      v34 = (unsigned int)(v34 + 1);
      ++v36;
      v51 = v35;
      if ( (unsigned int)v34 >= v33 )
        goto LABEL_63;
    }
    v38 = (unsigned int)v34;
    v39 = 1;
    v40 = (unsigned __int8)v32[v34];
    v41 = 0;
    while ( (v40 & v39) != 0 )
    {
      v39 *= 2;
      if ( (unsigned int)++v41 >= 8 )
        goto LABEL_63;
    }
    v42 = v41 + v35;
    v32[v38] = v39 | v40;
    v51 = v42;
  }
  else
  {
LABEL_63:
    v55 = v33 + 64;
    v37 = ExAllocatePoolWithTag(NonPagedPoolNx, v33 + 64, 0x7571444Eu);
    if ( !v37 )
    {
      v30 = NewIrql;
      v31 = (KSPIN_LOCK *)(v3 + 96);
      goto LABEL_55;
    }
    memset(&v37[Size], 0, 0x40uLL);
    if ( v32 )
    {
      memmove(v37, v32, Size);
      v37[Size] = 1;
      ExFreePoolWithTag(v32, 0);
      v42 = v51;
    }
    else
    {
      *v37 = 3;
      v42 = 1;
      v51 = 1;
    }
    *(_QWORD *)(v3 + 3528) = v37;
    v26 = Src;
    *(_DWORD *)(v3 + 3536) = v55;
  }
  v26[4] = v42;
  *(_DWORD *)(v6 + 148) = v42;
  *(_DWORD *)(v6 + 48) = v42;
  v43 = ndisAddReceiveFilterToList(v3, v6);
  v13 = 0;
  *(_DWORD *)(a1 + 40) = v43;
  if ( v43 )
  {
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
    goto LABEL_49;
  }
  ++*((_DWORD *)ReceiveQueueByQueueId + 21);
  v44 = (__int64 **)(ReceiveQueueByQueueId + 4);
  v45 = ReceiveQueueByQueueId[4];
  v46 = (__int64 *)(v6 + 16);
  if ( *(__int64 **)(v45 + 8) != ReceiveQueueByQueueId + 4 )
    __fastfail(3u);
  *v46 = v45;
  *(_QWORD *)(v6 + 24) = v44;
  *(_QWORD *)(v45 + 8) = v46;
  *v44 = v46;
  if ( VPortByVPortId )
  {
    ++*(_DWORD *)(VPortByVPortId + 864);
    v47 = (_QWORD *)(VPortByVPortId + 872);
    v48 = *(_QWORD *)(VPortByVPortId + 872);
    if ( *(_QWORD *)(v48 + 8) != VPortByVPortId + 872 )
      __fastfail(3u);
    *(_QWORD *)(v6 + 32) = v48;
    *(_QWORD *)(v6 + 40) = v47;
    *(_QWORD *)(v48 + 8) = v6 + 32;
    *v47 = v6 + 32;
    v49 = *(_QWORD *)(VPortByVPortId + 88);
    if ( v52 )
      ++*(_DWORD *)(v49 + 656);
    else
      ++*(_DWORD *)(v49 + 652);
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
  v18 = 0;
  v14 = 0;
  v8 = 0;
LABEL_21:
  if ( *(_DWORD *)(a1 + 40) )
  {
    if ( v18 )
      ndisDereferenceReceiveQueue(ReceiveQueueByQueueId);
    if ( v13 )
      ndisMDereferenceOpenUnlocked(v56, 11);
    if ( v14 )
      ndisDereferenceMiniport(v3, 0x46u, v11, v12);
    if ( v6 )
      ExFreePoolWithTag((PVOID)v6, 0);
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = Size_4;
  }
  if ( (unsigned __int8)byte_1C0099620 >= 4u )
    WPP_SF_qdD(21LL, &WPP_968189b415313035a5e13c3867538638_Traceguids, v3, *(unsigned int *)(a1 + 40), v51);
  return v8;
}
