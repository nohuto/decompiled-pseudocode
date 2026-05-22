/*
 * XREFs of ??_EMPCButtonHoldHelper@@UEAAPEAXI@Z @ 0x18004D1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

MPCButtonHoldHelper *__fastcall MPCButtonHoldHelper::`vector deleting destructor'(MPCButtonHoldHelper *this, char a2)
{
  *(_QWORD *)this = &MPCButtonHoldHelper::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
