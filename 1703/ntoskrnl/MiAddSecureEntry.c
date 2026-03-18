/*
 * XREFs of MiAddSecureEntry @ 0x1405127E0
 * Callers:
 *     MiCloneNoChange @ 0x14041E6C8 (MiCloneNoChange.c)
 *     MmStoreAllocateVirtualMemory @ 0x1404543B0 (MmStoreAllocateVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B908 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateVad @ 0x14049E798 (MiAllocateVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1404C85E0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiSecureVad @ 0x140511F10 (MiSecureVad.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiLocateExclusiveSecure @ 0x1400297AC (MiLocateExclusiveSecure.c)
 *     MiInsertVadEvent @ 0x140099800 (MiInsertVadEvent.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall MiAddSecureEntry(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _DWORD *result; // rax
  _DWORD *v10; // rbx

  if ( (*(_DWORD *)(a1 + 48) & 0x4000) != 0 && (a5 == 1 || MiLocateExclusiveSecure(a1)) )
    return 0LL;
  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x65536D4Du);
  v10 = result;
  if ( result )
  {
    result[2] = 0;
    *((_QWORD *)result + 1) = a2;
    result[16] = 2;
    *((_QWORD *)result + 2) = a3;
    if ( (a4 & 1) != 0 )
    {
      result[2] |= 8u;
    }
    else if ( (a4 & 4) != 0 )
    {
      result[2] |= 0xAu;
    }
    else if ( (a4 & 2) != 0 )
    {
      result[2] |= 9u;
    }
    if ( a5 == 1 )
      result[2] |= 0x20u;
    if ( a4 < 0 )
      result[2] |= 4u;
    if ( (a4 & 0x40000000) != 0 )
      result[2] |= 0x10u;
    MiInsertVadEvent(a1, result, 1);
    *(_DWORD *)(a1 + 48) |= 0x4000u;
    return v10;
  }
  return result;
}
