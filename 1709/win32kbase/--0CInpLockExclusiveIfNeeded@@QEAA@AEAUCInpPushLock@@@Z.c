/*
 * XREFs of ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00092D0
 * Callers:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C000A890 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C001A28C (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00610C8 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z @ 0x1C012FBA0 (-BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z.c)
 *     ?CommitConfiguration@CInputConfig@@QEAAJXZ @ 0x1C012FC0C (-CommitConfiguration@CInputConfig@@QEAAJXZ.c)
 *     ?OnNewConfiguration@CInputConfig@@QEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z @ 0x1C012FC84 (-OnNewConfiguration@CInputConfig@@QEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z.c)
 *     ?SetMouseOrientation@CInputConfig@@QEAAJW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C012FD14 (-SetMouseOrientation@CInputConfig@@QEAAJW4DISPLAYCONFIG_ROTATION@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 */

CInpLockExclusiveIfNeeded *__fastcall CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded(
        CInpLockExclusiveIfNeeded *this,
        struct CInpPushLock *a2)
{
  bool v3; // al

  *(_QWORD *)this = a2;
  v3 = *((_QWORD *)a2 + 1) == (_QWORD)KeGetCurrentThread();
  *((_BYTE *)this + 8) = v3;
  if ( !v3 )
    RIMLockExclusive(a2);
  return this;
}
