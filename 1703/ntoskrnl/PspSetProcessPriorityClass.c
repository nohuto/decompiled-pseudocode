/*
 * XREFs of PspSetProcessPriorityClass @ 0x1404A5834
 * Callers:
 *     PspApplyIFEOPerfOptions @ 0x140459300 (PspApplyIFEOPerfOptions.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     SeCheckPrivilegedObject @ 0x14058547C (SeCheckPrivilegedObject.c)
 */

__int64 __fastcall PspSetProcessPriorityClass(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // bl
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rbp

  v4 = a2;
  if ( a2 > 6u )
    return 3221225485LL;
  if ( a2 == 4
    && *(_BYTE *)(a1 + 1119) != 4
    && !(a3
       ? ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
           SeIncreaseBasePriorityPrivilege,
           a3,
           512LL,
           a4)
       : SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a4)) )
  {
    return 3221225569LL;
  }
  v6 = *(_QWORD *)(a1 + 944);
  CurrentThread = KeGetCurrentThread();
  if ( v6 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 56), 1u);
    if ( (*(_DWORD *)(v6 + 848) & 0x20) != 0 )
      v4 = *(_BYTE *)(v6 + 872);
    ExReleaseResourceLite((PERESOURCE)(v6 + 56));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  *(_BYTE *)(a1 + 1119) = v4;
  return 0LL;
}
