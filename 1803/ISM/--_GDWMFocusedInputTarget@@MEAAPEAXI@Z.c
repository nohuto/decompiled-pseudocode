/*
 * XREFs of ??_GDWMFocusedInputTarget@@MEAAPEAXI@Z @ 0x18008266C
 * Callers:
 *     ??_EDWMFocusedInputTarget@@OCA@EAAPEAXI@Z @ 0x180082EA0 (--_EDWMFocusedInputTarget@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1DWMFocusedInputTarget@@MEAA@XZ @ 0x1800826B0 (--1DWMFocusedInputTarget@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

DWMFocusedInputTarget *__fastcall DWMFocusedInputTarget::`scalar deleting destructor'(
        DWMFocusedInputTarget *this,
        char a2)
{
  DWMFocusedInputTarget::~DWMFocusedInputTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
