/*
 * XREFs of ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAHPEAI@Z @ 0x1C00375F0
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0037E1C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01354D0 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C001B0EC (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0037290 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ApiSetEditionMouseSpeedHitTest @ 0x1C003A818 (ApiSetEditionMouseSpeedHitTest.c)
 *     ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C006C0F4 (ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CMouseProcessor::MouseHitTest(
        __int64 a1,
        _OWORD *a2,
        struct tagPOINT *a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        int a8,
        _DWORD *a9,
        _DWORD *a10)
{
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v24; // rdx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  _OWORD v35[11]; // [rsp+50h] [rbp-B0h] BYREF
  char v36; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v37[12]; // [rsp+1B0h] [rbp+B0h] BYREF

  if ( a9 )
    *a9 = 0;
  if ( a10 )
    *a10 = 0;
  if ( (a8 & 1) != 0 )
  {
    CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate((CSpatialProcessor *)a1, 4, *a3, a5, 0, a7);
    CInputDest::CInputDest((CInputDest *)v37, (const struct CInputDest *)(a1 + 2552));
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2736), 1, 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, v24);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint)(
      a3,
      *a3,
      a4,
      v37);
    memset(a2, 0, 0xB0uLL);
    *((_BYTE *)a2 + 176) = 0;
    v25 = v37[1];
    *a2 = v37[0];
    v26 = v37[2];
    a2[1] = v25;
    v27 = v37[3];
    a2[2] = v26;
    v28 = v37[4];
    a2[3] = v27;
    v29 = v37[5];
    a2[4] = v28;
    v30 = v37[6];
    a2[5] = v29;
    v31 = v37[8];
    a2[6] = v30;
    a2[7] = v37[7];
    v32 = v37[9];
    a2[8] = v31;
    v33 = v37[10];
    a2[9] = v32;
    a2[10] = v33;
    memset(v37, 0, 0xB8uLL);
    CInputDest::SetEmpty((CInputDest *)v37);
  }
  else
  {
    *(_QWORD *)(a1 + 56) = a5;
    *(_QWORD *)(a1 + 64) = 4LL;
    if ( a8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, 1LL);
    v13 = (_OWORD *)ApiSetEditionMouseSpeedHitTest(
                      (unsigned int)&v36,
                      (_DWORD)a3,
                      a4,
                      a5,
                      a6,
                      a7,
                      (__int64)a9,
                      (__int64)a10);
    v14 = v13[1];
    v35[0] = *v13;
    v15 = v13[2];
    v35[1] = v14;
    v16 = v13[3];
    v35[2] = v15;
    v17 = v13[4];
    v35[3] = v16;
    v18 = v13[5];
    v35[4] = v17;
    v19 = v13[6];
    v35[5] = v18;
    v20 = v13[8];
    v35[6] = v19;
    v35[7] = v13[7];
    v21 = v13[9];
    v35[8] = v20;
    v22 = v13[10];
    v35[9] = v21;
    v35[10] = v22;
    CInputDest::CInputDest((CInputDest *)a2, (const struct tagINPUTDEST *)v35);
  }
  return a2;
}
