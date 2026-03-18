/*
 * XREFs of EtwTraceLegacyTouchPadDetectionStop @ 0x1C0092930
 * Callers:
 *     RIMCreateDev @ 0x1C005428C (RIMCreateDev.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceLegacyTouchPadDetectionStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return TemplateEventDescriptor(a1, &LegacyTouchPadDetectionStop, &W32kControlGuid);
  return result;
}
