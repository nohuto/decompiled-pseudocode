/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C00D9738
 * Callers:
 *     EtwTraceWaitCursor @ 0x1C0084640 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1)
{
  __int64 result; // rax

  if ( a1 == (struct tagCURSOR *const)qword_1C01894E8 )
    return 102LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C0189578 )
    return 111LL;
  result = 0LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C01895C8 )
    return 116LL;
  return result;
}
