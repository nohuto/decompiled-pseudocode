/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C00DFA1C
 * Callers:
 *     EtwTraceWaitCursor @ 0x1C008C6D0 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1)
{
  __int64 result; // rax

  if ( a1 == (struct tagCURSOR *const)qword_1C018E048 )
    return 102LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C018E0D8 )
    return 111LL;
  result = 0LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C018E128 )
    return 116LL;
  return result;
}
