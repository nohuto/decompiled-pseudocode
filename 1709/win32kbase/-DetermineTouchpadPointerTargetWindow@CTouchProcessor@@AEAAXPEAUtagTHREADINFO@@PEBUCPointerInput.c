/*
 * XREFs of ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011C960
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00173D4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0117004 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C011716C (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011C588 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C0120DBC (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C0124E24 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
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
  CTouchProcessor *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  CInputDest *v19; // rax
  struct CInputDest *v20; // [rsp+40h] [rbp-128h] BYREF
  _BYTE v21[208]; // [rsp+50h] [rbp-118h] BYREF

  CInputDest::SetEmpty(a10);
  if ( (*((_DWORD *)a3 + 20) & 0x10) != 0 && !a6 )
    memset((char *)a5 + 440, 0, 0x20uLL);
  if ( (*((_DWORD *)a4 + 65) & 0x2000) != 0 )
  {
    CTouchProcessor::DeterminePointerTargetWindow(this, a2, a4, a5, a7, a8, a9, a10);
    if ( (*((_DWORD *)a4 + 65) & 0x10000) != 0 )
    {
      *((_DWORD *)a5 + 110) = 1;
      if ( *(_DWORD *)a10 )
      {
        *((_QWORD *)a5 + 56) = CInputDest::GetWindowHandle(a10);
        *((_DWORD *)a5 + 114) = *a8;
        *(struct tagPOINT *)((char *)a5 + 460) = *a9;
      }
    }
  }
  else if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(v14, *((_QWORD *)a4 + 2), a7, &v20, a8) )
  {
    CTouchProcessor::GetPointerOffset((CTouchProcessor *)this, *((_WORD *)a4 + 126), a9);
    CInputDest::operator=((__int64)a10, (__int64)v20);
  }
  else if ( *((_DWORD *)a5 + 110) )
  {
    *a8 = 0;
    LOBYTE(v15) = 1;
    *a9 = 0LL;
    v18 = HMValidateHandleNoSecure(*((_QWORD *)a5 + 56), v15, v16, v17);
    if ( v18 )
    {
      if ( *(char *)(v18 + 60) >= 0 && *(char *)(v18 + 59) >= 0 )
      {
        *a8 = *((_DWORD *)a5 + 114);
        *a9 = *(struct tagPOINT *)((char *)a5 + 460);
        v19 = CInputDest::CInputDest((CInputDest *)v21, (struct tagWND *const)v18);
        CInputDest::operator=((__int64)a10, v19);
        CInputDest::SetEmpty((CInputDest *)v21);
      }
    }
  }
}
