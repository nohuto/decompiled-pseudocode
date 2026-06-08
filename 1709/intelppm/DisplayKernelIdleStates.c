/*
 * XREFs of DisplayKernelIdleStates @ 0x1C00032AC
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0002DA0 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_LLLLL @ 0x1C000BCA8 (WPP_RECORDER_SF_LLLLL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000BDD4 (WPP_RECORDER_SF_q.c)
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
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 5u,
                 2u,
                 0x60u,
                 (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 5u,
                 2u,
                 0x61u,
                 (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
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
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x63u,
               (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
  }
  return result;
}
