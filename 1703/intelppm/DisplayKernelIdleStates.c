/*
 * XREFs of DisplayKernelIdleStates @ 0x1C00034AC
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0002FA0 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_LLLLL @ 0x1C000B91C (WPP_RECORDER_SF_LLLLL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000BA48 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall DisplayKernelIdleStates(__int64 a1, char a2, int a3, int a4)
{
  PDEVICE_OBJECT v5; // r10
  unsigned int i; // edi
  __int64 result; // rax
  int v8; // r8d
  int v9; // [rsp+20h] [rbp-38h]

  if ( a1 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      result = WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 94);
      v5 = WPP_GLOBAL_Control;
    }
    if ( LOWORD(v5->DeviceType) )
    {
      result = WPP_RECORDER_SF_(
                 (__int64)v5->DeviceExtension,
                 5u,
                 2u,
                 0x5Fu,
                 (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
      v5 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        result = WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x60u,
                   (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
        v5 = WPP_GLOBAL_Control;
      }
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 116); ++i )
    {
      if ( LOWORD(v5->DeviceType) )
      {
        v8 = *(_DWORD *)(32LL * i + a1 + 120);
        result = WPP_RECORDER_SF_LLLLL(
                   v5->DeviceExtension,
                   ((unsigned int)v8 >> 2) & 1,
                   (unsigned int)v8 >> 31,
                   a4,
                   v9,
                   i,
                   v8 < 0,
                   *(_BYTE *)(32LL * i + a1 + 120) & 1,
                   (v8 & 2) != 0,
                   (v8 & 4) != 0);
        v5 = WPP_GLOBAL_Control;
      }
    }
    if ( LOWORD(v5->DeviceType) )
      return WPP_RECORDER_SF_(
               (__int64)v5->DeviceExtension,
               5u,
               2u,
               0x62u,
               (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
  }
  return result;
}
