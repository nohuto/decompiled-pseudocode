/*
 * XREFs of MiCreatePlaceholderStorage @ 0x140755004
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MiAllocateChildVads @ 0x1405BF6F8 (MiAllocateChildVads.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x14000AD00 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiInsertVadEvent @ 0x1400E4C88 (MiInsertVadEvent.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400F0EE0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiAllocateVad @ 0x1404EA7EC (MiAllocateVad.c)
 */

__int64 __fastcall MiCreatePlaceholderStorage(__int64 a1)
{
  struct _KPROCESS *Process; // rdi
  __int64 result; // rax
  __int64 *PoolWithTag; // rax
  __int64 *v5; // rbx
  _DWORD *Vad; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  result = PsChargeProcessNonPagedPoolQuota((__int64)Process, 0x88uLL);
  if ( (int)result >= 0 )
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x73706D4Du);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_DWORD *)PoolWithTag + 16) = 512;
      Vad = MiAllocateVad(0LL, 0LL, 2);
      v5[1] = (__int64)Vad;
      if ( Vad )
      {
        MiInsertVadEvent(a1, v5, 0);
        return 0LL;
      }
      ExFreePoolWithTag(v5, 0);
    }
    PsReturnProcessNonPagedPoolQuota(Process, 136LL);
    return 3221225626LL;
  }
  return result;
}
