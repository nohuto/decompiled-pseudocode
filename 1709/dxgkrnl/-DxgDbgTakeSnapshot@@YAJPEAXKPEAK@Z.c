/*
 * XREFs of ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C01A11E0
 * Callers:
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0026EAC (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 *     _DxgDbgTakeSnapshot_::_2_::_AUTO::__AUTO @ 0x1C01A11A8 (_DxgDbgTakeSnapshot_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall DxgDbgTakeSnapshot(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v12; // eax
  int v13; // ebx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned int v20; // eax
  void *PoolWithTag; // [rsp+30h] [rbp-18h] BYREF
  void *Src; // [rsp+38h] [rbp-10h] BYREF

  v4 = a2;
  if ( SeSinglePrivilegeCheck((LUID)11LL, 1) )
  {
    PoolWithTag = 0LL;
    Src = 0LL;
    v12 = TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 0);
    if ( v12 )
    {
      v14 = v12 + 4096;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v12 + 4096), 0x52445476u);
      if ( PoolWithTag )
      {
        v19 = WdLogNewEntry5_WdEvent(v16, v15, v17, v18);
        *(_QWORD *)(v19 + 24) = a1;
        *(_QWORD *)(v19 + 32) = v4;
        WdLogEvent5_WdEvent(v19);
        v20 = TdrCollectBugcheckSecondaryDumpData(PoolWithTag, v14, 1);
        v13 = WdDbgCreateSnapshot(&WdDxgkSecondaryDataGUID, PoolWithTag, v20, &Src, a3);
        if ( v13 >= 0 )
        {
          if ( (unsigned int)v4 >= *a3 )
          {
            if ( a1 )
              memmove(a1, Src, *a3);
            v13 = 0;
          }
          else
          {
            v13 = 1075707914;
          }
        }
      }
      else
      {
        v13 = -1073741801;
      }
    }
    else
    {
      v13 = -1073741823;
    }
    DxgDbgTakeSnapshot_::_2_::_AUTO::__AUTO((__int64)&PoolWithTag);
    return (unsigned int)v13;
  }
  else
  {
    v10 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = a1;
    *(_QWORD *)(v10 + 32) = v4;
    WdLogEvent5_WdEvent(v10);
    return 3221225506LL;
  }
}
