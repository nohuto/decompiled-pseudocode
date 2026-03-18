/*
 * XREFs of MiFreeRotateView @ 0x14074D138
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400F0EE0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiGetVadWakeList @ 0x1400FD750 (MiGetVadWakeList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiFreeRotateView(__int64 a1)
{
  __int64 *result; // rax
  __int64 *v2; // rbx
  void *v3; // rcx

  result = MiGetVadWakeList(a1, 8LL);
  v2 = result;
  if ( result )
  {
    v3 = (void *)result[1];
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag(v2, 0);
    return (__int64 *)PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, 512LL);
  }
  return result;
}
