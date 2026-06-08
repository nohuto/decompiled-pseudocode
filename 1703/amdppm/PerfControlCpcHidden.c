/*
 * XREFs of PerfControlCpcHidden @ 0x1C0006A40
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x1C0006F7C (PerformanceFromPercentage.c)
 *     WriteGenAddrHidden @ 0x1C0008D64 (WriteGenAddrHidden.c)
 */

_UNKNOWN **__fastcall PerfControlCpcHidden(__int64 a1, __int64 a2, char a3, char a4)
{
  _UNKNOWN **result; // rax
  bool v7; // zf
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // rcx
  _UNKNOWN **v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
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
      v11 = *(unsigned int *)(*(_QWORD *)a1 + 80LL);
      if ( *(_BYTE *)(a2 + 36) )
        v12 = 0LL;
      else
        v12 = *(_UNKNOWN ***)a2;
      result = (_UNKNOWN **)WriteGenAddrHidden(v11, v10 + 68, v12);
    }
    if ( *(_BYTE *)(a1 + 94) )
    {
      v13 = PerformanceFromPercentage(a1, v9);
      result = (_UNKNOWN **)WriteGenAddrHidden(*(unsigned int *)(*(_QWORD *)a1 + 80LL), v10 + 80, v13);
    }
    if ( *(_BYTE *)(a1 + 95) )
    {
      v14 = PerformanceFromPercentage(a1, v8);
      result = (_UNKNOWN **)WriteGenAddrHidden(*(unsigned int *)(*(_QWORD *)a1 + 80LL), v10 + 92, v14);
    }
    if ( *(_BYTE *)(a1 + 98) )
    {
      v15 = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
      result = (_UNKNOWN **)WriteGenAddrHidden(*(unsigned int *)(*(_QWORD *)a1 + 80LL), v10 + 104, v15);
    }
    if ( *(_BYTE *)(a1 + 96) )
      return (_UNKNOWN **)WriteGenAddrHidden(
                            *(unsigned int *)(*(_QWORD *)a1 + 80LL),
                            v10 + 212,
                            255 * *(_DWORD *)(a2 + 28) / 0x64u);
  }
  return result;
}
