/*
 * XREFs of VidSchiResetEngines @ 0x1C00AAEA4
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C004FB1C (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C006B650 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C00096C0 (VidSchIsTDRPending.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C00100E0 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0012030 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiCompletePreemption @ 0x1C0025B64 (VidSchiCompletePreemption.c)
 *     VidSchiResetEngine @ 0x1C0026D04 (VidSchiResetEngine.c)
 */

char __fastcall VidSchiResetEngines(__int64 a1, unsigned __int64 a2)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  char v7; // di
  unsigned int v8; // eax
  unsigned int v9; // r14d
  unsigned __int64 v10; // rbx
  unsigned int i; // r15d
  unsigned int v12; // eax
  int v13; // esi
  unsigned int v14; // eax

  if ( TdrAllowToDebugEngineTimeout((struct _VIDSCH_NODE *)a1) )
    return 1;
  if ( g_TdrConfig[0] == 1 )
    return 0;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a2;
  v7 = 1;
  v8 = VidSchiSchedulerNodeToDriverEngine(v5, *(unsigned __int16 *)(a1 + 4));
  *(_QWORD *)(v5 + 2832) = a1;
  v9 = 0;
  v10 = 0LL;
  for ( i = v8; a2; a2 >>= 1 )
  {
    if ( (a2 & 1) != 0 )
    {
      v12 = VidSchiDriverNodeEngineToSchedulerNode(v5, v9, i);
      if ( !VidSchiResetEngine(*(_QWORD *)(v5 + 8LL * v12 + 416), v6) )
      {
        v7 = 0;
        break;
      }
      _bittestandset64((__int64 *)&v10, v9);
    }
    ++v9;
  }
  *(_QWORD *)(v5 + 2832) = 0LL;
  if ( v7 )
  {
    v13 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        if ( (v10 & 1) != 0 )
        {
          v14 = VidSchiDriverNodeEngineToSchedulerNode(v5, v13, i);
          VidSchiCompletePreemption(*(_QWORD *)(v5 + 8LL * v14 + 416));
          if ( VidSchIsTDRPending(v5) )
            break;
        }
        ++v13;
        v10 >>= 1;
        if ( !v10 )
          return v7;
      }
      return 0;
    }
  }
  return v7;
}
