/*
 * XREFs of VidSchiResetEngines @ 0x1C00BC1C0
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C0074A5C (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C0077190 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0002EB0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchIsTDRPending @ 0x1C000B250 (VidSchIsTDRPending.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0012370 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiCompletePreemption @ 0x1C002A904 (VidSchiCompletePreemption.c)
 *     VidSchiResetEngine @ 0x1C002BF88 (VidSchiResetEngine.c)
 *     VidSchiResetHwEngine @ 0x1C00334A4 (VidSchiResetHwEngine.c)
 */

char __fastcall VidSchiResetEngines(__int64 a1, unsigned __int64 a2)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  char v7; // di
  unsigned int v8; // eax
  unsigned int v9; // r14d
  unsigned __int64 v10; // rbx
  unsigned int i; // r13d
  __int64 v12; // r15
  char v13; // al
  int v14; // esi
  unsigned int v15; // eax

  if ( TdrAllowToDebugEngineTimeout((struct _VIDSCH_NODE *)a1) )
    return 1;
  if ( g_TdrConfig[0] == 1 )
    return 0;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a2;
  v7 = 1;
  v8 = VidSchiSchedulerNodeToDriverEngine(v5, *(unsigned __int16 *)(a1 + 4));
  *(_QWORD *)(v5 + 2872) = a1;
  v9 = 0;
  v10 = 0LL;
  for ( i = v8; a2; a2 >>= 1 )
  {
    if ( (a2 & 1) != 0 )
    {
      v12 = *(_QWORD *)(v5 + 8LL * (unsigned int)VidSchiDriverNodeEngineToSchedulerNode(v5, v9, i) + 440);
      if ( (*(_DWORD *)(v12 + 12) & 2) != 0 )
        v13 = VidSchiResetHwEngine(v12, v6);
      else
        v13 = VidSchiResetEngine(v12, v6);
      v7 = v13;
      if ( !v13 )
        break;
      if ( (*(_DWORD *)(v12 + 12) & 2) == 0 )
        _bittestandset64((__int64 *)&v10, v9);
    }
    ++v9;
  }
  *(_QWORD *)(v5 + 2872) = 0LL;
  if ( v7 )
  {
    v14 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        if ( (v10 & 1) != 0 )
        {
          v15 = VidSchiDriverNodeEngineToSchedulerNode(v5, v14, i);
          VidSchiCompletePreemption(*(_QWORD *)(v5 + 8LL * v15 + 440));
          if ( VidSchIsTDRPending(v5) )
            break;
        }
        ++v14;
        v10 >>= 1;
        if ( !v10 )
          return v7;
      }
      return 0;
    }
  }
  return v7;
}
