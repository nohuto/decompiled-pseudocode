/*
 * XREFs of MIDL_user_allocate @ 0x180204B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  size_t v1; // r8

  v1 = 1LL;
  if ( size )
    v1 = size;
  return HeapAlloc(WPF::g_processHeap, 0, v1);
}
