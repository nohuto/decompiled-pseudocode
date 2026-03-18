/*
 * XREFs of WMsg_midl_user_free @ 0x1C013D610
 * Callers:
 *     WmsgpPostMessage @ 0x1C01C4598 (WmsgpPostMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall WMsg_midl_user_free(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
