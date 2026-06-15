/*
 * XREFs of ?FinalRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x14002FB18
 * Callers:
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x140031944 (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     WPP_SF_ @ 0x140035F54 (WPP_SF_.c)
 */

void __fastcall CAudioDeviceGraph::FinalRelease(CAudioDeviceGraph *this)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 58LL, &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids);
  }
}
