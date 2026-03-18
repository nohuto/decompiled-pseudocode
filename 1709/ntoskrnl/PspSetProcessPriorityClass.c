/*
 * XREFs of PspSetProcessPriorityClass @ 0x140595250
 * Callers:
 *     PspApplyIFEOPerfOptions @ 0x14044CC7C (PspApplyIFEOPerfOptions.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SeCheckPrivilegedObject @ 0x14046EE78 (SeCheckPrivilegedObject.c)
 */

__int64 __fastcall PspSetProcessPriorityClass(__int64 a1, unsigned __int8 a2, __int64 a3, KPROCESSOR_MODE a4)
{
  unsigned __int8 v4; // bl
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rbp

  v4 = a2;
  if ( a2 > 6u )
    return 3221225485LL;
  if ( a2 != *(_BYTE *)(a1 + 1119)
    && a2 == 4
    && !(a3
       ? SeCheckPrivilegedObject(SeIncreaseBasePriorityPrivilege, a3, 0x200u, a4)
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
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  *(_BYTE *)(a1 + 1119) = v4;
  return 0LL;
}
