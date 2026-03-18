/*
 * XREFs of PhysicalToLogicalDPIPointWithHitTest @ 0x1C01113C8
 * Callers:
 *     EditionMouseSpeedHitTest @ 0x1C005DBF0 (EditionMouseSpeedHitTest.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C0111360 (EditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01CCEC8 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     DCEHitTestWindow @ 0x1C01C3214 (DCEHitTestWindow.c)
 *     GetWindowFrameRect @ 0x1C01D5DE8 (GetWindowFrameRect.c)
 */

__int64 __fastcall PhysicalToLogicalDPIPointWithHitTest(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v8; // rsi
  __int64 TopLevelWindow; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  unsigned __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v15[16]; // [rsp+28h] [rbp-50h] BYREF

  v4 = *(_DWORD *)(a4 + 368);
  if ( (v4 & 0xF) == 2 )
  {
    *a1 = *a2;
    return 0LL;
  }
  v8 = 0LL;
  TopLevelWindow = GetTopLevelWindow(a4);
  if ( TopLevelWindow )
    v8 = *(_QWORD *)(TopLevelWindow + 288);
  v10 = *a2;
  v14 = *a2;
  if ( v8 )
  {
    GetWindowFrameRect(TopLevelWindow, v15);
    v12 = DCEHitTestWindow(v15, v8, &v14, a3);
    v10 = v14;
    goto LABEL_8;
  }
  if ( TopLevelWindow )
  {
    v11 = *(_QWORD *)(TopLevelWindow + 224);
    if ( v11 )
      v12 = GrePtInRegion(v11, (unsigned int)v10, HIDWORD(v14));
    else
      v12 = PtInRect((_DWORD *)(TopLevelWindow + 128), v10);
LABEL_8:
    if ( v12 )
    {
      *a1 = v10;
      return 1LL;
    }
  }
  return PhysicalToLogicalDPIPoint(a1, a2, v4, 0LL);
}
