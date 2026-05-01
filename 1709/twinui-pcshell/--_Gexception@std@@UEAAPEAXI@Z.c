/*
 * XREFs of ??_Gexception@std@@UEAAPEAXI@Z @ 0x180002C80
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_destroy_0 @ 0x1801E2DE8 (_o___std_exception_destroy_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

std::exception *__fastcall std::exception::`scalar deleting destructor'(std::exception *this, char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0((char *)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
