/*
 * XREFs of PerfControlCpc @ 0x1C0003B50
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C0003568 (WriteGenAddr.c)
 *     PerformanceFromPercentage @ 0x1C00043B8 (PerformanceFromPercentage.c)
 */

char __fastcall PerfControlCpc(__int64 a1, __int64 a2, char a3, char a4)
{
  _UNKNOWN **v4; // rax
  bool v7; // zf
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  _BYTE *v10; // rsi
  unsigned __int64 v11; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v4 = &retaddr;
  if ( !a3 && !a4 )
    return (char)v4;
  v7 = *(_BYTE *)(a1 + 93) == 0;
  v4 = *(_UNKNOWN ***)a2;
  v8 = *(_DWORD *)(a2 + 20);
  v9 = *(_DWORD *)(a2 + 16);
  v10 = *(_BYTE **)(a1 + 112);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)a2;
  if ( !v7 )
  {
    if ( *(_BYTE *)(a2 + 36) )
    {
      if ( v10 == (_BYTE *)-68LL )
        goto LABEL_10;
      v11 = 0LL;
    }
    else
    {
      if ( v10 == (_BYTE *)-68LL )
        goto LABEL_10;
      v11 = *(_QWORD *)a2;
    }
    LOBYTE(v4) = WriteGenAddr(v10 + 68, v11);
  }
LABEL_10:
  if ( *(_BYTE *)(a1 + 94) )
  {
    v4 = (_UNKNOWN **)PerformanceFromPercentage(a1, v9);
    if ( v10 != (_BYTE *)-80LL )
      LOBYTE(v4) = WriteGenAddr(v10 + 80, (unsigned __int64)v4);
  }
  if ( *(_BYTE *)(a1 + 95) )
  {
    v4 = (_UNKNOWN **)PerformanceFromPercentage(a1, v8);
    if ( v10 != (_BYTE *)-92LL )
      LOBYTE(v4) = WriteGenAddr(v10 + 92, (unsigned __int64)v4);
  }
  if ( *(_BYTE *)(a1 + 98) )
  {
    v4 = (_UNKNOWN **)PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
    if ( v10 != (_BYTE *)-104LL )
      LOBYTE(v4) = WriteGenAddr(v10 + 104, (unsigned __int64)v4);
  }
  return (char)v4;
}
