/*
 * XREFs of MiRemoveUserPhysicalPagesVad @ 0x1402629CC
 * Callers:
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140007E50 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiGetUsedPtesHandle @ 0x14003E470 (MiGetUsedPtesHandle.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14004EA5C (MiPageTableLockIsContended.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1400B5B90 (ExReleaseAutoExpandPushLockExclusive.c)
 *     MiDecreaseUsedPtesCount @ 0x1400C1830 (MiDecreaseUsedPtesCount.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MiRemoveUserPhysicalPagesVad(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v2; // rdx
  _KPROCESS *Process; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r12
  int v9; // r15d
  unsigned __int64 v10; // rdi
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rcx
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned __int8 v21; // [rsp+28h] [rbp-E0h]
  __int64 v22; // [rsp+30h] [rbp-D8h] BYREF
  struct _KTHREAD *v23; // [rsp+38h] [rbp-D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C8h]
  int v25; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v26; // [rsp+4Ch] [rbp-BCh]
  __int64 v27; // [rsp+50h] [rbp-B8h]
  __int64 v28; // [rsp+58h] [rbp-B0h]
  __int64 v29; // [rsp+60h] [rbp-A8h]

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  v23 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v4 = Process[1].ActiveProcessors.Bitmap[3];
  v5 = (__int64)&Process[1].IdealNode[12];
  v6 = 8 * ((*(unsigned int *)(a1 + 24) | v2) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v7 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL;
  v27 = 20LL;
  v26 = 0;
  v8 = 8 * v7 - 0x97FFFFFFFF8LL;
  v28 = 0LL;
  v29 = 0LL;
  v25 = 1;
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = v4 + 16;
  ExAcquireAutoExpandPushLockExclusive(v4 + 16, 0LL);
  v9 = 0;
  v10 = 0LL;
  v11 = MiLockWorkingSetShared(v5);
  v21 = v11;
  if ( v6 < v8 )
  {
    do
    {
      v14 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v10 != v14 )
      {
        if ( v10 )
        {
          MiFlushTbList((__int64)&v25, v12, v13);
          MiUnlockPageTableInternal(v5, v10);
        }
        v10 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(v5, v14, 0LL);
      }
      v22 = MI_READ_PTE_LOCK_FREE(v6);
      if ( (v22 & 1) != 0 )
      {
        _InterlockedAnd64(
          (volatile signed __int64 *)(48
                                    * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFLL)
                                    - 0x57FFFFFFFF8LL),
          0LL);
        MiInsertTbFlushEntry((__int64)&v25, (__int64)((v6 << 25) - (v15 << 25)) >> 16, 1LL, 0);
        *(_QWORD *)v6 = ZeroPte;
        if ( MiPteInShadowRange(v6) )
          MiWritePteShadow(v16, v12, v13);
      }
      v6 += 8LL;
      if ( v6 == v8 || (v6 & 0xFFF) == 0 )
      {
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)(((((v6 - 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) << 25) >> 16 << 25 >> 16);
        MiDecreaseUsedPtesCount(UsedPtesHandle, 1u);
        v18 = 48
            * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((((v6 - 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        MiLockPageAtDpcInline(v18);
        v12 = 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( (++v9 & 0x3F) == 0
        && ((unsigned int)MiWorkingSetIsContended(v5)
         || (unsigned int)MiPageTableLockIsContended(v19, v10)
         || KeShouldYieldProcessor()) )
      {
        if ( v10 )
        {
          MiFlushTbList((__int64)&v25, v12, v13);
          MiUnlockPageTableInternal(v5, v10);
          v10 = 0LL;
        }
        MiUnlockWorkingSetShared(v5, v21, v13);
        MiLockWorkingSetShared(v5);
      }
    }
    while ( v6 < v8 );
    CurrentThread = v23;
    if ( v10 )
    {
      MiFlushTbList((__int64)&v25, v12, v13);
      MiUnlockPageTableInternal(v5, v10);
    }
    v11 = v21;
  }
  MiUnlockWorkingSetShared(v5, v11, v13);
  ExReleaseAutoExpandPushLockExclusive(BugCheckParameter2, 0LL);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
