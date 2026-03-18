/*
 * XREFs of MiAddSecureEntry @ 0x140593490
 * Callers:
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1404D5D60 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateVad @ 0x1404EA7EC (MiAllocateVad.c)
 *     MiSecureVad @ 0x14055728C (MiSecureVad.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1405BA858 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCloneNoChange @ 0x1405BFA3C (MiCloneNoChange.c)
 * Callees:
 *     MiLocateExclusiveSecure @ 0x1400C1B70 (MiLocateExclusiveSecure.c)
 *     MiSetVadFlags @ 0x1400E4A50 (MiSetVadFlags.c)
 *     MiInsertVadEvent @ 0x1400E4C88 (MiInsertVadEvent.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall MiAddSecureEntry(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rdi

  if ( (*(_DWORD *)(a1 + 48) & 0x8000000) != 0 && ((a5 & 1) != 0 || MiLocateExclusiveSecure(a1)) )
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
    LODWORD(a2) = a2 | 8;
    goto LABEL_8;
  }
  if ( (a4 & 4) != 0 )
  {
    LODWORD(a2) = a2 | 0xA;
    goto LABEL_8;
  }
  if ( (a4 & 2) != 0 )
  {
    LODWORD(a2) = a2 | 9;
LABEL_8:
    PoolWithTag[2] = a2;
  }
  if ( (a5 & 1) != 0 )
  {
    LODWORD(a2) = a2 | 0x20;
    PoolWithTag[2] = a2;
  }
  if ( (a5 & 4) != 0 )
  {
    LODWORD(a2) = a2 | 0x40;
    PoolWithTag[2] = a2;
  }
  if ( (a5 & 8) != 0 )
  {
    LODWORD(a2) = a2 | 0x80;
    PoolWithTag[2] = a2;
  }
  if ( a4 < 0 )
  {
    LODWORD(a2) = a2 | 4;
    PoolWithTag[2] = a2;
  }
  if ( (a4 & 0x40000000) != 0 )
    PoolWithTag[2] = a2 | 0x10;
  MiInsertVadEvent(a1, (__int64 *)PoolWithTag, 1);
  MiSetVadFlags(a1, 1, 1);
  return v10;
}
