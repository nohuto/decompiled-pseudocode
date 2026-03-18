/*
 * XREFs of ?BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z @ 0x1C0131BB4
 * Callers:
 *     NtDWMBindCursorToOutputConfig @ 0x1C00B3090 (NtDWMBindCursorToOutputConfig.c)
 * Callees:
 *     ?FindMouseConfiguration@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C0053B44 (-FindMouseConfiguration@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0053C00 (--0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0055B4C (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 */

__int64 __fastcall CInputConfig::BindMouse(CInputConfig *this, struct _LUID *a2)
{
  struct _SINGLE_LIST_ENTRY *v2; // rbx
  CCursorClip *v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v2 = gpInputConfig;
  CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded((CInpLockExclusiveIfNeeded *)&v7, (struct CInpPushLock *)a2);
  v2[2].Next = (struct _SINGLE_LIST_ENTRY *)*a2;
  CInputConfig::CMouseConfig::FindMouseConfiguration((CInputConfig::CMouseConfig *)&v2[2]);
  if ( !v8 )
  {
    v5 = v7;
    *(_QWORD *)(v7 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
  CCursorClip::OnDisplayStateChange(v4);
  return 0LL;
}
