/*
 * XREFs of ??_EMPCManager@@UEAAPEAXI@Z @ 0x180053BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1MPCManager@@UEAA@XZ @ 0x180053C04 (--1MPCManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

MPCManager *__fastcall MPCManager::`vector deleting destructor'(MPCManager *this, char a2)
{
  MPCManager::~MPCManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
