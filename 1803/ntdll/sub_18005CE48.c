/*
 * XREFs of sub_18005CE48 @ 0x18005CE48
 * Callers:
 *     sub_180059D2C @ 0x180059D2C (sub_180059D2C.c)
 *     sub_1800D0858 @ 0x1800D0858 (sub_1800D0858.c)
 * Callees:
 *     ZwCreateEvent @ 0x18009B3C0 (ZwCreateEvent.c)
 */

int sub_18005CE48()
{
  int result; // eax

  result = ZwCreateEvent(&Handle, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( result >= 0 )
    return ZwCreateEvent(&EventHandle, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  return result;
}
