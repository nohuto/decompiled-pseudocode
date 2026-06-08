/*
 * XREFs of DisplayKernelPerfStates @ 0x1C0005724
 * Callers:
 *     InitLegacyPccInternal @ 0x1C00082B4 (InitLegacyPccInternal.c)
 *     InitPerfStatesInternal @ 0x1C0023DF4 (InitPerfStatesInternal.c)
 *     InitCpcStatesInternal @ 0x1C0024B54 (InitCpcStatesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004CA4 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall DisplayKernelPerfStates(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-18h]
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    HIDWORD(v7) = HIDWORD(a1);
    result = WPP_RECORDER_SF_q((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x59u, v6);
    v4 = WPP_GLOBAL_Control;
  }
  if ( LOWORD(v4->DeviceType) )
  {
    LODWORD(v7) = *(unsigned __int16 *)(a1 + 4);
    result = WPP_RECORDER_SF_D(
               (__int64)v4->DeviceExtension,
               5u,
               2u,
               0x5Au,
               (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
               v7);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v8) = *(_DWORD *)(a1 + 12);
      result = WPP_RECORDER_SF_D(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 5u,
                 2u,
                 0x5Bu,
                 (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
                 v8);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v9) = *(_DWORD *)(a1 + 16);
        result = WPP_RECORDER_SF_D(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x5Cu,
                   (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
                   v9);
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          return WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x5Du,
                   (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
      }
    }
  }
  return result;
}
