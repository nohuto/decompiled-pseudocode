/*
 * XREFs of MIDL_user_allocate @ 0x140599260
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  return ExAllocatePoolWithTag(PagedPool, size, 0x6370726Bu);
}
