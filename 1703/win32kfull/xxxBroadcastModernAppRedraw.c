/*
 * XREFs of xxxBroadcastModernAppRedraw @ 0x1C01E7B90
 * Callers:
 *     <none>
 * Callees:
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C00B03E0 (HandleDisplayChangeForInactiveDesktops.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00F18E0 (xxxBroadcastDisplaySettingsChange.c)
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
