/*
 * XREFs of PerfControlCpcHidden @ 0x1C0003E40
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrHidden @ 0x1C00037D4 (WriteGenAddrHidden.c)
 *     PerformanceFromPercentage @ 0x1C00043B8 (PerformanceFromPercentage.c)
 */

char __fastcall PerfControlCpcHidden(_BYTE *a1, __int64 a2, char a3, char a4)
{
  _UNKNOWN **v4; // rax
  bool v7; // zf
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  _BYTE *v10; // rsi
  unsigned int v11; // ecx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v4 = &retaddr;
  if ( a3 || a4 )
  {
    v7 = a1[93] == 0;
    v4 = *(_UNKNOWN ***)a2;
    v8 = *(_DWORD *)(a2 + 20);
    v9 = *(_DWORD *)(a2 + 16);
    v10 = (_BYTE *)*((_QWORD *)a1 + 14);
    *((_QWORD *)a1 + 6) = *(_QWORD *)a2;
    if ( !v7 )
    {
      v11 = *(_DWORD *)(*(_QWORD *)a1 + 80LL);
      if ( *(_BYTE *)(a2 + 36) )
        v12 = 0LL;
      else
        v12 = *(_QWORD *)a2;
      LOBYTE(v4) = WriteGenAddrHidden(v11, v10 + 68, v12);
    }
    if ( a1[94] )
    {
      v13 = PerformanceFromPercentage(a1, v9);
      LOBYTE(v4) = WriteGenAddrHidden(*(_DWORD *)(*(_QWORD *)a1 + 80LL), v10 + 80, v13);
    }
    if ( a1[95] )
    {
      v14 = PerformanceFromPercentage(a1, v8);
      LOBYTE(v4) = WriteGenAddrHidden(*(_DWORD *)(*(_QWORD *)a1 + 80LL), v10 + 92, v14);
    }
    if ( a1[98] )
    {
      v15 = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
      LOBYTE(v4) = WriteGenAddrHidden(*(_DWORD *)(*(_QWORD *)a1 + 80LL), v10 + 104, v15);
    }
    if ( a1[96] )
      LOBYTE(v4) = WriteGenAddrHidden(*(_DWORD *)(*(_QWORD *)a1 + 80LL), v10 + 212, 255 * *(_DWORD *)(a2 + 28) / 0x64u);
  }
  return (char)v4;
}
