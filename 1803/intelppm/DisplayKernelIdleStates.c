/*
 * XREFs of DisplayKernelIdleStates @ 0x1C0002374
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0001E60 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0003834 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_LLLLL @ 0x1C000C078 (WPP_RECORDER_SF_LLLLL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C1A4 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall DisplayKernelIdleStates(__int64 a1, char a2, int a3)
{
  unsigned int i; // edi
  __int64 result; // rax
  unsigned int v6; // r9d
  int v7; // [rsp+20h] [rbp-38h]

  if ( a1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 95);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_(
                 WPP_GLOBAL_Control->DeviceExtension,
                 5,
                 2,
                 96,
                 (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_(
                 WPP_GLOBAL_Control->DeviceExtension,
                 5,
                 2,
                 97,
                 (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids);
    for ( i = 0; i < *(_DWORD *)(a1 + 116); ++i )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v6 = *(_DWORD *)(32LL * i + a1 + 120);
        result = WPP_RECORDER_SF_LLLLL(
                   WPP_GLOBAL_Control->DeviceExtension,
                   (v6 >> 1) & 1,
                   (v6 >> 2) & 1,
                   v6 >> 31,
                   v7,
                   i,
                   (v6 & 0x80000000) != 0,
                   v6 & 1,
                   (v6 & 2) != 0,
                   (v6 & 4) != 0);
      }
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               2,
               99,
               (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids);
  }
  return result;
}
