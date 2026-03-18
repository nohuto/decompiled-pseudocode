/*
 * XREFs of EtwTraceTouchPadEnabledStatusChangeStop @ 0x1C00E1540
 * Callers:
 *     EnablePTPDevices @ 0x1C00DEFD0 (EnablePTPDevices.c)
 * Callees:
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceTouchPadEnabledStatusChangeStop(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0(a1, &TouchPadEnabledStatusChangeStop, &W32kControlGuid);
  return result;
}
