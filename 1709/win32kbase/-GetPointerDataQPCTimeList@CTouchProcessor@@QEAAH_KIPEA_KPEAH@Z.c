/*
 * XREFs of ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C011FB70
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01212B0 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0119394 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01216B0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataQPCTimeList(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        int *a5)
{
  PDEVICE_OBJECT v9; // rcx
  unsigned __int16 v10; // r9
  struct CPointerInputFrame *FrameById; // r9
  __int64 v12; // rcx
  unsigned int v13; // ebx
  unsigned int v14; // ebp
  unsigned int v15; // r15d
  unsigned int v16; // r10d
  struct CPointerInputFrame *PreviousFrameByDeviceInt; // r11
  unsigned __int64 *v18; // r14
  __int64 v19; // rdx
  PERESOURCE *v20; // rcx
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+38h] [rbp-30h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x84u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v22, (CTouchProcessor *)((char *)this + 224));
  if ( !a2 )
  {
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v10 = 133;
LABEL_17:
      WPP_RECORDER_SF_(
        (__int64)v9->DeviceExtension,
        5u,
        0xBu,
        v10,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      goto LABEL_18;
    }
    goto LABEL_18;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v10 = 134;
      goto LABEL_17;
    }
LABEL_18:
    v13 = 0;
    goto LABEL_27;
  }
  v12 = *((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a2 + 32);
  if ( a5 && *a5 && (*(_DWORD *)(v12 + 260) & 0x400000) == 0 )
  {
    *a5 = 0;
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v10 = 135;
      goto LABEL_17;
    }
    goto LABEL_18;
  }
  if ( a3 > *(_DWORD *)(v12 + 316) )
  {
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v10 = 136;
      goto LABEL_17;
    }
    goto LABEL_18;
  }
  v13 = 1;
  *a4 = *(_QWORD *)(v12 + 328);
  v14 = 1;
  if ( a3 > 1 )
  {
    v15 = *(_DWORD *)(v12 + 400);
    PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(this, FrameById);
    v18 = a4 + 1;
    do
    {
      if ( !PreviousFrameByDeviceInt )
        break;
      if ( v16 <= 1 )
        break;
      ++v14;
      v19 = *((_QWORD *)PreviousFrameByDeviceInt + 12) + 608LL * v15;
      *v18++ = *(_QWORD *)(v19 + 328);
      v15 = *(_DWORD *)(v19 + 400);
      PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(this, PreviousFrameByDeviceInt);
    }
    while ( v14 < a3 );
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x89u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
LABEL_27:
  if ( !v23 )
  {
    v20 = (PERESOURCE *)v22;
    *(_QWORD *)(v22 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v20);
  }
  return v13;
}
