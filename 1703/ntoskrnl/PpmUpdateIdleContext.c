/*
 * XREFs of PpmUpdateIdleContext @ 0x1406C6664
 * Callers:
 *     PpmUpdateIdleStates @ 0x1405A8220 (PpmUpdateIdleStates.c)
 * Callees:
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 */

__int64 __fastcall PpmUpdateIdleContext(ULONG a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 result; // rax

  v3 = *(_QWORD *)(KeGetPrcb(a1) + 23936);
  result = 0LL;
  if ( !v3 )
    return 3221225659LL;
  if ( !*(_QWORD *)(v3 + 488) )
    return 3221225865LL;
  *(_DWORD *)(v3 + 32) = 4;
  *(_QWORD *)(v3 + 488) = *(_QWORD *)(a2 + 8);
  return result;
}
