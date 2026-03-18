/*
 * XREFs of MmPrefetchVirtualAddresses @ 0x1404C9A70
 * Callers:
 *     <none>
 * Callees:
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400FE040 (MiGetEffectivePagePriorityThread.c)
 */

__int64 __fastcall MmPrefetchVirtualAddresses(_DWORD *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // eax
  __int64 v3; // r10

  if ( *a1 != 1 )
    return 3221225711LL;
  v1 = a1[1];
  if ( v1 >= 8 )
    return 3221225711LL;
  v2 = (v1 >> 1) & 3;
  if ( v2 == 3 )
    return 3221225711LL;
  if ( v2 > 1 )
    MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  return MmPrefetchVirtualMemory(*(HANDLE *)(v3 + 8));
}
