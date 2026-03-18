/*
 * XREFs of ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C0120C60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C011A5C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01220E0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataQPCTimeList(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        int *a5)
{
  __int64 v7; // rbx
  int v9; // edx
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d
  struct CPointerInputFrame *FrameById; // r9
  __int64 v13; // rcx
  unsigned int v14; // ebx
  unsigned int v15; // ebp
  unsigned int v16; // r15d
  unsigned int v17; // r10d
  struct CPointerInputFrame *PreviousFrameByDeviceInt; // r11
  unsigned __int64 *v19; // r14
  __int64 v20; // rdx
  PERESOURCE *v21; // rcx
  __int64 v23; // [rsp+30h] [rbp-38h] BYREF
  int v24; // [rsp+38h] [rbp-30h]

  v7 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      132,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v23, (CTouchProcessor *)((char *)this + 200));
  if ( !v7 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 133;
LABEL_17:
      LOBYTE(v9) = 5;
      WPP_RECORDER_SF_(v10->DeviceExtension, v9, 11, v11, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      goto LABEL_18;
    }
    goto LABEL_18;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(v7 + 28));
  if ( !FrameById )
  {
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 134;
      goto LABEL_17;
    }
LABEL_18:
    v14 = 0;
    goto LABEL_27;
  }
  v9 = (int)a5;
  v13 = *((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(v7 + 32);
  if ( a5 && *a5 && (*(_DWORD *)(v13 + 260) & 0x400000) == 0 )
  {
    *a5 = 0;
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 135;
      goto LABEL_17;
    }
    goto LABEL_18;
  }
  if ( a3 > *(_DWORD *)(v13 + 316) )
  {
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 136;
      goto LABEL_17;
    }
    goto LABEL_18;
  }
  v14 = 1;
  *a4 = *(_QWORD *)(v13 + 328);
  v15 = 1;
  if ( a3 > 1 )
  {
    v16 = *(_DWORD *)(v13 + 400);
    PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(this, FrameById);
    v19 = a4 + 1;
    do
    {
      if ( !PreviousFrameByDeviceInt )
        break;
      if ( v17 <= 1 )
        break;
      ++v15;
      v20 = *((_QWORD *)PreviousFrameByDeviceInt + 12) + 608LL * v16;
      *v19++ = *(_QWORD *)(v20 + 328);
      v16 = *(_DWORD *)(v20 + 400);
      PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(this, PreviousFrameByDeviceInt);
    }
    while ( v15 < a3 );
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      11,
      137,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
LABEL_27:
  if ( !v24 )
  {
    v21 = (PERESOURCE *)v23;
    *(_QWORD *)(v23 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v21);
  }
  return v14;
}
