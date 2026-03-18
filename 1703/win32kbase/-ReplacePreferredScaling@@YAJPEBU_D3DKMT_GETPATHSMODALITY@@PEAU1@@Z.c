/*
 * XREFs of ?ReplacePreferredScaling@@YAJPEBU_D3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C00F7F34
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReplacePreferredScaling(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int16 v3; // ax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v9; // ebp
  __int64 v10; // rdi
  __int64 v11; // rax
  _DWORD *v12; // r8
  char *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax

  v3 = *(_WORD *)(a2 + 20);
  v4 = a2;
  v5 = a1;
  if ( *(_WORD *)(a1 + 20) != v3 )
  {
    v6 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v6 + 24) = *(unsigned __int16 *)(v5 + 20);
    v7 = *(unsigned __int16 *)(v4 + 20);
    goto LABEL_3;
  }
  v9 = 0;
  if ( !v3 )
    return 0LL;
  while ( 1 )
  {
    v10 = 264LL * v9;
    if ( (*(_DWORD *)(v10 + v4 + 48) & 0x10000) == 0 )
    {
      v11 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v11);
    }
    if ( *(_DWORD *)(v10 + v4 + 184) != 253 )
      goto LABEL_22;
    v12 = (_DWORD *)(v10 + v4 + 64);
    if ( v12 )
    {
      a2 = 0LL;
      if ( !*(_WORD *)(v5 + 20) )
        break;
      while ( 1 )
      {
        a1 = 264LL * (unsigned int)a2;
        v13 = (char *)(a1 + v5 + 48);
        if ( *((_DWORD *)v13 + 7) == *(_DWORD *)(v10 + v4 + 76)
          && *((_DWORD *)v13 + 4) == *v12
          && *((_DWORD *)v13 + 5) == v12[1] )
        {
          break;
        }
        a2 = (unsigned int)(a2 + 1);
        if ( (unsigned int)a2 >= *(unsigned __int16 *)(v5 + 20) )
          goto LABEL_14;
      }
    }
    else
    {
      v13 = 0LL;
    }
    if ( !v13 )
      break;
    a1 = 0x40000000000LL;
    if ( (*(_QWORD *)v13 & 0x40000000000LL) == 0 )
    {
      v14 = WdLogNewEntry5_WdAssertion(0x40000000000LL, a2);
      WdLogEvent5_WdAssertion(v14);
    }
    if ( (*(_DWORD *)v13 & 0x10000) == 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v15);
    }
    *(_DWORD *)(v10 + v4 + 184) = *((_DWORD *)v13 + 34);
    *(_DWORD *)(v10 + v4 + 188) = *((_DWORD *)v13 + 35);
    *(_QWORD *)(v10 + v4 + 48) |= 0x40000010000uLL;
LABEL_22:
    if ( ++v9 >= *(unsigned __int16 *)(v4 + 20) )
      return 0LL;
  }
LABEL_14:
  v6 = WdLogNewEntry5_WdError(a1, a2, v12);
  *(_QWORD *)(v6 + 24) = *(unsigned int *)(v10 + v4 + 72);
  v7 = *(unsigned int *)(v10 + v4 + 76);
LABEL_3:
  *(_QWORD *)(v6 + 32) = v7;
  WdLogEvent5_WdError(v6);
  return 3221225473LL;
}
