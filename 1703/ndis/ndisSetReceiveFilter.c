/*
 * XREFs of ndisSetReceiveFilter @ 0x1C003EB5C
 * Callers:
 *     ndisOidPreRcvFilterSetFilter @ 0x1C00CFD10 (ndisOidPreRcvFilterSetFilter.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisReferenceOpenByHandle @ 0x1C001ADA0 (ndisReferenceOpenByHandle.c)
 *     ndisGetOidSourceHandle @ 0x1C001F33C (ndisGetOidSourceHandle.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00211E4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0021F3C (ndisIovNicSwitchWithoutIovSupported.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0023880 (NdisConvertNtStatusToNdisStatus.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisAddReceiveFilterToList @ 0x1C003CB8C (ndisAddReceiveFilterToList.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003D564 (ndisDereferenceReceiveQueue.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C003D6F4 (ndisFindReceiveQueueByQueueId.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     ndisIovFindVPortByVPortId @ 0x1C006ABA8 (ndisIovFindVPortByVPortId.c)
 */

char __fastcall ndisSetReceiveFilter(__int64 a1)
{
  __int64 v1; // r14
  __int64 *ReceiveQueueByQueueId; // rbp
  __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r13
  char v8; // si
  int v9; // ecx
  __int64 v10; // rax
  char v11; // r14
  char v12; // r15
  struct _NDIS_OPEN_BLOCK *OidSourceHandle; // rax
  struct _NDIS_OPEN_BLOCK *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  char v17; // al
  __int64 VPortByVPortId; // rax
  int v19; // edx
  bool v20; // zf
  __int64 v21; // r14
  __int64 v22; // rax
  unsigned int v23; // r15d
  unsigned __int64 v24; // r14
  int v25; // ecx
  PVOID PoolWithTag; // rax
  _DWORD *v27; // r14
  KIRQL v28; // r10
  unsigned int v29; // edx
  KIRQL v30; // cl
  KIRQL v31; // dl
  KSPIN_LOCK *v32; // rcx
  _BYTE *v33; // r15
  unsigned int v34; // r8d
  __int64 v35; // rcx
  int v36; // r10d
  _BYTE *v37; // rax
  _BYTE *v38; // r14
  __int64 v39; // r9
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // r10d
  int v44; // eax
  __int64 **v45; // rdx
  __int64 v46; // r8
  __int64 *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  int v52; // [rsp+30h] [rbp-78h]
  unsigned int v53; // [rsp+34h] [rbp-74h]
  unsigned int Size; // [rsp+38h] [rbp-70h]
  unsigned int Size_4; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v56; // [rsp+40h] [rbp-68h]
  __int64 v57; // [rsp+48h] [rbp-60h]
  _DWORD *Src; // [rsp+50h] [rbp-58h]
  char v59; // [rsp+B0h] [rbp+8h]
  char v60; // [rsp+C0h] [rbp+18h]
  KIRQL NewIrql; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  ReceiveQueueByQueueId = 0LL;
  v3 = *(_QWORD *)a1;
  v57 = 0LL;
  v52 = 0;
  v5 = *(_QWORD *)(v1 + 40);
  v6 = 0LL;
  v7 = 0LL;
  Src = (_DWORD *)v5;
  v53 = 0;
  v8 = 1;
  v59 = 0;
  v60 = 0;
  if ( (unsigned __int8)byte_1C0092620 >= 4u )
    WPP_SF_q(0x14u, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v3);
  v9 = 36;
  Size = 36;
  if ( *(_BYTE *)(v5 + 1) >= 2u )
  {
    v9 = 44;
    Size = 44;
    v53 = *(_DWORD *)(v5 + 40);
  }
  v10 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 40) = -1073741637;
  *(_DWORD *)(v10 + 64) = v9;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = 0;
  if ( !ndisReferenceMiniport(v3, 0x46u) )
  {
    *(_DWORD *)(a1 + 40) = -1073676286;
    v11 = 0;
    v12 = 0;
LABEL_21:
    v17 = 0;
    goto LABEL_22;
  }
  OidSourceHandle = (struct _NDIS_OPEN_BLOCK *)ndisGetOidSourceHandle(v1);
  if ( OidSourceHandle && OidSourceHandle->Header.Type == 18 )
  {
    v57 = (__int64)OidSourceHandle;
    v14 = OidSourceHandle;
    if ( !ndisReferenceOpenByHandle(OidSourceHandle, 0xBu) )
    {
      *(_DWORD *)(a1 + 40) = -1073676286;
      v11 = 0;
LABEL_20:
      v12 = 1;
      goto LABEL_21;
    }
    v59 = 1;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !*(_QWORD *)(v3 + 4712)
    || !ndisIovNicSwitchWithoutIovSupported(v3)
    && ((v16 = *(_QWORD *)(v3 + 4640)) == 0 || (*(_BYTE *)(v16 + 8) & 3) != 3) )
  {
    v20 = v53 == 0;
LABEL_34:
    if ( v20 )
      goto LABEL_35;
LABEL_18:
    *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_19:
    v11 = v59;
    goto LABEL_20;
  }
  if ( *(_DWORD *)(v5 + 12) )
    goto LABEL_18;
  VPortByVPortId = ndisIovFindVPortByVPortId(v15, v53);
  v7 = VPortByVPortId;
  if ( !VPortByVPortId )
    goto LABEL_18;
  if ( v19 )
  {
    v20 = *(_QWORD *)(VPortByVPortId + 80) == (_QWORD)v14;
    goto LABEL_34;
  }
