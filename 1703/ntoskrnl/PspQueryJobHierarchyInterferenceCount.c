/*
 * XREFs of PspQueryJobHierarchyInterferenceCount @ 0x1406E17A8
 * Callers:
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140478B80 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140479650 (PspUnlockJob.c)
 */

__int64 __fastcall PspQueryJobHierarchyInterferenceCount(char *Object, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v5; // edi
  __int64 v7[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)(Object + 56), 1u);
  v8 = 0LL;
  v7[0] = (__int64)&v8;
  v7[1] = (__int64)Object;
  v5 = PspEnumJobsAndProcessesInJobHierarchy(
         Object,
         0,
         0,
         (int)PspQueryProcessInterferenceCountCallback,
         (__int64)v7,
         1);
  PspUnlockJob((__int64)Object, (__int64)CurrentThread);
  if ( v5 >= 0 )
    *a2 = v8;
  return (unsigned int)v5;
}
