/*
 * XREFs of CmpDuplicateKey @ 0x140664EA8
 * Callers:
 *     CmMoveKey @ 0x1406631AC (CmMoveKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     CmpCopyKeyPartial @ 0x140571EDC (CmpCopyKeyPartial.c)
 *     CmpDuplicateIndex @ 0x14066FE98 (CmpDuplicateIndex.c)
 */

__int64 __fastcall CmpDuplicateKey(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // ebp
  __int64 (__fastcall *v5)(ULONG_PTR, __int64, int *); // rax
  _DWORD *v7; // rsi
  __int64 v8; // rax
  _DWORD *v9; // rbx
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+28h] [rbp-40h]
  int v17; // [rsp+70h] [rbp+8h] BYREF
  int v18; // [rsp+74h] [rbp+Ch]
  int v19; // [rsp+88h] [rbp+20h] BYREF
  int v20; // [rsp+8Ch] [rbp+24h]

  v17 = -1;
  v18 = 0;
  v20 = 0;
  v4 = a2;
  v5 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8);
  v19 = -1;
  v7 = 0LL;
  v8 = v5(BugCheckParameter2, a2, &v17);
  v9 = (_DWORD *)v8;
  if ( !v8 )
    return (unsigned int)-1073741670;
  v11 = CmpCopyKeyPartial(BugCheckParameter2, v4, BugCheckParameter2, *(_DWORD *)(v8 + 16), 6, v16, 0);
  *a3 = v11;
  if ( v11 == -1 )
    goto LABEL_4;
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v11, &v19);
  v7 = (_DWORD *)v12;
  if ( !v12 )
  {
LABEL_6:
    CmpFreeKeyByCell(BugCheckParameter2, *a3, 0);
LABEL_4:
    v10 = -1073741670;
    goto LABEL_12;
  }
  if ( v9[7] == -1 )
  {
    *(_DWORD *)(v12 + 28) = -1;
  }
  else
  {
    v13 = CmpDuplicateIndex(BugCheckParameter2);
    v7[7] = v13;
    if ( v13 == -1 )
      goto LABEL_6;
  }
  v7[5] = v9[5];
  v7[8] = v9[8];
  v14 = v9[6];
  v10 = 0;
  v7[6] = v14;
LABEL_12:
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v17);
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
  return v10;
}
