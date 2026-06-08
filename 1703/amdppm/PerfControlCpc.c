/*
 * XREFs of PerfControlCpc @ 0x1C0006770
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x1C0006F7C (PerformanceFromPercentage.c)
 *     WriteGenAddr @ 0x1C0008B1C (WriteGenAddr.c)
 */

_UNKNOWN **__fastcall PerfControlCpc(__int64 a1, __int64 a2, char a3, char a4)
{
  _UNKNOWN **result; // rax
  bool v7; // zf
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  __int64 v10; // rsi
  _UNKNOWN **v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a3 || a4 )
  {
    v7 = *(_BYTE *)(a1 + 93) == 0;
    result = *(_UNKNOWN ***)a2;
    v8 = *(_DWORD *)(a2 + 20);
    v9 = *(_DWORD *)(a2 + 16);
    v10 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)a2;
    if ( !v7 )
    {
      if ( *(_BYTE *)(a2 + 36) )
        v11 = 0LL;
      else
        v11 = *(_UNKNOWN ***)a2;
      result = (_UNKNOWN **)WriteGenAddr(v10 + 68, v11);
    }
    if ( *(_BYTE *)(a1 + 94) )
    {
      v12 = PerformanceFromPercentage(a1, v9);
      result = (_UNKNOWN **)WriteGenAddr(v10 + 80, v12);
    }
    if ( *(_BYTE *)(a1 + 95) )
    {
      v13 = PerformanceFromPercentage(a1, v8);
      result = (_UNKNOWN **)WriteGenAddr(v10 + 92, v13);
    }
    if ( *(_BYTE *)(a1 + 98) )
    {
      v14 = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
      return (_UNKNOWN **)WriteGenAddr(v10 + 104, v14);
    }
  }
  return result;
}
