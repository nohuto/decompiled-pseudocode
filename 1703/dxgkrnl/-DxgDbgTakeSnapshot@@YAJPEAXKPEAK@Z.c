/*
 * XREFs of ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C018CA6C
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0036094 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 *     _DxgDbgTakeSnapshot_::_2_::_AUTO::__AUTO @ 0x1C018CA34 (_DxgDbgTakeSnapshot_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall DxgDbgTakeSnapshot(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  int v9; // eax
  int v10; // ebx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // eax
  void *PoolWithTag; // [rsp+30h] [rbp-18h] BYREF
  void *Src; // [rsp+38h] [rbp-10h] BYREF

  v4 = a2;
  if ( SeSinglePrivilegeCheck((LUID)11LL, 1) )
  {
    PoolWithTag = 0LL;
    Src = 0LL;
    v9 = TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 0);
    if ( v9 )
    {
      v11 = v9 + 4096;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v9 + 4096), 0x52445476u);
      if ( PoolWithTag )
      {
        v13 = WdLogNewEntry5_WdEvent(v12);
        *(_QWORD *)(v13 + 24) = a1;
        *(_QWORD *)(v13 + 32) = v4;
        WdLogEvent5_WdEvent(v13);
        v14 = TdrCollectBugcheckSecondaryDumpData(PoolWithTag, v11, 1);
        v10 = WdDbgCreateSnapshot(&WdDxgkSecondaryDataGUID, PoolWithTag, v14, &Src, a3);
        if ( v10 >= 0 )
        {
          if ( (unsigned int)v4 >= *a3 )
          {
            if ( a1 )
              memmove(a1, Src, *a3);
            v10 = 0;
          }
          else
          {
            v10 = 1075707914;
          }
        }
      }
      else
      {
        v10 = -1073741801;
      }
    }
    else
    {
      v10 = -1073741823;
    }
    DxgDbgTakeSnapshot_::_2_::_AUTO::__AUTO((__int64)&PoolWithTag);
    return (unsigned int)v10;
  }
  else
  {
    v7 = WdLogNewEntry5_WdEvent(v6);
    *(_QWORD *)(v7 + 24) = a1;
    *(_QWORD *)(v7 + 32) = v4;
    WdLogEvent5_WdEvent(v7);
    return 3221225506LL;
  }
}
