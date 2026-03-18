/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C00AB3C8
 * Callers:
 *     EtwTraceWaitCursor @ 0x1C0068550 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1)
{
  __int64 result; // rax

  if ( a1 == (struct tagCURSOR *const)qword_1C019F1E8 )
    return 102LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C019F278 )
    return 111LL;
  result = 0LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C019F2C8 )
    return 116LL;
  return result;
}
