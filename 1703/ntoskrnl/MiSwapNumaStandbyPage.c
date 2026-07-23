/*
 * XREFs of MiSwapNumaStandbyPage @ 0x14021FD48
 * Callers:
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x14021FA24 (MiPruneStandbyPages.c)
 * Callees:
 *     MiCanPageMove @ 0x14007507C (MiCanPageMove.c)
 *     MiSetPfnBlink @ 0x140075C3C (MiSetPfnBlink.c)
 *     MiIsDecayPfn @ 0x140075F20 (MiIsDecayPfn.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     MiInsertNumaStandbyPage @ 0x1400AA4D4 (MiInsertNumaStandbyPage.c)
 *     MiVaToPfn @ 0x1400B2D70 (MiVaToPfn.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiCopyPfnEntry @ 0x14010C150 (MiCopyPfnEntry.c)
 *     MiSetPfnTbFlushStamp @ 0x14010EB3C (MiSetPfnTbFlushStamp.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401393EC (MiUnlinkNumaStandbyPage.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14017C610 (KeMakeKernelDirectoryTableBase.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiUpdateTransitionPteFrame @ 0x14017D158 (MiUpdateTransitionPteFrame.c)
 *     MiSetFreshPfnFromFreeList @ 0x14017D268 (MiSetFreshPfnFromFreeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReuseStandbyPage @ 0x14021FCFC (MiReuseStandbyPage.c)
 */

ULONG_PTR __fastcall MiSwapNumaStandbyPage(ULONG_PTR a1, unsigned int a2, int a3, char a4)
{
  __int64 v4; // r12
  ULONG_PTR v6; // rsi
  unsigned int v7; // edi
  __int64 v8; // r14
  int v9; // edx
  unsigned __int8 *v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // r13
  unsigned int v13; // r8d
  __int64 v14; // r11
  int v15; // r15d
  _QWORD *v16; // r13
  unsigned __int64 v17; // rax
  ULONG_PTR *v18; // r15
  unsigned __int64 *v19; // r12
  __int64 CurrentIrql; // rdi
  ULONG_PTR v21; // r10
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  unsigned __int64 v24; // r10
  __int64 v25; // r11
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  volatile signed __int32 *v29; // r8
  unsigned int v30; // eax
  unsigned __int64 v31; // rcx
  __int64 v32; // r10
  unsigned __int64 v33; // rcx
  _QWORD *v34; // r8
  unsigned __int64 v35; // r10
  __int64 v36; // r11
  __int64 updated; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r11
  __int64 v41; // rcx
  __int64 v42; // rcx
  ULONG_PTR v43; // r15
  __int64 v44; // r9
  unsigned __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 *v49; // r10
  __int64 v50; // r10
  unsigned int v51; // ebx
  char v52; // cl
  __int64 v53; // rdx
  __int64 v54; // r8
  signed __int32 v55[8]; // [rsp+0h] [rbp-80h] BYREF
  int v56; // [rsp+20h] [rbp-60h]
  int v57; // [rsp+24h] [rbp-5Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v59; // [rsp+40h] [rbp-40h]
  __int64 v60; // [rsp+48h] [rbp-38h]
  int v61; // [rsp+50h] [rbp-30h]
  ULONG_PTR v62; // [rsp+58h] [rbp-28h]
  __int64 v63; // [rsp+60h] [rbp-20h]
  __int64 v64; // [rsp+68h] [rbp-18h]
  unsigned __int8 *v65; // [rsp+70h] [rbp-10h]
  int v66; // [rsp+C0h] [rbp+40h]

  v4 = a2;
  v6 = a1;
  v7 = MmNumberOfChannels;
  v8 = 48 * a1 - 0x58000000000LL;
  v9 = 0;
  v10 = 0LL;
  v56 = 0;
  v11 = *(_QWORD *)(v8 + 40);
  v57 = MmNumberOfChannels;
  v12 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v11 >> 40) & 0x3FF));
  v13 = 0;
  v63 = v12;
  v66 = 0;
  v14 = *(_QWORD *)(v12 + 48) + 2184 * v4;
  v64 = v14;
  v15 = *(_DWORD *)(v14 + 2136) & 1;
  v61 = v15;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v10 = (unsigned __int8 *)(v14 + 2161);
    if ( v15 )
    {
      if ( (a4 & 0x10) != 0 )
      {
        v7 = 1;
        v66 = a3;
        v57 = 1;
        v13 = a3;
        v10 = 0LL;
      }
      else if ( (a4 & 8) != 0 )
      {
        v10 = (unsigned __int8 *)(v14 + 2165);
      }
    }
    else
    {
      if ( v11 >> 58 == (_DWORD)v4 )
        return v6;
      v9 = a3;
      v56 = a3;
    }
  }
  v65 = &v10[v7];
  while ( 1 )
  {
    if ( v10 )
    {
      if ( v15 )
      {
        v13 = *v10;
        v66 = v13;
        if ( *(_QWORD *)(v8 + 40) >> 58 == (_DWORD)v4 && v13 == ((*(_QWORD *)(v8 + 40) >> 36) & 3) )
          return v6;
      }
      else
      {
        v66 = v9;
        v13 = v9;
        v9 = v9 + 1 < v7 ? v9 + 1 : 0;
        v56 = v9;
      }
    }
    v16 = (_QWORD *)(v12 + 2176);
    v59 = v63 + 2496;
    if ( (unsigned __int64)v16 < v63 + 2496 )
      break;
LABEL_28:
    if ( ++v10 >= v65 )
      return v6;
    v15 = v61;
    v12 = v63;
  }
  v17 = v59;
  v18 = (ULONG_PTR *)(192LL * v13 + v14 + 1248);
  v19 = v16 + 4;
  while ( *v18 == 0xFFFFFFFFFLL )
  {
LABEL_26:
    v16 += 5;
    v19 += 5;
    v18 += 3;
    if ( (unsigned __int64)v16 >= v17 )
    {
      v9 = v56;
      v13 = v66;
      v14 = v64;
      v7 = v57;
      LODWORD(v4) = a2;
      goto LABEL_28;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  v60 = CurrentIrql;
  __writecr8(2uLL);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v19;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v19);
  v21 = *v18;
  v62 = v21;
  if ( v21 == 0xFFFFFFFFFLL )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v22 = (unsigned __int8)CurrentIrql;
LABEL_25:
    __writecr8(v22);
    v17 = v59;
    goto LABEL_26;
  }
  v23 = 48 * v21 - 0x58000000000LL;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
    goto LABEL_30;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiLockPageAtDpcInline(v23);
  if ( (*(_BYTE *)(v23 + 34) & 7) != 2 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v22 = (unsigned __int8)v60;
    v16 -= 5;
    v19 -= 5;
    v18 -= 3;
    goto LABEL_25;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v19;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v19);
  if ( v62 != *v18 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v22 = (unsigned __int8)v60;
    v16 -= 5;
    v19 -= 5;
    v18 -= 3;
    goto LABEL_25;
  }
