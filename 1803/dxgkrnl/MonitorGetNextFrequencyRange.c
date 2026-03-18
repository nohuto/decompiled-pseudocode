/*
 * XREFs of MonitorGetNextFrequencyRange @ 0x1C00AD944
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C00B78E4 (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetNextFrequencyRange(struct HDXGMONITOR__ *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v7; // rcx
  struct DXGMONITOR *v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  bool v11; // zf
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  struct DXGMONITOR *v18; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  v18 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v18);
  if ( (int)result >= 0 )
  {
    v8 = v18;
    if ( !v18 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v16);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v8 + 296), 1u);
    if ( a2 )
    {
      v13 = (_QWORD *)((char *)v8 + 264);
      v14 = (_QWORD *)*((_QWORD *)v8 + 33);
      if ( v14 == (_QWORD *)((char *)v8 + 264) )
      {
LABEL_23:
        v17 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v17 + 24) = a2;
        *(_QWORD *)(v17 + 32) = v8;
        WdLogEvent5_WdError(v17);
        v15 = -1071774928;
        goto LABEL_20;
      }
      v9 = (_QWORD *)(a2 + 48);
      while ( v14 != v9 )
      {
        if ( v13 == v14 )
          goto LABEL_23;
        v14 = (_QWORD *)*v14;
      }
      v10 = (_QWORD *)*v9;
      v11 = v10 == v13;
    }
    else
    {
      v10 = (_QWORD *)*((_QWORD *)v8 + 33);
      v11 = v10 == (_QWORD *)((char *)v8 + 264);
    }
    if ( !v11 )
    {
      v12 = v10 - 6;
      if ( !v10 )
        v12 = 0LL;
      if ( v12 )
      {
        *a3 = v12;
LABEL_13:
        ExReleaseResourceLite((PERESOURCE)((char *)v8 + 296));
        KeLeaveCriticalRegion();
        return v3;
      }
    }
    v15 = 1075708748;
LABEL_20:
    v3 = v15;
    goto LABEL_13;
  }
  return result;
}
