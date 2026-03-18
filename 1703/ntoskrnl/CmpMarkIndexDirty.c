/*
 * XREFs of CmpMarkIndexDirty @ 0x1404D114C
 * Callers:
 *     CmpMarkKeyDirty @ 0x1404D177C (CmpMarkKeyDirty.c)
 *     CmpMarkKeyParentDirty @ 0x14058E6DC (CmpMarkKeyParentDirty.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpCommitRenameKeyUoW @ 0x140673838 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x1404D2CB0 (CmpCopyCompressedName.c)
 *     CmpFindSubKeyInRoot @ 0x1405016A0 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140501DA0 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkIndexDirty(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int16 v7; // r14
  char v8; // r15
  PVOID PoolWithTag; // rax
  void *v10; // rsi
  __int64 v11; // r13
  __int64 v12; // r14
  unsigned int v13; // r12d
  _WORD *v14; // rdi
  unsigned int v16; // edi
  _DWORD v17[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v18[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  PVOID v20; // [rsp+48h] [rbp-8h]
  int v21; // [rsp+90h] [rbp+40h] BYREF
  int v22; // [rsp+A8h] [rbp+58h] BYREF

  v17[1] = 0;
  v17[0] = -1;
  v18[0] = -1;
  v18[1] = 0;
  v21 = -1;
  v19 = 0LL;
  v20 = 0LL;
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, v17);
  v6 = v5;
  if ( !v5 )
    return 0;
  if ( (*(_BYTE *)(v5 + 2) & 0x20) != 0 )
  {
    v8 = 1;
    LOWORD(v19) = 2 * *(_WORD *)(v5 + 72);
    v7 = v19;
    WORD1(v19) = v19;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v19, 0x20204D43u);
    v20 = PoolWithTag;
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      CmpCopyCompressedName(PoolWithTag, v7, v6 + 76, *(unsigned __int16 *)(v6 + 72));
      goto LABEL_5;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
    return 0;
  }
  v10 = (void *)(v5 + 76);
  LOWORD(v19) = *(_WORD *)(v5 + 72);
  v8 = 0;
  WORD1(v19) = v19;
  v20 = (PVOID)(v5 + 76);
LABEL_5:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, v17);
  if ( !v11 )
    goto LABEL_26;
  v12 = 0LL;
  if ( !*(_DWORD *)(BugCheckParameter2 + 192) )
  {
LABEL_25:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
LABEL_26:
    if ( v8 )
      ExFreePoolWithTag(v10, 0);
    return 0;
  }
  while ( 1 )
  {
    if ( !*(_DWORD *)(v11 + 4 * v12 + 20) )
      goto LABEL_15;
    v13 = *(_DWORD *)(v11 + 4 * v12 + 28);
    v14 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     v13,
                     v18);
    if ( !v14 )
      goto LABEL_25;
    if ( *v14 != 26994 )
      break;
    if ( (int)CmpFindSubKeyInRoot(BugCheckParameter2, v14, &v19, &v21) < 0 )
    {
LABEL_24:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
      goto LABEL_25;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
    v16 = v21;
    if ( v21 != -1 )
    {
      if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, v13) )
        goto LABEL_25;
      v13 = v16;
      v14 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       v16,
                       v18);
      if ( !v14 )
        goto LABEL_25;
      break;
    }
LABEL_15:
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= *(_DWORD *)(BugCheckParameter2 + 192) )
      goto LABEL_25;
  }
  CmpFindSubKeyInLeafWithStatus(BugCheckParameter2, (_DWORD)v14, (unsigned int)&v19, (unsigned int)&v21, (__int64)&v22);
  if ( v22 < 0 )
    goto LABEL_24;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
  if ( v21 == -1 )
    goto LABEL_15;
  if ( v8 )
    ExFreePoolWithTag(v10, 0);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
  return HvpMarkCellDirty(BugCheckParameter2, v13);
}
