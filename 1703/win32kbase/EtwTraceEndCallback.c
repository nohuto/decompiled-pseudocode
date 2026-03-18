/*
 * XREFs of EtwTraceEndCallback @ 0x1C0076B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *EtwTraceEndCallback()
{
  __int64 v0; // rbx
  __int64 *result; // rax

  v0 = 0LL;
  result = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( result )
    v0 = *result;
  --*(_BYTE *)(v0 + 1108);
  return result;
}
