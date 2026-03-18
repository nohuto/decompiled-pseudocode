/*
 * XREFs of MiAddSecureEntry @ 0x1404D3274
 * Callers:
 *     MiAllocateVad @ 0x14045ED28 (MiAllocateVad.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1404625C8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MiSecureVad @ 0x1404D52C0 (MiSecureVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14056A41C (MiAllocateNewSubAllocatedRegion.c)
 *     MiCloneNoChange @ 0x14057B014 (MiCloneNoChange.c)
 * Callees:
 *     MiInsertVadEvent @ 0x1400A59A0 (MiInsertVadEvent.c)
 *     MiLocateExclusiveSecure @ 0x140125884 (MiLocateExclusiveSecure.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall MiAddSecureEntry(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rbx

  if ( (*(_DWORD *)(a1 + 48) & 0x4000) != 0 && (a5 == 1 || MiLocateExclusiveSecure(a1)) )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x65536D4Du);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  PoolWithTag[16] = 2;
  *((_QWORD *)PoolWithTag + 1) = a2;
  *((_QWORD *)PoolWithTag + 2) = a3;
  if ( (a4 & 1) != 0 )
  {
    PoolWithTag[2] |= 8u;
  }
  else if ( (a4 & 4) != 0 )
  {
    PoolWithTag[2] |= 0xAu;
  }
  else if ( (a4 & 2) != 0 )
  {
    PoolWithTag[2] |= 9u;
  }
  if ( a5 == 1 )
    PoolWithTag[2] |= 0x20u;
  if ( a4 < 0 )
    PoolWithTag[2] |= 4u;
  if ( (a4 & 0x40000000) != 0 )
    PoolWithTag[2] |= 0x10u;
  MiInsertVadEvent(a1, PoolWithTag, 1);
  *(_DWORD *)(a1 + 48) |= 0x4000u;
  return v10;
}
