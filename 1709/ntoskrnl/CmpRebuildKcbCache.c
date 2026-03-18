/*
 * XREFs of CmpRebuildKcbCache @ 0x1405695C4
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x1405691F0 (CmpTransMgrFreeVolatileData.c)
 *     CmpSaveBootControlSet @ 0x1405A4B40 (CmpSaveBootControlSet.c)
 *     CmMoveKey @ 0x14068C890 (CmMoveKey.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpSyncKcbCacheForHive @ 0x140692830 (CmpSyncKcbCacheForHive.c)
 *     CmpCommitDiscardReplacePost @ 0x140697C10 (CmpCommitDiscardReplacePost.c)
 *     CmpCloneHwProfile @ 0x140698898 (CmpCloneHwProfile.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1404766A8 (CmpRebuildKcbCacheFromNode.c)
 */

char __fastcall CmpRebuildKcbCache(ULONG_PTR BugCheckParameter3)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v8 = 0;
  v2 = *(_DWORD *)(BugCheckParameter3 + 4);
  v7 = -1;
  if ( (v2 & 0x10) != 0 || (*(_DWORD *)(BugCheckParameter3 + 176) & 0x400000) != 0 )
    return 1;
  v3 = *(_QWORD *)(BugCheckParameter3 + 24);
  if ( v3 )
  {
    v4 = *(unsigned int *)(BugCheckParameter3 + 32);
    if ( (_DWORD)v4 != -1 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(v3 + 8))(v3, v4, &v7);
      if ( v5 )
      {
        ++*(_QWORD *)(BugCheckParameter3 + 296);
        CmpRebuildKcbCacheFromNode(BugCheckParameter3, v5);
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(BugCheckParameter3 + 24) + 16LL))(
          *(_QWORD *)(BugCheckParameter3 + 24),
          &v7);
        return 1;
      }
    }
  }
  return 0;
}
