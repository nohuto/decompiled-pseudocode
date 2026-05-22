/*
 * XREFs of ??_EDWMInputDisplay@@MEAAPEAXI@Z @ 0x180017704
 * Callers:
 *     ??_EDWMInputDisplay@@O7EAAPEAXI@Z @ 0x1800179F0 (--_EDWMInputDisplay@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

DWMInputDisplay *__fastcall DWMInputDisplay::`vector deleting destructor'(DWMInputDisplay *this, char a2)
{
  *(_QWORD *)this = &DWMInputDisplay::`vftable'{for `IInputDisplay'};
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
