/*
 * XREFs of HintPpm @ 0x180149458
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800441D0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18005D3B0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x18005EB8C (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     McTemplateU0ix @ 0x180149770 (McTemplateU0ix.c)
 */

NTSTATUS __fastcall HintPpm(int a1)
{
  __int64 v1; // rbx
  NTSTATUS result; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]

  v1 = a1;
  InputBuffer = 5LL;
  v6 = 6;
  result = NtPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    return McTemplateU0ix(v4, v3, result, v1);
  return result;
}
