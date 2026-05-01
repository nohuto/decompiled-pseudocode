/*
 * XREFs of ?CompareStringVector@SelectionData@StartLayout@@AEAAXV?$vector@PEAGV?$allocator@PEAG@std@@@std@@_N01AEAH@Z @ 0x18008AD70
 * Callers:
 *     ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x18008AB7C (-GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall StartLayout::SelectionData::CompareStringVector(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        int *a6)
{
  char *v8; // rbx
  int v9; // r12d
  char *v10; // rsi
  char *v11; // rdi
  char *v12; // rbp

  if ( a3 && a5 )
  {
    v8 = *(char **)a2;
    v9 = -1;
    v10 = *(char **)(a2 + 8);
LABEL_4:
    if ( v8 != v10 )
    {
      v11 = *(char **)a4;
      v12 = *(char **)(a4 + 8);
      while ( 1 )
      {
        if ( v11 == v12 )
        {
          v8 += 8;
          goto LABEL_4;
        }
        if ( CompareStringOrdinal(*(LPCWCH *)v8, -1, *(LPCWCH *)v11, -1, 0) == 2 )
          break;
        v11 += 8;
      }
      v9 = *a6 + 1;
    }
    *a6 = v9;
  }
  if ( *(_QWORD *)a2 )
  {
    std::_Deallocate(*(char **)a2, (__int64)(*(_QWORD *)(a2 + 16) - *(_QWORD *)a2) >> 3, 8uLL);
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  if ( *(_QWORD *)a4 )
  {
    std::_Deallocate(*(char **)a4, (__int64)(*(_QWORD *)(a4 + 16) - *(_QWORD *)a4) >> 3, 8uLL);
    *(_QWORD *)a4 = 0LL;
    *(_QWORD *)(a4 + 8) = 0LL;
    *(_QWORD *)(a4 + 16) = 0LL;
  }
}
