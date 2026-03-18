/*
 * XREFs of LBR_TRACING_ENABLED @ 0x140172AF0
 * Callers:
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 * Callees:
 *     <none>
 */

char __fastcall LBR_TRACING_ENABLED(__int64 a1, __int16 a2)
{
  __int64 v4; // r9
  __int64 v5; // rdx

  if ( (*(_DWORD *)(a1 + 832) & 0x8000) == 0 )
    return 0;
  v4 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 1008) + 8LL) )
    return 0;
  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 + 1008);
    if ( *(_WORD *)(v5 + 2 * v4 + 12) == a2 )
      break;
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *(_DWORD *)(v5 + 8) )
      return 0;
  }
  return 1;
}
