/*
 * XREFs of MiReleaseCommitForResetPages @ 0x14020C108
 * Callers:
 *     MmOutSwapProcess @ 0x140040CE4 (MmOutSwapProcess.c)
 * Callees:
 *     MiUnlockVad @ 0x1400403D0 (MiUnlockVad.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiEnumerateLeafPtes @ 0x140079AD8 (MiEnumerateLeafPtes.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiIsVadEligibleForCommitRelease @ 0x14020B2A0 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14020B5F4 (MiLogResetPagesCommitRelease.c)
 */

LONG __fastcall MiReleaseCommitForResetPages(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  LONG *SharedVm; // rax
  struct _KTHREAD *v5; // rbp
  LONG *v6; // r13
  __int64 v7; // r15
  _QWORD *v8; // rax
  unsigned __int64 v9; // rsi
  LONG *v10; // rbx
  KIRQL v11; // al
  unsigned __int8 v12; // di
  _QWORD *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  LONG *v16; // rbx
  KIRQL v17; // al
  unsigned __int64 v18; // rcx
  struct _KEVENT *v19; // rbx
  ULONG_PTR v21; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-A0h]
  __int64 v23; // [rsp+40h] [rbp-98h]
  $5BC46E0569261879018906DEC3127961 v24; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v25[48]; // [rsp+78h] [rbp-60h] BYREF

  CurrentThread = KeGetCurrentThread();
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex )
    KeBugCheckEx(5u, BugCheckParameter1, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 1u, (__int64)v25);
  SharedVm = MiGetSharedVm(BugCheckParameter1 + 1280);
  v5 = KeGetCurrentThread();
  v6 = SharedVm;
  v7 = *((_QWORD *)SharedVm + 4);
  v22 = 0LL;
  v23 = 0LL;
  v21 = BugCheckParameter1 + 1280;
  if ( (*(_DWORD *)(v7 + 48) & 1) != 0 )
  {
    --v5->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 872, 0LL);
    LOBYTE(v5[1].Queue) |= 1u;
    v8 = *(_QWORD **)(BugCheckParameter1 + 1576);
    v9 = 0LL;
    while ( v8 )
    {
      v9 = (unsigned __int64)v8;
      v8 = (_QWORD *)*v8;
    }
    while ( v9 )
    {
      --v5->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v9 + 40, 0LL);
      LOBYTE(v5[1].Queue) |= 0x80u;
      if ( MiIsVadEligibleForCommitRelease(v9) )
      {
        v10 = MiGetSharedVm(BugCheckParameter1 + 1280);
        v11 = ExAcquireSpinLockExclusive(v10);
        v10[1] = 0;
        LOBYTE(v22) = v11;
        v12 = v11;
        MiEnumerateLeafPtes(
          (((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32) | *(unsigned int *)(v9 + 24)) << 12,
          (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) << 12,
          (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiReleaseCommitForResetPageCallback,
          (__int64)&v21,
          0);
        MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v12);
      }
      MiUnlockVad((__int64)v5, v9);
      v13 = *(_QWORD **)(v9 + 8);
      v14 = v9;
      if ( v13 )
      {
        do
        {
          v9 = (unsigned __int64)v13;
          v13 = (_QWORD *)*v13;
        }
        while ( v13 );
      }
      else
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v9 || *(_QWORD *)v9 == v14 )
            break;
          v14 = v9;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE((__int64)v5, BugCheckParameter1);
  }
  v15 = _InterlockedExchange64((volatile __int64 *)(BugCheckParameter1 + 1496), 0LL);
  if ( v15 )
    MiReturnCommit(*(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(BugCheckParameter1 + 1452)), v15);
  v16 = MiGetSharedVm(BugCheckParameter1 + 1280);
  v17 = ExAcquireSpinLockExclusive(v16);
  v16[1] = 0;
  v18 = *(_QWORD *)(v7 + 32);
  v19 = *(struct _KEVENT **)(v7 + 40);
  *(_QWORD *)(v7 + 40) = 0LL;
  if ( v18 <= v15 )
    *(_QWORD *)(v7 + 32) = 0LL;
  else
    *(_QWORD *)(v7 + 32) = v18 - v15;
  *((_QWORD *)v6 + 1) += v15;
  MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v17);
  MiLogResetPagesCommitRelease();
  v24.SavedApcState.Process = 0LL;
  KiUnstackDetachProcess(&v24, 1LL);
  return KeSetEvent(v19, 0, 0);
}
