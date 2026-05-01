/*
 * XREFs of ??_Gexception@std@@UEAAPEAXI@Z @ 0x180001770
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     _o___std_exception_destroy_0 @ 0x180042004 (_o___std_exception_destroy_0.c)
 */

std::exception *__fastcall std::exception::`scalar deleting destructor'(std::exception *this, char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0((char *)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x18uLL);
  return this;
}
