/*
 * XREFs of ?DxgkCddTerminateThread@@YAXPEAU_KEVENT@@@Z @ 0x1C00FA4D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

void __fastcall DxgkCddTerminateThread(PRKEVENT Event, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)Event, &EventProfilerEnter, a3, 3013);
  retaddr = 0LL;
  if ( KeGetCurrentIrql() )
  {
    v6 = WdLogNewEntry5_WdAssertion(Event);
    *(_QWORD *)(v6 + 24) = 2592LL;
    WdLogEvent5_WdAssertion(v6);
  }
  KeSetEvent(Event, 0, 0);
  PsTerminateSystemThread(0);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v4, &EventProfilerExit, v5, 3013);
}
