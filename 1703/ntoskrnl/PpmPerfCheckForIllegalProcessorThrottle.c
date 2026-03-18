/*
 * XREFs of PpmPerfCheckForIllegalProcessorThrottle @ 0x14001B890
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1400F3250 (PpmCheckSnapAllDeliveredPerformance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x140231BB4 (PopDiagTraceIllegalProcessorThrottle.c)
 */

void __fastcall PpmPerfCheckForIllegalProcessorThrottle(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  void (__fastcall *v4)(__int64 *); // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 24304);
  v3 = *(_QWORD *)(a1 + 24312);
  if ( PopProcessorThrottleLogInterval )
  {
    if ( v2 )
    {
      if ( v3 )
      {
        v4 = *(void (__fastcall **)(__int64 *))(v2 + 216);
        if ( v4 )
        {
          if ( *(_BYTE *)(a1 + 24176) )
          {
            v4(&v6);
            if ( *(_DWORD *)(v3 + 96) < *(_DWORD *)(v2 + 324) )
            {
              *(_BYTE *)(a1 + 24184) = 0;
            }
            else if ( *(_BYTE *)(a1 + 24184) )
            {
              if ( *(_QWORD *)(a1 + 24192) != v6 )
              {
                v5 = (unsigned int)++*(_DWORD *)(a1 + 24180);
                if ( !(*(_DWORD *)(a1 + 24180) % (unsigned int)PopProcessorThrottleLogInterval) || (_DWORD)v5 == 1 )
                {
                  LODWORD(v5) = KeGetPcr()->Prcb.Number;
                  PopDiagTraceIllegalProcessorThrottle(v5, v6, a1 + 24200);
                }
              }
            }
            else
            {
              *(_BYTE *)(a1 + 24184) = 1;
            }
            *(_QWORD *)(a1 + 24192) = v6;
          }
        }
      }
    }
  }
}
