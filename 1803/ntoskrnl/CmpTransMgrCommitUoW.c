/*
 * XREFs of CmpTransMgrCommitUoW @ 0x1405DF1D4
 * Callers:
 *     CmpTransMgrCommit @ 0x1405DEFD8 (CmpTransMgrCommit.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpSignalDeferredPosts @ 0x1404E21B4 (CmpSignalDeferredPosts.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpReportNotify @ 0x14054F614 (CmpReportNotify.c)
 *     CmpCommitSetValueKeyUoW @ 0x1405DF3F0 (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1405DF734 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpCommitAddKeyUoW @ 0x1405DF9A8 (CmpCommitAddKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x1405F3504 (CmpCommitSetSecurityUoW.c)
 *     CmpCommitDeleteKeyUoW @ 0x140703850 (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x140703A10 (CmpCommitRenameKeyUoW.c)
 */

__int64 __fastcall CmpTransMgrCommitUoW(__int64 a1, __int64 *a2)
{
  int v4; // edi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // r8d
  int v13; // eax
  __int64 v14; // rax
  ULONG_PTR v15; // r14
  unsigned int v16; // r15d
  __int64 v17; // r13
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // ecx
  __int64 v23; // rcx
  _DWORD v24[4]; // [rsp+38h] [rbp-39h] BYREF
  _QWORD *v25[2]; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+78h] [rbp+7h] BYREF

  v4 = 0;
  if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 1uLL) )
    TlgWrite(&stru_140397090, &unk_1403088B9, 0LL, 0LL, 2u, &pData);
  v25[1] = v25;
  v25[0] = v25;
  v5 = *(_DWORD *)(a1 + 68);
  if ( !v5 )
  {
    CmpLockRegistryExclusive();
    v4 = CmpCommitAddKeyUoW(a1, a2);
    if ( v4 < 0 )
    {
LABEL_14:
      CmpUnlockRegistry();
      goto LABEL_15;
    }
    v12 = 1;
    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 232LL) = 0LL;
LABEL_27:
    CmpReportNotify(*(_QWORD *)(a1 + 48), 0, v12, (__int64)v25);
    goto LABEL_14;
  }
  if ( v5 == 2 )
  {
    CmpLockRegistryExclusive();
    CmpReportNotify(*(_QWORD *)(a1 + 48), 0, 1, (__int64)v25);
    v13 = CmpCommitDeleteKeyUoW(a1, a2);
LABEL_31:
    v4 = v13;
    goto LABEL_14;
  }
  if ( v5 <= 3 )
    goto LABEL_15;
  if ( v5 <= 5 )
  {
    CmpLockRegistry();
    CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
    ExAcquirePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 72LL, 0LL);
    v6 = CmpCommitSetValueKeyUoW(a1, a2);
    goto LABEL_9;
  }
  if ( v5 == 6 )
  {
    CmpLockRegistry();
    CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
    ExAcquirePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 72LL, 0LL);
    v6 = CmpCommitDeleteValueKeyUoW(a1, a2);
LABEL_9:
    v4 = v6;
    if ( v6 >= 0 )
      CmpReportNotify(*(_QWORD *)(a1 + 48), 0, 4, (__int64)v25);
    goto LABEL_11;
  }
  if ( v5 == 9 )
  {
    CmpLockRegistryExclusive();
    v4 = CmpCommitSetSecurityUoW(a1, a2);
    if ( v4 < 0 )
      goto LABEL_14;
    v12 = 10;
    goto LABEL_27;
  }
  if ( v5 != 7 )
  {
    if ( v5 != 12 )
      goto LABEL_15;
    CmpLockRegistryExclusive();
    v13 = CmpCommitRenameKeyUoW(a1, a2);
    goto LABEL_31;
  }
  v24[0] = -1;
  v24[1] = 0;
  CmpLockRegistry();
  CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
  ExAcquirePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 72LL, 0LL);
  v14 = *(_QWORD *)(a1 + 48);
  v15 = *(_QWORD *)(v14 + 24);
  v16 = *(_DWORD *)(v14 + 32);
  v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v15 + 8))(v15, v16, v24);
  if ( !v17 )
  {
    v4 = -1073741670;
LABEL_11:
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v7 + 72));
    KeAbPostRelease(v7 + 72);
    CmpUnlockKcb(*(_QWORD *)(a1 + 48), v8, v9, v10);
    goto LABEL_14;
  }
  if ( HvpMarkCellDirty(v15, v16, 0) )
  {
    v22 = *(_DWORD *)(v17 + 52) ^ (*(_DWORD *)(v17 + 52) ^ (*(_DWORD *)(a1 + 88) << 16)) & 0xF0000;
    *(_DWORD *)(v17 + 52) = v22;
    *(_DWORD *)(*(_QWORD *)(a1 + 48) + 176LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 176LL) ^ HIWORD(v22)) & 0xF;
    v23 = *a2;
    *(_QWORD *)(v17 + 4) = *a2;
    ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 296LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 160LL) = v23;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v15 + 16))(v15, v24);
    goto LABEL_11;
  }
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v15 + 16))(v15, v24);
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v18 + 72));
  KeAbPostRelease(v18 + 72);
  CmpUnlockKcb(*(_QWORD *)(a1 + 48), v19, v20, v21);
  CmpUnlockRegistry();
  v4 = -1073741443;
LABEL_15:
  CmpSignalDeferredPosts(v25);
  if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 1uLL) )
    TlgWrite(&stru_140397090, &unk_140308894, 0LL, 0LL, 2u, &v27);
  return (unsigned int)v4;
}
