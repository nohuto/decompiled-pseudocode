/*
 * XREFs of MonitorGetNextFrequencyRange @ 0x1C00D9558
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C00D7574 (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetNextFrequencyRange(struct HDXGMONITOR__ *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v7; // rcx
  struct DXGMONITOR *v8; // rdi
  struct DXGMONITOR *v9; // rcx
  char *v10; // rax
  bool v11; // zf
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  struct DXGMONITOR *v19; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  v19 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v19);
  if ( (int)result >= 0 )
  {
    v8 = v19;
    if ( !v19 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v17);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v8 + 280), 1u);
    if ( a2 )
    {
      v12 = (_QWORD *)((char *)v8 + 248);
      v13 = (_QWORD *)*((_QWORD *)v8 + 31);
      if ( v13 == (_QWORD *)((char *)v8 + 248) )
      {
LABEL_24:
        v18 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v18 + 24) = a2;
        *(_QWORD *)(v18 + 32) = v8;
        WdLogEvent5_WdError(v18);
        v16 = -1071774928;
        goto LABEL_18;
      }
      v14 = (_QWORD *)(a2 + 48);
      while ( v13 != v14 )
      {
        if ( v12 == v13 )
          goto LABEL_24;
        v13 = (_QWORD *)*v13;
      }
      v15 = (_QWORD *)*v14;
      if ( v15 != v12 )
      {
        v10 = (char *)(v15 - 6);
        v11 = v15 == 0LL;
LABEL_9:
        if ( v11 )
          v10 = 0LL;
        if ( v10 )
        {
          *a3 = v10;
LABEL_19:
          ExReleaseResourceLite((PERESOURCE)((char *)v8 + 280));
          KeLeaveCriticalRegion();
          return v3;
        }
      }
    }
    else
    {
      v9 = (struct DXGMONITOR *)*((_QWORD *)v8 + 31);
      if ( v9 != (struct DXGMONITOR *)((char *)v8 + 248) )
      {
        v10 = (char *)v9 - 48;
        v11 = v9 == 0LL;
        goto LABEL_9;
      }
    }
    v16 = 1075708748;
LABEL_18:
    v3 = v16;
    goto LABEL_19;
  }
  return result;
}
