/*
 * XREFs of ??_EWGIController@@UEAAPEAXI@Z @ 0x180078490
 * Callers:
 *     <none>
 * Callees:
 *     ??1WGIController@@UEAA@XZ @ 0x1800784C4 (--1WGIController@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

WGIController *__fastcall WGIController::`vector deleting destructor'(WGIController *this, char a2)
{
  WGIController::~WGIController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
