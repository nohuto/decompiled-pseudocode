/*
 * XREFs of ?GetPointerDataArrivalTimes@CTouchProcessor@@QEAAH_KIPEA_K@Z @ 0x1C0120A40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C011A5C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01220E0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataArrivalTimes(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  __int64 v6; // rsi
  struct CPointerInputFrame *FrameById; // rdx
  PDEVICE_OBJECT v9; // rcx
  int v10; // r9d
  PERESOURCE *v11; // rcx
  struct CPointerInputFrame *i; // rax
  unsigned int v14; // r10d
  unsigned int v15; // r11d
  PERESOURCE *v16; // rcx
  __int64 v17; // [rsp+50h] [rbp-28h] BYREF
  int v18; // [rsp+58h] [rbp-20h]

  v6 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      138,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v17, (CTouchProcessor *)((char *)this + 200));
  if ( !v6 )
  {
    v9 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
LABEL_7:
      if ( !v18 )
      {
        v11 = (PERESOURCE *)v17;
        *(_QWORD *)(v17 + 32) = 0LL;
        ExReleaseResourceAndLeaveCriticalRegion(*v11);
      }
      return 0LL;
    }
    v10 = 139;
LABEL_6:
    LOBYTE(FrameById) = 5;
    WPP_RECORDER_SF_(
      v9->DeviceExtension,
      (_DWORD)FrameById,
      11,
      v10,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    goto LABEL_7;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(v6 + 28));
  if ( !FrameById )
  {
    v9 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_7;
    v10 = 140;
    goto LABEL_6;
  }
  if ( a3 > *(_DWORD *)(*((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(v6 + 32) + 316) )
  {
    v9 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_7;
    v10 = 141;
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
  {
    LOBYTE(FrameById) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)FrameById,
      11,
      142,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  if ( !v18 )
  {
    v16 = (PERESOURCE *)v17;
    *(_QWORD *)(v17 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v16);
  }
  return 1LL;
}
