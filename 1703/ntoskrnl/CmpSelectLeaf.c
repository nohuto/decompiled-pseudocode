/*
 * XREFs of CmpSelectLeaf @ 0x140574238
 * Callers:
 *     CmpAddSubKeyToList @ 0x1404D2404 (CmpAddSubKeyToList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpDoCompareKeyName @ 0x1404D2F90 (CmpDoCompareKeyName.c)
 *     CmpFindSubKeyInRoot @ 0x1405016A0 (CmpFindSubKeyInRoot.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpSplitLeaf @ 0x140670E58 (CmpSplitLeaf.c)
 */

__int64 __fastcall CmpSelectLeaf(
        ULONG_PTR BugCheckParameter2,
        unsigned int *a2,
        const UNICODE_STRING *a3,
        int a4,
        __int64 *a5)
{
  ULONG_PTR v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int i; // esi
  unsigned int v12; // r14d
  __int64 (__fastcall *v13)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v17; // r15
  __int64 v18; // rax
  int v19; // eax
  bool v20; // sf
  void (__fastcall *v21)(ULONG_PTR, _DWORD *); // rax
  ULONG_PTR v22; // rcx
  __int64 v23; // rax
  __int64 (__fastcall *v24)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v25; // rax
  __int64 (__fastcall *v26)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v27; // rax
  __int64 (__fastcall *v28)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v29; // rax
  unsigned int v30; // esi
  _DWORD v31[2]; // [rsp+20h] [rbp-10h] BYREF
  _DWORD v32[2]; // [rsp+28h] [rbp-8h] BYREF
  unsigned int v33; // [rsp+78h] [rbp+48h] BYREF
  int v34; // [rsp+88h] [rbp+58h]

  v34 = a4;
  v32[0] = -1;
  v31[0] = -1;
  v31[1] = 0;
  v8 = *a2;
  v32[1] = 0;
  if ( HvpMarkCellDirty(BugCheckParameter2, v8, 0) )
  {
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, *a2, v32);
    v10 = v9;
    if ( v9 )
    {
      for ( i = CmpFindSubKeyInRoot(BugCheckParameter2, v9, a3, &v33);
            (i & 0x80000000) == 0;
            i = CmpFindSubKeyInRoot(BugCheckParameter2, v10, a3, &v33) )
      {
        v12 = v33;
        v13 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
        if ( v33 == -1 )
        {
          v17 = i;
          v18 = v13(BugCheckParameter2, *(unsigned int *)(v10 + 4LL * i + 4), v31);
          if ( !v18 )
            break;
          v19 = CmpDoCompareKeyName(BugCheckParameter2, a3, *(unsigned int *)(v18 + 4));
          if ( v19 == 2 )
          {
LABEL_29:
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v31);
            break;
          }
          v20 = v19 < 0;
          v21 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16);
          if ( v20 )
          {
            v21(BugCheckParameter2, v31);
            v22 = BugCheckParameter2;
            if ( i )
            {
              v23 = i - 1;
              goto LABEL_16;
            }
            v26 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
            v33 = *(_DWORD *)(v10 + 4);
            v12 = v33;
            v27 = v26(BugCheckParameter2, v33, v31);
            if ( !v27 )
              break;
            if ( *(_WORD *)(v27 + 2) < 0x3F5u )
            {
              v15 = v10 + 4;
              goto LABEL_8;
            }
          }
          else
          {
            v21(BugCheckParameter2, v31);
            v28 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
            v33 = *(_DWORD *)(v10 + 4LL * i + 4);
            v12 = v33;
            v29 = v28(BugCheckParameter2, v33, v31);
            if ( !v29 )
              break;
            if ( *(_WORD *)(v29 + 2) < 0x3F5u )
            {
LABEL_18:
              v15 = v10 + 4 * (v17 + 1);
              goto LABEL_8;
            }
            if ( i < (unsigned int)*(unsigned __int16 *)(v10 + 2) - 1 )
            {
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v31);
              v23 = i + 1;
              v22 = BugCheckParameter2;
LABEL_16:
              v12 = *(_DWORD *)(v10 + 4 * v23 + 4);
              v17 = (unsigned int)v23;
              v24 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
              v33 = v12;
              v25 = v24(v22, v12, v31);
              if ( !v25 )
                break;
              if ( *(_WORD *)(v25 + 2) < 0x3F5u )
                goto LABEL_18;
            }
          }
        }
        else
        {
          v14 = v13(BugCheckParameter2, v33, v31);
          if ( !v14 )
            break;
          if ( *(_WORD *)(v14 + 2) < 0x3F5u )
          {
            v15 = v10 + 4 * (i + 1LL);
LABEL_8:
            *a5 = v15;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v31);
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v32);
            return v12;
          }
        }
        v30 = CmpSplitLeaf(BugCheckParameter2, *a2);
        if ( v30 == -1 )
          goto LABEL_29;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v32);
        *a2 = v30;
        v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v30,
                v32);
        if ( !v10 )
          goto LABEL_29;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v31);
      }
      if ( v10 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v32);
    }
  }
  return 0xFFFFFFFFLL;
}
