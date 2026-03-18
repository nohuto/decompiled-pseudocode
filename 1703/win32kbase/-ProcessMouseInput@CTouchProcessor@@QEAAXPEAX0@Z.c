/*
 * XREFs of ?ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z @ 0x1C0124E98
 * Callers:
 *     ?SendToTouchProcessor@CMouseAsTouchAdapter@@AEAAXUtagPOINT@@0IJ_KG@Z @ 0x1C0132A14 (-SendToTouchProcessor@CMouseAsTouchAdapter@@AEAAXUtagPOINT@@0IJ_KG@Z.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011C1B8 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011DE10 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C012594C (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 */

void __fastcall CTouchProcessor::ProcessMouseInput(CTouchProcessor *this, void *a2, struct RIMCOMPLETEFRAME *a3)
{
  __int64 v3; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  LARGE_INTEGER v12; // rcx
  LARGE_INTEGER v13; // rbx
  LARGE_INTEGER v14; // r8
  int v15; // edx
  struct CPointerInputFrame *v16; // rax
  void *v17; // rdx
  int v18; // edx
  PDEVICE_OBJECT v19; // rcx
  int v20; // r9d
  const struct CPointerInputFrame *v21; // rax
  int v22; // edx
  const struct CPointerInputFrame *v23; // r8
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  struct _ERESOURCE *v27; // rcx
  int v28[2]; // [rsp+20h] [rbp-38h]
  int v29; // [rsp+20h] [rbp-38h]

  v3 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v11 = PsGetCurrentThreadWin32Thread(v9, v8, v10);
  if ( v11 )
  {
    v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      v29 = 0;
      LOBYTE(v12.LowPart) = byte_1C0186D98 - 1;
      Template_xqx(
        v12.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v14.QuadPart,
        v13.QuadPart,
        v29,
        gullUserCritAcquireToken);
    }
    if ( v13.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      v28[0] = 1000 * v13.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v14.QuadPart,
        0LL,
        *(_QWORD *)v28,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  CInpLockGuard::LockExclusive((PERESOURCE *)(v3 + 200));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      11,
      22,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  v16 = CTouchProcessor::CommitRimCompleteFrame((CTouchProcessor *)v3, a3, 0, 0);
  if ( v16 )
  {
    v21 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)v3, v17, v16, 0);
    v23 = v21;
    if ( v21 )
    {
      v24 = (_QWORD *)((char *)v21 + 24);
      v25 = (_QWORD *)((char *)gptiCurrent + 1008);
      v26 = *((_QWORD *)gptiCurrent + 126);
      if ( *(struct tagTHREADINFO **)(v26 + 8) != (struct tagTHREADINFO *)((char *)gptiCurrent + 1008) )
        __fastfail(3u);
      *v24 = v26;
      v24[1] = v25;
      *(_QWORD *)(v26 + 8) = v24;
      *v25 = v24;
      CTouchProcessor::DoContactVisualizationAndGenerateMessages((CTouchProcessor *)v3, 0LL, v23, a2, 1, 0, 0);
      v19 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v20 = 27;
        goto LABEL_26;
      }
    }
    else
    {
      LOBYTE(v22) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v3 + 8), v22, 11, 25, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v19 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v20 = 26;
        goto LABEL_26;
      }
    }
  }
  else
  {
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(v3 + 8),
      (_DWORD)v17,
      11,
      23,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v19 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v20 = 24;
LABEL_26:
      LOBYTE(v18) = 5;
      WPP_RECORDER_SF_(v19->DeviceExtension, v18, 11, v20, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    }
  }
  v27 = *(struct _ERESOURCE **)(v3 + 200);
  *(_QWORD *)(v3 + 232) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v27);
  UserSessionSwitchLeaveCrit();
}
