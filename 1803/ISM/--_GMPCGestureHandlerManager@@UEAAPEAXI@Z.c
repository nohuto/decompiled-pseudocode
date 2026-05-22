/*
 * XREFs of ??_GMPCGestureHandlerManager@@UEAAPEAXI@Z @ 0x180057630
 * Callers:
 *     <none>
 * Callees:
 *     ??1MPCGestureHandlerManager@@UEAA@XZ @ 0x180057664 (--1MPCGestureHandlerManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
