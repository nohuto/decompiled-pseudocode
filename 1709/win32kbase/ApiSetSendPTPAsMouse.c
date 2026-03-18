/*
 * XREFs of ApiSetSendPTPAsMouse @ 0x1C013CD30
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C012AD40 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     SynthesizeMouseInput @ 0x1C0012330 (SynthesizeMouseInput.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 */

void __fastcall ApiSetSendPTPAsMouse(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rsi
  int v11; // edi
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rdi
  __int64 *DomainLockRef; // rbx
  tagObjLock *v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h] BYREF
  __int64 v27; // [rsp+40h] [rbp-10h]
  __int64 v28; // [rsp+48h] [rbp-8h]
  int v29; // [rsp+84h] [rbp+34h]

  v29 = HIDWORD(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xD4u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsSendPTPAsMouseSupported() < 0 )
  {
    v26 = 0x800000LL;
    v27 = 0LL;
    v28 = 0LL;
    if ( (a2 & 2) != 0 )
    {
      WORD2(v26) = 1;
    }
    else
    {
      switch ( a2 )
      {
        case 4u:
          WORD2(v26) = 2;
          break;
        case 8u:
          WORD2(v26) = 4;
          break;
        case 0x10u:
          WORD2(v26) = 8;
          break;
      }
    }
    v10 = a3 * gliQpcFreq.QuadPart / 0x3E8uLL;
    v11 = a2 & 1;
    if ( v11 )
    {
      LODWORD(v28) = v29;
      HIDWORD(v27) = a1;
    }
    v12 = 8 * (v11 ^ 1) + 1888;
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit(
      (unsigned int)gdwInAtomicOperation,
      ((unsigned __int64)(a3 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64,
      v8,
      v9);
    SynthesizeMouseInput(a4, (__int64)&v26, a3, v10, v12);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14, v13, v15, v16);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v18 = EnterCritAvoidingDitHitTestHazard(0, 1);
    EtwTraceAcquiredExclusiveUserCrit(v20, v19, v21, v22);
    gptiCurrent = v18;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v25);
    v23 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      DomainLockRef = GetDomainLockRef(8);
      do
      {
        gpducstulHead = v23[2];
        v23[2] = 0LL;
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v23);
        RIMLockExclusive((__int64)DomainLockRef);
        v23 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v25);
  }
  else
  {
    SendPTPAsMouse(a4, a1, a2, a3);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xD5u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
}
