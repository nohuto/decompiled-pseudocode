/*
 * XREFs of BmlDoesSourceModeObeyConstraint @ 0x1C00F4E48
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C00F48C0 (BmlGetNextBestSourceMode.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1C00F4D98 (BmlCompareSourceModesWithConstraint.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlDoesSourceModeObeyConstraint(__int64 a1, unsigned __int16 a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  int v11; // ecx
  __int64 v12; // rax

  v4 = 104LL * a2;
  v6 = *(_QWORD *)(v4 + a1 + 16);
  v7 = *(_DWORD *)v6 & 0x100LL;
  if ( !a3 )
    return 0;
  v8 = a3[18];
  if ( *(_BYTE *)(v6 + 128) )
  {
    if ( (unsigned int)(v8 - 3) > 1 )
      return 0;
  }
  else if ( (_DWORD)v8 != 1 )
  {
    return 0;
  }
  if ( (((_DWORD)v8 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v8 == 2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v8, v4, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( v7 || (v9 = a3[24], v9 >= 20) && (v9 <= 23 || v9 == 32 || v9 == 41) )
  {
    if ( (*(_DWORD *)v6 & 0x100LL) == 0 )
      return 1;
    v11 = *(_DWORD *)(v6 + 116);
    if ( (!v11 || a3[24] == v11)
      && ((*(_DWORD *)(v6 + 8) & 0x100LL) == 0
       || a3[19] == *(_DWORD *)(v6 + 96) && a3[20] == *(_DWORD *)(v6 + 100) && a3[24] == v11) )
    {
      return 1;
    }
  }
  return 0;
}
