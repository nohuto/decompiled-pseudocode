/*
 * XREFs of ??_G_Iostream_error_category@std@@UEAAPEAXI@Z @ 0x140002E60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x140003EE7 (--3@YAXPEAX@Z_0.c)
 */

std::_Iostream_error_category *__fastcall std::_Iostream_error_category::`scalar deleting destructor'(
        std::_Iostream_error_category *this,
        char a2)
{
  *(_QWORD *)this = &std::error_category::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
