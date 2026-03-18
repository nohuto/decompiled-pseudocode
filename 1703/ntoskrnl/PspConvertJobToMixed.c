/*
 * XREFs of PspConvertJobToMixed @ 0x1406E146C
 * Callers:
 *     PspBindProcessSessionToJob @ 0x14054C2D8 (PspBindProcessSessionToJob.c)
 * Callees:
 *     PsIsHostSilo @ 0x140050C00 (PsIsHostSilo.c)
 *     PsGetJobSilo @ 0x140239490 (PsGetJobSilo.c)
 */

__int64 __fastcall PspConvertJobToMixed(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 480) == -2 )
    return 0LL;
  if ( (int)PsGetJobSilo(a1) >= 0 && !PsIsHostSilo(v3) && (*(_DWORD *)(a1 + 1304) & 0x10) == 0 )
  {
    *(_DWORD *)(a1 + 480) = -2;
    return 0LL;
  }
  return 3221225506LL;
}
