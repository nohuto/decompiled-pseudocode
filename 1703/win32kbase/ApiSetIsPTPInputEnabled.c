/*
 * XREFs of ApiSetIsPTPInputEnabled @ 0x1C013D19C
 * Callers:
 *     RIMApplyPTPConfigRemedy @ 0x1C009BF98 (RIMApplyPTPConfigRemedy.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0110E4C (RIMProcessAnyPointerDeviceInput.c)
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
