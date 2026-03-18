/*
 * XREFs of ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x1400012D0
 * Callers:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001320 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 * Callees:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001100 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0qqq @ 0x140004588 (McTemplateU0qqq.c)
 */

__int64 __fastcall CDwmAppHost::HandleDisplayModeChange(CDwmAppHost *this)
{
  CDwmAppHost *v1; // rcx
  void *v2; // r8
  __int64 result; // rax
  unsigned int v4; // ebx
  HDC DC; // rbx
  char DeviceCaps; // di
  int SystemMetrics; // ebx
  int v8; // eax
  int v9; // edx

  HIBYTE(word_14000E958) = 1;
  if ( (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmProcessModeChange_Info) )
  {
    DC = GetDC(0LL);
    DeviceCaps = GetDeviceCaps(DC, 12);
    ReleaseDC(0LL, DC);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      SystemMetrics = GetSystemMetrics(1);
      v8 = GetSystemMetrics(0);
      McTemplateU0qqq((unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, v9, v8, SystemMetrics, DeviceCaps);
    }
  }
  result = CDwmAppHost::LpcNotifySettingsChange(v1, 0x21u, v2);
  v4 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x1E9u);
    result = v4;
  }
  HIBYTE(word_14000E958) = 0;
  return result;
}
