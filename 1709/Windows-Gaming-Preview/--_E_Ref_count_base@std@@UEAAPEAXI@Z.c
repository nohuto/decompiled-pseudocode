/*
 * XREFs of ??_E_Ref_count_base@std@@UEAAPEAXI@Z @ 0x18000F860
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 */

std::_Ref_count_base *__fastcall std::_Ref_count_base::`vector deleting destructor'(
        std::_Ref_count_base *this,
        char a2)
{
  *(_QWORD *)this = &std::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x10uLL);
  return this;
}
