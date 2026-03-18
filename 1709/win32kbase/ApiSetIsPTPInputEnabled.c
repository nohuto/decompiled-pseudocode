/*
 * XREFs of ApiSetIsPTPInputEnabled @ 0x1C013C670
 * Callers:
 *     RIMApplyPTPConfigRemedy @ 0x1C00A5FA0 (RIMApplyPTPConfigRemedy.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C010F8F4 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     <none>
 */

__int64 ApiSetIsPTPInputEnabled()
{
  if ( (int)IsIsPTPInputEnabledSupported() < 0 )
    return 1LL;
  else
    return IsPTPInputEnabled();
}
