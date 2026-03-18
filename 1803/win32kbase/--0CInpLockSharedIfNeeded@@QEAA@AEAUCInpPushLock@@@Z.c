/*
 * XREFs of ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00558DC
 * Callers:
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C000EFE0 (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 *     Broadcast @ 0x1C0053ABC (Broadcast.c)
 *     ?FindMouseConfiguration@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C0053B44 (-FindMouseConfiguration@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     GetPointerDeviceConfig @ 0x1C0055320 (GetPointerDeviceConfig.c)
 *     ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C00558B0 (--0CLockedOutputConfig@@QEAA@XZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C006E9B0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?_UpdatePhysicalMonitors@CInputConfig@@AEAAXXZ @ 0x1C0131E84 (-_UpdatePhysicalMonitors@CInputConfig@@AEAAXXZ.c)
 *     _lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_::_lambda_invoker_cdecl_ @ 0x1C0133140 (_lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

CInpLockSharedIfNeeded *__fastcall CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
        CInpLockSharedIfNeeded *this,
        struct CInpPushLock *a2)
{
  bool v4; // al

  *(_QWORD *)this = a2;
  v4 = *((_QWORD *)a2 + 1) == (_QWORD)KeGetCurrentThread();
  *((_BYTE *)this + 8) = v4;
  if ( !v4 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(a2, 0LL);
  }
  return this;
}
