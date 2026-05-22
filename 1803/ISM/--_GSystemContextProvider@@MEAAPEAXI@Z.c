/*
 * XREFs of ??_GSystemContextProvider@@MEAAPEAXI@Z @ 0x180090EAC
 * Callers:
 *     ??_ESystemContextProvider@@O7EAAPEAXI@Z @ 0x180091120 (--_ESystemContextProvider@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1SystemContextProvider@@MEAA@XZ @ 0x180090EF0 (--1SystemContextProvider@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SystemContextProvider *__fastcall SystemContextProvider::`scalar deleting destructor'(
        SystemContextProvider *this,
        char a2)
{
  SystemContextProvider::~SystemContextProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
