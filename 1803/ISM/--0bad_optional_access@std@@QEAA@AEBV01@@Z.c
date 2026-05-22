/*
 * XREFs of ??0bad_optional_access@std@@QEAA@AEBV01@@Z @ 0x18000D4DC
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy_0 @ 0x1800E1A42 (_o___std_exception_copy_0.c)
 */

std::bad_optional_access *__fastcall std::bad_optional_access::bad_optional_access(
        std::bad_optional_access *this,
        const struct std::bad_optional_access *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  o___std_exception_copy_0((char *)a2 + 8);
  *(_QWORD *)this = &std::bad_optional_access::`vftable';
  return this;
}
