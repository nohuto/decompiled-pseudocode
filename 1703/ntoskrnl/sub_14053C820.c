/*
 * XREFs of sub_14053C820 @ 0x14053C820
 * Callers:
 *     WbHeapExecuteCall @ 0x14053C4C0 (WbHeapExecuteCall.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspGetContextThreadInternal @ 0x14053B2A0 (PspGetContextThreadInternal.c)
 */

__int64 __fastcall sub_14053C820(__int64 a1)
{
  _DWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx
  int ContextThreadInternal; // esi

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x4D0uLL, 0x42524157u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag[12] = 1048577;
  ContextThreadInternal = PspGetContextThreadInternal((__int64)KeGetCurrentThread(), (__int64)PoolWithTag, 0, 1, 1);
  if ( ContextThreadInternal >= 0 )
  {
    *(_QWORD *)(a1 + 8) = v3[31];
    *(_QWORD *)a1 = v3[19];
    *(_DWORD *)(a1 + 16) = *((_DWORD *)v3 + 17);
  }
  ExFreePoolWithTag(v3, 0x42524157u);
  return (unsigned int)ContextThreadInternal;
}
