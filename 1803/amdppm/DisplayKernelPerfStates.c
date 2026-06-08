/*
 * XREFs of DisplayKernelPerfStates @ 0x1C0008C6C
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000246C (InitLegacyPccInternal.c)
 *     InitPerfStatesInternal @ 0x1C001DCB4 (InitPerfStatesInternal.c)
 *     InitCpcStatesInternal @ 0x1C001EA5C (InitCpcStatesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001374 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C00080A4 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall DisplayKernelPerfStates(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-18h]
  __int64 v6; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    HIDWORD(v6) = HIDWORD(a1);
    result = WPP_RECORDER_SF_q((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x5Au, v5);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v6) = *(unsigned __int16 *)(a1 + 4);
    result = WPP_RECORDER_SF_D(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x5Bu,
               (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids,
               v6);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v6) = *(_DWORD *)(a1 + 16);
    result = WPP_RECORDER_SF_D(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x5Cu,
               (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids,
               v6);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v6) = *(_DWORD *)(a1 + 20);
    result = WPP_RECORDER_SF_D(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x5Du,
               (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids,
               v6);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             2u,
             0x5Eu,
             (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids);
  return result;
}
