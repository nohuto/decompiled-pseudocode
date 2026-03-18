/*
 * XREFs of ??1SESSION_ADAPTER@@QEAA@XZ @ 0x1C00FB8D4
 * Callers:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C000D578 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SESSION_ADAPTER::~SESSION_ADAPTER(SESSION_ADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  if ( *((_DWORD *)this + 12)
    || *((_QWORD *)this + 2)
    || *((_QWORD *)this + 7)
    || *((_QWORD *)this + 8)
    || *((_DWORD *)this + 19)
    || *((_DWORD *)this + 18)
    || *((SESSION_ADAPTER **)this + 10) != (SESSION_ADAPTER *)((char *)this + 80) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v4 + 24) = 1710LL;
    WdLogEvent5_WdAssertion(v4);
  }
}
