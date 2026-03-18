/*
 * XREFs of CmpTransMgrCommitUoW @ 0x1404CDAB8
 * Callers:
 *     CmpTransMgrCommit @ 0x1404CD8C4 (CmpTransMgrCommit.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpReportNotify @ 0x14048CFF4 (CmpReportNotify.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpCommitSetValueKeyUoW @ 0x1404CC0FC (CmpCommitSetValueKeyUoW.c)
 *     CmpSignalDeferredPosts @ 0x1404CE014 (CmpSignalDeferredPosts.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpCommitAddKeyUoW @ 0x140571D00 (CmpCommitAddKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x140573C38 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x14059B280 (CmpCommitSetSecurityUoW.c)
 *     CmpCommitDeleteKeyUoW @ 0x140673690 (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x140673838 (CmpCommitRenameKeyUoW.c)
 */

__int64 __fastcall CmpTransMgrCommitUoW(__int64 a1, __int64 *a2)
{
  int v2; // edi
  int v5; // eax
  int v6; // eax
  int v8; // eax
  __int64 v9; // rax
  ULONG_PTR v10; // r14
  unsigned int v11; // r15d
  __int64 v12; // r13
  __int64 v13; // rcx
  _DWORD v14[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-28h] BYREF

  v2 = 0;
  if ( stru_14033C3C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C3C0, 1uLL) )
    TlgWrite(&stru_14033C3C0, &unk_1402AB129, 0LL, 0LL, 2u, &pData);
  v15[1] = v15;
  v15[0] = v15;
  v5 = *(_DWORD *)(a1 + 68);
  if ( !v5 )
  {
    CmpLockRegistryExclusive();
    v2 = CmpCommitAddKeyUoW(a1, a2);
    if ( v2 >= 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 232LL) = 0LL;
      CmpReportNotify(
        *(_QWORD *)(a1 + 48),
        *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
        0LL,
        1,
        (__int64)v15);
    }
    goto LABEL_14;
  }
  if ( v5 == 2 )
  {
    CmpLockRegistryExclusive();
    CmpReportNotify(
      *(_QWORD *)(a1 + 48),
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
      0LL,
      1,
      (__int64)v15);
    v8 = CmpCommitDeleteKeyUoW(a1, a2);
    goto LABEL_28;
  }
  if ( v5 > 3 )
  {
    if ( v5 <= 5 )
    {
      CmpLockRegistry(a1);
      CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 2848LL), 1u);
      v6 = CmpCommitSetValueKeyUoW(a1, a2);
LABEL_11:
      v2 = v6;
      if ( v6 >= 0 )
        CmpReportNotify(
          *(_QWORD *)(a1 + 48),
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
          0LL,
          4,
          (__int64)v15);
LABEL_13:
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 2848LL));
      CmpUnlockKcb(*(PVOID *)(a1 + 48));
LABEL_14:
      CmpUnlockRegistry();
      goto LABEL_15;
    }
    switch ( v5 )
    {
      case 6:
        CmpLockRegistry(a1);
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 2848LL), 1u);
        v6 = CmpCommitDeleteValueKeyUoW(a1, a2);
        goto LABEL_11;
      case 9:
        CmpLockRegistryExclusive();
        v2 = CmpCommitSetSecurityUoW(a1, a2);
        if ( v2 >= 0 )
          CmpReportNotify(
            *(_QWORD *)(a1 + 48),
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
            0LL,
            10,
            (__int64)v15);
        goto LABEL_14;
      case 7:
        v14[0] = -1;
        v14[1] = 0;
        CmpLockRegistry(a1);
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 2848LL), 1u);
        v9 = *(_QWORD *)(a1 + 48);
        v10 = *(_QWORD *)(v9 + 24);
        v11 = *(_DWORD *)(v9 + 32);
        v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v11, v14);
        if ( v12 )
        {
          if ( !(unsigned __int8)HvpMarkCellDirty(v10, v11) )
          {
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v14);
            ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 2848LL));
            CmpUnlockKcb(*(PVOID *)(a1 + 48));
            CmpUnlockRegistry();
            v2 = -1073741443;
            goto LABEL_15;
          }
          *(_DWORD *)(v12 + 52) ^= (*(_DWORD *)(v12 + 52) ^ (*(_DWORD *)(a1 + 88) << 16)) & 0xF0000;
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 176LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 176LL) ^ HIWORD(*(_DWORD *)(v12 + 52))) & 0xF;
          v13 = *a2;
          *(_QWORD *)(v12 + 4) = *a2;
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 160LL) = v13;
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v14);
        }
        else
        {
          v2 = -1073741670;
        }
        goto LABEL_13;
    }
    if ( v5 != 12 )
      goto LABEL_15;
    CmpLockRegistryExclusive();
    v8 = CmpCommitRenameKeyUoW(a1, a2);
LABEL_28:
    v2 = v8;
    goto LABEL_14;
  }
LABEL_15:
  CmpSignalDeferredPosts(v15);
  if ( stru_14033C3C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C3C0, 1uLL) )
    TlgWrite(&stru_14033C3C0, &unk_1402AB104, 0LL, 0LL, 2u, &pData);
  return (unsigned int)v2;
}
