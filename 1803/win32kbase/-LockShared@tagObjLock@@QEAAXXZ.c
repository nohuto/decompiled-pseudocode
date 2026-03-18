/*
 * XREFs of ?LockShared@tagObjLock@@QEAAXXZ @ 0x1C0030750
 * Callers:
 *     ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x1C01232CC (-IsInputSuppressRequested@CBaseInput@@IEBA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall tagObjLock::LockShared(tagObjLock *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)this + 4);
}
