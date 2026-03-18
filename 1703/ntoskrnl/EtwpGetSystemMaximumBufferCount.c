/*
 * XREFs of EtwpGetSystemMaximumBufferCount @ 0x140550960
 * Callers:
 *     EtwpAllocateTraceBufferPool @ 0x14054F858 (EtwpAllocateTraceBufferPool.c)
 *     EtwpUpdateTrace @ 0x1405D8AE8 (EtwpUpdateTrace.c)
 * Callees:
 *     MmGetMaximumNonPagedPoolInBytes @ 0x14003C784 (MmGetMaximumNonPagedPoolInBytes.c)
 */

unsigned __int64 __fastcall EtwpGetSystemMaximumBufferCount(unsigned int *a1)
{
  unsigned int *v1; // r9
  unsigned __int64 MaximumNonPagedPoolInBytes; // rax
  unsigned __int64 v3; // rdx
  unsigned int v4; // eax
  unsigned __int64 v5; // r8

  v1 = a1;
  if ( a1[75] == 1 )
  {
    v3 = MmSizeOfPagedPoolInBytes;
  }
  else
  {
    MaximumNonPagedPoolInBytes = MmGetMaximumNonPagedPoolInBytes();
    if ( v3 >= MaximumNonPagedPoolInBytes )
      v3 = MaximumNonPagedPoolInBytes;
  }
  if ( (v1[204] & 2) != 0 && (v4 = v1[3], (v4 & 0x2000000) != 0) && (v4 & 0x400) != 0 )
    v5 = 50 * v3;
  else
    v5 = v3 * (unsigned int)EtwpMaxNonPagedPoolUsage;
  return v5 / 0x64 / v1[1];
}
