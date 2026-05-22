/*
 * XREFs of ??1exception@std@@UEAA@XZ @ 0x1800019B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::exception::~exception(std::exception *this)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0((char *)this + 8);
}
