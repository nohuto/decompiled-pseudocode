/*
 * XREFs of ??_EInputServiceProcessor@@UEAAPEAXI@Z @ 0x1800B5CEC
 * Callers:
 *     ??_EInputServiceProcessor@@W7EAAPEAXI@Z @ 0x1800B5F80 (--_EInputServiceProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

InputServiceProcessor *__fastcall InputServiceProcessor::`vector deleting destructor'(
        InputServiceProcessor *this,
        char a2)
{
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
