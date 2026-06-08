/*
 * XREFs of DisplayKernelPerfStates @ 0x1C0001C68
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000BEEC (InitLegacyPccInternal.c)
 *     InitPerfStatesInternal @ 0x1C001B128 (InitPerfStatesInternal.c)
 *     InitCpcStatesInternal @ 0x1C002AD40 (InitCpcStatesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C000BA48 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall DisplayKernelPerfStates(__int64 a1, char a2, int a3)
{
  PDEVICE_OBJECT v4; // rcx
  __int64 result; // rax
  int v6; // edx

  v4 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    result = WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 89);
    v4 = WPP_GLOBAL_Control;
  }
  if ( LOWORD(v4->DeviceType) )
  {
    result = WPP_RECORDER_SF_D(
               v4->DeviceExtension,
               5,
               2,
               90,
               (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
               *(_WORD *)(a1 + 4));
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      result = WPP_RECORDER_SF_D(
                 WPP_GLOBAL_Control->DeviceExtension,
                 5,
                 2,
                 91,
                 (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
                 *(_DWORD *)(a1 + 12));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        result = WPP_RECORDER_SF_D(
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   92,
                   (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
                   *(_DWORD *)(a1 + 16));
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v6) = 5;
          return WPP_RECORDER_SF_(
                   WPP_GLOBAL_Control->DeviceExtension,
                   v6,
                   2,
                   93,
                   (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
        }
      }
    }
  }
  return result;
}
