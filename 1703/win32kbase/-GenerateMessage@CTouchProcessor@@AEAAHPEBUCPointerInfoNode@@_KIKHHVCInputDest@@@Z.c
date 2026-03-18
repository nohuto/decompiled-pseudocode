/*
 * XREFs of ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011F470
 * Callers:
 *     ?GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011EC24 (-GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C011ED8C (-GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C011EED0 (-GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011F0D4 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011F264 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C0120040 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C01201F8 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0047EBC (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0049370 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C008CD20 (ApiSetEditionHandleHungWindow.c)
 *     EtwTraceBeginPointerMessageGeneration @ 0x1C00D9A00 (EtwTraceBeginPointerMessageGeneration.c)
 *     EtwTraceEndPointerMessageGeneration @ 0x1C00D9F60 (EtwTraceEndPointerMessageGeneration.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C0118228 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01182C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C011842C (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C0123414 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0123D54 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionPostNonMinUserInputMessage @ 0x1C013C020 (ApiSetEditionPostNonMinUserInputMessage.c)
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
  __int64 v10; // r14
  unsigned int v12; // edi
  int v13; // edx
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  HWND WindowHandle; // rax
  CInputDest *v18; // rcx
  HWND v19; // r10
  __int64 v20; // r9
  struct CPointerInputFrame *v21; // r15
  struct CPointerInputFrame *FrameById; // rax
  int v23; // edx
  __int64 v24; // r8
  int v25; // r13d
  int v26; // edx
  struct _ERESOURCE *v27; // rcx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  int v38; // eax
  struct tagTHREADINFO *ThreadInfo; // rax
  int v40; // edx
  __int16 v41; // [rsp+40h] [rbp-118h]
  unsigned __int16 v42; // [rsp+42h] [rbp-116h]
  _OWORD v44[8]; // [rsp+50h] [rbp-108h] BYREF
  _OWORD v45[8]; // [rsp+D0h] [rbp-88h] BYREF

  v8 = a3;
  v10 = a2;
  v12 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      266,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  v41 = *(_WORD *)(v10 + 252);
  v42 = *(_WORD *)(v10 + 240);
  if ( !a4 )
  {
    a4 = CTouchProcessor::PointerFlagsToMessage((CTouchProcessor *)a1, *(_DWORD *)(v10 + 260));
    if ( !a4 )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), a2, 11, 267, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v14 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
LABEL_8:
        CInputDest::SetEmpty(a8);
        return 0LL;
      }
      v15 = 268;
LABEL_7:
      LOBYTE(v13) = 5;
      WPP_RECORDER_SF_(v14->DeviceExtension, v13, 11, v15, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      goto LABEL_8;
    }
  }
  if ( !*(_DWORD *)a8 )
  {
    if ( *(_DWORD *)(v10 + 500) )
    {
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)(v10 + 408));
      if ( WindowHandle == v19 )
      {
        if ( a7 || (*(_DWORD *)v10 & 0x800) != 0 || CInputDest::CanCallerAccessDestination(v18) )
          CInputDest::operator=((__int64)a8, v10 + 408);
      }
      else
      {
        if ( a7 || (v20 = 2LL, (*(_DWORD *)v10 & 0x800) != 0) )
          v20 = 1LL;
        if ( !CInputDest::SetupFromInputDestAndWindow(a8, (_OWORD *)(v10 + 408), v19, v20) )
          CInputDest::SetEmpty(a8);
      }
      v8 = a3;
    }
    else
    {
      CInputDest::operator=((__int64)a8, v10 + 408);
    }
    if ( !*(_DWORD *)a8 )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), a2, 11, 269, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v14 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_8;
      v15 = 270;
      goto LABEL_7;
    }
  }
  v21 = 0LL;
  if ( !*((_DWORD *)a8 + 23) )
  {
    if ( !v8 )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), a2, 11, 271, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v14 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_8;
      v15 = 272;
      goto LABEL_7;
    }
    FrameById = CTouchProcessor::FindFrameById((CTouchProcessor *)a1, *(_DWORD *)(v8 + 28));
    v21 = FrameById;
    if ( !FrameById )
    {
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), v23, 11, 273, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v26) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v26,
          11,
          274,
          (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      }
      goto LABEL_47;
    }
    _InterlockedIncrement((volatile signed __int32 *)FrameById + 11);
  }
  EtwTraceBeginPointerMessageGeneration(v42, v41, a3);
  if ( v21 )
  {
    v27 = *(struct _ERESOURCE **)(a1 + 200);
    *(_QWORD *)(a1 + 232) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(v27);
    v28 = *((_OWORD *)a8 + 1);
    v44[0] = *(_OWORD *)a8;
    v29 = *((_OWORD *)a8 + 2);
    v44[1] = v28;
    v30 = *((_OWORD *)a8 + 3);
    v44[2] = v29;
    v31 = *((_OWORD *)a8 + 4);
    v44[3] = v30;
    v32 = *((_OWORD *)a8 + 5);
    v44[4] = v31;
    v33 = *((_OWORD *)a8 + 6);
    v44[5] = v32;
    v34 = *((_OWORD *)a8 + 8);
    v44[6] = v33;
    v44[7] = *((_OWORD *)a8 + 7);
    v35 = *((_OWORD *)a8 + 9);
    v45[0] = v34;
    v36 = *((_OWORD *)a8 + 10);
    v45[1] = v35;
    v37 = *((_OWORD *)a8 + 11);
    v45[2] = v36;
    v45[3] = v37;
    v25 = ApiSetEditionPostNonMinUserInputMessage((unsigned int)v45, 128, (unsigned int)v44, a5, a1, (__int64)v21);
    CInpLockGuard::LockExclusive((PERESOURCE *)(a1 + 200));
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)a1, v21);
    v8 = a3;
  }
  else
  {
    v25 = CTouchProcessor::PostPointerMessage(
            (CTouchProcessor *)a1,
            a8,
            (const struct CPointerInfoNode *)v10,
            v8,
            a4,
            a5,
            a6,
            a7);
  }
  if ( v25 )
  {
    if ( (int)IsInkProcessorOnPointerMessagePostedSupported() >= 0 )
      InkProcessorOnPointerMessagePosted(a4, v8);
    v38 = *(_DWORD *)(v10 + 260);
    if ( (v38 & 0x2000) != 0 && (v38 & 0x10000) != 0 )
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
  EtwTraceEndPointerMessageGeneration(v42, v41, v24);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v40) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v40,
      11,
      275,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  v12 = v25;
LABEL_47:
  CInputDest::SetEmpty(a8);
  return v12;
}
