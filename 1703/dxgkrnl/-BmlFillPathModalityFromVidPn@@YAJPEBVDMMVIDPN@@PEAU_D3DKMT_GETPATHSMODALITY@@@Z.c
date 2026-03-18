/*
 * XREFs of ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F1370
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00F1B74 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_D3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00F154C (--$_BmlFillOnePathModalityFromVidPn@U_D3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPA.c)
 */

__int64 __fastcall BmlFillPathModalityFromVidPn(
        const struct DMMVIDPN *a1,
        struct _D3DKMT_GETPATHSMODALITY *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r13
  const struct DMMVIDPN *v5; // r8
  struct _D3DKMT_GETPATHSMODALITY *v6; // r15
  char *v7; // rsi
  __int64 v8; // rbx
  char *v9; // r12
  bool v10; // cf
  unsigned int v11; // ebp
  char *v12; // rdi
  __int64 v13; // rcx
  char v14; // bp
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  char *v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+50h] [rbp+8h]
  unsigned int v26; // [rsp+54h] [rbp+Ch]

  v4 = *((_QWORD *)a1 + 6);
  v5 = (const struct DMMVIDPN *)*((_QWORD *)a1 + 15);
  v6 = a2;
  if ( v5 != (const struct DMMVIDPN *)((char *)a1 + 120) )
  {
    v7 = (char *)v5 - 8;
    if ( v5 != (const struct DMMVIDPN *)8 )
    {
      LODWORD(v8) = v25;
      v9 = (char *)a1 + 120;
      do
      {
        v10 = *((_WORD *)v6 + 10) != 0;
        v11 = 0;
        while ( v10 )
        {
          v12 = (char *)v6 + 264 * v11;
          if ( (*((_QWORD *)v12 + 6) & 0x700000000000LL) == 0x700000000000LL )
          {
            if ( !*(_QWORD *)(v4 + 8) )
            {
              v22 = WdLogNewEntry5_WdAssertion(0x700000000000LL, a2, v5, a4);
              WdLogEvent5_WdAssertion(v22);
            }
            a2 = *(struct _D3DKMT_GETPATHSMODALITY **)(v4 + 8);
            v13 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 268LL);
            if ( *((_DWORD *)v12 + 16) == (_DWORD)v13 )
            {
              if ( !a2 )
              {
                v23 = WdLogNewEntry5_WdAssertion(v13, 0LL, v5, a4);
                WdLogEvent5_WdAssertion(v23);
              }
              if ( *((_DWORD *)v12 + 17) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL) + 272LL)
                && *((_DWORD *)v12 + 18) == *(_DWORD *)(*((_QWORD *)v7 + 11) + 24LL)
                && *((_DWORD *)v12 + 19) == *(_DWORD *)(*((_QWORD *)v7 + 12) + 24LL) )
              {
                v14 = 0;
                if ( (*((_BYTE *)v6 + 24) & 1) != 0 && (*((_QWORD *)v12 + 6) & 0x100LL) != 0 )
                {
                  v8 = *((_QWORD *)v12 + 18);
                  v14 = 1;
                  v26 = HIDWORD(v8);
                }
                _BmlFillOnePathModalityFromVidPn<_D3DKMT_PATHMODALITY_DESCRIPTOR>(v7, v12 + 48);
                v15 = *((_QWORD *)v7 + 12);
                v16 = *(_QWORD *)(v15 + 104);
                if ( v16 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v16 + 96));
                  v17 = *(_QWORD *)(v15 + 104);
                }
                else
                {
                  v17 = 0LL;
                }
                v18 = *(_QWORD *)(v17 + 144);
                if ( v18 )
                {
                  *((_DWORD *)v12 + 75) = *(_DWORD *)(v18 + 132);
                  v19 = *(_DWORD *)(v18 + 136);
                  *((_QWORD *)v12 + 6) |= 8uLL;
                  *((_DWORD *)v12 + 76) = v19;
                }
                else
                {
                  *((_DWORD *)v12 + 75) = 0;
                  *((_DWORD *)v12 + 76) = 4;
                }
                if ( v14 && *((_QWORD *)v12 + 18) != __PAIR64__(v26, v8) )
                  *((_QWORD *)v12 + 6) &= ~0x20000uLL;
                ReferenceCounted::Release((ReferenceCounted *)(v17 + 88), v17);
                break;
              }
            }
          }
          else
          {
            v24 = WdLogNewEntry5_WdWarning(0x700000000000LL, a2, v5, a4);
            *(_QWORD *)(v24 + 24) = v11;
            *(_QWORD *)(v24 + 32) = v6;
            WdLogEvent5_WdWarning(v24);
          }
          v10 = ++v11 < *((unsigned __int16 *)v6 + 10);
        }
        v20 = (char *)*((_QWORD *)v7 + 1);
        v7 = v20 - 8;
        if ( v20 == v9 )
          v7 = 0LL;
      }
      while ( v7 );
    }
  }
  return 0LL;
}
