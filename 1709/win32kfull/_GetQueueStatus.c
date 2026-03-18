/*
 * XREFs of _GetQueueStatus @ 0x1C00A01B0
 * Callers:
 *     NtUserCallOneParam @ 0x1C00A0120 (NtUserCallOneParam.c)
 *     NtUserGetThreadState @ 0x1C00F4C30 (NtUserGetThreadState.c)
 * Callees:
 *     xxxDrainQueueCompletions @ 0x1C00A0344 (xxxDrainQueueCompletions.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall GetQueueStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int16 v5; // di
  _QWORD *v6; // rbx
  _QWORD *ThreadWin32Thread; // rax
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // r14
  tagObjLock *v10; // r15
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // esi
  int v14; // ebp
  __int64 v15; // rax
  unsigned int v16; // ebx
  int v17; // edi
  unsigned int v18; // eax

  CurrentThread = KeGetCurrentThread();
  v5 = a1;
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = (_QWORD *)*ThreadWin32Thread;
  }
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
  v10 = (tagObjLock *)(v6 + 46);
  v11 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v11);
  tagObjLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive((tagObjLock *)(v6 + 46));
  if ( v6[178] && (v5 & 8) != 0 )
    xxxDrainQueueCompletions(1LL);
  v12 = v6[53];
  v13 = v5 & 0x5DFF;
  v14 = *(unsigned __int16 *)(v12 + 4);
  *(_WORD *)(v12 + 4) = v14 & ~(v5 & 0x5DFF);
  v15 = v6[53];
  v16 = *(unsigned __int16 *)(v15 + 8);
  v17 = *(unsigned __int16 *)(v15 + 6);
  v18 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v18);
  tagObjLock::UnLock(v10);
  tagObjLock::UnLock(DomainLockRef);
  return v13 & v14 | ((v13 & (v17 | v16)) << 16);
}
