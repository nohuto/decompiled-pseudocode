/*
 * XREFs of IopGetPhysicalMemoryBlock @ 0x1401661AC
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x14014B238 (IopLoadCrashdumpDriver.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401F11A4 (IoUpdateDumpPhysicalRanges.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14068E734 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmGetPhysicalMemoryRanges @ 0x140440820 (MmGetPhysicalMemoryRanges.c)
 */

char *IopGetPhysicalMemoryBlock()
{
  char *v0; // rsi
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  PPHYSICAL_MEMORY_RANGE v2; // rbx
  LARGE_INTEGER *p_NumberOfBytes; // rdi
  unsigned int v4; // ebp
  LARGE_INTEGER NumberOfBytes; // rax
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  __int64 v8; // r15
  unsigned int v9; // r12d
  char *PoolWithTag; // rax
  signed __int64 v11; // rcx
  unsigned __int64 QuadPart; // rax

  v0 = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v2 = PhysicalMemoryRanges;
  if ( !PhysicalMemoryRanges )
    return v0;
  p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
  v4 = 0;
  NumberOfBytes = PhysicalMemoryRanges->NumberOfBytes;
  v6 = 0LL;
  if ( NumberOfBytes.QuadPart )
  {
    do
    {
      ++v4;
      v6 += (unsigned __int64)NumberOfBytes.QuadPart >> 12;
      NumberOfBytes = v2[v4].NumberOfBytes;
    }
    while ( NumberOfBytes.QuadPart );
    if ( v4 )
    {
      v7 = 16LL * v4;
      v8 = v4;
      if ( v7 <= 0xFFFFFFFF && (int)v7 + 32 >= (unsigned int)v7 )
      {
        v9 = v7 + 32;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v7 + 32), 0x706D4443u);
        v0 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v9);
          *(_DWORD *)v0 = v4;
          *((_QWORD *)v0 + 1) = v6;
          v11 = v0 - (char *)v2;
          do
          {
            *(LONGLONG *)((char *)&p_NumberOfBytes[1].QuadPart + v11) = (unsigned __int64)p_NumberOfBytes[-1].QuadPart >> 12;
            QuadPart = p_NumberOfBytes->QuadPart;
            p_NumberOfBytes += 2;
            *(LONGLONG *)((char *)&p_NumberOfBytes->QuadPart + v11) = QuadPart >> 12;
            --v8;
          }
          while ( v8 );
          ExFreePoolWithTag(v2, 0);
          return v0;
        }
      }
    }
  }
  ExFreePoolWithTag(v2, 0);
  return 0LL;
}
