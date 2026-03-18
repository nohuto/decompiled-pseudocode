/*
 * XREFs of ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C0112C94
 * Callers:
 *     ?GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01123EC (-GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0112560 (-GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C01126B0 (-GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01128F8 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0112A84 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C011384C (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C0113A3C (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 * Callees:
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0035E70 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0036E3C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C006C000 (ApiSetEditionHandleHungWindow.c)
 *     EtwTraceBeginPointerMessageGeneration @ 0x1C00AB730 (EtwTraceBeginPointerMessageGeneration.c)
 *     EtwTraceEndPointerMessageGeneration @ 0x1C00ABF10 (EtwTraceEndPointerMessageGeneration.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C010990C (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01099AC (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0109B34 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C0118130 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0118E74 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C011AA94 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DF60 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     IsPointerInputMessage @ 0x1C011F640 (IsPointerInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessage(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        CInputDest *a8)
{
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  HWND WindowHandle; // rax
  __int64 v17; // rdx
  CInputDest *v18; // rcx
  HWND v19; // r10
  int v21; // r9d
  PDEVICE_OBJECT v22; // rcx
  unsigned __int16 v23; // r9
  const struct CPointerInputFrame *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // r15d
  unsigned __int64 v28; // r14
  __int64 v29; // r8
  __int64 v30; // rdx
  int v31; // eax
  struct tagTHREADINFO *ThreadInfo; // rax
  __int16 v33; // [rsp+40h] [rbp-58h]
  unsigned __int16 v34; // [rsp+42h] [rbp-56h]

  v12 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x11Du,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v33 = *(_WORD *)(a2 + 236);
  v34 = *(_WORD *)(a2 + 224);
  if ( a4 )
  {
    if ( !(unsigned int)IsPointerInputMessage(a4) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
  }
  else
  {
    a4 = CTouchProcessor::PointerFlagsToMessage((CTouchProcessor *)a1, *(_DWORD *)(a2 + 244));
    if ( !a4 )
    {
      WPP_RECORDER_SF_(a1[1], 4u, 0xBu, 0x11Eu, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0x11Fu,
          (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      goto LABEL_16;
    }
  }
  if ( *(_DWORD *)a8 )
    goto LABEL_26;
  if ( !*(_DWORD *)(a2 + 476) )
    goto LABEL_12;
  WindowHandle = CInputDest::GetWindowHandle((CInputDest *)(a2 + 392));
  if ( WindowHandle == v19 )
  {
    if ( a7 || (*(_DWORD *)a2 & 0x800) != 0 || CInputDest::CanCallerAccessDestination(v18, v17) )
LABEL_12:
      CInputDest::operator=((__int64)a8, a2 + 392);
  }
  else
  {
    if ( a7 || (v21 = 2, (*(_DWORD *)a2 & 0x800) != 0) )
      v21 = 1;
    if ( !CInputDest::SetupFromInputDestAndWindow(a8, a2 + 392, v19, v21) )
      CInputDest::SetEmpty(a8);
  }
  if ( !*(_DWORD *)a8 )
  {
    WPP_RECORDER_SF_(a1[1], 4u, 0xBu, 0x120u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v22 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
LABEL_16:
      CInputDest::SetEmpty(a8);
      return 0LL;
    }
    v23 = 289;
LABEL_25:
    WPP_RECORDER_SF_(
      (__int64)v22->DeviceExtension,
      5u,
      0xBu,
      v23,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    goto LABEL_16;
  }
LABEL_26:
  v24 = 0LL;
  if ( *((_DWORD *)a8 + 21) )
    goto LABEL_33;
  if ( !a3 )
  {
    WPP_RECORDER_SF_(a1[1], 4u, 0xBu, 0x122u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v22 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_16;
    v23 = 291;
    goto LABEL_25;
  }
  v24 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)a1, *(_DWORD *)(a3 + 28));
  if ( v24 )
  {
LABEL_33:
    EtwTraceBeginPointerMessageGeneration(v34, v33, v15);
    v27 = 0;
    if ( v24 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25);
      CTouchProcessor::UnreferenceFrame((CTouchProcessor *)a1, v24);
      v28 = a3;
    }
    else
    {
      v28 = a3;
      v27 = CTouchProcessor::PostPointerMessage(
              (CTouchProcessor *)a1,
              a8,
              (const struct CPointerInfoNode *)a2,
              a3,
              a4,
              a5,
              a6,
              a7);
    }
    if ( v27 )
    {
      if ( (int)IsInkProcessorOnPointerMessagePostedSupported() >= 0 )
        InkProcessorOnPointerMessagePosted(a4, v28);
      v31 = *(_DWORD *)(a2 + 244);
      if ( (v31 & 0x2000) != 0 && (v31 & 0x10000) != 0 )
      {
        PoLatencySensitivityHint(2LL, v30);
        ThreadInfo = CInputDest::GetThreadInfo(a8);
        if ( ThreadInfo )
        {
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, ThreadInfo, 0);
          ApiSetEditionHandleHungWindow((__int64)a8);
        }
      }
    }
    EtwTraceEndPointerMessageGeneration(v34, v33, v29);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x126u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v12 = v27;
  }
  else
  {
    WPP_RECORDER_SF_(a1[1], 4u, 0xBu, 0x124u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x125u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  }
  CInputDest::SetEmpty(a8);
  return v12;
}
