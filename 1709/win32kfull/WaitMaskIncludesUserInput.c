/*
 * XREFs of WaitMaskIncludesUserInput @ 0x1C0112434
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitMaskIncludesUserInput(char a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 104LL) )
    return 1;
  return v1;
}
