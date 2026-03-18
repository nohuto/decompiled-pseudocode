/*
 * XREFs of PspCallJobHierarchyCallbacks @ 0x14050FDA0
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14050FB60 (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PspLockJobShared @ 0x14050FED0 (PspLockJobShared.c)
 *     PspUnlockJob @ 0x1405102A0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405102E0 (PspLockJobExclusive.c)
 */

__int64 __fastcall PspCallJobHierarchyCallbacks(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 (__fastcall *a3)(__int64, __int64),
        __int64 (__fastcall *a4)(_QWORD *, __int64),
        __int64 a5,
        char a6)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v7; // r14d
  __int64 v9; // rcx
  int v13; // ebp
  _QWORD *i; // r14

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v9 = a5;
  v13 = 0;
  if ( !a2 && !a4 )
    goto LABEL_17;
  if ( (a6 & 1) == 0 )
  {
    if ( (a6 & 4) != 0 )
      PspLockJobExclusive(a1, CurrentThread);
    else
      PspLockJobShared(a1, CurrentThread);
    v9 = a5;
  }
  if ( !a2 || (v13 = a2(a1, v9), v13 >= 0) )
  {
    if ( a4 )
    {
      for ( i = *(_QWORD **)(a1 + 40); i != (_QWORD *)(a1 + 40); i = (_QWORD *)*i )
      {
        v13 = a4(i - 142, a5);
        if ( v13 < 0 )
          break;
      }
      v7 = 0;
    }
  }
  if ( (a6 & 1) == 0 )
    PspUnlockJob(a1, CurrentThread);
  if ( v13 >= 0 )
  {
    v9 = a5;
LABEL_17:
    if ( a3 )
      return a3(a1, v9);
    else
      return (unsigned int)v13;
  }
  if ( v13 != -1073741536 )
    return (unsigned int)v13;
  return v7;
}
