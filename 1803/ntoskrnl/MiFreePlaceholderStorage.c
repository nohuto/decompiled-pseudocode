/*
 * XREFs of MiFreePlaceholderStorage @ 0x140584AB8
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MiAllocateChildVads @ 0x1405BF6F8 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140756210 (MiDeletePartialCloneVads.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400F0EE0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiGetVadWakeList @ 0x1400FD750 (MiGetVadWakeList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiFreePlaceholderStorage(__int64 a1)
{
  __int64 *result; // rax
  __int64 *v2; // rdi
  __int64 v3; // rbx

  result = MiGetVadWakeList(a1, 512LL);
  v2 = result;
  if ( result )
  {
    v3 = result[1];
    if ( v3 )
      ExFreePoolWithTag((PVOID)result[1], 0);
    ExFreePoolWithTag(v2, 0);
    return (__int64 *)PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, v3 != 0 ? 136LL : 72LL);
  }
  return result;
}
