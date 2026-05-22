/*
 * XREFs of ??_EEdgyInputTarget@@MEAAPEAXI@Z @ 0x1800B4B0C
 * Callers:
 *     ??_EEdgyInputTarget@@OBA@EAAPEAXI@Z @ 0x1800B4C80 (--_EEdgyInputTarget@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

EdgyInputTarget *__fastcall EdgyInputTarget::`vector deleting destructor'(EdgyInputTarget *this, char a2)
{
  *(_QWORD *)this = &EdgyInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &EdgyInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
