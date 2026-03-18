/*
 * XREFs of ?CommitConfiguration@CInputConfig@@QEAAJXZ @ 0x1C0131C18
 * Callers:
 *     NtDWMCommitInputSystemOutputConfig @ 0x1C00B3180 (NtDWMCommitInputSystemOutputConfig.c)
 * Callees:
 *     ?_CommitConfiguration@CInputConfig@@AEAAJXZ @ 0x1C0053754 (-_CommitConfiguration@CInputConfig@@AEAAJXZ.c)
 *     ?_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ @ 0x1C0053880 (-_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ.c)
 *     ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0053C00 (--0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     RIMOnDisplayStateChange @ 0x1C0054E10 (RIMOnDisplayStateChange.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0055B4C (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 */

__int64 __fastcall CInputConfig::CommitConfiguration(CInputConfig *this, struct CInpPushLock *a2)
{
  struct _SINGLE_LIST_ENTRY *v2; // rbx
  __int64 v3; // rcx
  CCursorClip *v4; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v2 = gpInputConfig;
  CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded((CInpLockExclusiveIfNeeded *)&v8, a2);
  if ( !v2[1].Next )
  {
    LOBYTE(v2[5].Next) = 1;
    CInputConfig::_CreateLegacyConfiguration((CInputConfig *)v2);
LABEL_3:
    if ( !v9 )
    {
      v3 = v8;
      *(_QWORD *)(v8 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v3, 0LL);
      KeLeaveCriticalRegion();
    }
    RIMOnDisplayStateChange();
    CCursorClip::OnDisplayStateChange(v4);
    return 0LL;
  }
  v6 = CInputConfig::_CommitConfiguration((CInputConfig *)v2);
  if ( v6 >= 0 )
    goto LABEL_3;
  if ( !v9 )
  {
    v7 = v8;
    *(_QWORD *)(v8 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v6;
}
