/*
 * XREFs of _dynamic_initializer_for__std::_Error_objects_int_::_Iostream_object__ @ 0x180001030
 * Callers:
 *     <none>
 * Callees:
 *     ??0_Iostream_error_category@std@@QEAA@XZ @ 0x1800C26A0 (--0_Iostream_error_category@std@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__std::_Error_objects_int_::_Iostream_object__(std::_Iostream_error_category *a1)
{
  std::_Iostream_error_category::_Iostream_error_category(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__std::_Error_objects_int_::_Iostream_object__);
}
