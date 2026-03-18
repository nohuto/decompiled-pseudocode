/*
 * XREFs of MiAddPhysicalMemoryChunks @ 0x1406B3AC4
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14021CCD8 (MiActOnPartitionNodePages.c)
 *     MmAddPhysicalMemory @ 0x1406B4450 (MmAddPhysicalMemory.c)
 * Callees:
 *     MiAddPhysicalMemory @ 0x1406B34F8 (MiAddPhysicalMemory.c)
 */

__int64 __fastcall MiAddPhysicalMemoryChunks(ULONG_PTR *a1, __int64 *a2, signed __int64 *a3, int a4)
{
  signed __int64 v5; // rdi
  __int64 v8; // rbx
  int v9; // edx
  signed __int64 v11; // [rsp+58h] [rbp+38h] BYREF
  __int64 v12; // [rsp+60h] [rbp+40h] BYREF

  v5 = *a3;
  v12 = *a2;
  v11 = v5;
  v8 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = MiAddPhysicalMemory(a1, &v12, &v11, a4);
      if ( v9 < 0 )
        break;
      v12 += v11;
      v8 += v11;
      v11 = v5 - v8;
      if ( v5 == v8 )
        goto LABEL_4;
    }
    if ( v9 != -1073741670 && v9 != -1073741523 || v11 == 4096 )
      break;
    v11 = (v11 / 2) & 0xFFFFFFFFFFFFF000uLL;
  }
LABEL_4:
  *a3 = v8;
  return (unsigned int)v9;
}
