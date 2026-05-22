/*
 * XREFs of ??_GGestureRecognizer@@MEAAPEAXI@Z @ 0x180043890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

GestureRecognizer *__fastcall GestureRecognizer::`scalar deleting destructor'(GestureRecognizer *this, char a2)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
