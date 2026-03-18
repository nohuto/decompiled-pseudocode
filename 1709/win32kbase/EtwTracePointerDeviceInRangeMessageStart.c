/*
 * XREFs of EtwTracePointerDeviceInRangeMessageStart @ 0x1C00E0E50
 * Callers:
 *     RIMAddToActiveDevices @ 0x1C0106D50 (RIMAddToActiveDevices.c)
 * Callees:
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 */

__int64 __fastcall EtwTracePointerDeviceInRangeMessageStart(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0(a1, &PointerDeviceInRangeMessageStart, &W32kControlGuid);
  return result;
}
