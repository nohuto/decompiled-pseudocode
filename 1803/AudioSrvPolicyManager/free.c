/*
 * XREFs of free @ 0x180035AD8
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x1800385B0 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 *     ATL::_dynamic_atexit_destructor_for___AtlWinModule__ @ 0x1800385F0 (ATL--_dynamic_atexit_destructor_for___AtlWinModule__.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
