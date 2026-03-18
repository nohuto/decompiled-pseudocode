/*
 * XREFs of CmpMarkIndexDirty @ 0x14057076C
 * Callers:
 *     CmpMarkKeyDirty @ 0x1404A0B4C (CmpMarkKeyDirty.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpMarkKeyParentDirty @ 0x1406FDE70 (CmpMarkKeyParentDirty.c)
 *     CmpCommitRenameKeyUoW @ 0x140703A10 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x1404A33EC (CmpCopyCompressedName.c)
 *     CmpFindSubKeyInRoot @ 0x1404A8BE0 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404A8F60 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkIndexDirty(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int16 v7; // cx
  unsigned int v8; // r14d
  char v9; // r15
  _WORD *PoolWithTag; // rax
  void *v11; // rsi
  __int64 v12; // r13
  __int64 v13; // r14
  unsigned int v14; // r12d
  _WORD *v15; // rdi
  unsigned int v17; // edi
  _DWORD v18[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v19[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  _WORD *v21; // [rsp+48h] [rbp-8h]
  unsigned int v22; // [rsp+90h] [rbp+40h] BYREF
  int v23; // [rsp+A8h] [rbp+58h] BYREF

  v18[1] = 0;
  v18[0] = -1;
  v19[0] = -1;
  v19[1] = 0;
  v22 = -1;
  v20 = 0LL;
  v21 = 0LL;
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, v18);
  v6 = v5;
  if ( !v5 )
    return 0;
  v7 = *(_WORD *)(v5 + 72);
  if ( (*(_BYTE *)(v5 + 2) & 0x20) != 0 )
  {
    v8 = (unsigned __int16)(2 * v7);
    v9 = 1;
    LOWORD(v20) = 2 * v7;
    WORD1(v20) = 2 * v7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(2 * v7), 0x20204D43u);
    v21 = PoolWithTag;
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      CmpCopyCompressedName(PoolWithTag, v8, (unsigned __int8 *)(v6 + 76), *(unsigned __int16 *)(v6 + 72));
      goto LABEL_5;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
    return 0;
  }
  v11 = (void *)(v5 + 76);
  LOWORD(v20) = *(_WORD *)(v5 + 72);
  v21 = (_WORD *)(v5 + 76);
  v9 = 0;
  WORD1(v20) = v7;
LABEL_5:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, v18);
  if ( !v12 )
    goto LABEL_26;
  v13 = 0LL;
  if ( !*(_DWORD *)(BugCheckParameter2 + 208) )
  {
LABEL_25:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
LABEL_26:
    if ( v9 )
      ExFreePoolWithTag(v11, 0);
    return 0;
  }
  while ( 1 )
  {
    if ( !*(_DWORD *)(v12 + 4 * v13 + 20) )
      goto LABEL_15;
    v14 = *(_DWORD *)(v12 + 4 * v13 + 28);
    v15 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     v14,
                     v19);
    if ( !v15 )
      goto LABEL_25;
    if ( *v15 != 26994 )
      break;
    if ( (int)CmpFindSubKeyInRoot(BugCheckParameter2, (__int64)v15, (int)&v20, &v22) < 0 )
    {
LABEL_24:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
      goto LABEL_25;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
    v17 = v22;
    if ( v22 != -1 )
    {
      if ( !HvpMarkCellDirty(BugCheckParameter2, v14, 0) )
        goto LABEL_25;
      v14 = v17;
      v15 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       v17,
                       v19);
      if ( !v15 )
        goto LABEL_25;
      break;
    }
LABEL_15:
    v13 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v13 >= *(_DWORD *)(BugCheckParameter2 + 208) )
      goto LABEL_25;
  }
  CmpFindSubKeyInLeafWithStatus(BugCheckParameter2, (__int64)v15, (unsigned __int16 *)&v20, &v22, &v23);
  if ( v23 < 0 )
    goto LABEL_24;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
  if ( v22 == -1 )
    goto LABEL_15;
  if ( v9 )
    ExFreePoolWithTag(v11, 0);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
  return HvpMarkCellDirty(BugCheckParameter2, v14, 0);
}
