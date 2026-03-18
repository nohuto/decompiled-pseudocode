/*
 * XREFs of PTPEnableHotkeyCallback @ 0x1C01A7C90
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 */

void PTPEnableHotkeyCallback()
{
  if ( (unsigned int)EnablePTPDevices(gPTPEnabled == 0) )
    PostShellHookMessagesEx(0x39u, gPTPEnabled == 0, 0LL);
}
