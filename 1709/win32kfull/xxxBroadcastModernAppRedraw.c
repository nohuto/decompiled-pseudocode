/*
 * XREFs of xxxBroadcastModernAppRedraw @ 0x1C01F3B80
 * Callers:
 *     <none>
 * Callees:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C0049830 (xxxBroadcastDisplaySettingsChange.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C00C6B80 (HandleDisplayChangeForInactiveDesktops.c)
 */

__int64 xxxBroadcastModernAppRedraw()
{
  __int64 result; // rax

  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    xxxBroadcastDisplaySettingsChange(grpdeskRitInput, 0, 0);
    return HandleDisplayChangeForInactiveDesktops(grpdeskRitInput, 0);
  }
  return result;
}
