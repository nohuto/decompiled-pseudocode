/*
 * XREFs of MiCreateZeroThreadContext @ 0x140137370
 * Callers:
 *     MiZeroNodePages @ 0x1401370F0 (MiZeroNodePages.c)
 *     MiInitializePartitionThreads @ 0x1406E2988 (MiInitializePartitionThreads.c)
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     MiCreateUltraThreadContext @ 0x1400CF818 (MiCreateUltraThreadContext.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_BYTE *__fastcall MiCreateZeroThreadContext(__int64 a1, int a2)
{
  _BYTE *PoolWithTag; // rax
  _BYTE *v5; // rbx
  int v6; // r8d
  unsigned int v7; // edx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xF0uLL, 0x20206D4Du);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xF0uLL);
    if ( a2 == 1 )
    {
      v5[210] = 1;
      v6 = 3;
    }
    else
    {
      v5[210] = 0;
      v6 = 15;
    }
    if ( a1 )
      v7 = *(_DWORD *)(a1 + 48);
    else
      v7 = 0;
    if ( (unsigned int)MiCreateUltraThreadContext((__int64)(v5 + 80), v7, v6) )
    {
      *((_QWORD *)v5 + 28) = a1;
      return v5;
    }
    ExFreePoolWithTag(v5, 0);
  }
  return 0LL;
}
