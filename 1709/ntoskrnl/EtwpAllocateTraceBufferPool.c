/*
 * XREFs of EtwpAllocateTraceBufferPool @ 0x1404EFFE4
 * Callers:
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 * Callees:
 *     EtwpAllocateFreeBuffers @ 0x1400E02E8 (EtwpAllocateFreeBuffers.c)
 *     EtwpQueryUsedProcessorCount @ 0x1400E08AC (EtwpQueryUsedProcessorCount.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1404F0098 (EtwpGetSystemMaximumBufferCount.c)
 */

__int64 __fastcall EtwpAllocateTraceBufferPool(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int SystemMaximumBufferCount; // eax
  _DWORD *v3; // r10
  int v4; // r11d
  int v5; // r9d
  unsigned int v6; // r8d
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v12; // eax

  EtwpQueryUsedProcessorCount(a1);
  SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(v1);
  v5 = v3[3];
  v6 = 2 * v4 + 4;
  v7 = SystemMaximumBufferCount;
  if ( (v5 & 0x4000000) == 0 )
    v6 = 2 * v4;
  v8 = v6;
  if ( SystemMaximumBufferCount < v6 )
    v7 = v6;
  v9 = v7;
  if ( v3[63] > v6 )
    v8 = v3[63];
  if ( v8 < v7 )
    v9 = v8;
  if ( v3[60] > v6 )
    v6 = v3[60];
  if ( v6 < v7 )
    v7 = v6;
  v3[60] = v7;
  if ( v7 > v9 )
    v9 = v7;
  if ( (v5 & 0x400) != 0 )
    v9 = v7;
  v3[63] = v9;
  if ( (v5 & 0x40000) != 0 )
    return 0LL;
  v10 = v3[57];
  if ( v10 )
  {
    v12 = v9 - v4 - 1;
    if ( v10 > v12 )
      v3[57] = v12;
  }
  return (unsigned int)EtwpAllocateFreeBuffers((__int64)v3, v7) < v7 ? 0xC0000017 : 0;
}
