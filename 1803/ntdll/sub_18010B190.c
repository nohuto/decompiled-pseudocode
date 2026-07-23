/*
 * XREFs of sub_18010B190 @ 0x18010B190
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySemaphore @ 0x18009D550 (ZwQuerySemaphore.c)
 */

NTSTATUS __fastcall sub_18010B190(void *a1, void *a2, unsigned int a3, ULONG *ReturnLength)
{
  *ReturnLength = 0;
  if ( a3 >= 8 )
    return ZwQuerySemaphore(a1, SemaphoreBasicInformation, a2, 8u, ReturnLength);
  else
    return -1073741789;
}
