/*
 * XREFs of ??1bad_weak_ptr@std@@UEAA@XZ @ 0x14005B4EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::bad_weak_ptr::~bad_weak_ptr(std::bad_weak_ptr *this)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
}
