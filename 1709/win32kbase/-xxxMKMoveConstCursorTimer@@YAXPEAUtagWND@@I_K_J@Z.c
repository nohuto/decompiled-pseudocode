/*
 * XREFs of ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0118540
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     MouseMove @ 0x1C012E340 (MouseMove.c)
 */

void __fastcall xxxMKMoveConstCursorTimer(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  int v5; // ebx
  unsigned int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rdi
  __int64 *DomainLockRef; // rbx
  tagObjLock *v19; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_1C018F8C4 & 0x40) == 0 )
    goto LABEL_6;
  v4 = gLockBits | gLatchBits | gPhysModifierState;
  if ( (v4 & 3) != 0 )
  {
    v5 = 1;
    goto LABEL_7;
  }
  if ( (v4 & 0xC) == 0 )
  {
LABEL_6:
    v6 = giMouseMoveTable % (unsigned int)(unsigned __int8)byte_1C018F801;
    v5 = (unsigned __int8)byte_1C018F802[v6];
    a2 = v6 + 1;
    giMouseMoveTable = a2;
    if ( !v5 )
      return;
    goto LABEL_7;
  }
  v5 = 4 * (unsigned __int8)byte_1C018F802[0];
LABEL_7:
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, a2, a3, a4);
  MouseMove(v5 * gMKDeltaX, v5 * gMKDeltaY);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8, v7, v9, v10);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v12 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v14, v13, v15, v16);
  gptiCurrent = v12;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v19);
  v17 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v17[2];
      v17[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v17);
      RIMLockExclusive((__int64)DomainLockRef);
      v17 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v19);
}
