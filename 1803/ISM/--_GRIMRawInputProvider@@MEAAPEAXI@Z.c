/*
 * XREFs of ??_GRIMRawInputProvider@@MEAAPEAXI@Z @ 0x18006C06C
 * Callers:
 *     ??_ERIMRawInputProvider@@O7EAAPEAXI@Z @ 0x18006CB90 (--_ERIMRawInputProvider@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1RIMRawInputProvider@@MEAA@XZ @ 0x18006C0B0 (--1RIMRawInputProvider@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

RIMRawInputProvider *__fastcall RIMRawInputProvider::`scalar deleting destructor'(RIMRawInputProvider *this, char a2)
{
  RIMRawInputProvider::~RIMRawInputProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
