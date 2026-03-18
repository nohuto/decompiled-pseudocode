/*
 * XREFs of ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011DB1C
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0048044 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0118184 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01182C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011D738 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C0121ACC (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C012584C (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 */

void __fastcall CTouchProcessor::DetermineTouchpadPointerTargetWindow(
        CTouchProcessor *this,
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
  CTouchProcessor *v14; // rcx
  __int64 v15; // rax
  CInputDest *v16; // rax
  struct CInputDest *v17; // [rsp+40h] [rbp-128h] BYREF
  _BYTE v18[208]; // [rsp+50h] [rbp-118h] BYREF

  CInputDest::SetEmpty(a10);
  if ( (*((_DWORD *)a3 + 20) & 0x10) != 0 && !a6 )
    memset((char *)a5 + 400, 0, 0x20uLL);
  if ( (*((_DWORD *)a4 + 65) & 0x2000) != 0 )
  {
    CTouchProcessor::DeterminePointerTargetWindow(this, a2, a4, a5, a7, a8, a9, a10);
    if ( (*((_DWORD *)a4 + 65) & 0x10000) != 0 )
    {
      *((_DWORD *)a5 + 100) = 1;
      if ( *(_DWORD *)a10 )
      {
        *((_QWORD *)a5 + 51) = CInputDest::GetWindowHandle(a10);
        *((_DWORD *)a5 + 104) = *a8;
        *(struct tagPOINT *)((char *)a5 + 420) = *a9;
      }
    }
  }
  else if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(v14, *((_QWORD *)a4 + 2), a7, &v17, a8) )
  {
    CTouchProcessor::GetPointerOffset(this, *((_WORD *)a4 + 126), a9);
    CInputDest::operator=((__int64)a10, (__int64)v17);
  }
  else if ( *((_DWORD *)a5 + 100) )
  {
    *a8 = 0;
    *a9 = 0LL;
    v15 = HMValidateHandleNoSecure(*((_QWORD *)a5 + 51), 1);
    if ( v15 )
    {
      if ( *(char *)(v15 + 60) >= 0 && *(char *)(v15 + 59) >= 0 )
      {
        *a8 = *((_DWORD *)a5 + 104);
        *a9 = *(struct tagPOINT *)((char *)a5 + 420);
        v16 = CInputDest::CInputDest((CInputDest *)v18, (struct tagWND *const)v15);
        CInputDest::operator=((__int64)a10, v16);
        CInputDest::SetEmpty((CInputDest *)v18);
      }
    }
  }
}
