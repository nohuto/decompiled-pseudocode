/*
 * XREFs of ?BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z @ 0x1C012FBA0
 * Callers:
 *     NtDWMBindCursorToOutputConfig @ 0x1C00E5710 (NtDWMBindCursorToOutputConfig.c)
 * Callees:
 *     ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00092D0 (--0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C005DAA4 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?FindMouseConfiguration@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C0060FFC (-FindMouseConfiguration@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 */

__int64 __fastcall CInputConfig::BindMouse(CInputConfig *this, struct _SINGLE_LIST_ENTRY **a2)
{
  struct _SINGLE_LIST_ENTRY *v2; // rbx
  struct CInpPushLock *v4; // rdx
  CCursorClip *v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v2 = gpInputConfig;
  CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded(
    (CInpLockExclusiveIfNeeded *)&v8,
    (struct CInpPushLock *)&CInputConfig::slock);
  v2[2].Next = *a2;
  CInputConfig::CMouseConfig::FindMouseConfiguration((CInputConfig::CMouseConfig *)&v2[2], v4);
  CCursorClip::OnDisplayStateChange(v5);
  if ( !v9 )
  {
    v6 = v8;
    *(_QWORD *)(v8 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
