/*
 * XREFs of ?GetPointerDataArrivalTimes@CTouchProcessor@@QEAAH_KIPEA_K@Z @ 0x1C0114510
 * Callers:
 *     ?GetPointerFrameArrivalTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEA_K@Z @ 0x1C0114DA4 (-GetPointerFrameArrivalTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEA_K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C784 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01115A4 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C0113DCC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C0116790 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataArrivalTimes(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  PDEVICE_OBJECT v10; // rcx
  unsigned __int16 v11; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct CPointerInputFrame *FrameById; // r15
  __int64 v16; // rax
  CPointerInfoNode *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int HistoryCount; // r14d
  unsigned int v21; // r12d
  const struct CPointerInputFrame *i; // rax
  CInpLockGuard *v23; // [rsp+50h] [rbp-38h] BYREF
  int v24; // [rsp+58h] [rbp-30h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x99u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v23, (CTouchProcessor *)((char *)this + 72));
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
  if ( !a2 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
LABEL_9:
      if ( !v24 )
        CInpLockGuard::UnLock((PERESOURCE *)v23);
      return 0LL;
    }
    v11 = 154;
LABEL_8:
    WPP_RECORDER_SF_(
      (__int64)v10->DeviceExtension,
      5u,
      0xBu,
      v11,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    goto LABEL_9;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_9;
    v11 = 155;
    goto LABEL_8;
  }
  v16 = *(unsigned int *)(a2 + 32);
  if ( (unsigned int)v16 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
    v16 = *(unsigned int *)(a2 + 32);
  }
  v17 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 12) + 576 * v16);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v17) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
  if ( (*(_DWORD *)v17 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
  HistoryCount = CPointerInfoNode::GetHistoryCount(v17, v18);
  if ( a3 > HistoryCount )
  {
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_9;
    v11 = 156;
    goto LABEL_8;
  }
  *a4 = *((_QWORD *)FrameById + 9);
  v21 = 1;
  if ( a3 > 1 )
  {
    for ( i = CTouchProcessor::GetPreviousFrameByDevice(this, FrameById);
          v21 < a3 && i && HistoryCount > 1;
          i = CTouchProcessor::GetPreviousFrameByDevice(this, i) )
    {
      a4[v21++] = *((_QWORD *)i + 9);
      --HistoryCount;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x9Du,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  if ( !v24 )
    CInpLockGuard::UnLock((PERESOURCE *)v23);
  return 1LL;
}
