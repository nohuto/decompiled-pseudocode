/*
 * XREFs of ??_EButtonProcessor@@MEAAPEAXI@Z @ 0x180091218
 * Callers:
 *     ??_EButtonProcessor@@O7EAAPEAXI@Z @ 0x180092570 (--_EButtonProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1ButtonProcessor@@MEAA@XZ @ 0x18009125C (--1ButtonProcessor@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ButtonProcessor *__fastcall ButtonProcessor::`vector deleting destructor'(ButtonProcessor *this, char a2)
{
  ButtonProcessor::~ButtonProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
