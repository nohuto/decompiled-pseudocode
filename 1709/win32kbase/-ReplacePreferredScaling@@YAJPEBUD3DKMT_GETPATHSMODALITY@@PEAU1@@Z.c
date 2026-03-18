/*
 * XREFs of ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C00F8E10
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReplacePreferredScaling(__int64 a1, unsigned __int64 a2, _DWORD *a3, __int64 a4)
{
  __int16 v4; // ax
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v10; // ebp
  __int64 v11; // rdi
  __int64 v12; // rax
  char *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = *(_WORD *)(a2 + 20);
  v5 = a2;
  v6 = a1;
  if ( *(_WORD *)(a1 + 20) != v4 )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v7 + 24) = *(unsigned __int16 *)(v6 + 20);
    v8 = *(unsigned __int16 *)(v5 + 20);
    goto LABEL_3;
  }
  v10 = 0;
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    v11 = 264LL * v10;
    if ( (*(_DWORD *)(v11 + v5 + 48) & 0x10000) == 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v12);
    }
    if ( *(_DWORD *)(v11 + v5 + 184) != 253 )
      goto LABEL_22;
    a3 = (_DWORD *)(v11 + v5 + 64);
    if ( a3 )
    {
      a4 = *(unsigned __int16 *)(v6 + 20);
      a2 = 0LL;
      if ( !*(_WORD *)(v6 + 20) )
        break;
      while ( 1 )
      {
        a1 = 264LL * (unsigned int)a2;
        v13 = (char *)(a1 + v6 + 48);
        if ( *((_DWORD *)v13 + 7) == *(_DWORD *)(v11 + v5 + 76)
          && *((_DWORD *)v13 + 4) == *a3
          && *((_DWORD *)v13 + 5) == a3[1] )
        {
          break;
        }
        a2 = (unsigned int)(a2 + 1);
        if ( (unsigned int)a2 >= (unsigned int)a4 )
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
      v14 = WdLogNewEntry5_WdAssertion(0x40000000000LL, a2, a3, a4);
      WdLogEvent5_WdAssertion(v14);
    }
    if ( (*(_DWORD *)v13 & 0x10000) == 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v15);
    }
    *(_DWORD *)(v11 + v5 + 184) = *((_DWORD *)v13 + 34);
    *(_DWORD *)(v11 + v5 + 188) = *((_DWORD *)v13 + 35);
    *(_QWORD *)(v11 + v5 + 48) |= 0x40000010000uLL;
LABEL_22:
    if ( ++v10 >= *(unsigned __int16 *)(v5 + 20) )
      return 0LL;
  }
LABEL_14:
  v7 = WdLogNewEntry5_WdError(a1, a2, a3);
  *(_QWORD *)(v7 + 24) = *(unsigned int *)(v11 + v5 + 72);
  v8 = *(unsigned int *)(v11 + v5 + 76);
LABEL_3:
  *(_QWORD *)(v7 + 32) = v8;
  WdLogEvent5_WdError(v7);
  return 3221225473LL;
}
