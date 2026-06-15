/*
 * XREFs of ??_GCAudioSessionManager@@UEAAPEAXI@Z @ 0x1800B15AC
 * Callers:
 *     ??_ECAudioSessionManager@@W7EAAPEAXI@Z @ 0x1800659D0 (--_ECAudioSessionManager@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioSessionManager@@UEAA@XZ @ 0x1800B1228 (--1CAudioSessionManager@@UEAA@XZ.c)
 */

CAudioSessionManager *__fastcall CAudioSessionManager::`scalar deleting destructor'(
        CAudioSessionManager *this,
        char a2)
{
  CAudioSessionManager::~CAudioSessionManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x148);
  return this;
}
