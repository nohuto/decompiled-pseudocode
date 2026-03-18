/*
 * XREFs of CmpRebuildKcbCache @ 0x1404985B8
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x140498730 (CmpTransMgrFreeVolatileData.c)
 *     CmpSaveBootControlSet @ 0x1406EB510 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpSyncKcbCacheForHive @ 0x1406F5A80 (CmpSyncKcbCacheForHive.c)
 *     CmpCommitDiscardReplacePost @ 0x1406FABE0 (CmpCommitDiscardReplacePost.c)
 *     CmpCloneHwProfile @ 0x1406FC0D0 (CmpCloneHwProfile.c)
 *     CmpRefreshHive @ 0x14070306C (CmpRefreshHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140516AA4 (CmpRebuildKcbCacheFromNode.c)
 */

char __fastcall CmpRebuildKcbCache(ULONG_PTR a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v7 = 0;
  v2 = *(_DWORD *)(a1 + 4);
  v6 = -1;
  if ( (v2 & 0x10) != 0 || (*(_DWORD *)(a1 + 176) & 0x400000) != 0 )
    return 1;
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    v4 = *(unsigned int *)(a1 + 32);
    if ( (_DWORD)v4 != -1 )
    {
      if ( (*(__int64 (__fastcall **)(__int64, __int64, int *))(v3 + 8))(v3, v4, &v6) )
      {
        ++*(_QWORD *)(a1 + 296);
        CmpRebuildKcbCacheFromNode(a1);
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), &v6);
        return 1;
      }
    }
  }
  return 0;
}
