/*
 * XREFs of PspQueryJobHierarchyInterferenceCount @ 0x140717ADC
 * Callers:
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14050FB60 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspLockJobShared @ 0x14050FED0 (PspLockJobShared.c)
 *     PspUnlockJob @ 0x1405102A0 (PspUnlockJob.c)
 */

__int64 __fastcall PspQueryJobHierarchyInterferenceCount(char *Object, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v5; // esi
  __int64 v7[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  PspLockJobShared((__int64)Object, (__int64)CurrentThread);
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
