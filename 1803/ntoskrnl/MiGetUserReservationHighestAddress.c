/*
 * XREFs of MiGetUserReservationHighestAddress @ 0x1405BA540
 * Callers:
 *     MiMapExParametersInitialize @ 0x1404E8F4C (MiMapExParametersInitialize.c)
 *     MiMapParametersInitialize @ 0x140593DD0 (MiMapParametersInitialize.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1405B4210 (MiAllocateVirtualMemoryPrepare.c)
 *     MiMapLockedPagesInUserSpace @ 0x1405BA250 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1405BA858 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapImageInSystemProcess @ 0x140749EC0 (MiMapImageInSystemProcess.c)
 *     MiAllocateEnclaveVad @ 0x1407511B4 (MiAllocateEnclaveVad.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetUserReservationHighestAddress(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rax

  v2 = 0x7FFFFFFEFFFFLL;
  if ( a2 )
  {
    v4 = 0xFFFFFFFFFFFFFFFFuLL >> a2;
    if ( 0xFFFFFFFFFFFFFFFFuLL >> a2 > 0x7FFFFFFEFFFFLL )
      v4 = 0x7FFFFFFEFFFFLL;
    v2 = v4;
  }
  result = *(_QWORD *)(a1 + 1152) - 1LL;
  if ( v2 <= result )
    return v2;
  return result;
}
