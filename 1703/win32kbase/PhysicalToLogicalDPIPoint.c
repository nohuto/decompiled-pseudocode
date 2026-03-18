/*
 * XREFs of PhysicalToLogicalDPIPoint @ 0x1C00498B0
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0045DB0 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00463B4 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?SetLogicalCursorPos@CMouseProcessor@@SAXUtagPOINT@@K@Z @ 0x1C004980C (-SetLogicalCursorPos@CMouseProcessor@@SAXUtagPOINT@@K@Z.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0072830 (TransformPointBetweenCoordinateSpaces.c)
 * Callees:
 *     PhysicalToLogicalDPIMonitorPoint @ 0x1C0049A60 (PhysicalToLogicalDPIMonitorPoint.c)
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C0049CB8 (-ValidateMonFlags@@YAHPEAK@Z.c)
 *     HMValidateSharedHandleNoRip @ 0x1C007772C (HMValidateSharedHandleNoRip.c)
 *     ?DpiAwarenessContextFromMonitorFlags@@YAKK@Z @ 0x1C00DE2D0 (-DpiAwarenessContextFromMonitorFlags@@YAKK@Z.c)
 */

__int64 __fastcall PhysicalToLogicalDPIPoint(_QWORD *a1, _QWORD *a2, unsigned int a3, __int64 *a4)
{
  __int64 *v7; // rdi
  unsigned int v8; // ebx
  unsigned __int8 v10; // bp
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  if ( (unsigned int)ValidateMonFlags(&v14) )
  {
    if ( a4 )
      v13 = *a4;
    else
      v13 = 0LL;
    v7 = &v13;
    if ( a4 )
      v7 = a4;
    v8 = v14;
    if ( (v14 & 0x100) != 0 && !*v7 && **(_DWORD **)gpDispInfo > 1u )
    {
      v10 = DpiAwarenessContextFromMonitorFlags(v14);
      if ( (int)IsDCELogicalSpeedTopLevelHitTestSupported(v11) < 0 )
        v12 = 0LL;
      else
        v12 = DCELogicalSpeedTopLevelHitTest(a2, 18LL);
      if ( v12 )
      {
        if ( ((v10 ^ *(_BYTE *)(v12 + 368)) & 0xF) == 0 )
          *v7 = HMValidateSharedHandleNoRip(*(_QWORD *)(v12 + 360));
      }
    }
    return PhysicalToLogicalDPIMonitorPoint(a1, a2, v8, v7, v13);
  }
  else
  {
    *a1 = *a2;
    return 0LL;
  }
}
