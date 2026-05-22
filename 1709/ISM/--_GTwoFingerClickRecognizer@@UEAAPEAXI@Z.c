/*
 * XREFs of ??_GTwoFingerClickRecognizer@@UEAAPEAXI@Z @ 0x1800474A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TwoFingerClickRecognizer *__fastcall TwoFingerClickRecognizer::`scalar deleting destructor'(
        TwoFingerClickRecognizer *this,
        char a2)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
