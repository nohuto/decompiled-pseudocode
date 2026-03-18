/*
 * XREFs of EtwTraceTouchPadEnabledStatusChangeStop @ 0x1C00DA9F0
 * Callers:
 *     EnablePTPDevices @ 0x1C00D8C90 (EnablePTPDevices.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00DB150 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceTouchPadEnabledStatusChangeStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return TemplateEventDescriptor(a1, &TouchPadEnabledStatusChangeStop, &W32kControlGuid);
  return result;
}
