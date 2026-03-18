/*
 * XREFs of ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C0020808
 * Callers:
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C001A094 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C005EF98 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     _MonitorFromWindow @ 0x1C00208D4 (_MonitorFromWindow.c)
 */

void __fastcall TraceLoggingProcessMonitorInfoUpdateHelper(struct tagWND *const a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // r9d
  int v6; // edx
  int v7; // ecx
  int v8; // edx

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL);
  if ( v3 )
  {
    v4 = MonitorFromWindow(a1, 1LL);
    if ( v4 )
    {
      *(_OWORD *)(v3 + 904) = *(_OWORD *)(*(_QWORD *)(v4 + 40) + 28LL);
      if ( a2 )
      {
        v5 = *(_DWORD *)(v3 + 920);
        v6 = *(_DWORD *)(v3 + 932) | 1;
        *(_DWORD *)(v3 + 932) = v6;
        if ( v5 != *(unsigned __int16 *)(*(_QWORD *)(v4 + 40) + 128LL) )
        {
          *(_DWORD *)(v3 + 928) = v5;
          *(_DWORD *)(v3 + 932) = v6 | 2;
        }
      }
      else
      {
        v7 = *(unsigned __int16 *)(*(_QWORD *)(v4 + 40) + 128LL);
        if ( *(_DWORD *)(v3 + 880) )
        {
          v8 = *(_DWORD *)(v3 + 920);
          if ( v8 != v7 )
          {
            *(_DWORD *)(v3 + 932) |= 4u;
            *(_DWORD *)(v3 + 928) = v8;
          }
        }
        else
        {
          *(_DWORD *)(v3 + 924) = v7;
        }
      }
      *(_DWORD *)(v3 + 920) = *(unsigned __int16 *)(*(_QWORD *)(v4 + 40) + 128LL);
    }
    else
    {
      *(_DWORD *)(v3 + 920) = 0;
      *(_DWORD *)(v3 + 904) = 0;
      *(_DWORD *)(v3 + 908) = 0;
      *(_DWORD *)(v3 + 912) = 0;
      *(_DWORD *)(v3 + 916) = 0;
    }
  }
}
