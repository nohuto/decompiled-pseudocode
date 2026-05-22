/*
 * XREFs of ??_EInputConfigContextProvider@@MEAAPEAXI@Z @ 0x1800902C0
 * Callers:
 *     ??_EInputConfigContextProvider@@O7EAAPEAXI@Z @ 0x180090EA0 (--_EInputConfigContextProvider@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1InputConfigContextProvider@@MEAA@XZ @ 0x180090304 (--1InputConfigContextProvider@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

InputConfigContextProvider *__fastcall InputConfigContextProvider::`vector deleting destructor'(
        InputConfigContextProvider *this,
        char a2)
{
  InputConfigContextProvider::~InputConfigContextProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
