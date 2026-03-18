/*
 * XREFs of GetDPITransformationMonitor @ 0x1C01C3AC0
 * Callers:
 *     ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01CB954 (-MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAP.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01CD3BC (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     EditionDoPointerDPITransforms @ 0x1C01CE180 (EditionDoPointerDPITransforms.c)
 *     PointerInfoCopyOutHelperInternal @ 0x1C01CE5E0 (PointerInfoCopyOutHelperInternal.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C021BDA8 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0055A30 (_MonitorFromPoint.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     GetWindowFrameRect @ 0x1C01D5DE8 (GetWindowFrameRect.c)
 */

__int64 __fastcall GetDPITransformationMonitor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 TopLevelWindow; // rsi
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF

  v2 = a1;
  v7 = a1;
  TopLevelWindow = GetTopLevelWindow(a2);
  if ( TopLevelWindow )
  {
    GetWindowFrameRect(a2, v9);
    v6 = ValidateHmonitorNoRip(*(_QWORD *)(TopLevelWindow + 360));
    if ( v6 )
    {
      PhysicalToLogicalDPIPoint(&v8, &v7, *(unsigned int *)(a2 + 368), &v6);
      if ( PtInRect(v9, v8) )
        return v6;
    }
    v2 = v7;
  }
  return MonitorFromPoint(v2, 2u, 0x12u);
}
