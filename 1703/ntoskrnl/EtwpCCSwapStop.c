/*
 * XREFs of EtwpCCSwapStop @ 0x140435848
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x140434C0C (EtwpUpdateGroupMasks.c)
 *     EtwpFlushTrace @ 0x140451AD4 (EtwpFlushTrace.c)
 * Callees:
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 */

_UNKNOWN **__fastcall EtwpCCSwapStop(unsigned int a1, char a2)
{
  _UNKNOWN **result; // rax
  ULONG v3; // esi
  ULONG v4; // ebx
  __int64 i; // rdi
  _BYTE *v7; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = KeNumberProcessors_0;
  v4 = 0;
  for ( i = a1; v4 < v3; ++v4 )
  {
    result = (_UNKNOWN **)KeGetPrcb(v4);
    v7 = result[3098];
    if ( *(_QWORD *)&v7[8 * i + 1752] )
      v7[i + 1744] = 1;
  }
  if ( a2 )
    --CCSwapNumLoggersPerClockType[i];
  return result;
}
