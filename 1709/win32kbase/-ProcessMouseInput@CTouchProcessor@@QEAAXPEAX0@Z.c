/*
 * XREFs of ?ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z @ 0x1C01244F0
 * Callers:
 *     ?SendToTouchProcessor@CMouseAsTouchAdapter@@AEAAXUtagPOINT@@0IJ_KG@Z @ 0x1C0132134 (-SendToTouchProcessor@CMouseAsTouchAdapter@@AEAAXUtagPOINT@@0IJ_KG@Z.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011B014 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011CC50 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C0124F20 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 */

void __fastcall CTouchProcessor::ProcessMouseInput(
        CTouchProcessor *this,
        void *a2,
        struct RIMCOMPLETEFRAME *a3,
        __int64 a4)
{
  __int64 v4; // rsi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rdi
  __int64 *DomainLockRef; // rbx
  struct CPointerInputFrame *v15; // rax
  void *v16; // rdx
  PDEVICE_OBJECT v17; // rcx
  unsigned __int16 v18; // r9
  const struct CPointerInputFrame *v19; // rax
  const struct CPointerInputFrame *v20; // r8
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  struct _ERESOURCE *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  tagObjLock *v29; // [rsp+70h] [rbp+8h] BYREF

  v29 = this;
  v4 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v10, v9, v11, v12);
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v29);
  v13 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v13[2];
      v13[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v13);
      RIMLockExclusive((__int64)DomainLockRef);
      v13 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v29);
  CInpLockGuard::LockExclusive((PERESOURCE *)(v4 + 224));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x16u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v15 = CTouchProcessor::CommitRimCompleteFrame((CTouchProcessor *)v4, a3, 0, 0);
  if ( v15 )
  {
    v19 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)v4, v16, v15, 0);
    v20 = v19;
    if ( v19 )
    {
      v21 = (_QWORD *)((char *)v19 + 24);
      v22 = (_QWORD *)((char *)gptiCurrent + 1096);
      v23 = *((_QWORD *)gptiCurrent + 137);
      if ( *(struct tagTHREADINFO **)(v23 + 8) != (struct tagTHREADINFO *)((char *)gptiCurrent + 1096) )
        __fastfail(3u);
      *v21 = v23;
      v21[1] = v22;
      *(_QWORD *)(v23 + 8) = v21;
      *v22 = v21;
      CTouchProcessor::DoContactVisualizationAndGenerateMessages((CTouchProcessor *)v4, 0LL, v20, a2, 1, 0, 0);
      v17 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v18 = 27;
        goto LABEL_18;
      }
    }
    else
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 8), 2u, 0xBu, 0x19u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v17 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v18 = 26;
        goto LABEL_18;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v4 + 8), 2u, 0xBu, 0x17u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v17 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v18 = 24;
LABEL_18:
      WPP_RECORDER_SF_(
        (__int64)v17->DeviceExtension,
        5u,
        0xBu,
        v18,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    }
  }
  v24 = *(struct _ERESOURCE **)(v4 + 224);
  *(_QWORD *)(v4 + 256) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v24);
  UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
}
