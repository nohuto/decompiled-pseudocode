/*
 * XREFs of ??_E_Ref_count_base@std@@UEAAPEAXI@Z @ 0x1800548A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

std::_Ref_count_base *__fastcall std::_Ref_count_base::`vector deleting destructor'(
        std::_Ref_count_base *this,
        char a2)
{
  *(_QWORD *)this = &std::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
