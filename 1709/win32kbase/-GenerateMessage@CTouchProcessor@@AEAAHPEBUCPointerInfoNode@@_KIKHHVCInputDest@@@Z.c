/*
 * XREFs of ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011E310
 * Callers:
 *     ?GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011DACC (-GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C011DC30 (-GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C011DD78 (-GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011DF7C (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011E104 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C011EEA8 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C011F058 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00114B0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0017230 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C0094200 (ApiSetEditionHandleHungWindow.c)
 *     EtwTraceBeginPointerMessageGeneration @ 0x1C00DFD60 (EtwTraceBeginPointerMessageGeneration.c)
 *     EtwTraceEndPointerMessageGeneration @ 0x1C00E0290 (EtwTraceEndPointerMessageGeneration.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C01170A8 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C011716C (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01172CC (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C0122A64 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01233C8 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionPostNonMinUserInputMessage @ 0x1C013B248 (ApiSetEditionPostNonMinUserInputMessage.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        CInputDest *a8)
{
  unsigned __int64 v8; // rbx
  unsigned int v12; // edi
  PDEVICE_OBJECT v13; // rcx
  unsigned __int16 v14; // r9
  HWND WindowHandle; // rax
  CInputDest *v17; // rcx
  HWND v18; // r10
  __int64 v19; // r9
  struct CPointerInputFrame *v20; // r15
  struct CPointerInputFrame *FrameById; // rax
  __int64 v22; // r8
  int v23; // r13d
  struct _ERESOURCE *v24; // rcx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  int v35; // eax
  struct tagTHREADINFO *ThreadInfo; // rax
  __int16 v37; // [rsp+40h] [rbp-118h]
  unsigned __int16 v38; // [rsp+42h] [rbp-116h]
  _OWORD v40[8]; // [rsp+50h] [rbp-108h] BYREF
  _OWORD v41[8]; // [rsp+D0h] [rbp-88h] BYREF

  v8 = a3;
  v12 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x10Au,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v37 = *(_WORD *)(a2 + 252);
  v38 = *(_WORD *)(a2 + 240);
  if ( !a4 )
  {
    a4 = CTouchProcessor::PointerFlagsToMessage((CTouchProcessor *)a1, *(_DWORD *)(a2 + 260));
    if ( !a4 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), 4u, 0xBu, 0x10Bu, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v13 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
LABEL_8:
        CInputDest::SetEmpty(a8);
        return 0LL;
      }
      v14 = 268;
LABEL_7:
      WPP_RECORDER_SF_(
        (__int64)v13->DeviceExtension,
        5u,
        0xBu,
        v14,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      goto LABEL_8;
    }
  }
  if ( !*(_DWORD *)a8 )
  {
    if ( *(_DWORD *)(a2 + 500) )
    {
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)(a2 + 408));
      if ( WindowHandle == v18 )
      {
        if ( a7 || (*(_DWORD *)a2 & 0x800) != 0 || CInputDest::CanCallerAccessDestination(v17) )
          CInputDest::operator=((__int64)a8, a2 + 408);
      }
      else
      {
        if ( a7 || (v19 = 2LL, (*(_DWORD *)a2 & 0x800) != 0) )
          v19 = 1LL;
        if ( !CInputDest::SetupFromInputDestAndWindow((__int64 *)a8, (_OWORD *)(a2 + 408), v18, v19) )
          CInputDest::SetEmpty(a8);
      }
      v8 = a3;
    }
    else
    {
      CInputDest::operator=((__int64)a8, a2 + 408);
    }
    if ( !*(_DWORD *)a8 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), 4u, 0xBu, 0x10Du, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v13 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_8;
      v14 = 270;
      goto LABEL_7;
    }
  }
  v20 = 0LL;
  if ( !*((_DWORD *)a8 + 23) )
  {
    if ( !v8 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), 4u, 0xBu, 0x10Fu, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0x110u,
          (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      goto LABEL_8;
    }
    FrameById = CTouchProcessor::FindFrameById((CTouchProcessor *)a1, *(_DWORD *)(v8 + 28));
    v20 = FrameById;
    if ( !FrameById )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), 4u, 0xBu, 0x111u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0x112u,
          (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      goto LABEL_47;
    }
    _InterlockedIncrement((volatile signed __int32 *)FrameById + 11);
  }
  EtwTraceBeginPointerMessageGeneration(v38, v37, a3);
  if ( v20 )
  {
    v24 = *(struct _ERESOURCE **)(a1 + 224);
    *(_QWORD *)(a1 + 256) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(v24);
    v25 = *((_OWORD *)a8 + 1);
    v40[0] = *(_OWORD *)a8;
    v26 = *((_OWORD *)a8 + 2);
    v40[1] = v25;
    v27 = *((_OWORD *)a8 + 3);
    v40[2] = v26;
    v28 = *((_OWORD *)a8 + 4);
    v40[3] = v27;
    v29 = *((_OWORD *)a8 + 5);
    v40[4] = v28;
    v30 = *((_OWORD *)a8 + 6);
    v40[5] = v29;
    v31 = *((_OWORD *)a8 + 8);
    v40[6] = v30;
    v40[7] = *((_OWORD *)a8 + 7);
    v32 = *((_OWORD *)a8 + 9);
    v41[0] = v31;
    v33 = *((_OWORD *)a8 + 10);
    v41[1] = v32;
    v34 = *((_OWORD *)a8 + 11);
    v41[2] = v33;
    v41[3] = v34;
    v23 = ApiSetEditionPostNonMinUserInputMessage((unsigned int)v41, 128, (unsigned int)v40, a5, a1, (__int64)v20);
    CInpLockGuard::LockExclusive((PERESOURCE *)(a1 + 224));
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)a1, v20);
    v8 = a3;
  }
  else
  {
    v23 = CTouchProcessor::PostPointerMessage(
            (CTouchProcessor *)a1,
            a8,
            (const struct CPointerInfoNode *)a2,
            v8,
            a4,
            a5,
            a6,
            a7);
  }
  if ( v23 )
  {
    if ( (int)IsInkProcessorOnPointerMessagePostedSupported() >= 0 )
      InkProcessorOnPointerMessagePosted(a4, v8);
    v35 = *(_DWORD *)(a2 + 260);
    if ( (v35 & 0x2000) != 0 && (v35 & 0x10000) != 0 )
    {
      PoLatencySensitivityHint(2LL);
      ThreadInfo = CInputDest::GetThreadInfo(a8);
      if ( ThreadInfo )
      {
        CInputGlobals::SetPtiLastWoken(gpInputGlobals, ThreadInfo, 0);
        ApiSetEditionHandleHungWindow((__int64)a8);
      }
    }
  }
  EtwTraceEndPointerMessageGeneration(v38, v37, v22);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x113u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v12 = v23;
LABEL_47:
  CInputDest::SetEmpty(a8);
  return v12;
}
