/*
 * XREFs of ??1SESSION_VIEW@@QEAA@XZ @ 0x1C00F8D0C
 * Callers:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C000CDA0 (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SESSION_VIEW::~SESSION_VIEW(SESSION_VIEW *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  if ( *((_DWORD *)this + 10) || *((SESSION_VIEW **)this + 6) != (SESSION_VIEW *)((char *)this + 48) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v4 + 24) = 1374LL;
    WdLogEvent5_WdAssertion(v4);
  }
}
