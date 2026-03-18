/*
 * XREFs of ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00D15E8
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00D1DD8 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00D17C4 (--$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall BmlFillPathModalityFromVidPn(const struct DMMVIDPN *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  __int64 v2; // r13
  const struct DMMVIDPN *v3; // r8
  struct D3DKMT_GETPATHSMODALITY *v4; // r15
  char *v5; // rsi
  __int64 v6; // rbx
  char *v7; // r12
  bool v8; // cf
  unsigned int v9; // ebp
  char *v10; // rdi
  __int64 v11; // rcx
  char v12; // bp
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  char *v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+50h] [rbp+8h]
  unsigned int v24; // [rsp+54h] [rbp+Ch]

  v2 = *((_QWORD *)a1 + 6);
  v3 = (const struct DMMVIDPN *)*((_QWORD *)a1 + 15);
  v4 = a2;
  if ( v3 != (const struct DMMVIDPN *)((char *)a1 + 120) )
  {
    v5 = (char *)v3 - 8;
    if ( v3 != (const struct DMMVIDPN *)8 )
    {
      LODWORD(v6) = v23;
      v7 = (char *)a1 + 120;
      do
      {
        v8 = *((_WORD *)v4 + 10) != 0;
        v9 = 0;
        while ( v8 )
        {
          v10 = (char *)v4 + 264 * v9;
          if ( (*((_QWORD *)v10 + 6) & 0x700000000000LL) == 0x700000000000LL )
          {
            if ( !*(_QWORD *)(v2 + 8) )
            {
              v20 = WdLogNewEntry5_WdAssertion(0x700000000000LL);
              WdLogEvent5_WdAssertion(v20);
            }
            a2 = *(struct D3DKMT_GETPATHSMODALITY **)(v2 + 8);
            v11 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 268LL);
            if ( *((_DWORD *)v10 + 16) == (_DWORD)v11 )
            {
              if ( !a2 )
              {
                v21 = WdLogNewEntry5_WdAssertion(v11);
                WdLogEvent5_WdAssertion(v21);
              }
              if ( *((_DWORD *)v10 + 17) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) + 272LL)
                && *((_DWORD *)v10 + 18) == *(_DWORD *)(*((_QWORD *)v5 + 11) + 24LL)
                && *((_DWORD *)v10 + 19) == *(_DWORD *)(*((_QWORD *)v5 + 12) + 24LL) )
              {
                v12 = 0;
                if ( (*((_BYTE *)v4 + 24) & 1) != 0 && (*((_QWORD *)v10 + 6) & 0x100LL) != 0 )
                {
                  v6 = *((_QWORD *)v10 + 18);
                  v12 = 1;
                  v24 = HIDWORD(v6);
                }
                _BmlFillOnePathModalityFromVidPn<D3DKMT_PATHMODALITY_DESCRIPTOR>(v5, v10 + 48);
                v13 = *((_QWORD *)v5 + 12);
                v14 = *(_QWORD *)(v13 + 104);
                if ( v14 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v14 + 96));
                  v15 = *(_QWORD *)(v13 + 104);
                }
                else
                {
                  v15 = 0LL;
                }
                v16 = *(_QWORD *)(v15 + 144);
                if ( v16 )
                {
                  *((_DWORD *)v10 + 63) = *(_DWORD *)(v16 + 132);
                  v17 = *(_DWORD *)(v16 + 136);
                  *((_QWORD *)v10 + 6) |= 8uLL;
                  *((_DWORD *)v10 + 64) = v17;
                }
                else
                {
                  *((_DWORD *)v10 + 63) = 0;
                  *((_DWORD *)v10 + 64) = 4;
                }
                if ( v12 && *((_QWORD *)v10 + 18) != __PAIR64__(v24, v6) )
                  *((_QWORD *)v10 + 6) &= ~0x20000uLL;
                ReferenceCounted::Release((ReferenceCounted *)(v15 + 88));
                break;
              }
            }
          }
          else
          {
            v22 = WdLogNewEntry5_WdWarning(0x700000000000LL, a2, v3);
            *(_QWORD *)(v22 + 24) = v9;
            *(_QWORD *)(v22 + 32) = v4;
            WdLogEvent5_WdWarning(v22);
          }
          v8 = ++v9 < *((unsigned __int16 *)v4 + 10);
        }
        v18 = (char *)*((_QWORD *)v5 + 1);
        v5 = v18 - 8;
        if ( v18 == v7 )
          v5 = 0LL;
      }
      while ( v5 );
    }
  }
  return 0LL;
}
