/*
 * XREFs of CmpTransMgrCommitUoW @ 0x1405A5398
 * Callers:
 *     CmpTransMgrCommit @ 0x1405A51A4 (CmpTransMgrCommit.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpSignalDeferredPosts @ 0x14046FA38 (CmpSignalDeferredPosts.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpReportNotify @ 0x14047C204 (CmpReportNotify.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpCommitSetValueKeyUoW @ 0x1405A55BC (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitAddKeyUoW @ 0x1405A590C (CmpCommitAddKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1405A6C70 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x1405A6FC8 (CmpCommitSetSecurityUoW.c)
 *     CmpCommitDeleteKeyUoW @ 0x14069E61C (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x14069E7D0 (CmpCommitRenameKeyUoW.c)
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
  _QWORD *v15[2]; // [rsp+38h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-28h] BYREF

  v2 = 0;
  if ( stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 1uLL) )
    TlgWrite(&stru_1403549F0, &unk_1402CEF08, 0LL, 0LL, 2u, &pData);
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
    goto LABEL_12;
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
      CmpLockRegistry();
      CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 2848LL), 1u);
      v6 = CmpCommitSetValueKeyUoW(a1, a2);
      goto LABEL_9;
    }
    switch ( v5 )
    {
      case 6:
        CmpLockRegistry();
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 2848LL), 1u);
        v6 = CmpCommitDeleteValueKeyUoW(a1, a2);
LABEL_9:
        v2 = v6;
        if ( v6 >= 0 )
          CmpReportNotify(
            *(_QWORD *)(a1 + 48),
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
            0LL,
            4,
            (__int64)v15);
LABEL_11:
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 2848LL));
        CmpUnlockKcb(*(_QWORD *)(a1 + 48));
LABEL_12:
        CmpUnlockRegistry();
        goto LABEL_13;
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
        goto LABEL_12;
      case 7:
        v14[0] = -1;
        v14[1] = 0;
        CmpLockRegistry();
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 2848LL), 1u);
        v9 = *(_QWORD *)(a1 + 48);
        v10 = *(_QWORD *)(v9 + 24);
        v11 = *(_DWORD *)(v9 + 32);
        v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v11, v14);
        if ( v12 )
        {
          if ( !HvpMarkCellDirty(v10, v11, 0) )
          {
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v14);
            ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 2848LL));
            CmpUnlockKcb(*(_QWORD *)(a1 + 48));
            CmpUnlockRegistry();
            v2 = -1073741443;
            goto LABEL_13;
          }
          *(_DWORD *)(v12 + 52) ^= (*(_DWORD *)(v12 + 52) ^ (*(_DWORD *)(a1 + 88) << 16)) & 0xF0000;
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 176LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 176LL) ^ HIWORD(*(_DWORD *)(v12 + 52))) & 0xF;
          v13 = *a2;
          *(_QWORD *)(v12 + 4) = *a2;
          ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 296LL);
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 160LL) = v13;
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v14);
        }
        else
        {
          v2 = -1073741670;
        }
        goto LABEL_11;
    }
    if ( v5 != 12 )
      goto LABEL_13;
    CmpLockRegistryExclusive();
    v8 = CmpCommitRenameKeyUoW(a1, a2);
LABEL_28:
    v2 = v8;
    goto LABEL_12;
  }
LABEL_13:
  CmpSignalDeferredPosts(v15);
  if ( stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 1uLL) )
    TlgWrite(&stru_1403549F0, &unk_1402CEEE3, 0LL, 0LL, 2u, &pData);
  return (unsigned int)v2;
}
