/*
 * XREFs of MiCreateRotateView @ 0x14057FBA0
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x14000AD00 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiGetInPageSupportBlock @ 0x140057704 (MiGetInPageSupportBlock.c)
 *     MiInsertVadEvent @ 0x1400E4C88 (MiInsertVadEvent.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCreateRotateView(__int64 a1)
{
  _DWORD *PoolWithTag; // rbx
  void *v3; // rdi
  void *v5; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x77776D4Du);
  if ( PoolWithTag )
  {
    v3 = MiGetInPageSupportBlock(0);
    if ( v3 )
    {
      if ( (int)PsChargeProcessNonPagedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, 0x200uLL) >= 0 )
      {
        PoolWithTag[16] = 8;
        *((_QWORD *)PoolWithTag + 1) = v3;
        MiInsertVadEvent(a1, (__int64 *)PoolWithTag, 0);
        return 1LL;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      v5 = v3;
    }
    else
    {
      v5 = PoolWithTag;
    }
    ExFreePoolWithTag(v5, 0);
  }
  return 0LL;
}
