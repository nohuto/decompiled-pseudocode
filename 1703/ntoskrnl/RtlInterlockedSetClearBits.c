/*
 * XREFs of RtlInterlockedSetClearBits @ 0x1401161F0
 * Callers:
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 *     PspAddProcessToJobChain @ 0x140547D90 (PspAddProcessToJobChain.c)
 *     PspAssociateCompletionPortCallback @ 0x1406E1360 (PspAssociateCompletionPortCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInterlockedSetClearBits(volatile signed __int32 *a1, int a2)
{
  unsigned __int32 v2; // r9d
  signed __int32 i; // r8d
  unsigned int v4; // r8d

  v2 = *a1;
  for ( i = *a1; ; v2 = i )
  {
    v4 = (a2 | i) & 0xFFFFFFDF;
    if ( v4 == v2 )
      break;
    i = _InterlockedCompareExchange(a1, v4, v2);
    if ( v2 == i )
      break;
  }
  return v2;
}
