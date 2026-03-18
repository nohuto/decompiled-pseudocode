/*
 * XREFs of CmpAddSubKeyToList @ 0x1404D2404
 * Callers:
 *     CmpAddSubKeyEx @ 0x1404D2220 (CmpAddSubKeyEx.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140674910 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140674EFC (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpAddToLeaf @ 0x1404D2940 (CmpAddToLeaf.c)
 *     CmpCopyCompressedName @ 0x1404D2CB0 (CmpCopyCompressedName.c)
 *     CmpSelectLeaf @ 0x140574238 (CmpSelectLeaf.c)
 */

char __fastcall CmpAddSubKeyToList(ULONG_PTR BugCheckParameter2, unsigned int *a2, unsigned int a3)
{
  __int64 (__fastcall *v4)(ULONG_PTR, _QWORD, int *); // rax
  _DWORD *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rsi
  char v8; // di
  __int16 v9; // r14
  __int64 (__fastcall *v10)(_QWORD, _QWORD, __int64); // rax
  unsigned __int16 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned int v14; // r13d
  _WORD *v15; // rax
  unsigned int v16; // eax
  _DWORD v18[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h] BYREF
  _WORD *v20; // [rsp+40h] [rbp-28h]
  unsigned __int16 v21; // [rsp+48h] [rbp-20h]
  unsigned __int16 v22; // [rsp+4Ah] [rbp-1Eh]
  __int64 v23; // [rsp+50h] [rbp-18h]
  char v24; // [rsp+B0h] [rbp+48h]
  int v26; // [rsp+C8h] [rbp+60h] BYREF
  int v27; // [rsp+CCh] [rbp+64h]

  v18[1] = 0;
  v18[0] = -1;
  v26 = -1;
  v27 = 0;
  v4 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8);
  v5 = 0LL;
  v19 = 0LL;
  v23 = 0LL;
  v21 = 0;
  v6 = v4(BugCheckParameter2, a3, &v26);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = 1;
  if ( (*(_BYTE *)(v6 + 2) & 0x20) != 0 )
  {
    v9 = *(_WORD *)(v6 + 72);
    v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24);
    v11 = 2 * v9;
    v21 = v11;
    v22 = v11;
    v12 = v10(v11, 0LL, 540560707LL);
    v23 = v12;
    v13 = v12;
    if ( !v12 )
    {
      v8 = 0;
LABEL_14:
      if ( v7 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
      return v8;
    }
    v24 = 1;
    CmpCopyCompressedName(v12, v11, v7 + 76, *(unsigned __int16 *)(v7 + 72));
  }
  else
  {
    v24 = 0;
    v13 = v6 + 76;
    v11 = *(_WORD *)(v6 + 72);
    v21 = v11;
    v22 = v11;
    v23 = v6 + 76;
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
  v7 = 0LL;
  v14 = *a2;
  v15 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                   BugCheckParameter2,
                   *a2,
                   v18);
  v20 = v15;
  if ( !v15 )
    goto LABEL_22;
  if ( *v15 == 26994 )
  {
    v14 = CmpSelectLeaf(BugCheckParameter2, (__int64)&v19);
    if ( v14 == -1 )
      goto LABEL_22;
    v5 = (_DWORD *)v19;
  }
  v16 = CmpAddToLeaf(BugCheckParameter2, v14);
  if ( v16 == -1 )
  {
LABEL_22:
    v8 = 0;
    goto LABEL_10;
  }
  if ( v5 )
    *v5 = v16;
  else
    *a2 = v16;
LABEL_10:
  if ( v24 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v13, v11);
  if ( v20 )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
    goto LABEL_14;
  }
  return v8;
}
