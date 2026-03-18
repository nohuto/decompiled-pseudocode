/*
 * XREFs of ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C012683C
 * Callers:
 *     ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHUtagMSG@@@Z @ 0x1C011AE40 (-AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHUtagMSG@@@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01223C0 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z @ 0x1C0125E7C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0047DD0 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C0125D14 (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerCapture(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v8; // rbx
  __int64 v10; // rcx
  int v11; // edx
  __int64 v13; // rbx
  int v14; // edx
  CTouchProcessor *v15; // rcx

  v8 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      79,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  v10 = *(_QWORD *)(v8 + 40);
  if ( v10 )
  {
    v13 = v10 + (a6 != 0 ? 248LL : 32LL);
    if ( !CInputDest::operator==((int *)(v13 + 8), a3) )
    {
      if ( *(_DWORD *)(v13 + 100) )
        CTouchProcessor::ReleasePointerCaptureInt(v15, (struct CPointerCaptureInfo *)v13);
      CInputDest::operator=(v13 + 8, a3);
    }
    *(_DWORD *)(v13 + 208) = a5;
    *(_DWORD *)v13 = a4;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v14) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        11,
        82,
        (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    }
    return 1LL;
  }
  else
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), a2, 11, 80, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v11) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        11,
        81,
        (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    }
    return 0LL;
  }
}
