/*
 * XREFs of MonitorFlagsFromDpiAwarenessContext @ 0x1C00728E0
 * Callers:
 *     LogicalToPhysicalDPIPoint @ 0x1C002B280 (LogicalToPhysicalDPIPoint.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0045DB0 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?SetLogicalCursorPos@CMouseProcessor@@SAXUtagPOINT@@K@Z @ 0x1C004980C (-SetLogicalCursorPos@CMouseProcessor@@SAXUtagPOINT@@K@Z.c)
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C0049CB8 (-ValidateMonFlags@@YAHPEAK@Z.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0072150 (TransformRectBetweenCoordinateSpaces.c)
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z @ 0x1C00727C0 (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0072830 (TransformPointBetweenCoordinateSpaces.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorFlagsFromDpiAwarenessContext(char a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx

  v1 = 0;
  v2 = a1 & 0xF;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        return 32;
    }
    else
    {
      return 128;
    }
  }
  else
  {
    return 64;
  }
  return v1;
}
