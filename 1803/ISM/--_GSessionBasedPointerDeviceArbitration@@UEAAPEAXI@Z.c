/*
 * XREFs of ??_GSessionBasedPointerDeviceArbitration@@UEAAPEAXI@Z @ 0x1800DF230
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SessionBasedPointerDeviceArbitration *__fastcall SessionBasedPointerDeviceArbitration::`scalar deleting destructor'(
        SessionBasedPointerDeviceArbitration *this,
        char a2)
{
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
