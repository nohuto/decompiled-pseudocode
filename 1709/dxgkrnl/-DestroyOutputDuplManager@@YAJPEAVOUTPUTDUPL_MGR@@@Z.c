/*
 * XREFs of ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01C6124
 * Callers:
 *     ??1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ @ 0x1C00FAFF4 (--1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ.c)
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C01732D8 (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 * Callees:
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C002AB10 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C01C5558 (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 */

__int64 __fastcall DestroyOutputDuplManager(OUTPUTDUPL_MGR **a1)
{
  __int64 v1; // rax
  OUTPUTDUPL_MGR **v3; // rbx

  if ( a1 )
  {
    if ( *((_BYTE *)a1 + 72) )
    {
      v3 = a1 - 3;
      if ( a1 != (OUTPUTDUPL_MGR **)24 )
      {
        OUTPUTDUPL_MGR::~OUTPUTDUPL_MGR(a1);
        v3[2] = 0LL;
        operator delete(v3);
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
    v1 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v1 + 24) = 0LL;
    WdLogEvent5_WdError(v1);
    return 3221225485LL;
  }
}
