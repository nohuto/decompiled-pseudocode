/*
 * XREFs of CmpSelectLeaf @ 0x1405E55DC
 * Callers:
 *     CmpAddSubKeyToList @ 0x140513844 (CmpAddSubKeyToList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyInRoot @ 0x1404A8BE0 (CmpFindSubKeyInRoot.c)
 *     CmpDoCompareKeyName @ 0x1404A9790 (CmpDoCompareKeyName.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpSplitLeaf @ 0x140700588 (CmpSplitLeaf.c)
 */

__int64 __fastcall CmpSelectLeaf(
        ULONG_PTR BugCheckParameter2,
        unsigned int *a2,
        const UNICODE_STRING *a3,
        int a4,
        unsigned int **a5)
{
  ULONG_PTR v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int i; // esi
  unsigned int v12; // r14d
  __int64 (__fastcall *v13)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v14; // rax
  unsigned int *v15; // r15
  __int64 v17; // rax
  int v18; // eax
  bool v19; // sf
  void (__fastcall *v20)(ULONG_PTR, _DWORD *); // rax
  __int64 (__fastcall *v21)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 (__fastcall *v25)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v26; // rax
  unsigned int v27; // esi
  _DWORD v28[2]; // [rsp+20h] [rbp-10h] BYREF
  _DWORD v29[2]; // [rsp+28h] [rbp-8h] BYREF
  unsigned int v30; // [rsp+78h] [rbp+48h] BYREF
  int v31; // [rsp+88h] [rbp+58h]

  v31 = a4;
  v29[0] = -1;
  v28[0] = -1;
  v28[1] = 0;
  v8 = *a2;
  v29[1] = 0;
  if ( HvpMarkCellDirty(BugCheckParameter2, v8, 0) )
  {
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, *a2, v29);
    v10 = v9;
    if ( v9 )
    {
      for ( i = CmpFindSubKeyInRoot(BugCheckParameter2, v9, (int)a3, &v30);
            (i & 0x80000000) == 0;
            i = CmpFindSubKeyInRoot(BugCheckParameter2, v10, (int)a3, &v30) )
      {
        v12 = v30;
        v13 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
        if ( v30 == -1 )
        {
          v15 = (unsigned int *)(v10 + 4 * (i + 1LL));
          v17 = v13(BugCheckParameter2, *v15, v28);
          if ( !v17 )
            break;
          v18 = CmpDoCompareKeyName(BugCheckParameter2, a3, *(_DWORD *)(v17 + 4));
          if ( v18 == 2 )
          {
LABEL_29:
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
            break;
          }
          v19 = v18 < 0;
          v20 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16);
          if ( v19 )
          {
            v20(BugCheckParameter2, v28);
            v21 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
            if ( i )
            {
              v22 = i - 1;
              goto LABEL_16;
            }
            v30 = *(_DWORD *)(v10 + 4);
            v12 = v30;
            v24 = v21(BugCheckParameter2, v30, v28);
            if ( !v24 )
              break;
            if ( *(_WORD *)(v24 + 2) < 0x3F5u )
            {
              v15 = (unsigned int *)(v10 + 4);
              goto LABEL_8;
            }
          }
          else
          {
            v20(BugCheckParameter2, v28);
            v25 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
            v30 = *v15;
            v12 = v30;
            v26 = v25(BugCheckParameter2, v30, v28);
            if ( !v26 )
              break;
            if ( *(_WORD *)(v26 + 2) < 0x3F5u )
              goto LABEL_8;
            if ( i < (unsigned int)*(unsigned __int16 *)(v10 + 2) - 1 )
            {
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
              v21 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
              v22 = i + 1;
LABEL_16:
              v15 = (unsigned int *)(v10 + 4 * (v22 + 1));
              v30 = *v15;
              v12 = v30;
              v23 = v21(BugCheckParameter2, v30, v28);
              if ( !v23 )
                break;
              if ( *(_WORD *)(v23 + 2) < 0x3F5u )
                goto LABEL_8;
            }
          }
        }
        else
        {
          v14 = v13(BugCheckParameter2, v30, v28);
          if ( !v14 )
            break;
          if ( *(_WORD *)(v14 + 2) < 0x3F5u )
          {
            v15 = (unsigned int *)(v10 + 4 * (i + 1LL));
LABEL_8:
            *a5 = v15;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
            return v12;
          }
        }
        v27 = CmpSplitLeaf(BugCheckParameter2, *a2);
        if ( v27 == -1 )
          goto LABEL_29;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
        *a2 = v27;
        v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v27,
                v29);
        if ( !v10 )
          goto LABEL_29;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
      }
      if ( v10 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
    }
  }
  return 0xFFFFFFFFLL;
}
