/*
 * XREFs of sub_180107070 @ 0x180107070
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryEvent @ 0x1800A5DC0 (ZwQueryEvent.c)
 */

NTSTATUS __fastcall sub_180107070(void *a1, void *a2, unsigned int a3, ULONG *ReturnLength)
{
  *ReturnLength = 0;
  if ( a3 >= 8 )
    return ZwQueryEvent(a1, EventBasicInformation, a2, 8u, ReturnLength);
  else
    return -1073741789;
}
