/*
 * XREFs of ??_EWGIRawInputProvider@@UEAAPEAXI@Z @ 0x1800765F0
 * Callers:
 *     ??_EWGIRawInputProvider@@WBA@EAAPEAXI@Z @ 0x180077E30 (--_EWGIRawInputProvider@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1WGIRawInputProvider@@UEAA@XZ @ 0x180076634 (--1WGIRawInputProvider@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

WGIRawInputProvider *__fastcall WGIRawInputProvider::`vector deleting destructor'(WGIRawInputProvider *this, char a2)
{
  WGIRawInputProvider::~WGIRawInputProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
