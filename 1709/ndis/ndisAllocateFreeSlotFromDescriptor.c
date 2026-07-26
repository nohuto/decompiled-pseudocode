/*
 * XREFs of ndisAllocateFreeSlotFromDescriptor @ 0x1C0065EAC
 * Callers:
 *     NdisAllocateRWLock @ 0x1C00033B0 (NdisAllocateRWLock.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C00100B0 (NdisNblTrackerRegisterComponent.c)
 *     ndisAllocatePerProcessorSlot @ 0x1C0010208 (ndisAllocatePerProcessorSlot.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAllocateFreeSlotFromDescriptor(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 result; // rax
  unsigned int v4; // r8d

  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 == -16777217 )
    return 0LL;
  v4 = v2 & 0x1FFFFFF;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 4LL * v4 + 20);
  result = a1 + 4096 + 8LL * v4;
  *(_DWORD *)(a1 + 4LL * v4 + 20) = a2;
  return result;
}
