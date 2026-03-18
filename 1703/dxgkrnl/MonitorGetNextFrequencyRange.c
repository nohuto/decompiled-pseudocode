/*
 * XREFs of MonitorGetNextFrequencyRange @ 0x1C009F940
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C00F9348 (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetNextFrequencyRange(struct HDXGMONITOR__ *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGMONITOR *v12; // rdi
  _QWORD *v13; // rdx
  struct DXGMONITOR *v14; // rcx
  char *v15; // rax
  bool v16; // zf
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  struct DXGMONITOR *v23; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  v23 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v23, (__int64)a3, a4);
  if ( (int)result >= 0 )
  {
    v12 = v23;
    if ( !v23 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      WdLogEvent5_WdAssertion(v21);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v12 + 240), 1u);
    if ( a2 )
    {
      v17 = (_QWORD *)((char *)v12 + 208);
      v18 = (_QWORD *)*((_QWORD *)v12 + 26);
      if ( v18 == (_QWORD *)((char *)v12 + 208) )
      {
LABEL_24:
        v22 = WdLogNewEntry5_WdError(v17, v13);
        *(_QWORD *)(v22 + 24) = a2;
        *(_QWORD *)(v22 + 32) = v12;
        WdLogEvent5_WdError(v22);
        v20 = -1071774928;
        goto LABEL_20;
      }
      v13 = (_QWORD *)(a2 + 48);
      while ( v18 != v13 )
      {
        if ( v17 == v18 )
          goto LABEL_24;
        v18 = (_QWORD *)*v18;
      }
      v19 = (_QWORD *)*v13;
      if ( v19 != v17 )
      {
        v15 = (char *)(v19 - 6);
        v16 = v19 == 0LL;
LABEL_9:
        if ( v16 )
          v15 = 0LL;
        if ( v15 )
        {
          *a3 = v15;
LABEL_13:
          ExReleaseResourceLite((PERESOURCE)((char *)v12 + 240));
          KeLeaveCriticalRegion();
          return v4;
        }
      }
    }
    else
    {
      v14 = (struct DXGMONITOR *)*((_QWORD *)v12 + 26);
      if ( v14 != (struct DXGMONITOR *)((char *)v12 + 208) )
      {
        v15 = (char *)v14 - 48;
        v16 = v14 == 0LL;
        goto LABEL_9;
      }
    }
    v20 = 1075708748;
LABEL_20:
    v4 = v20;
    goto LABEL_13;
  }
  return result;
}
