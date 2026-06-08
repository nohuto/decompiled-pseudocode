/*
 * XREFs of DisplayKernelPerfStates @ 0x1C0001768
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000C27C (InitLegacyPccInternal.c)
 *     InitPerfStatesInternal @ 0x1C001DF58 (InitPerfStatesInternal.c)
 *     InitCpcStatesInternal @ 0x1C002E5D0 (InitCpcStatesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C000BDD4 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall DisplayKernelPerfStates(__int64 a1, char a2, int a3)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 90);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = WPP_RECORDER_SF_D(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               2,
               91,
               (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
               *(_WORD *)(a1 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = WPP_RECORDER_SF_D(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               2,
               92,
               (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
               *(_DWORD *)(a1 + 12));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = WPP_RECORDER_SF_D(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               2,
               93,
               (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
               *(_DWORD *)(a1 + 16));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             2,
             94,
             (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
  return result;
}
