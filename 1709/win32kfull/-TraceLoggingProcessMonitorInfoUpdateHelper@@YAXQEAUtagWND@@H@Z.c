/*
 * XREFs of ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C0051F24
 * Callers:
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0055510 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C0061CB0 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C005D868 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 */

void __fastcall TraceLoggingProcessMonitorInfoUpdateHelper(struct tagWND *const a1, int a2)
{
  __int64 v3; // rbx
  struct tagMONITOR *v4; // rax
  int v5; // r9d
  int v6; // edx
  int v7; // ecx
  int v8; // edx

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL);
  if ( v3 )
  {
    v4 = _MonitorFromWindowInternal(a1, 1u, 0);
    if ( v4 )
    {
      *(_OWORD *)(v3 + 912) = *(_OWORD *)(*((_QWORD *)v4 + 5) + 28LL);
      if ( a2 )
      {
        v5 = *(_DWORD *)(v3 + 928);
        v6 = *(_DWORD *)(v3 + 940) | 1;
        *(_DWORD *)(v3 + 940) = v6;
        if ( v5 != *(unsigned __int16 *)(*((_QWORD *)v4 + 5) + 64LL) )
        {
          *(_DWORD *)(v3 + 936) = v5;
          *(_DWORD *)(v3 + 940) = v6 | 2;
        }
      }
      else
      {
        v7 = *(unsigned __int16 *)(*((_QWORD *)v4 + 5) + 64LL);
        if ( *(_DWORD *)(v3 + 888) )
        {
          v8 = *(_DWORD *)(v3 + 928);
          if ( v8 != v7 )
          {
            *(_DWORD *)(v3 + 940) |= 4u;
            *(_DWORD *)(v3 + 936) = v8;
          }
        }
        else
        {
          *(_DWORD *)(v3 + 932) = v7;
        }
      }
      *(_DWORD *)(v3 + 928) = *(unsigned __int16 *)(*((_QWORD *)v4 + 5) + 64LL);
    }
    else
    {
      *(_DWORD *)(v3 + 928) = 0;
      *(_DWORD *)(v3 + 912) = 0;
      *(_DWORD *)(v3 + 916) = 0;
      *(_DWORD *)(v3 + 920) = 0;
      *(_DWORD *)(v3 + 924) = 0;
    }
  }
}
