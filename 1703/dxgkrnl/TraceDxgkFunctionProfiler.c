/*
 * XREFs of TraceDxgkFunctionProfiler @ 0x1C0014370
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

void __fastcall TraceDxgkFunctionProfiler(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  const EVENT_DESCRIPTOR *v5; // rdx
  __int64 v6; // rax

  v4 = a1;
  if ( (_BYTE)a2 == 1 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return;
    v5 = (const EVENT_DESCRIPTOR *)&EventProfilerEnter;
    goto LABEL_11;
  }
  if ( (_BYTE)a2 == 2 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return;
    v5 = (const EVENT_DESCRIPTOR *)&EventProfilerExit;
    goto LABEL_11;
  }
  if ( (_BYTE)a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 2454LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
  {
    v5 = (const EVENT_DESCRIPTOR *)&EventProfilerInfo;
LABEL_11:
    Template_q(a1, v5, a3, v4);
  }
}
