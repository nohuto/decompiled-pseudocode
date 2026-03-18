/*
 * XREFs of ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C010C848
 * Callers:
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C0114770 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01159B0 (-GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z @ 0x1C0117610 (-IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z.c)
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 */

void __fastcall CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(PERESOURCE **this)
{
  if ( !*((_DWORD *)this + 2) )
    CInpLockGuard::UnLock(*this);
}
