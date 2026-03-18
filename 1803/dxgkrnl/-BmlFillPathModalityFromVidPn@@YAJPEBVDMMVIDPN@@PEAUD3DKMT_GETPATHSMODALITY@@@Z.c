/*
 * XREFs of ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE80C
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00AE424 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00AEA28 (--$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall BmlFillPathModalityFromVidPn(const struct DMMVIDPN *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  __int64 v2; // r13
  char *v3; // r12
  char *v4; // rcx
  char *v5; // rbp
  struct D3DKMT_GETPATHSMODALITY *v6; // r15
  __int64 v7; // rdi
  bool v8; // cf
  unsigned int v9; // ebx
  char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  char *v22; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+60h] [rbp+8h]
  unsigned int v27; // [rsp+64h] [rbp+Ch]

  v2 = *((_QWORD *)a1 + 6);
  v3 = (char *)a1 + 120;
  v4 = (char *)*((_QWORD *)a1 + 15);
  v5 = 0LL;
  v6 = a2;
  if ( v4 != v3 )
    v5 = v4 - 8;
  if ( v5 )
  {
    LODWORD(v7) = v26;
    do
    {
      v8 = *((_WORD *)v6 + 10) != 0;
      v9 = 0;
      while ( v8 )
      {
        v10 = (char *)v6 + 272 * v9;
        if ( (*((_QWORD *)v10 + 6) & 0x700000000000LL) == 0x700000000000LL )
        {
          v11 = *(_QWORD *)(v2 + 8);
          if ( !v11 )
          {
            v24 = WdLogNewEntry5_WdAssertion(0x700000000000LL);
            WdLogEvent5_WdAssertion(v24);
            v11 = *(_QWORD *)(v2 + 8);
          }
          v12 = *(_QWORD *)(v11 + 16);
          if ( *((_DWORD *)v10 + 16) == *(_DWORD *)(v12 + 268)
            && *((_DWORD *)v10 + 17) == *(_DWORD *)(v12 + 272)
            && *((_DWORD *)v10 + 18) == *(_DWORD *)(*((_QWORD *)v5 + 11) + 24LL)
            && *((_DWORD *)v10 + 19) == *(_DWORD *)(*((_QWORD *)v5 + 12) + 24LL) )
          {
            v13 = 0;
            if ( (*((_BYTE *)v6 + 24) & 1) != 0 && (*((_QWORD *)v10 + 6) & 0x100LL) != 0 )
            {
              v7 = *((_QWORD *)v10 + 18);
              v13 = 1;
              v27 = HIDWORD(v7);
            }
            _BmlFillOnePathModalityFromVidPn<D3DKMT_PATHMODALITY_DESCRIPTOR>(v5, v10 + 48);
            v14 = *((_QWORD *)v5 + 11);
            v15 = *(_QWORD *)(v14 + 104);
            if ( v15 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v15 + 96));
              v16 = *(_QWORD *)(v14 + 104);
            }
            else
            {
              v16 = 0LL;
            }
            v17 = *(_QWORD *)(v16 + 144);
            if ( v17 )
              v10[176] = (unsigned int)(*(_DWORD *)(v17 + 72) - 3) <= 1;
            v18 = *((_QWORD *)v5 + 12);
            v19 = *(_QWORD *)(v18 + 104);
            if ( v19 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
              v20 = *(_QWORD *)(v18 + 104);
            }
            else
            {
              v20 = 0LL;
            }
            a2 = *(struct D3DKMT_GETPATHSMODALITY **)(v20 + 144);
            if ( a2 )
            {
              *((_DWORD *)v10 + 63) = *((_DWORD *)a2 + 33);
              v21 = *((_DWORD *)a2 + 34);
              *((_QWORD *)v10 + 6) |= 8uLL;
            }
            else
            {
              *((_DWORD *)v10 + 63) = 0;
              v21 = 4;
            }
            *((_DWORD *)v10 + 64) = v21;
            if ( v13 && *((_QWORD *)v10 + 18) != __PAIR64__(v27, v7) )
              *((_QWORD *)v10 + 6) &= ~0x20000uLL;
            if ( v20 )
              ReferenceCounted::Release((ReferenceCounted *)(v20 + 88));
            if ( v16 )
              ReferenceCounted::Release((ReferenceCounted *)(v16 + 88));
            break;
          }
        }
        else
        {
          v25 = WdLogNewEntry5_WdWarning(0x700000000000LL, a2, 0LL);
          *(_QWORD *)(v25 + 24) = v9;
          *(_QWORD *)(v25 + 32) = v6;
          WdLogEvent5_WdWarning(v25);
        }
        v8 = ++v9 < *((unsigned __int16 *)v6 + 10);
      }
      v22 = (char *)*((_QWORD *)v5 + 1);
      v5 = v22 - 8;
      if ( v22 == v3 )
        v5 = 0LL;
    }
    while ( v5 );
  }
  return 0LL;
}
