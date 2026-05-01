/*
 * XREFs of _o__register_onexit_function_0 @ 0x180194E26
 * Callers:
 *     _onexit @ 0x1801946DC (_onexit.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl o__register_onexit_function_0(_onexit_table_t *Table, _onexit_t Function)
{
  return _register_onexit_function(Table, Function);
}
