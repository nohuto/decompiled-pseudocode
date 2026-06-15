/*
 * XREFs of ??1bad_weak_ptr@std@@UEAA@XZ @ 0x14005B314
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::bad_weak_ptr::~bad_weak_ptr(std::bad_weak_ptr *this)
{
  *(_QWORD *)this = &std::exception::`vftable';
  __std_exception_destroy((char *)this + 8);
}
