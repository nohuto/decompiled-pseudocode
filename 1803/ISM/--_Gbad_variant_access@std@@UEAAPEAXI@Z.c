/*
 * XREFs of ??_Gbad_variant_access@std@@UEAAPEAXI@Z @ 0x180001AA0
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_destroy_0 @ 0x1800E1A48 (_o___std_exception_destroy_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

std::bad_variant_access *__fastcall std::bad_variant_access::`scalar deleting destructor'(
        std::bad_variant_access *this,
        char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0((char *)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
