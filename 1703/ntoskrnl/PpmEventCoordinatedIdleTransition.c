/*
 * XREFs of PpmEventCoordinatedIdleTransition @ 0x1402355D8
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400F4810 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void *__fastcall PpmEventCoordinatedIdleTransition(char a1, int a2, __int64 a3)
{
  void *result; // rax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]

  if ( a2 )
  {
    result = (void *)PpmPlatformStates;
    if ( *(_BYTE *)(PpmPlatformStates + 12) )
    {
      if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
      {
        v4 = a3;
        v6 = 0;
        v5 = 4 * a2;
        return EtwTraceKernelEvent((int)&v4, 1, 0x40008000u, 4672 - (a1 != 0), 1538);
      }
    }
  }
  return result;
}
