/*
 * XREFs of WmipDoFindRegEntryByDevice @ 0x1401441D8
 * Callers:
 *     IoWMIDeviceObjectToProviderId @ 0x140144180 (IoWMIDeviceObjectToProviderId.c)
 *     WmipFindRegEntryByDevice @ 0x14015420C (WmipFindRegEntryByDevice.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall WmipDoFindRegEntryByDevice(void *a1)
{
  _UNKNOWN **result; // rax

  for ( result = (_UNKNOWN **)WmipInUseRegEntryHead; result != &WmipInUseRegEntryHead; result = (_UNKNOWN **)*result )
  {
    if ( result[2] == a1 && *((_DWORD *)result + 12) < 0x80000000 )
      return result;
  }
  return 0LL;
}
