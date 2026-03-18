/*
 * XREFs of MIDL_user_free @ 0x1407F6070
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __stdcall MIDL_user_free(void *a1)
{
  ExFreePoolWithTag(a1, 0x6370726Bu);
}
