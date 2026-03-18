/*
 * XREFs of EtwpApplyScopeFilters @ 0x14059090C
 * Callers:
 *     EtwpUpdateRegEntryEnableMask @ 0x14058C580 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x14058F4F0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x140590090 (EtwpRegisterUMGuid.c)
 * Callees:
 *     EtwpApplyExeFilter @ 0x1407B14BC (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1407B15DC (EtwpApplyPackageIdFilter.c)
 */

void __fastcall EtwpApplyScopeFilters(__int64 a1, char a2, char a3, _BYTE *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  char v11; // dl
  __int64 v12; // r10
  _DWORD *v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // r10

  if ( (*(_BYTE *)(a1 + 98) & 1) == 0 )
  {
    *a4 = 0;
    if ( a3 )
      v7 = *(_QWORD *)(a1 + 40);
    else
      v7 = *(_QWORD *)(a1 + 32);
    v8 = 0LL;
    do
    {
      v9 = 32LL * (unsigned int)v8;
      if ( *(_DWORD *)(v9 + v7 + 112) && (!a2 || *(_WORD *)(v9 + v7 + 118) == *(_WORD *)(v7 + 72)) )
      {
        v10 = *(_QWORD *)(v7 + 368);
        v11 = 1;
        if ( !v10 )
          goto LABEL_10;
        v12 = 96 * v8;
        if ( (*(_DWORD *)(96 * v8 + v10) & 0x80000004) != 0x80000004 )
          goto LABEL_29;
        v13 = *(_DWORD **)(v12 + v10 + 8);
        v11 = 0;
        v14 = 0LL;
        if ( *v13 )
        {
          while ( v13[v14 + 1] != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 736LL) )
          {
            v14 = (unsigned int)(v14 + 1);
            if ( (unsigned int)v14 >= *v13 )
              goto LABEL_22;
          }
          v11 = 1;
        }
LABEL_22:
        if ( v11 )
        {
LABEL_29:
          if ( (*(_DWORD *)(96 * v8 + v10) & 0x80000008) == 0x80000008 )
            v11 = EtwpApplyExeFilter(a1, *(_QWORD *)(v12 + v10 + 16));
          if ( v11 )
          {
            v15 = *(_QWORD *)(v7 + 368);
            if ( (*(_DWORD *)(96 * v8 + v15) & 0x80000010) == 0x80000010
              || (*(_DWORD *)(96 * v8 + v15) & 0x80000020) == 0x80000020 )
            {
              v11 = EtwpApplyPackageIdFilter(a1, *(_QWORD *)(96 * v8 + v15 + 24), *(_QWORD *)(96 * v8 + v15 + 32));
            }
            if ( v11 )
LABEL_10:
              *a4 |= 1 << v8;
          }
        }
        if ( a2 )
          break;
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < 8 );
  }
}
