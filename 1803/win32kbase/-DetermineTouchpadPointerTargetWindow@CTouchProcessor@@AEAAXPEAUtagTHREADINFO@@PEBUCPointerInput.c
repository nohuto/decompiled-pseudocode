/*
 * XREFs of ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C0110B68
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C011BCA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00370F4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0109854 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01099AC (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011074C (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C0115CC8 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C011A994 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DetermineTouchpadPointerTargetWindow(
        PERESOURCE *this,
        struct tagTHREADINFO *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4,
        struct tagQ *a5,
        unsigned int a6,
        int a7,
        int *a8,
        struct tagPOINT *a9,
        struct CInputDest *a10)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  CInputDest *v18; // rax
  struct CInputDest *v19; // [rsp+40h] [rbp-118h] BYREF
  _BYTE v20[192]; // [rsp+50h] [rbp-108h] BYREF

  CInputDest::SetEmpty(a10);
  if ( (*((_DWORD *)a3 + 20) & 0x10) != 0 && !a6 )
    memset((char *)a5 + 448, 0, 0x20uLL);
  if ( (*((_DWORD *)a4 + 61) & 0x2000) != 0 )
  {
    CTouchProcessor::DeterminePointerTargetWindow(this, a2, a4, a5, a7, a8, a9, a10);
    if ( (*((_DWORD *)a4 + 61) & 0x10000) != 0 )
    {
      *((_DWORD *)a5 + 112) = 1;
      if ( *(_DWORD *)a10 )
      {
        *((_QWORD *)a5 + 57) = CInputDest::GetWindowHandle(a10);
        *((_DWORD *)a5 + 116) = *a8;
        *(struct tagPOINT *)((char *)a5 + 468) = *a9;
      }
    }
  }
  else if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(
                            (CTouchProcessor *)this,
                            *((_QWORD *)a4 + 2),
                            a7,
                            &v19,
                            a8) )
  {
    CTouchProcessor::GetPointerOffset((CTouchProcessor *)this, *((_WORD *)a4 + 118), a9);
    CInputDest::operator=((__int64)a10, (__int64)v19);
  }
  else if ( *((_DWORD *)a5 + 112) )
  {
    *a8 = 0;
    *a9 = 0LL;
    v16 = HMValidateHandleNoSecure(*((_QWORD *)a5 + 57), 1);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 40);
      if ( *(char *)(v17 + 20) >= 0 && *(char *)(v17 + 19) >= 0 )
      {
        *a8 = *((_DWORD *)a5 + 116);
        *a9 = *(struct tagPOINT *)((char *)a5 + 468);
        v18 = CInputDest::CInputDest((CInputDest *)v20, (struct tagWND *const)v16);
        CInputDest::operator=((__int64)a10, v18);
        CInputDest::SetEmpty((CInputDest *)v20);
      }
    }
  }
  else if ( *(_DWORD *)a10 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
  }
}