LABEL_35:
  v21 = *(unsigned int *)(v5 + 28);
  v22 = *(unsigned int *)(v5 + 24);
  v23 = -1;
  v24 = v22 * v21;
  if ( v24 > 0xFFFFFFFF )
  {
    LODWORD(v24) = -1;
    v25 = -1073741675;
  }
  else
  {
    v25 = 0;
  }
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v25) )
    goto LABEL_19;
  if ( (unsigned int)v24 < 0xFFFFFF48 )
    v23 = v24 + 184;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus((unsigned int)v24 >= 0xFFFFFF48 ? 0xC0000095 : 0) )
    goto LABEL_19;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v23, 0x6672444Eu);
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_19;
  memset(PoolWithTag, 0, v23);
  v27 = Src;
  *(_DWORD *)(v6 + 48) = 0;
  *(_QWORD *)(v6 + 64) = v57;
  *(_DWORD *)(v6 + 80) = 1;
  *(_QWORD *)(v6 + 56) = v3;
  memmove((void *)(v6 + 132), Src, Size);
  *(_DWORD *)(v6 + 152) = 184;
  memmove((void *)(v6 + 184), (char *)v27 + (unsigned int)v27[5], (unsigned int)(v27[6] * v27[7]));
  *(_QWORD *)(v6 + 176) = v7;
  *(_QWORD *)(v6 + 40) = v6 + 32;
  *(_QWORD *)(v6 + 32) = v6 + 32;
  v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1856) = 2688955;
  v29 = Src[3];
  if ( v29 )
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v3, v29);
  else
    ReceiveQueueByQueueId = *(__int64 **)(v3 + 4400);
  if ( ReceiveQueueByQueueId )
  {
    ++*((_DWORD *)ReceiveQueueByQueueId + 20);
    v60 = 1;
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v28);
  if ( !ReceiveQueueByQueueId )
    goto LABEL_50;
  if ( Src[3] )
  {
    if ( v57 )
    {
      if ( v57 != ReceiveQueueByQueueId[9] )
      {
LABEL_50:
        *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_51:
        v11 = v59;
        v12 = 1;
        v17 = v60;
        goto LABEL_22;
      }
    }
    else if ( *((_DWORD *)ReceiveQueueByQueueId + 34) == 1 )
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
      goto LABEL_51;
    }
  }
  v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  NewIrql = v30;
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1856) = 2689031;
  *(_QWORD *)(v6 + 72) = ReceiveQueueByQueueId;
  if ( (unsigned int)(*(_DWORD *)(v3 + 3540) + 1) > 0x5555555 )
  {
    v31 = v30;
    v32 = (KSPIN_LOCK *)(v3 + 96);
LABEL_57:
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock(v32, v31);
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_51;
  }
  v33 = *(_BYTE **)(v3 + 3528);
  v34 = *(_DWORD *)(v3 + 3536);
  Size_4 = v34;
  if ( v33 && (v35 = 0LL, v34) )
  {
    v36 = 0;
    v37 = *(_BYTE **)(v3 + 3528);
    while ( *v37 == 0xFF )
    {
      v36 += 8;
      v35 = (unsigned int)(v35 + 1);
      ++v37;
      v52 = v36;
      if ( (unsigned int)v35 >= v34 )
        goto LABEL_65;
    }
    v39 = (unsigned int)v35;
    v40 = 1;
    v41 = (unsigned __int8)v33[v35];
    v42 = 0;
    while ( (v41 & v40) != 0 )
    {
      v40 *= 2;
      if ( (unsigned int)++v42 >= 8 )
        goto LABEL_65;
    }
    v43 = v42 + v36;
    v33[v39] = v41 | v40;
    v52 = v43;
  }
  else
  {
LABEL_65:
    v56 = v34 + 64;
    v38 = ExAllocatePoolWithTag(NonPagedPoolNx, v34 + 64, 0x7571444Eu);
    if ( !v38 )
    {
      v31 = NewIrql;
      v32 = (KSPIN_LOCK *)(v3 + 96);
      goto LABEL_57;
    }
    memset(&v38[Size_4], 0, 0x40uLL);
    if ( v33 )
    {
      memmove(v38, v33, Size_4);
      v38[Size_4] = 1;
      ExFreePoolWithTag(v33, 0);
      v43 = v52;
    }
    else
    {
      *v38 = 3;
      v43 = 1;
      v52 = 1;
    }
    *(_QWORD *)(v3 + 3528) = v38;
    v27 = Src;
    *(_DWORD *)(v3 + 3536) = v56;
  }
  v27[4] = v43;
  *(_DWORD *)(v6 + 148) = v43;
  *(_DWORD *)(v6 + 48) = v43;
  v44 = ndisAddReceiveFilterToList(v3, v6);
  v11 = 0;
  *(_DWORD *)(a1 + 40) = v44;
  if ( v44 )
  {
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
    goto LABEL_51;
  }
  ++*((_DWORD *)ReceiveQueueByQueueId + 21);
  v45 = (__int64 **)(ReceiveQueueByQueueId + 4);
  v46 = ReceiveQueueByQueueId[4];
  v47 = (__int64 *)(v6 + 16);
  if ( *(__int64 **)(v46 + 8) != ReceiveQueueByQueueId + 4 )
    __fastfail(3u);
  *v47 = v46;
  *(_QWORD *)(v6 + 24) = v45;
  *(_QWORD *)(v46 + 8) = v47;
  *v45 = v47;
  if ( v7 )
  {
    ++*(_DWORD *)(v7 + 864);
    v48 = (_QWORD *)(v7 + 872);
    v49 = *(_QWORD *)(v7 + 872);
    if ( *(_QWORD *)(v49 + 8) != v7 + 872 )
      __fastfail(3u);
    *(_QWORD *)(v6 + 32) = v49;
    *(_QWORD *)(v6 + 40) = v48;
    *(_QWORD *)(v49 + 8) = v6 + 32;
    *v48 = v6 + 32;
    v50 = *(_QWORD *)(v7 + 88);
    if ( v53 )
      ++*(_DWORD *)(v50 + 656);
    else
      ++*(_DWORD *)(v50 + 652);
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
  v17 = 0;
  v12 = 0;
  v8 = 0;
LABEL_22:
  if ( *(_DWORD *)(a1 + 40) )
  {
    if ( v17 )
      ndisDereferenceReceiveQueue(ReceiveQueueByQueueId);
    if ( v11 )
      ndisMDereferenceOpenUnlocked(v57, 11);
    if ( v12 )
      ndisDereferenceMiniport(v3, 0x46u);
    if ( v6 )
      ExFreePoolWithTag((PVOID)v6, 0);
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = Size;
  }
  if ( (unsigned __int8)byte_1C0092620 >= 4u )
    WPP_SF_qdD(21LL, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v3, *(unsigned int *)(a1 + 40), v52);
  return v8;
}
