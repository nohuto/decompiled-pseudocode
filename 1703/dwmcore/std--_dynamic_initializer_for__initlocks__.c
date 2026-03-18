/*
 * XREFs of std::_dynamic_initializer_for__initlocks__ @ 0x180001000
 * Callers:
 *     <none>
 * Callees:
 *     ??0_Init_locks@std@@QEAA@XZ @ 0x1800D2D14 (--0_Init_locks@std@@QEAA@XZ.c)
 */

int std::_dynamic_initializer_for__initlocks__()
{
  std::_Init_locks::_Init_locks((std::_Init_locks *)&unk_18023DCF0);
  return atexit((void (__cdecl *)())std::_dynamic_atexit_destructor_for__initlocks__);
}
