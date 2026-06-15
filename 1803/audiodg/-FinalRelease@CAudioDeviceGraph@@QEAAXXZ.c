/*
 * XREFs of ?FinalRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x14000F2DC
 * Callers:
 *     ??_G?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x140012F40 (--_G-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x140030A04 (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioDeviceGraph::FinalRelease(CAudioDeviceGraph *this)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids);
  }
}
