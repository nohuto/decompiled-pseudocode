/*
 * XREFs of MonitorGetPreferredMonitorSourceMode @ 0x1C00A272C
 * Callers:
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00A2674 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetPreferredMonitorSourceMode(struct HDXGMONITOR__ *a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGMONITOR *v11; // rsi
  struct _ERESOURCE *v12; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // r14
  _OWORD *v16; // rcx
  struct DXGMONITOR *v17; // rax
  _OWORD *v18; // rbp
  __int64 v19; // rsi
  char *v20; // rax
  __int128 v21; // xmm1
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  struct DXGMONITOR *v26; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v26, a3, a4);
  if ( (int)result >= 0 )
  {
    v11 = v26;
    if ( !v26 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      WdLogEvent5_WdAssertion(v24);
    }
    KeEnterCriticalRegion();
    v12 = (struct _ERESOURCE *)((char *)v11 + 240);
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v11 + 240), 1u);
    v15 = (char *)v11 + 160;
    v16 = 0LL;
    v17 = (struct DXGMONITOR *)*((_QWORD *)v11 + 20);
    v18 = 0LL;
    if ( v17 != (struct DXGMONITOR *)((char *)v11 + 160) )
    {
      v19 = (__int64)v17 - 96;
      if ( !v17 )
        v19 = 0LL;
      if ( v19 )
      {
        do
        {
          if ( *(_DWORD *)(v19 + 88) == 1 )
          {
            v22 = *(unsigned int *)(v19 + 84);
            if ( (unsigned int)(v22 - 2) <= 1 )
            {
              if ( v16 )
              {
                v25 = WdLogNewEntry5_WdAssertion(v16, v22, v13, v14);
                WdLogEvent5_WdAssertion(v25);
              }
              v16 = (_OWORD *)v19;
            }
            else if ( (_DWORD)v22 == 5 )
            {
              v23 = v19;
              if ( v18 )
                v23 = 1LL;
              v18 = (_OWORD *)v23;
            }
          }
          v20 = *(char **)(v19 + 96);
          if ( v20 == v15 )
            break;
          v19 = (__int64)(v20 - 96);
          if ( !v20 )
            v19 = 0LL;
        }
        while ( v19 );
        if ( (unsigned __int64)v18 > 1 )
        {
          *a2 = *v18;
          a2[1] = v18[1];
          a2[2] = v18[2];
          a2[3] = v18[3];
          a2[4] = v18[4];
          v21 = v18[5];
LABEL_17:
          a2[5] = v21;
LABEL_18:
          ExReleaseResourceLite(v12);
          KeLeaveCriticalRegion();
          return v4;
        }
        if ( v16 )
        {
          *a2 = *v16;
          a2[1] = v16[1];
          a2[2] = v16[2];
          a2[3] = v16[3];
          a2[4] = v16[4];
          v21 = v16[5];
          goto LABEL_17;
        }
      }
    }
    v4 = -1073741275;
    goto LABEL_18;
  }
  return result;
}
