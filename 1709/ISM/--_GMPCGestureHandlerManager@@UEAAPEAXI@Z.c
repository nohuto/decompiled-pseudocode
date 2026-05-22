/*
 * XREFs of ??_GMPCGestureHandlerManager@@UEAAPEAXI@Z @ 0x18005A040
 * Callers:
 *     <none>
 * Callees:
 *     ??1MPCGestureHandlerManager@@UEAA@XZ @ 0x180059FCC (--1MPCGestureHandlerManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

MPCGestureHandlerManager *__fastcall MPCGestureHandlerManager::`scalar deleting destructor'(
        MPCGestureHandlerManager *this,
        char a2)
{
  MPCGestureHandlerManager::~MPCGestureHandlerManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
