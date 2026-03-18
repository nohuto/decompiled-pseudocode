/*
 * XREFs of EtwpCoverageSamplerAllocateTable @ 0x1407B73F0
 * Callers:
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1407B6098 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerStart @ 0x1407B8468 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall EtwpCoverageSamplerAllocateTable(int a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx
  PVOID v4; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x56777445u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    v4 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(8 * a1), 0x56777445u);
    v3[3] = v4;
    if ( !v4 )
    {
      ExFreePoolWithTag(v3, 0x56777445u);
      return 0LL;
    }
    memset(v4, 0, (unsigned int)(8 * a1));
    *((_DWORD *)v3 + 5) = a1;
  }
  return v3;
}
