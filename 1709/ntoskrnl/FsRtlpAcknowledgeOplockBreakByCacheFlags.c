/*
 * XREFs of FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140154410
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x14049062C (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14000EFA8 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpRequestShareableOplock @ 0x140023680 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x140023F70 (FsRtlpComputeShareableOplockState.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     FsRtlpOplockDequeueRH @ 0x140024C74 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140024CE4 (FsRtlpClearOwner.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpOplockKeysEqual @ 0x1400874F0 (FsRtlpOplockKeysEqual.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140108B78 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpModifyThreadPriorities @ 0x140127258 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1401E7EA0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1401E818C (FsRtlpGrantAnyOplockFromExclusive.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140492158 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlpAcknowledgeOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int a6)
{
  __int64 v8; // rbx
  unsigned int v9; // esi
  _QWORD *PoolWithTag; // r12
  bool v11; // r14
  int v12; // ecx
  bool v13; // zf
  int v14; // r11d
  unsigned int v15; // eax
  _QWORD *v16; // rax
  _QWORD *v17; // r14
  int v18; // eax
  unsigned int v19; // esi
  _QWORD *v20; // r8
  int v21; // r11d
  char v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // al
  _QWORD *v26; // r10
  __int64 v27; // rax
  _QWORD *v28; // r10
  _QWORD *v29; // rax
  __int64 v30; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  int v32; // esi
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // r8
  _QWORD *v43; // rcx
  char v45; // [rsp+50h] [rbp-78h]
  char v46; // [rsp+59h] [rbp-6Fh]
  char v47; // [rsp+5Ah] [rbp-6Eh]
  char v48; // [rsp+5Bh] [rbp-6Dh] BYREF
  char v49; // [rsp+5Ch] [rbp-6Ch] BYREF
  char v50; // [rsp+5Dh] [rbp-6Bh]
  char v51; // [rsp+5Eh] [rbp-6Ah]
  int v52; // [rsp+60h] [rbp-68h]
  _QWORD *v53; // [rsp+68h] [rbp-60h] BYREF
  char v54; // [rsp+70h] [rbp-58h]
  char v55; // [rsp+71h] [rbp-57h]
  _QWORD *v56; // [rsp+78h] [rbp-50h]
  __int64 v57; // [rsp+80h] [rbp-48h]
  __int64 v58; // [rsp+88h] [rbp-40h]
  struct _KTHREAD *v59; // [rsp+90h] [rbp-38h]
  __int64 v60; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v61; // [rsp+D8h] [rbp+10h]

  v61 = a2;
  v60 = a1;
  v8 = a1;
  v9 = 0;
  PoolWithTag = 0LL;
  v53 = 0LL;
  v45 = 0;
  v50 = 0;
  v54 = 0;
  v46 = 0;
  v11 = 0;
  v55 = 0;
  v49 = 0;
  v48 = 0;
  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    return 3221225699LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v51 = 1;
  v12 = *(_DWORD *)(v8 + 144);
  if ( (v12 & 0xF00000) == 0 && (((v12 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) != 0
    || (((v12 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 && *(_QWORD *)(v8 + 72) == v8 + 72 )
  {
    goto LABEL_32;
  }
  v57 = *(_QWORD *)(a3 + 24);
  v13 = (*(_DWORD *)(v57 + 8) & 4) == 0;
  v14 = *(_DWORD *)(v57 + 8) & 4;
  v52 = v14;
  v47 = !v13;
  if ( v14 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x18uLL, 0x6F725346u);
    v53 = PoolWithTag;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    v14 = v52;
  }
  v15 = *(_DWORD *)(v8 + 144) & 0x1F0FFDF;
  if ( v15 <= 0x307040 )
  {
    if ( v15 != 3174464 )
    {
      if ( v15 == 12288 || v15 == 45056 || v15 == 1060864 )
        goto LABEL_8;
      if ( v15 != 1069120 && v15 != 1077312 )
        goto LABEL_32;
    }
LABEL_75:
    if ( !v14 )
      goto LABEL_80;
    v37 = *(_QWORD *)(v8 + 8);
    v38 = *(_QWORD *)(v61 + 48);
    if ( v37 == v38 || !FsRtlpOplockKeysEqual(v38, v37, 0) )
      goto LABEL_32;
    v14 = v52;
    if ( !v52 )
    {
LABEL_80:
      if ( *(_QWORD *)(v8 + 8) != *(_QWORD *)(v61 + 48) )
        goto LABEL_32;
      if ( !v14 )
        goto LABEL_85;
    }
    if ( !a4 )
    {
      FsRtlpModifyThreadPriorities(v8, 0LL, 0);
      FsRtlpClearOwner(v8, 0LL);
      *(_BYTE *)(v8 + 32) = 0;
      *(_DWORD *)(v8 + 144) = *(_DWORD *)(v8 + 144) & 0x20 | 1;
      PoolWithTag[2] = *(_QWORD *)(v8 + 8);
      v39 = (_QWORD *)(v8 + 104);
      v40 = *(_QWORD *)(v8 + 104);
      if ( *(_QWORD *)(v40 + 8) != v8 + 104 )
        __fastfail(3u);
      *PoolWithTag = v40;
      PoolWithTag[1] = v39;
      *(_QWORD *)(v40 + 8) = PoolWithTag;
      *v39 = PoolWithTag;
      PoolWithTag = 0LL;
      v53 = 0LL;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_DWORD *)(v8 + 144) |= 0x1000000u;
      *(_DWORD *)(a3 + 48) = 0;
      IofCompleteRequest((PIRP)a3, 1);
    }
    else
    {
LABEL_85:
      v41 = *(_DWORD *)(v8 + 144) & 0x1F0FFDF;
      if ( (v41 == 1069120 || v41 == 1077312 || v41 == 3174464 || v41 == 5271616 || v41 == 8409152 || v41 == 8417344)
        && (a4 & 0x7000) > (*(_DWORD *)(v8 + 144) & 0x200000 | ((*(_DWORD *)(v8 + 144) & 0x100000 | (*(_DWORD *)(v8 + 144) >> 1) & 0x200000u) >> 1)) >> 7 )
      {
        v11 = *(_QWORD *)(v8 + 88) != v8 + 88;
      }
      if ( v11 )
      {
        v42 = *(_QWORD *)(a3 + 24);
        *(_QWORD *)v42 = 0LL;
        *(_QWORD *)(v42 + 8) = 0LL;
        *(_QWORD *)(v42 + 16) = 0LL;
        *(_DWORD *)(v42 + 4) = (*(_DWORD *)(v8 + 144) >> 12) & 7;
        *(_DWORD *)(v42 + 8) = (*(_DWORD *)(v8 + 144) & 0x200000 | ((*(_DWORD *)(v8 + 144) & 0x100000 | (*(_DWORD *)(v8 + 144) >> 1) & 0x200000u) >> 1)) >> 19;
        *(_DWORD *)(v42 + 12) |= 1u;
        *(_QWORD *)(a3 + 56) = 24LL;
        v9 = -2147483602;
        *(_DWORD *)(a3 + 48) = -2147483602;
        IofCompleteRequest((PIRP)a3, 1);
        goto LABEL_101;
      }
      FsRtlpModifyThreadPriorities(v8, 0LL, 0);
      FsRtlpClearOwner(v8, 0LL);
      *(_BYTE *)(v8 + 32) = 0;
      v9 = FsRtlpGrantAnyOplockFromExclusive(v8, a3, v61, a4, a5, v47, &v53, &v48, &v49, a6);
      PoolWithTag = v53;
    }
LABEL_96:
    if ( v48 )
    {
      while ( 1 )
      {
        v43 = *(_QWORD **)(v8 + 88);
        if ( v43 == (_QWORD *)(v8 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v43);
      }
    }
    if ( v49 )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v8 + 8), 0x746C6644u);
      *(_QWORD *)(v8 + 8) = 0LL;
    }
    goto LABEL_101;
  }
  if ( v15 != 8400896 )
  {
    if ( v15 != 5271616 && v15 != 8409152 && v15 != 8417344 )
      goto LABEL_32;
    goto LABEL_75;
  }
LABEL_8:
  v16 = (_QWORD *)(v8 + 72);
  v17 = *(_QWORD **)(v8 + 72);
  while ( 1 )
  {
    v56 = v17;
    if ( v17 == v16 )
      break;
    if ( v14 )
    {
      v23 = v17[3];
      v24 = *(_QWORD *)(v61 + 48);
      if ( v23 != v24 )
      {
        v25 = FsRtlpOplockKeysEqual(v24, v23, 0);
        v14 = v52;
        if ( v25 )
        {
LABEL_12:
          v45 = 1;
          v18 = v17[6] & 0xF00000;
          v19 = a6;
          if ( v18 == 0x800000 )
          {
            if ( a4 )
            {
              v26 = (_QWORD *)(v8 + 88);
              if ( (_QWORD *)*v26 != v26 || !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a6) )
              {
                v27 = *(_QWORD *)(a3 + 24);
                *(_QWORD *)v27 = 0LL;
                *(_QWORD *)(v27 + 8) = 0LL;
                *(_QWORD *)(v27 + 16) = 0LL;
                *(_DWORD *)(v27 + 4) = 3;
                if ( (_QWORD *)*v26 != v26 )
                  v19 = 0;
                goto LABEL_55;
              }
            }
LABEL_14:
            FsRtlpOplockDequeueRH((__int64)v17);
            if ( !v21 )
            {
              v46 = 1;
              if ( !a4 )
              {
                ObfDereferenceObjectWithTag((PVOID)v17[3], 0x746C6644u);
                goto LABEL_17;
              }
              goto LABEL_64;
            }
            PoolWithTag[2] = v17[3];
            v29 = (_QWORD *)(v8 + 104);
            v30 = *(_QWORD *)(v8 + 104);
            if ( *(_QWORD *)(v30 + 8) != v8 + 104 )
              __fastfail(3u);
            *PoolWithTag = v30;
            PoolWithTag[1] = v29;
            *(_QWORD *)(v30 + 8) = PoolWithTag;
            *v29 = PoolWithTag;
            PoolWithTag = v20;
            v53 = v20;
LABEL_17:
            if ( !a4 )
            {
              FsRtlpComputeShareableOplockState(v8);
              v9 = 0;
              *(_DWORD *)(a3 + 48) = 0;
              IofCompleteRequest((PIRP)a3, 1);
              goto LABEL_19;
            }
LABEL_64:
            if ( (a4 & 0x4040) == 0 && (a4 & 0x3010) != 0 )
            {
              v9 = FsRtlpRequestShareableOplock(&v60, v61, a3, a4, a5, v47, 1, v19);
              goto LABEL_72;
            }
            *(_QWORD *)v8 = a3;
            v58 = *(_QWORD *)(a3 + 184);
            *(_BYTE *)(v58 + 3) |= 1u;
            *(_QWORD *)(a3 + 56) = v8;
            *(_QWORD *)(v60 + 16) = KeGetCurrentThread()->ApcState.Process;
            CurrentThread = KeGetCurrentThread();
            v59 = CurrentThread;
            v8 = v60;
            *(_QWORD *)(v60 + 24) = CurrentThread;
            ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
            *(_BYTE *)(v8 + 32) = 0;
            v32 = v52;
            if ( v52 )
            {
              v33 = v61;
              ObfReferenceObjectWithTag(*(PVOID *)(v61 + 48), 0x746C6644u);
              v34 = *(_QWORD *)(v33 + 48);
            }
            else
            {
              v34 = v17[3];
            }
            *(_QWORD *)(v8 + 8) = v34;
            *(_DWORD *)(v8 + 144) = a4 | *(_DWORD *)(v8 + 144) & 0x20 | 0x40;
            *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
            if ( *(_BYTE *)(a3 + 68) )
            {
              LOBYTE(v36) = v32 == 0;
              LOBYTE(v35) = 1;
              FsRtlpCancelExclusiveIrp(a3, v35, v36);
              v9 = 259;
              PoolWithTag = v53;
              v45 = 1;
              v17 = v56;
            }
            else
            {
              _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
              KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
              v9 = 259;
              PoolWithTag = v53;
              v45 = 1;
              v17 = v56;
LABEL_72:
              v8 = v60;
            }
LABEL_19:
            FsRtlpModifyThreadPriorities(v8, (__int64)v17, 0);
            FsRtlpClearOwner(v8, (__int64)v17);
            if ( *(_QWORD *)(v8 + 72) == v8 + 72 )
              *(_BYTE *)(v8 + 32) = 0;
            ExFreePoolWithTag(v17, 0);
            if ( v52 )
              *(_DWORD *)(v8 + 144) |= 0x1000000u;
          }
          else
          {
            if ( v18 != 0x100000 )
              goto LABEL_14;
            if ( (a4 & 0x7000) <= 0x3000 )
              goto LABEL_14;
            v28 = (_QWORD *)(v8 + 88);
            if ( (_QWORD *)*v28 == v28 )
            {
              if ( (unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a6) )
                goto LABEL_14;
            }
            v27 = *(_QWORD *)(a3 + 24);
            *(_QWORD *)v27 = 0LL;
            *(_QWORD *)(v27 + 8) = 0LL;
            *(_QWORD *)(v27 + 16) = 0LL;
            *(_DWORD *)(v27 + 4) = 3;
            if ( (_QWORD *)*v28 != v28 )
              v19 = 1;
LABEL_55:
            *(_DWORD *)(v27 + 8) = v19;
            *(_DWORD *)(v27 + 12) |= 1u;
            *(_QWORD *)(a3 + 56) = 24LL;
            v9 = -2147483602;
            *(_DWORD *)(a3 + 48) = -2147483602;
            IofCompleteRequest((PIRP)a3, 1);
          }
          v22 = 1;
          goto LABEL_24;
        }
      }
    }
    else if ( v17[3] == *(_QWORD *)(v61 + 48) )
    {
      goto LABEL_12;
    }
    v17 = (_QWORD *)*v17;
    v16 = (_QWORD *)(v8 + 72);
  }
  v22 = v50;
LABEL_24:
  if ( v45 )
  {
    if ( v46 )
      FsRtlpReleaseIrpsWaitingForRH(v8);
    if ( v22 )
      goto LABEL_101;
    goto LABEL_96;
  }
LABEL_32:
  v9 = -1073741597;
  *(_DWORD *)(a3 + 48) = -1073741597;
  IofCompleteRequest((PIRP)a3, 1);
LABEL_101:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v8 + 152));
  return v9;
}
