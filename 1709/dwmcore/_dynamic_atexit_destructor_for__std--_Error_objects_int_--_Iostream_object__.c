/*
 * XREFs of _dynamic_atexit_destructor_for__std::_Error_objects_int_::_Iostream_object__ @ 0x1800C7650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **dynamic_atexit_destructor_for__std::_Error_objects_int_::_Iostream_object__()
{
  void **result; // rax

  result = &std::error_category::`vftable';
  std::_Error_objects<int>::_Iostream_object = (__int64)&std::error_category::`vftable';
  return result;
}
