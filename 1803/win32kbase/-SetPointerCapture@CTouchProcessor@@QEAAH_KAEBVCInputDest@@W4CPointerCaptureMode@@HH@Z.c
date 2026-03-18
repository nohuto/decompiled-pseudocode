/*
 * XREFs of ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C011BAA0
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C011B080 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C011BC38 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C011C9A4 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003704C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C011AE00 (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerCapture(__int64 a1, __int64 a2, _DWORD *a3, int a4, int a5, int a6)
{
  PDEVICE_OBJECT v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx

  v10 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x5Bu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  if ( *(struct _KTHREAD **)(a1 + 104) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2);
  if ( !*a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2);
  if ( (unsigned int)(a4 - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2);
  if ( *(struct _KTHREAD **)(a1 + 104) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2);
  v11 = *(_QWORD *)(a2 + 40);
  if ( v11 )
  {
    v13 = v11 + (a6 != 0 ? 232LL : 32LL);
    if ( !CInputDest::operator==((unsigned int *)(v13 + 8), (__int64)a3) )
    {
      if ( *(_DWORD *)(v13 + 92) )
      {
        CTouchProcessor::ReleasePointerCaptureInt((struct _KTHREAD **)a1, (struct CPointerCaptureInfo *)v13);
        if ( *(_DWORD *)(v13 + 92) )
        {
          if ( a4 != 2 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
        }
      }
      CInputDest::operator=(v13 + 8, (__int64)a3);
    }
    *(_DWORD *)(v13 + 192) = a5;
    *(_DWORD *)v13 = a4;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x5Eu,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    return 1LL;
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), 2u, 0xBu, 0x5Cu, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x5Du,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    return 0LL;
  }
}
