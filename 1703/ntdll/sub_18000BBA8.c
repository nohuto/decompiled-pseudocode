/*
 * XREFs of sub_18000BBA8 @ 0x18000BBA8
 * Callers:
 *     sub_18000BBF4 @ 0x18000BBF4 (sub_18000BBF4.c)
 *     sub_1800D7B28 @ 0x1800D7B28 (sub_1800D7B28.c)
 * Callees:
 *     ZwCreateEvent @ 0x1800A5C00 (ZwCreateEvent.c)
 */

int sub_18000BBA8()
{
  int result; // eax

  result = ZwCreateEvent(&Handle, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( result >= 0 )
    return ZwCreateEvent(&EventHandle, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  return result;
}
