/*
 * XREFs of EtwpGetFlagExtension @ 0x14058988C
 * Callers:
 *     EtwpCheckForStackTracingExtension @ 0x140589850 (EtwpCheckForStackTracingExtension.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140628A54 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140628AE8 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpUpdatePerProcessTracing @ 0x1407A5C94 (EtwpUpdatePerProcessTracing.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall EtwpGetFlagExtension(__int64 a1, __int16 a2)
{
  int v2; // eax
  unsigned __int16 v3; // r8
  __int64 v5; // rax
  unsigned __int16 *v6; // rcx

  v2 = *(_DWORD *)(a1 + 72);
  v3 = 0;
  if ( v2 < 0 )
  {
    v5 = a1 + (unsigned __int16)v2;
    v6 = (unsigned __int16 *)(v5 + 4);
    while ( v3 < *(_WORD *)(v5 + 2) )
    {
      if ( v6[1] == a2 )
        return v6;
      ++v3;
      v6 += 2 * *v6;
    }
  }
  return 0LL;
}
