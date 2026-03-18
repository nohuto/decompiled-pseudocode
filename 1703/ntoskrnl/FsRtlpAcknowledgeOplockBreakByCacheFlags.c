/*
 * XREFs of FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140151410
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x14048C37C (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140019240 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpClearOwner @ 0x140019BCC (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x140019D84 (FsRtlpModifyThreadPriorities.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     FsRtlpOplockDequeueRH @ 0x14004FB70 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockKeysEqual @ 0x140050C14 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpRequestShareableOplock @ 0x140051EF4 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x140052820 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1401318A4 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140136A3C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1401E3D30 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x14048C890 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlpAcknowledgeOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int a6)
{
  int v6; // eax
  __int64 v9; // rbx
  char v10; // r13
  unsigned int v11; // r14d
  _QWORD *PoolWithTag; // r12
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // ecx
  unsigned int v16; // eax
  _QWORD *v17; // rax
  _QWORD *v18; // rsi
  int v19; // eax
  unsigned int v20; // r14d
  char v21; // si
  __int64 v22; // rcx
  _QWORD *v23; // r10
  unsigned int v24; // r11d
  __int64 v25; // rax
  _QWORD *v26; // r10
  unsigned int v27; // r11d
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  int v38; // eax
  char v39; // cl
  __int64 v40; // r8
  _QWORD *v41; // rcx
  char v43; // [rsp+50h] [rbp-78h]
  char v44; // [rsp+51h] [rbp-77h]
  char v45; // [rsp+59h] [rbp-6Fh]
  char v46; // [rsp+5Ah] [rbp-6Eh] BYREF
  char v47; // [rsp+5Bh] [rbp-6Dh] BYREF
  char v48; // [rsp+5Ch] [rbp-6Ch]
  char v49; // [rsp+5Dh] [rbp-6Bh]
  _QWORD *v50; // [rsp+60h] [rbp-68h] BYREF
  char v51; // [rsp+68h] [rbp-60h]
  char v52; // [rsp+69h] [rbp-5Fh]
  _QWORD *v53; // [rsp+70h] [rbp-58h]
  __int64 v54; // [rsp+78h] [rbp-50h]
  __int64 v55; // [rsp+80h] [rbp-48h]
  struct _KTHREAD *v56; // [rsp+88h] [rbp-40h]
  __int64 v57; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v58; // [rsp+D8h] [rbp+10h]
  unsigned int v59; // [rsp+E8h] [rbp+20h]

  v59 = a4;
  v58 = a2;
  v57 = a1;
  v9 = a1;
  v10 = 0;
  v11 = 0;
  PoolWithTag = 0LL;
  v50 = 0LL;
  v43 = 0;
  LOBYTE(v6) = 0;
  v48 = 0;
  v51 = 0;
  v45 = 0;
  LODWORD(v53) = v6;
  v52 = 0;
  v47 = 0;
  v46 = 0;
  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    return 3221225699LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v49 = 1;
  v15 = *(_DWORD *)(v9 + 144);
  if ( (v15 & 0xF00000) == 0 && (((v15 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) != 0
    || (((v15 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 && *(_QWORD *)(v9 + 72) == v9 + 72 )
  {
LABEL_32:
    v11 = -1073741597;
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_104;
  }
  v54 = *(_QWORD *)(a3 + 24);
  if ( (*(_DWORD *)(v54 + 8) & 4) != 0 )
  {
    v10 = 1;
    v44 = 1;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x18uLL, 0x6F725346u);
    v50 = PoolWithTag;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
  }
  else
  {
    v44 = 0;
  }
  v16 = *(_DWORD *)(v9 + 144) & 0x1F0FFDF;
  if ( v16 <= 0x307040 )
  {
    if ( v16 != 3174464 )
    {
      if ( v16 == 12288 || v16 == 45056 || v16 == 1060864 )
        goto LABEL_8;
      if ( v16 != 1069120 && v16 != 1077312 )
        goto LABEL_32;
    }
LABEL_75:
    if ( v10 )
    {
      v34 = *(_QWORD *)(v9 + 8);
      v35 = *(_QWORD *)(v58 + 48);
      if ( v34 == v35 || !FsRtlpOplockKeysEqual(v35, v34, 0) )
        goto LABEL_32;
      if ( !a4 )
      {
        FsRtlpModifyThreadPriorities(v9, 0LL, 0LL);
        FsRtlpClearOwner(v9, 0LL);
        *(_BYTE *)(v9 + 32) = 0;
        *(_DWORD *)(v9 + 144) = *(_DWORD *)(v9 + 144) & 0x20 | 1;
        PoolWithTag[2] = *(_QWORD *)(v9 + 8);
        v36 = (_QWORD *)(v9 + 104);
        v37 = *(_QWORD *)(v9 + 104);
        if ( *(_QWORD *)(v37 + 8) != v9 + 104 )
          __fastfail(3u);
        *PoolWithTag = v37;
        PoolWithTag[1] = v36;
        *(_QWORD *)(v37 + 8) = PoolWithTag;
        *v36 = PoolWithTag;
        PoolWithTag = 0LL;
        v50 = 0LL;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_DWORD *)(v9 + 144) |= 0x1000000u;
        *(_DWORD *)(a3 + 48) = 0;
        IofCompleteRequest((PIRP)a3, 1);
        goto LABEL_99;
      }
    }
    else if ( *(_QWORD *)(v9 + 8) != *(_QWORD *)(v58 + 48) )
    {
      goto LABEL_32;
    }
    v38 = *(_DWORD *)(v9 + 144) & 0x1F0FFDF;
    if ( (v38 == 1069120 || v38 == 1077312 || v38 == 3174464 || v38 == 5271616 || v38 == 8409152 || v38 == 8417344)
      && (a4 & 0x7000) > (*(_DWORD *)(v9 + 144) & 0x200000 | ((*(_DWORD *)(v9 + 144) & 0x100000 | (*(_DWORD *)(v9 + 144) >> 1) & 0x200000u) >> 1)) >> 7 )
    {
      v39 = (char)v53;
      if ( *(_QWORD *)(v9 + 88) != v9 + 88 )
        v39 = 1;
    }
    else
    {
      v39 = (char)v53;
    }
    if ( v39 )
    {
      v40 = *(_QWORD *)(a3 + 24);
      *(_QWORD *)v40 = 0LL;
      *(_QWORD *)(v40 + 8) = 0LL;
      *(_QWORD *)(v40 + 16) = 0LL;
      *(_DWORD *)(v40 + 4) = (*(_DWORD *)(v9 + 144) >> 12) & 7;
      *(_DWORD *)(v40 + 8) = (*(_DWORD *)(v9 + 144) & 0x200000 | ((*(_DWORD *)(v9 + 144) & 0x100000 | (*(_DWORD *)(v9 + 144) >> 1) & 0x200000u) >> 1)) >> 19;
      *(_DWORD *)(v40 + 12) |= 1u;
      *(_QWORD *)(a3 + 56) = 24LL;
      v11 = -2147483602;
      *(_DWORD *)(a3 + 48) = -2147483602;
      IofCompleteRequest((PIRP)a3, 1);
      goto LABEL_104;
    }
    FsRtlpModifyThreadPriorities(v9, 0LL, 0LL);
    FsRtlpClearOwner(v9, 0LL);
    *(_BYTE *)(v9 + 32) = 0;
    v11 = FsRtlpGrantAnyOplockFromExclusive(v9, a3, v58, a4, a5, v10, &v50, &v46, &v47, a6);
    PoolWithTag = v50;
    goto LABEL_99;
  }
  if ( v16 != 8400896 )
  {
    if ( v16 != 5271616 && v16 != 8409152 && v16 != 8417344 )
      goto LABEL_32;
    goto LABEL_75;
  }
LABEL_8:
  v17 = (_QWORD *)(v9 + 72);
  v18 = *(_QWORD **)(v9 + 72);
  while ( 1 )
  {
    v53 = v18;
    if ( v18 == v17 )
    {
      v21 = v48;
      goto LABEL_24;
    }
    if ( v10 )
      break;
    if ( v18[3] == *(_QWORD *)(v58 + 48) )
      goto LABEL_12;
LABEL_73:
    v18 = (_QWORD *)*v18;
    v17 = (_QWORD *)(v9 + 72);
  }
  v13 = v18[3];
  v22 = *(_QWORD *)(v58 + 48);
  if ( v13 == v22 || !FsRtlpOplockKeysEqual(v22, v13, 0) )
    goto LABEL_73;
LABEL_12:
  v43 = 1;
  v19 = v18[6] & 0xF00000;
  v20 = v59;
  if ( v19 != 0x800000 )
  {
    if ( v19 == 0x100000 && (v59 & 0x7000) > 0x3000 )
    {
      v26 = (_QWORD *)(v9 + 88);
      v27 = a6;
      if ( (_QWORD *)*v26 != v26 || !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(v59, a6) )
      {
        v28 = *(_QWORD *)(a3 + 24);
        *(_QWORD *)v28 = 0LL;
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_QWORD *)(v28 + 16) = 0LL;
        *(_DWORD *)(v28 + 4) = 3;
        if ( (_QWORD *)*v26 != v26 )
          v27 = 1;
        *(_DWORD *)(v28 + 8) = v27;
        *(_DWORD *)(v28 + 12) |= 1u;
        *(_QWORD *)(a3 + 56) = 24LL;
        v11 = -2147483602;
        *(_DWORD *)(a3 + 48) = -2147483602;
        IofCompleteRequest((PIRP)a3, 1);
        goto LABEL_23;
      }
    }
LABEL_14:
    FsRtlpOplockDequeueRH((__int64)v18, v13, v14);
    if ( v10 )
    {
      PoolWithTag[2] = v18[3];
      v29 = (_QWORD *)(v9 + 104);
      v30 = *(_QWORD *)(v9 + 104);
      if ( *(_QWORD *)(v30 + 8) != v9 + 104 )
        __fastfail(3u);
      *PoolWithTag = v30;
      PoolWithTag[1] = v29;
      *(_QWORD *)(v30 + 8) = PoolWithTag;
      *v29 = PoolWithTag;
      PoolWithTag = 0LL;
      v50 = 0LL;
    }
    else
    {
      v45 = 1;
      if ( v20 )
        goto LABEL_64;
      ObfDereferenceObjectWithTag((PVOID)v18[3], 0x746C6644u);
    }
    if ( !v20 )
    {
      FsRtlpComputeShareableOplockState(v9);
      v11 = 0;
      *(_DWORD *)(a3 + 48) = 0;
      IofCompleteRequest((PIRP)a3, 1);
LABEL_19:
      FsRtlpModifyThreadPriorities(v9, (__int64)v18, 0LL);
      FsRtlpClearOwner(v9, (__int64)v18);
      if ( *(_QWORD *)(v9 + 72) == v9 + 72 )
        *(_BYTE *)(v9 + 32) = 0;
      ExFreePoolWithTag(v18, 0);
      if ( v10 )
        *(_DWORD *)(v9 + 144) |= 0x1000000u;
LABEL_23:
      v21 = 1;
      goto LABEL_24;
    }
LABEL_64:
    if ( (v20 & 0x4040) == 0 && (v20 & 0x3010) != 0 )
    {
      v11 = FsRtlpRequestShareableOplock(&v57, v58, a3, v20, a5, v10, 1, a6);
    }
    else
    {
      *(_QWORD *)v9 = a3;
      v55 = *(_QWORD *)(a3 + 184);
      *(_BYTE *)(v55 + 3) |= 1u;
      *(_QWORD *)(a3 + 56) = v9;
      *(_QWORD *)(v57 + 16) = KeGetCurrentThread()->ApcState.Process;
      CurrentThread = KeGetCurrentThread();
      v56 = CurrentThread;
      v9 = v57;
      *(_QWORD *)(v57 + 24) = CurrentThread;
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_BYTE *)(v9 + 32) = 0;
      v10 = v44;
      if ( v44 )
      {
        v32 = v58;
        ObfReferenceObjectWithTag(*(PVOID *)(v58 + 48), 0x746C6644u);
        v33 = *(_QWORD *)(v32 + 48);
      }
      else
      {
        v33 = v18[3];
      }
      *(_QWORD *)(v9 + 8) = v33;
      *(_DWORD *)(v9 + 144) = v20 | *(_DWORD *)(v9 + 144) & 0x20 | 0x40;
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        FsRtlpCancelExclusiveIrp(a3, 1, v44 == 0);
        v11 = 259;
        PoolWithTag = v50;
        v43 = 1;
        v18 = v53;
        goto LABEL_19;
      }
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
      v11 = 259;
      v10 = v44;
      PoolWithTag = v50;
      v43 = 1;
      v18 = v53;
    }
    v9 = v57;
    goto LABEL_19;
  }
  if ( !v59 )
    goto LABEL_14;
  v23 = (_QWORD *)(v9 + 88);
  v24 = a6;
  if ( (_QWORD *)*v23 == v23 )
  {
    if ( (unsigned __int8)FsRtlpOplockUpperLowerCompatible(v59, a6) )
      goto LABEL_14;
  }
  v25 = *(_QWORD *)(a3 + 24);
  *(_QWORD *)v25 = 0LL;
  *(_QWORD *)(v25 + 8) = 0LL;
  *(_QWORD *)(v25 + 16) = 0LL;
  *(_DWORD *)(v25 + 4) = 3;
  if ( (_QWORD *)*v23 != v23 )
    v24 = 0;
  *(_DWORD *)(v25 + 8) = v24;
  *(_DWORD *)(v25 + 12) |= 1u;
  *(_QWORD *)(a3 + 56) = 24LL;
  v11 = -2147483602;
  *(_DWORD *)(a3 + 48) = -2147483602;
  IofCompleteRequest((PIRP)a3, 1);
  v21 = 1;
LABEL_24:
  if ( !v43 )
    goto LABEL_32;
  if ( v45 )
    FsRtlpReleaseIrpsWaitingForRH(v9);
  if ( !v21 )
  {
LABEL_99:
    if ( v46 )
    {
      while ( 1 )
      {
        v41 = *(_QWORD **)(v9 + 88);
        if ( v41 == (_QWORD *)(v9 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v41);
      }
    }
    if ( v47 )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v9 + 8), 0x746C6644u);
      *(_QWORD *)(v9 + 8) = 0LL;
    }
  }
LABEL_104:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v9 + 152));
  return v11;
}
