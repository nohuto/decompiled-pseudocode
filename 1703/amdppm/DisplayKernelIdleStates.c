/*
 * XREFs of DisplayKernelIdleStates @ 0x1C0005828
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0007940 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_LLLLL @ 0x1C0004B78 (WPP_RECORDER_SF_LLLLL.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004CA4 (WPP_RECORDER_SF_q.c)
 */

_UNKNOWN **__fastcall DisplayKernelIdleStates(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  PDEVICE_OBJECT v6; // r10
  unsigned int i; // edi
  int v8; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    v6 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      result = (_UNKNOWN **)WPP_RECORDER_SF_q((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x5Eu, v8);
      v6 = WPP_GLOBAL_Control;
    }
    if ( LOWORD(v6->DeviceType) )
    {
      result = (_UNKNOWN **)WPP_RECORDER_SF_(
                              (__int64)v6->DeviceExtension,
                              5u,
                              2u,
                              0x5Fu,
                              (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
      v6 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                5u,
                                2u,
                                0x60u,
                                (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
        v6 = WPP_GLOBAL_Control;
      }
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 116); ++i )
    {
      if ( LOWORD(v6->DeviceType) )
      {
        result = (_UNKNOWN **)WPP_RECORDER_SF_LLLLL(
                                (__int64)v6->DeviceExtension,
                                (*(_DWORD *)(32LL * i + a1 + 120) >> 2) & 1,
                                *(_DWORD *)(32LL * i + a1 + 120) >> 31,
                                a4,
                                v8);
        v6 = WPP_GLOBAL_Control;
      }
    }
    if ( LOWORD(v6->DeviceType) )
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            (__int64)v6->DeviceExtension,
                            5u,
                            2u,
                            0x62u,
                            (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
  }
  return result;
}
