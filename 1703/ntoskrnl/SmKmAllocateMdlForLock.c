/*
 * XREFs of SmKmAllocateMdlForLock @ 0x140121DA8
 * Callers:
 *     SmFpAllocate @ 0x140121890 (SmFpAllocate.c)
 *     SmFpPreAllocate @ 0x140168C38 (SmFpPreAllocate.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x14005DBA8 (SmAcquireReleaseCharges.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall SmKmAllocateMdlForLock(unsigned __int64 a1)
{
  _QWORD *v2; // r14
  int v3; // ebp
  unsigned __int64 v4; // rdi
  _QWORD *PoolWithTag; // rax
  void *v6; // rbx

  v2 = 0LL;
  v3 = SmAcquireReleaseCharges(a1, 3, 0);
  if ( v3 )
  {
    v4 = (a1 + 4095) >> 12;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v4 + 48, 0x4C506D73u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      v2 = PoolWithTag;
      *((_WORD *)PoolWithTag + 4) = 8 * (v4 + 6);
      v6 = 0LL;
      *((_WORD *)PoolWithTag + 5) = 0;
      v3 = 0;
      PoolWithTag[4] = 0LL;
      *((_DWORD *)PoolWithTag + 11) = 0;
      *((_DWORD *)PoolWithTag + 10) = a1;
    }
    if ( v3 )
      SmAcquireReleaseCharges(a1, 3, 1);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  return v2;
}
