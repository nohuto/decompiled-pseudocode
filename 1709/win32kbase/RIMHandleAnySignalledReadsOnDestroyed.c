/*
 * XREFs of RIMHandleAnySignalledReadsOnDestroyed @ 0x1C0018518
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0019C1C (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 *     RIMUpdateSecondaryRim @ 0x1C010E49C (RIMUpdateSecondaryRim.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMHandleAnySignalledReadsOnDestroyed(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v6; // rdx

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x41u,
    (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids);
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)a1 == 4 && (*(_DWORD *)(v4 + 248) & 0x20000000) != 0 )
  {
    if ( !a2 )
      a2 = *(_QWORD *)(v4 + 408);
    if ( *(_BYTE *)(a2 + 784) )
    {
      v6 = *(_QWORD **)(a2 + 800);
      if ( (unsigned __int64)v6 >= MmUserProbeAddress )
        v6 = (_QWORD *)MmUserProbeAddress;
      *v6 = -1LL;
    }
    else
    {
      **(_QWORD **)(a2 + 800) = -1LL;
    }
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x13u,
           0x43u,
           (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids);
}
