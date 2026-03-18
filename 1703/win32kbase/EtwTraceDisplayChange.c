/*
 * XREFs of EtwTraceDisplayChange @ 0x1C0099760
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0099444 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00D689C (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     Template_qqhhh @ 0x1C00DCABC (Template_qqhhh.c)
 */

char __fastcall EtwTraceDisplayChange(int a1, __int64 a2, int a3)
{
  char result; // al

  if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x2000000000008000LL) != 0 )
  {
    result = byte_1C0186D98 - 1;
    if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u && (qword_1C0186D80 & 0x2000000000008000LL) != 0 )
    {
      result = 0;
      if ( (qword_1C0186D88 & 0x2000000000008000LL) == qword_1C0186D88 )
      {
        result = Microsoft_Windows_Win32kEnableBits;
        if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
          return Template_qqhhh(
                   a1,
                   0x8000,
                   a3,
                   gPowerDisplayState,
                   qword_1C018C208,
                   dword_1C018C23C,
                   dword_1C018C240,
                   word_1C018C244);
      }
    }
  }
  return result;
}
