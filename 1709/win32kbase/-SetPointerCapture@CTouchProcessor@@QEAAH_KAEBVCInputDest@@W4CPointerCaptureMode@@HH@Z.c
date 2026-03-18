/*
 * XREFs of ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C0125E1C
 * Callers:
 *     ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHUtagMSG@@@Z @ 0x1C0119C20 (-AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHUtagMSG@@@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0121A10 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z @ 0x1C0125480 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0017190 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C01252E4 (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerCapture(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v10; // rcx
  __int64 v12; // rbx
  CTouchProcessor *v13; // rcx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x4Fu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 )
  {
    v12 = (a6 != 0 ? 0xD8 : 0) + v10 + 32;
    if ( !CInputDest::operator==((int *)(v12 + 8), a3) )
    {
      if ( *(_DWORD *)(v12 + 100) )
        CTouchProcessor::ReleasePointerCaptureInt(v13, (struct CPointerCaptureInfo *)v12);
      CInputDest::operator=(v12 + 8, a3);
    }
    *(_DWORD *)(v12 + 208) = a5;
    *(_DWORD *)v12 = a4;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x52u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    return 1LL;
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), 2u, 0xBu, 0x50u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x51u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    return 0LL;
  }
}
