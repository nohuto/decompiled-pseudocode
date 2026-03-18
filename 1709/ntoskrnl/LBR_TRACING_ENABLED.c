/*
 * XREFs of LBR_TRACING_ENABLED @ 0x14027DB8C
 * Callers:
 *     EtwpLogContextSwapEvent @ 0x14027BFB8 (EtwpLogContextSwapEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14027C4F4 (EtwpLogSystemEventUnsafe.c)
 * Callees:
 *     <none>
 */

char __fastcall LBR_TRACING_ENABLED(__int64 a1, __int16 a2)
{
  __int64 v3; // r9
  __int64 v4; // rdx

  if ( (*(_DWORD *)(a1 + 832) & 0x8000) == 0 )
    return 0;
  v3 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 2160) + 8LL) )
    return 0;
  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 2160);
    if ( *(_WORD *)(v4 + 2 * v3 + 12) == a2 )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(_DWORD *)(v4 + 8) )
      return 0;
  }
  return 1;
}
