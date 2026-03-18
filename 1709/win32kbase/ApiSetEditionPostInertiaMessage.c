/*
 * XREFs of ApiSetEditionPostInertiaMessage @ 0x1C013B054
 * Callers:
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHI_KPEAX@Z @ 0x1C01274DC (-StopAndEndInertia@CTouchProcessor@@QEAAHI_KPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPostInertiaMessage(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x3Cu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionPostInertiaMessageSupported() >= 0 )
    v3 = EditionPostInertiaMessage(a1, a2, 572LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x3Du,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v3;
}
