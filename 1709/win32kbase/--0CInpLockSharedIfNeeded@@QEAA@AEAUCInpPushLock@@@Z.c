/*
 * XREFs of ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0017930
 * Callers:
 *     ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C0017908 (--0CLockedOutputConfig@@QEAA@XZ.c)
 *     ?FindMouseConfiguration@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C0060FFC (-FindMouseConfiguration@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     GetPointerDeviceConfig @ 0x1C00615F0 (GetPointerDeviceConfig.c)
 *     Broadcast @ 0x1C0061734 (Broadcast.c)
 *     ?_UpdatePhysicalMonitors@CInputConfig@@AEAAXXZ @ 0x1C012FDD4 (-_UpdatePhysicalMonitors@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

CInpLockSharedIfNeeded *__fastcall CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
        CInpLockSharedIfNeeded *this,
        struct CInpPushLock *a2)
{
  bool v3; // al

  *(_QWORD *)this = &CInputConfig::slock;
  v3 = qword_1C0193710 == (_QWORD)KeGetCurrentThread();
  *((_BYTE *)this + 8) = v3;
  if ( !v3 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&CInputConfig::slock, 0LL);
  }
  return this;
}
