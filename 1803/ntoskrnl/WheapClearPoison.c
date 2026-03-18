/*
 * XREFs of WheapClearPoison @ 0x1407CAFD4
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x1407CAD9C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14013A010 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14013D150 (MmUnmapIoSpace.c)
 *     MmAddPhysicalMemory @ 0x14074B380 (MmAddPhysicalMemory.c)
 *     MmRemovePhysicalMemory @ 0x14074B3E0 (MmRemovePhysicalMemory.c)
 */

int __fastcall WheapClearPoison(PPHYSICAL_ADDRESS StartAddress)
{
  int result; // eax
  void *v3; // rax
  LARGE_INTEGER NumberOfBytes; // [rsp+38h] [rbp+10h] BYREF

  NumberOfBytes.QuadPart = 4096LL;
  result = MmRemovePhysicalMemory(StartAddress, &NumberOfBytes);
  if ( result >= 0 )
  {
    v3 = (void *)MmMapIoSpaceEx(StartAddress->QuadPart, 64LL, 4u);
    if ( v3 )
    {
      __asm { clzero }
      _mm_mfence();
      MmUnmapIoSpace(v3, 0x40uLL);
    }
    return MmAddPhysicalMemory(StartAddress, &NumberOfBytes);
  }
  return result;
}
