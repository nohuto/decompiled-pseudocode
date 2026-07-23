/*
 * XREFs of RtlGetNonVolatileToken @ 0x1402867F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __cdecl RtlGetNonVolatileToken(PVOID NvBuffer, SIZE_T Size, PVOID *NvToken)
{
  __int64 v3; // rax

  v3 = 1LL;
  if ( RtlpIsFlushRequired )
    v3 = 3LL;
  *NvToken = (PVOID)v3;
  return 0;
}
