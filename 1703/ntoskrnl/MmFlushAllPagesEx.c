/*
 * XREFs of MmFlushAllPagesEx @ 0x14013F244
 * Callers:
 *     MmFlushAllPages @ 0x14021AAD4 (MmFlushAllPages.c)
 *     PopTransitionToSleep @ 0x14040BE50 (PopTransitionToSleep.c)
 * Callees:
 *     MmGetNextPartition @ 0x14003A82C (MmGetNextPartition.c)
 *     MiFlushAllPages @ 0x14013F290 (MiFlushAllPages.c)
 */

_QWORD *__fastcall MmFlushAllPagesEx(char a1, unsigned int a2)
{
  ULONG_PTR i; // rcx
  _QWORD *result; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx

  for ( i = 0LL; ; i = (ULONG_PTR)v7 )
  {
    result = (_QWORD *)MmGetNextPartition(i);
    v7 = result;
    if ( !result )
      break;
    LOBYTE(v6) = a1;
    MiFlushAllPages(*result, v6, a2);
  }
  return result;
}
