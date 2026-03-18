/*
 * XREFs of GetDPITransformationMonitor @ 0x1C01C01F0
 * Callers:
 *     ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6CB0 (-MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAP.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01C90F8 (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     EditionDoPointerDPITransforms @ 0x1C01C9D90 (EditionDoPointerDPITransforms.c)
 *     PointerInfoCopyOutHelperInternal @ 0x1C01CA1A0 (PointerInfoCopyOutHelperInternal.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C021AB34 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0020750 (_MonitorFromPoint.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall GetDPITransformationMonitor(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 TopLevelWindow; // r14
  __int64 v7; // rcx
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int128 v13; // [rsp+38h] [rbp-18h] BYREF

  v3 = a1;
  v11 = a1;
  TopLevelWindow = GetTopLevelWindow(a2);
  if ( !TopLevelWindow )
    goto LABEL_9;
  v7 = *(_QWORD *)(a2 + 224);
  if ( v7 )
    GreGetRgnBox(v7, &v13);
  else
    v13 = *(_OWORD *)(a2 + 128);
  v10 = ValidateHmonitorNoRip(*(_QWORD *)(TopLevelWindow + 360));
  if ( !v10
    || (MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a2),
        PhysicalToLogicalDPIPoint(&v12, &v11, MonitorFlagsFromWindow, &v10),
        !PtInRect(&v13, v12)) )
  {
    v3 = v11;
LABEL_9:
    result = MonitorFromPoint(v3, 0x22u);
    goto LABEL_10;
  }
  result = v10;
LABEL_10:
  *a3 = result;
  return result;
}
