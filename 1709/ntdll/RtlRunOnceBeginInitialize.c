/*
 * XREFs of RtlRunOnceBeginInitialize @ 0x180046EC0
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x180046DE0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1800FFBD8 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18010080C (RtlpHpStackTraceHeapGetContext.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x180087308 (RtlpRunOnceWaitForInit.c)
 */

__int64 __fastcall RtlRunOnceBeginInitialize(volatile signed __int64 *a1, int a2, unsigned __int64 *a3)
{
  signed __int64 v5; // rax
  unsigned int v6; // ebp
  int v8; // ebx
  signed __int64 v9; // rcx
  signed __int64 v10; // rcx
  signed __int64 v11; // rtt
  unsigned int v12; // eax

  if ( ((a2 - 1) & a2) != 0 || (a2 & 0xFFFFFFFC) != 0 )
    return 3221225712LL;
  v5 = *a1;
  v6 = 0;
  if ( (*a1 & 3) == 2 )
  {
LABEL_6:
    if ( a3 )
      *a3 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  else
  {
    if ( (a2 & 1) != 0 )
      return 3221225473LL;
    v8 = a2 & 2;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = v5 & 3;
        if ( (v5 & 3) != 0 )
          break;
        v10 = 1LL;
        if ( v8 )
          v10 = 3LL;
        v11 = v5;
        v5 = _InterlockedCompareExchange64(a1, v10, v5);
        if ( v11 == v5 )
          return 259;
      }
      if ( v9 != 1 )
        break;
      if ( v8 )
        return (unsigned int)-1073741584;
      v5 = RtlpRunOnceWaitForInit(v5, a1);
    }
    if ( v9 != 3 )
      goto LABEL_6;
    v12 = 259;
    if ( !v8 )
      return (unsigned int)-1073741584;
    return v12;
  }
  return v6;
}
