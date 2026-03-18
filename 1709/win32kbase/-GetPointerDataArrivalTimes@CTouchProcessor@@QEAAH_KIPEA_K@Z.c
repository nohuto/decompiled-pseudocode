/*
 * XREFs of ?GetPointerDataArrivalTimes@CTouchProcessor@@QEAAH_KIPEA_K@Z @ 0x1C011F950
 * Callers:
 *     ?GetPointerFrameArrivalTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEA_K@Z @ 0x1C01200E4 (-GetPointerFrameArrivalTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEA_K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0119394 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01216B0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataArrivalTimes(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  PDEVICE_OBJECT v8; // rcx
  unsigned __int16 v9; // r9
  PERESOURCE *v10; // rcx
  struct CPointerInputFrame *FrameById; // rdx
  struct CPointerInputFrame *i; // rax
  unsigned int v14; // r10d
  unsigned int v15; // r11d
  PERESOURCE *v16; // rcx
  __int64 v17; // [rsp+50h] [rbp-28h] BYREF
  int v18; // [rsp+58h] [rbp-20h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x8Au,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v17, (CTouchProcessor *)((char *)this + 224));
  if ( !a2 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
LABEL_7:
      if ( !v18 )
      {
        v10 = (PERESOURCE *)v17;
        *(_QWORD *)(v17 + 32) = 0LL;
        ExReleaseResourceAndLeaveCriticalRegion(*v10);
      }
      return 0LL;
    }
    v9 = 139;
LABEL_6:
    WPP_RECORDER_SF_(
      (__int64)v8->DeviceExtension,
      5u,
      0xBu,
      v9,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    goto LABEL_7;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    v8 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_7;
    v9 = 140;
    goto LABEL_6;
  }
  if ( a3 > *(_DWORD *)(*((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a2 + 32) + 316) )
  {
    v8 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_7;
    v9 = 141;
    goto LABEL_6;
  }
  *a4 = *((_QWORD *)FrameById + 9);
  if ( a3 > 1 )
  {
    for ( i = CTouchProcessor::GetPreviousFrameByDeviceInt(this, FrameById);
          v14 < a3 && i && v15 > 1;
          i = CTouchProcessor::GetPreviousFrameByDeviceInt(this, i) )
    {
      a4[v14] = *((_QWORD *)i + 9);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x8Eu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  if ( !v18 )
  {
    v16 = (PERESOURCE *)v17;
    *(_QWORD *)(v17 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v16);
  }
  return 1LL;
}
