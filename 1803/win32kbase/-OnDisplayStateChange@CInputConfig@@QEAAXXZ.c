/*
 * XREFs of ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C0053A58
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0053D74 (-UpdateUserScreen@@YAJXZ.c)
 *     VideoPortCalloutThread @ 0x1C00A5C78 (VideoPortCalloutThread.c)
 * Callees:
 *     ?_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ @ 0x1C0053880 (-_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ.c)
 *     ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0053C00 (--0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     RIMOnDisplayStateChange @ 0x1C0054E10 (RIMOnDisplayStateChange.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0055B4C (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?_UpdatePhysicalMonitors@CInputConfig@@AEAAXXZ @ 0x1C0131E84 (-_UpdatePhysicalMonitors@CInputConfig@@AEAAXXZ.c)
 */

void __fastcall CInputConfig::OnDisplayStateChange(CInputConfig *this, struct CInpPushLock *a2)
{
  struct _SINGLE_LIST_ENTRY *v2; // rbx
  __int64 v3; // rcx
  CCursorClip *v4; // rcx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v2 = gpInputConfig;
  CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded((CInpLockExclusiveIfNeeded *)&v5, a2);
  if ( LOBYTE(v2[5].Next) )
    CInputConfig::_CreateLegacyConfiguration((CInputConfig *)v2);
  else
    CInputConfig::_UpdatePhysicalMonitors((CInputConfig *)v2);
  if ( !v6 )
  {
    v3 = v5;
    *(_QWORD *)(v5 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
    KeLeaveCriticalRegion();
  }
  RIMOnDisplayStateChange();
  CCursorClip::OnDisplayStateChange(v4);
}
