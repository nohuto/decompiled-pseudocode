/*
 * XREFs of WmipDoFindRegEntryByDevice @ 0x140161F4C
 * Callers:
 *     IoWMIDeviceObjectToProviderId @ 0x140161E70 (IoWMIDeviceObjectToProviderId.c)
 *     WmipFindRegEntryByDevice @ 0x140161EC8 (WmipFindRegEntryByDevice.c)
 * Callees:
 *     <none>
 */

int *__fastcall WmipDoFindRegEntryByDevice(void *a1)
{
  int *result; // rax

  for ( result = (int *)WmipInUseRegEntryHead; result != (int *)&WmipInUseRegEntryHead; result = *(int **)result )
  {
    if ( *((void **)result + 2) == a1 && result[12] >= 0 )
      return result;
  }
  return 0LL;
}
