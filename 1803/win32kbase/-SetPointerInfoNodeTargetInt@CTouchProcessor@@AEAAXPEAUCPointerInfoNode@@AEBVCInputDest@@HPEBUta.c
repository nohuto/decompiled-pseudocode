/*
 * XREFs of ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C011D168
 * Callers:
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C011D060 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1C011E838 (-UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEB.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C00370E0 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01099AC (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0109B34 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::SetPointerInfoNodeTargetInt(
        CTouchProcessor *this,
        struct CPointerInfoNode *a2,
        const struct CInputDest *a3,
        int a4,
        const struct tagPOINT *a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  HWND WindowHandle; // rax
  __int64 v12; // rdx
  CInputDest *v13; // rcx
  bool v14; // zf
  HWND v15; // rsi
  __int64 v16; // rcx
  int v17; // edx
  int v18; // eax
  _QWORD v19[22]; // [rsp+20h] [rbp-E8h] BYREF
  char v20; // [rsp+D0h] [rbp-38h]

  *((_DWORD *)a2 + 1) &= ~0x100u;
  WindowHandle = CInputDest::GetWindowHandle(a3);
  v14 = *((_DWORD *)a2 + 119) == 0;
  *((_QWORD *)a2 + 32) = WindowHandle;
  if ( !v14 )
  {
    v15 = CInputDest::GetWindowHandle(v13);
    if ( CInputDest::GetWindowHandle((struct CPointerInfoNode *)((char *)a2 + 392)) != v15 )
    {
      memset(v19, 0, sizeof(v19));
      v20 = 0;
      CInputDest::SetupFromInputDestAndWindow(v19, (__int64)a2 + 392, v15, 1);
      CInputDest::operator=((__int64)a2 + 392, (__int64)v19);
      CInputDest::~CInputDest((CInputDest *)v19);
    }
  }
  v16 = *(unsigned int *)a2;
  LODWORD(v16) = v16 | 0x100;
  *((_DWORD *)a2 + 52) = a4;
  *(_DWORD *)a2 = v16;
  if ( a9 )
  {
    LODWORD(v16) = v16 | 0x200;
    *(_DWORD *)a2 = v16;
  }
  if ( !a8 )
  {
    if ( a9 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v12);
      LODWORD(v16) = *(_DWORD *)a2;
    }
    LODWORD(v16) = v16 & 0xFFFFFDFF;
    *(_DWORD *)a2 = v16;
  }
  if ( a7 )
  {
    LODWORD(v16) = v16 & 0xFFFFF3FF | 0x400;
    *(_DWORD *)a2 = v16;
  }
  if ( a5 )
    *(struct tagPOINT *)((char *)a2 + 212) = *a5;
  if ( a8 )
  {
    v17 = 0x40000;
    if ( (v16 & 0x40000) != 0 )
      return;
    v18 = a6 << 18;
  }
  else
  {
    v17 = 0x20000;
    if ( (v16 & 0x20000) != 0 )
      return;
    v18 = a6 << 17;
  }
  *(_DWORD *)a2 = v16 ^ v17 & (v16 ^ v18);
}
