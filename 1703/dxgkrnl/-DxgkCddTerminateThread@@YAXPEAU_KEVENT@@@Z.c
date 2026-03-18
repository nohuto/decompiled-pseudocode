/*
 * XREFs of ?DxgkCddTerminateThread@@YAXPEAU_KEVENT@@@Z @ 0x1C00A64C0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

void __fastcall DxgkCddTerminateThread(PRKEVENT Event, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)Event, &EventProfilerEnter, a3, 3013);
  retaddr = 0LL;
  if ( KeGetCurrentIrql() )
  {
    v7 = WdLogNewEntry5_WdAssertion(Event, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 2557LL;
    WdLogEvent5_WdAssertion(v7);
  }
  KeSetEvent(Event, 0, 0);
  PsTerminateSystemThread(0);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v5, &EventProfilerExit, v6, 3013);
}
