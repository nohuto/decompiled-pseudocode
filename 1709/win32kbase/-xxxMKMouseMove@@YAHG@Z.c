/*
 * XREFs of ?xxxMKMouseMove@@YAHG@Z @ 0x1C01181F0
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
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C013B86C (ApiSetEditionSetAccessibilityTimer.c)
 */

__int64 __fastcall xxxMKMouseMove(__int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ecx
  int v5; // edx
  int v6; // eax
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
  void (__fastcall *v19)(struct tagWND *, unsigned int, unsigned __int64, __int64); // r8
  tagObjLock *v21; // [rsp+48h] [rbp+10h] BYREF

  if ( (gdwPUDFlags & 0x2000) == 0 || !gtmridMKMoveCursor )
  {
    gMKDeltaX = (char)a1;
    gMKDeltaY = SHIBYTE(a1);
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, a2, a3, a4);
    v4 = gMKDeltaX;
    v5 = gMKDeltaY;
    if ( (dword_1C018F8C4 & 0x40) != 0
      && (((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) & 0xC) != 0 )
    {
      v6 = 4 * (unsigned __int8)byte_1C018F802;
      v4 = v6 * gMKDeltaX;
      v5 = v6 * gMKDeltaY;
    }
    MouseMove(v4, v5);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8, v7, v9, v10);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v12 = EnterCritAvoidingDitHitTestHazard(0, 1);
    EtwTraceAcquiredExclusiveUserCrit(v14, v13, v15, v16);
    gptiCurrent = v12;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v21);
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
    tagObjLock::UnLock(v21);
    if ( !dword_1C018F8F8 || (gdwPUDFlags & 0x2000) != 0 )
    {
      giMouseMoveTable = 0;
      v19 = xxxMKMoveConstCursorTimer;
      if ( gMouseCursor[0] )
        v19 = xxxMKMoveAccelCursorTimer;
      gtmridMKMoveCursor = ApiSetEditionSetAccessibilityTimer(gtmridMKMoveCursor, 50LL, v19);
    }
  }
  return 0LL;
}
