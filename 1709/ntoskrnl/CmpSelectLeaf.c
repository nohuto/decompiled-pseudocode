/*
 * XREFs of CmpSelectLeaf @ 0x1405E819C
 * Callers:
 *     CmpAddSubKeyToList @ 0x140473EEC (CmpAddSubKeyToList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyInRoot @ 0x14047FAD0 (CmpFindSubKeyInRoot.c)
 *     CmpDoCompareKeyName @ 0x140481960 (CmpDoCompareKeyName.c)
 *     CmpSplitLeaf @ 0x14069B95C (CmpSplitLeaf.c)
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
  unsigned int i; // r14d
  unsigned int v12; // esi
  __int64 (__fastcall *v13)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int *v17; // r15
  __int64 v18; // rax
  int v19; // eax
  bool v20; // sf
  void (__fastcall *v21)(ULONG_PTR, _DWORD *); // rax
  __int64 (__fastcall *v22)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 (__fastcall *v26)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v27; // rax
  unsigned int v28; // esi
  _DWORD v29[2]; // [rsp+20h] [rbp-10h] BYREF
  _DWORD v30[2]; // [rsp+28h] [rbp-8h] BYREF
  unsigned int v31; // [rsp+78h] [rbp+48h] BYREF
  int v32; // [rsp+88h] [rbp+58h]

  v32 = a4;
  v30[0] = -1;
  v29[0] = -1;
  v29[1] = 0;
  v8 = *a2;
  v30[1] = 0;
  if ( HvpMarkCellDirty(BugCheckParameter2, v8, 0) )
  {
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, *a2, v30);
    v10 = v9;
    if ( v9 )
    {
      for ( i = CmpFindSubKeyInRoot(BugCheckParameter2, v9, (int)a3, &v31);
            (i & 0x80000000) == 0;
            i = CmpFindSubKeyInRoot(BugCheckParameter2, v10, (int)a3, &v31) )
      {
        v12 = v31;
        v13 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
        if ( v31 == -1 )
        {
          v17 = (unsigned int *)(v10 + 4 * (i + 1LL));
          v18 = v13(BugCheckParameter2, *v17, v29);
          if ( !v18 )
            break;
          v19 = CmpDoCompareKeyName(BugCheckParameter2, a3, *(_DWORD *)(v18 + 4));
          if ( v19 == 2 )
          {
LABEL_30:
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
            break;
          }
          v20 = v19 < 0;
          v21 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16);
          if ( v20 )
          {
            v21(BugCheckParameter2, v29);
            v22 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
            if ( i )
            {
              v23 = i - 1;
              goto LABEL_17;
            }
            v31 = *(_DWORD *)(v10 + 4);
            v12 = v31;
            v25 = v22(BugCheckParameter2, v31, v29);
            if ( !v25 )
              break;
            if ( *(_WORD *)(v25 + 2) < 0x3F5u )
            {
              v15 = v10 + 4;
              goto LABEL_8;
            }
          }
          else
          {
            v21(BugCheckParameter2, v29);
            v26 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
            v31 = *v17;
            v12 = v31;
            v27 = v26(BugCheckParameter2, v31, v29);
            if ( !v27 )
              break;
            if ( *(_WORD *)(v27 + 2) < 0x3F5u )
            {
LABEL_19:
              *a5 = v17;
              goto LABEL_9;
            }
            if ( i < (unsigned int)*(unsigned __int16 *)(v10 + 2) - 1 )
            {
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
              v22 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
              v23 = i + 1;
LABEL_17:
              v17 = (unsigned int *)(v10 + 4 * (v23 + 1));
              v31 = *v17;
              v12 = v31;
              v24 = v22(BugCheckParameter2, v31, v29);
              if ( !v24 )
                break;
              if ( *(_WORD *)(v24 + 2) < 0x3F5u )
                goto LABEL_19;
            }
          }
        }
        else
        {
          v14 = v13(BugCheckParameter2, v31, v29);
          if ( !v14 )
            break;
          if ( *(_WORD *)(v14 + 2) < 0x3F5u )
          {
            v15 = v10 + 4 * (i + 1LL);
LABEL_8:
            *a5 = (unsigned int *)v15;
LABEL_9:
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v30);
            return v12;
          }
        }
        v28 = CmpSplitLeaf(BugCheckParameter2, *a2);
        if ( v28 == -1 )
          goto LABEL_30;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v30);
        *a2 = v28;
        v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v28,
                v30);
        if ( !v10 )
          goto LABEL_30;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
      }
      if ( v10 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v30);
    }
  }
  return 0xFFFFFFFFLL;
}
