/*
 * XREFs of _lambda_31a9479bdf43f1457bc87359a481f8f6_::_lambda_invoker_cdecl_ @ 0x1C012A440
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C0138BB0 (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 */

char __fastcall lambda_31a9479bdf43f1457bc87359a481f8f6_::_lambda_invoker_cdecl_(struct DEVICEINFO *const a1, void *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
  {
    v2 = *((_QWORD *)a1 + 59);
    if ( *(_DWORD *)(v2 + 24) == 7 )
    {
      v3 = 0LL;
      if ( v2 )
        v3 = *(_QWORD *)(v2 + 960);
      PTPEngineTraceProducer::TraceEnvironment(
        *(PTPEngineTraceProducer **)(v3 + 824),
        (const struct PTPEnvironment *)(*(_QWORD *)(v3 + 824) + 40LL));
    }
  }
  return 1;
}
