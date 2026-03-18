/*
 * XREFs of CmpRemoveSubKey @ 0x1404D1E7C
 * Callers:
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpCommitRenameKeyUoW @ 0x140673838 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpRemoveSubKeyFromList @ 0x1404D1F10 (CmpRemoveSubKeyFromList.c)
 */

char __fastcall CmpRemoveSubKey(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  char v7; // bl
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = -1;
  v10 = 0;
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v9);
  if ( !v5 )
    return 0;
  v6 = a3 >> 31;
  v7 = CmpRemoveSubKeyFromList(BugCheckParameter2);
  if ( v7 )
  {
    --*(_DWORD *)(v5 + 4 * v6 + 20);
    v7 = 1;
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
  return v7;
}
