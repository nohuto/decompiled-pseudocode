/*
 * XREFs of EtwpApplyScopeFilters @ 0x140480E10
 * Callers:
 *     EtwpRegisterUMGuid @ 0x140480530 (EtwpRegisterUMGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x1404F2698 (EtwpAddRegEntryToGroup.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x140553B64 (EtwpUpdateRegEntryEnableMask.c)
 * Callees:
 *     EtwpApplyExeFilter @ 0x140712764 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140712820 (EtwpApplyPackageIdFilter.c)
 */

void __fastcall EtwpApplyScopeFilters(__int64 a1, char a2, __int64 a3, _BYTE *a4)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r9
  _DWORD *v15; // rax

  if ( (*(_BYTE *)(a1 + 98) & 1) == 0 )
  {
    *a4 = 0;
    if ( (_BYTE)a3 )
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
        LOBYTE(a3) = 1;
        if ( !v10 )
          goto LABEL_10;
        v11 = *(_DWORD *)(v10 + 80 * v8);
        v12 = v10 + 80 * v8;
        if ( (v11 & 0x80000004) != 0x80000004 )
          goto LABEL_22;
        LOBYTE(a3) = 0;
        v14 = 0LL;
        v15 = *(_DWORD **)(v12 + 8);
        if ( *v15 )
        {
          while ( v15[v14 + 1] != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 736LL) )
          {
            v14 = (unsigned int)(v14 + 1);
            if ( (unsigned int)v14 >= *v15 )
              goto LABEL_29;
          }
          LOBYTE(a3) = 1;
        }
LABEL_29:
        if ( (_BYTE)a3 )
        {
LABEL_22:
          if ( (v11 & 0x80000008) == 0x80000008 )
            LOBYTE(a3) = EtwpApplyExeFilter(a1, *(_QWORD *)(v12 + 16), a3);
          if ( (_BYTE)a3 )
          {
            v13 = *(_QWORD *)(v7 + 368);
            if ( (*(_DWORD *)(v13 + 80 * v8) & 0x80000010) == 0x80000010
              || (*(_DWORD *)(v13 + 80 * v8) & 0x80000020) == 0x80000020 )
            {
              a3 = (unsigned __int8)EtwpApplyPackageIdFilter(
                                      a1,
                                      *(_QWORD *)(v13 + 80 * v8 + 24),
                                      *(_QWORD *)(v13 + 80 * v8 + 32));
            }
            if ( (_BYTE)a3 )
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
