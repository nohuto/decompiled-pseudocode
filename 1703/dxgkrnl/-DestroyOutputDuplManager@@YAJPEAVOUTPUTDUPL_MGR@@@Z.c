/*
 * XREFs of ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01AC6CC
 * Callers:
 *     ??1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ @ 0x1C008C0E4 (--1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ.c)
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C016FAB0 (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 * Callees:
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C003A634 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C01ABB34 (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 */

__int64 __fastcall DestroyOutputDuplManager(OUTPUTDUPL_MGR **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  OUTPUTDUPL_MGR **v6; // rbx

  if ( a1 )
  {
    if ( *((_BYTE *)a1 + 72) )
    {
      v6 = a1 - 3;
      if ( a1 != (OUTPUTDUPL_MGR **)24 )
      {
        OUTPUTDUPL_MGR::~OUTPUTDUPL_MGR(a1, a2, a3, a4);
        v6[2] = 0LL;
        operator delete(v6);
      }
    }
    else
    {
      OUTPUTDUPL_MGR::`scalar deleting destructor'((OUTPUTDUPL_MGR *)a1);
    }
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
