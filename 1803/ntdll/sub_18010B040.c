/*
 * XREFs of sub_18010B040 @ 0x18010B040
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryEvent @ 0x18009B580 (ZwQueryEvent.c)
 */

NTSTATUS __fastcall sub_18010B040(void *a1, void *a2, unsigned int a3, ULONG *ReturnLength)
{
  *ReturnLength = 0;
  if ( a3 >= 8 )
    return ZwQueryEvent(a1, EventBasicInformation, a2, 8u, ReturnLength);
  else
    return -1073741789;
}
