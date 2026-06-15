/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x18007D628
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  _o___std_exception_copy((char *)a2 + 8);
  return this;
}
