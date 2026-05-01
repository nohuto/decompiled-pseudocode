/*
 * XREFs of MIDL_user_free @ 0x18000B050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall MIDL_user_free(void *a1)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
