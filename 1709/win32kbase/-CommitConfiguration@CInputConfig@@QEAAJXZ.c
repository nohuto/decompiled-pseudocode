/*
 * XREFs of ?CommitConfiguration@CInputConfig@@QEAAJXZ @ 0x1C012FC0C
 * Callers:
 *     NtDWMCommitInputSystemOutputConfig @ 0x1C00E5800 (NtDWMCommitInputSystemOutputConfig.c)
 * Callees:
 *     ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00092D0 (--0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     RIMOnDisplayStateChange @ 0x1C000C8F8 (RIMOnDisplayStateChange.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C005DAA4 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?_CommitConfiguration@CInputConfig@@AEAAJXZ @ 0x1C0061224 (-_CommitConfiguration@CInputConfig@@AEAAJXZ.c)
 *     ?_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ @ 0x1C0061350 (-_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ.c)
 */

__int64 __fastcall CInputConfig::CommitConfiguration(CInputConfig *this)
{
  struct _SINGLE_LIST_ENTRY *v1; // rbx
  int v2; // ebx
  CCursorClip *v3; // rcx
  __int64 v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v1 = gpInputConfig;
  CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded(
    (CInpLockExclusiveIfNeeded *)&v6,
    (struct CInpPushLock *)&CInputConfig::slock);
  if ( v1[1].Next )
  {
    v2 = CInputConfig::_CommitConfiguration((CInputConfig *)v1);
    if ( v2 < 0 )
      goto LABEL_5;
  }
  else
  {
    LOBYTE(v1[5].Next) = 1;
    CInputConfig::_CreateLegacyConfiguration((CInputConfig *)v1);
  }
  RIMOnDisplayStateChange();
  CCursorClip::OnDisplayStateChange(v3);
  v2 = 0;
LABEL_5:
  if ( !v7 )
  {
    v4 = v6;
    *(_QWORD *)(v6 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v2;
}
