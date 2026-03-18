/*
 * XREFs of ApiSetEditionReportMouseBreakToAccessibility @ 0x1C00920E0
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0015374 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionReportMouseBreakToAccessibility(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        unsigned int a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]

  v8 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xB8u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionReportMouseBreakToAccessibilitySupported() >= 0 )
  {
    v9 = *((_DWORD *)a3 + 2);
    v11 = *a3;
    v12 = v9;
    v8 = EditionReportMouseBreakToAccessibility(a1, a2, &v11, a4);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xB9u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v8;
}
