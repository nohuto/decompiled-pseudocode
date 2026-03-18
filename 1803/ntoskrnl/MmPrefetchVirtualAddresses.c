/*
 * XREFs of MmPrefetchVirtualAddresses @ 0x14052C6E0
 * Callers:
 *     VmpPrefetchForVirtualFault @ 0x1407A0EFC (VmpPrefetchForVirtualFault.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x14005605C (MiGetEffectivePagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 *     MmPrefetchVirtualMemory @ 0x14052C778 (MmPrefetchVirtualMemory.c)
 */

__int64 __fastcall MmPrefetchVirtualAddresses(_DWORD *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // ecx
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
