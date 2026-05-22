/*
 * XREFs of ??_GFlickRecognizer@@UEAAPEAXI@Z @ 0x1800DC060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

FlickRecognizer *__fastcall FlickRecognizer::`scalar deleting destructor'(FlickRecognizer *this, char a2)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
