/*
 * XREFs of ??_EMPCGestureHandler@@UEAAPEAXI@Z @ 0x180062090
 * Callers:
 *     <none>
 * Callees:
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x1800620CC (--1MPCGestureHandler@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

MPCGestureHandler *__fastcall MPCGestureHandler::`vector deleting destructor'(MPCGestureHandler *this, char a2)
{
  MPCGestureHandler::~MPCGestureHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
