/*
 * XREFs of RtlGetCriticalSectionRecursionCount @ 0x1800E71B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetCriticalSectionRecursionCount(__int64 a1)
{
  if ( *(HANDLE *)(a1 + 16) == NtCurrentTeb()->ClientId.UniqueThread )
    return *(unsigned int *)(a1 + 12);
  else
    return 0LL;
}
