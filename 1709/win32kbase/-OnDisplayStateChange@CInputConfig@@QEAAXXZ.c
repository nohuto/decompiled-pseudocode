/*
 * XREFs of ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00610C8
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C005EE74 (-UpdateUserScreen@@YAJXZ.c)
 *     VideoPortCalloutThread @ 0x1C00DD4C8 (VideoPortCalloutThread.c)
 * Callees:
 *     ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00092D0 (--0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     RIMOnDisplayStateChange @ 0x1C000C8F8 (RIMOnDisplayStateChange.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C005DAA4 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ @ 0x1C0061350 (-_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ.c)
 *     ?_UpdatePhysicalMonitors@CInputConfig@@AEAAXXZ @ 0x1C012FDD4 (-_UpdatePhysicalMonitors@CInputConfig@@AEAAXXZ.c)
 */

void __fastcall CInputConfig::OnDisplayStateChange(CInputConfig *this)
{
  struct _SINGLE_LIST_ENTRY *v1; // rbx
  CCursorClip *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  v1 = gpInputConfig;
  CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded(
    (CInpLockExclusiveIfNeeded *)&v4,
    (struct CInpPushLock *)&CInputConfig::slock);
  if ( LOBYTE(v1[5].Next) )
    CInputConfig::_CreateLegacyConfiguration((CInputConfig *)v1);
  else
    CInputConfig::_UpdatePhysicalMonitors((CInputConfig *)v1);
  RIMOnDisplayStateChange();
  CCursorClip::OnDisplayStateChange(v2);
  if ( !v5 )
  {
    v3 = v4;
    *(_QWORD *)(v4 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
    KeLeaveCriticalRegion();
  }
}