LABEL_30:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_34;
  }
  if ( (unsigned int)MiCanPageMove(v23) )
  {
    if ( dword_14036C91C != 1 )
      goto LABEL_46;
    v27 = v24 & 0x1F;
    LOBYTE(v28) = 1;
    v29 = (volatile signed __int32 *)stru_14036C970.Buffer + (v24 >> 5);
    if ( (unsigned __int64)(v27 + 1) > 0x20 )
    {
      if ( (v24 & 0x1F) != 0 )
      {
        _InterlockedOr(v29++, ((1 << (32 - (v24 & 0x1F))) - 1) << v27);
        v28 = 1LL - (32 - (unsigned int)(v24 & 0x1F));
        if ( v28 >= 0x20 )
        {
          v31 = v28 >> 5;
          v28 += -32LL * (v28 >> 5);
          do
          {
            *v29++ = -1;
            --v31;
          }
          while ( v31 );
        }
        if ( !v28 )
        {
LABEL_46:
          v32 = v25 & *(_QWORD *)v23;
          v33 = v25 & *(_QWORD *)(v23 + 24);
          if ( (*(_BYTE *)(v23 + 35) & 8) != 0 )
          {
            if ( MiIsDecayPfn(v33) )
            {
              updated = MiUpdateTransitionPteFrame(v34[2]);
              *(_QWORD *)(v38 + 16) = updated;
            }
            else
            {
              *v34 ^= v36 & (v6 ^ *v34);
            }
            if ( MiIsDecayPfn(v35) )
            {
              *(_QWORD *)(v39 + 40) ^= v40 & (v6 ^ *(_QWORD *)(v39 + 40));
LABEL_60:
              MiUnlinkNumaStandbyPage(v23);
              MiFinalizePageAttribute(v8, *(unsigned __int8 *)(v23 + 34) >> 6, 1);
              MiCopyPfnEntry(v8, v23);
              MiInsertNumaStandbyPage(v42);
              _InterlockedOr(v55, 0);
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v8 + 31)) & 0xF) != 0 )
                MiSetPfnTbFlushStamp(v8, (unsigned int)KiTbFlushTimeStamp, 1);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              v43 = v62;
              v44 = *(_QWORD *)(v23 + 40) & 0xFFFFFFFFFLL;
              if ( v44 == v62 )
              {
                v45 = *(_QWORD *)(v23 + 8) | 0x8000000000000000uLL;
                MiVaToPfn(v45 - 1088);
                *(_QWORD *)(v8 + 40) ^= (v6 ^ *(_QWORD *)(v8 + 40)) & 0xFFFFFFFFFLL;
                *(_QWORD *)(v45 - 1048) = KeMakeKernelDirectoryTableBase(v6 << 12);
              }
              v46 = MiMapPageInHyperSpaceWorker(v44, 0LL, 0x80000000);
              v47 = MI_READ_PTE_LOCK_FREE(v46 + 8LL * ((*(_DWORD *)(v23 + 8) >> 3) & 0x1FF));
              v48 = MiUpdateTransitionPteFrame(v47);
              *v49 = v48;
              if ( MiPteInShadowRange((unsigned __int64)v49) )
                MiWritePteShadow();
              MiUnmapPageInHyperSpaceWorker(v50, 0x11u);
              MiCopyPage(v6, v43, 0LL, 6);
              _InterlockedOr(v55, 0);
              v51 = KiTbFlushTimeStamp;
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v8 + 31)) & 0xF) != 0 )
              {
                LockHandle.LockQueue.Next = 0LL;
                LockHandle.LockQueue.Lock = v16 + 4;
                KxAcquireQueuedSpinLock((__int64)&LockHandle, v16 + 4);
                MiSetPfnTbFlushStamp(v8, v51, 1);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
              _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              *(_QWORD *)(v23 + 40) &= ~0x200000000000000uLL;
              *(_BYTE *)(v23 + 34) &= 0xC7u;
              *(_BYTE *)(v23 + 35) &= ~0x20u;
              _InterlockedOr(v55, 0);
              MiSetPfnTbFlushStamp(v23, (unsigned int)KiTbFlushTimeStamp, 1);
              *(_QWORD *)v23 = 0LL;
              MiSetPfnBlink(v23, 0LL, 1);
              v52 = *(_BYTE *)(v23 + 34) & 0xFD;
              *(_QWORD *)(v23 + 16) = 0LL;
              *(_BYTE *)(v23 + 34) = v52 | 5;
              MiSetFreshPfnFromFreeList(v23, v53, v54);
              *(_BYTE *)(v23 + 35) &= ~8u;
              *(_QWORD *)(v23 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
              *(_BYTE *)(v23 + 35) &= 0xF8u;
              _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8((unsigned __int8)v60);
              return v43;
            }
            v41 = v39;
          }
          else
          {
            if ( v33 == v25 )
              v16[2] = v6;
            else
              *(_QWORD *)(48 * v33 - 0x58000000000LL) ^= v25 & (v6 ^ *(_QWORD *)(48 * v33 - 0x58000000000LL));
            if ( v32 == v25 )
            {
              v16[3] = v6;
              goto LABEL_60;
            }
            v41 = 48 * v32 - 0x58000000000LL;
          }
          MiSetPfnBlink(v41, v6, 0);
          goto LABEL_60;
        }
      }
      v30 = (1 << v28) - 1;
    }
    else
    {
      v30 = 1 << v27;
    }
    _InterlockedOr(v29, v30);
    goto LABEL_46;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiReuseStandbyPage(v23);
  *(_QWORD *)(v23 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(v23 + 34) &= 0xC7u;
  *(_BYTE *)(v23 + 35) &= ~0x20u;
  *(_QWORD *)v23 = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiReleaseFreshPage(v8);
  v6 = v62;
LABEL_34:
  __writecr8((unsigned __int8)v60);
  return v6;
}
