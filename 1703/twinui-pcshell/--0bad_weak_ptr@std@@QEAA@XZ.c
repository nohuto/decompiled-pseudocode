/*
 * XREFs of ??0bad_weak_ptr@std@@QEAA@XZ @ 0x180110478
 * Callers:
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x18010FFC8 (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 * Callees:
 *     <none>
 */

std::bad_weak_ptr *__fastcall std::bad_weak_ptr::bad_weak_ptr(std::bad_weak_ptr *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &std::bad_weak_ptr::`vftable';
  return this;
}
