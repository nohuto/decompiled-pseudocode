/*
 * XREFs of ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0053C00
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C0053A58 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z @ 0x1C0131BB4 (-BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z.c)
 *     ?CommitConfiguration@CInputConfig@@QEAAJXZ @ 0x1C0131C18 (-CommitConfiguration@CInputConfig@@QEAAJXZ.c)
 *     ?OnNewConfiguration@CInputConfig@@QEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z @ 0x1C0131D38 (-OnNewConfiguration@CInputConfig@@QEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z.c)
 *     ?SetMouseOrientation@CInputConfig@@QEAAJW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C0131DCC (-SetMouseOrientation@CInputConfig@@QEAAJW4DISPLAYCONFIG_ROTATION@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 */

CInpLockExclusiveIfNeeded *__fastcall CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded(
        CInpLockExclusiveIfNeeded *this,
        struct CInpPushLock *a2)
{
  bool v3; // al

  *(_QWORD *)this = &CInputConfig::slock;
  v3 = qword_1C01A1678 == (_QWORD)KeGetCurrentThread();
  *((_BYTE *)this + 8) = v3;
  if ( !v3 )
    RIMLockExclusive((__int64)&CInputConfig::slock);
  return this;
}
