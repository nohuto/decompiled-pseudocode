/*
 * XREFs of ??1SESSION_ADAPTER@@QEAA@XZ @ 0x1C01CE3C0
 * Callers:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C0036400 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SESSION_ADAPTER::~SESSION_ADAPTER(SESSION_ADAPTER *this)
{
  __int64 v1; // rax

  if ( *((_DWORD *)this + 12)
    || *((_QWORD *)this + 2)
    || *((_QWORD *)this + 7)
    || *((_QWORD *)this + 8)
    || *((_DWORD *)this + 21)
    || *((_DWORD *)this + 20)
    || *((SESSION_ADAPTER **)this + 11) != (SESSION_ADAPTER *)((char *)this + 88) )
  {
    v1 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v1 + 24) = 1762LL;
    WdLogEvent5_WdAssertion(v1);
  }
}
