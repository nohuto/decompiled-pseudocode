/*
 * XREFs of PspQueryJobHierarchyProcessIdList @ 0x140446EEC
 * Callers:
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140478B80 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140479650 (PspUnlockJob.c)
 */

__int64 __fastcall PspQueryJobHierarchyProcessIdList(char *Object, _DWORD *a2, int a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v9; // esi
  __int64 v11; // [rsp+40h] [rbp-38h] BYREF
  int v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+4Ch] [rbp-2Ch]
  int v14; // [rsp+50h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)(Object + 56), 1u);
  v11 = (__int64)(a2 + 2);
  v12 = a3 - 8;
  v13 = 0;
  v14 = *((_DWORD *)Object + 54);
  v9 = PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)&v11, 1);
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
  {
    *a4 = 8 * *((_DWORD *)Object + 54) + 8;
    *a2 = *((_DWORD *)Object + 54);
    a2[1] = v13;
  }
  PspUnlockJob(Object, CurrentThread);
  return v9;
}
