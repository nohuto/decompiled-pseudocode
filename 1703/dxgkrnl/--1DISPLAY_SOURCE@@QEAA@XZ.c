/*
 * XREFs of ??1DISPLAY_SOURCE@@QEAA@XZ @ 0x1C016FBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DISPLAY_SOURCE::~DISPLAY_SOURCE(DISPLAY_SOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  void *v10; // rcx

  if ( *((_QWORD *)this + 108) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 3251LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_QWORD *)this + 130) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 3252LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_QWORD *)this + 95) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 3258LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_QWORD *)this + 101) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 3259LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_QWORD *)this + 106) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 3260LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = (void *)*((_QWORD *)this + 112);
  if ( v10 )
    ObfDereferenceObject(v10);
}
