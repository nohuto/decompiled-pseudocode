/*
 * XREFs of PspCallJobHierarchyCallbacks @ 0x140478DC0
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140478B80 (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PspCallJobHierarchyCallbacks(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 (__fastcall *a3)(__int64, __int64),
        __int64 (__fastcall *a4)(_QWORD *, __int64),
        __int64 a5,
        char a6)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v7; // r15d
  __int64 (__fastcall *v9)(__int64, __int64); // r12
  int v12; // esi
  _QWORD *i; // rbp

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v9 = a3;
  v12 = 0;
  if ( !a2 && !a4 )
    goto LABEL_16;
  if ( (a6 & 1) == 0 )
  {
    if ( (a6 & 4) != 0 )
    {
      if ( CurrentThread )
        --CurrentThread->SpecialApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
    }
    else
    {
      if ( CurrentThread )
        --CurrentThread->SpecialApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
    }
  }
  if ( !a2 || (v12 = a2(a1, a5), v12 >= 0) )
  {
    if ( a4 )
    {
      for ( i = *(_QWORD **)(a1 + 40); i != (_QWORD *)(a1 + 40); i = (_QWORD *)*i )
      {
        v12 = a4(i - 142, a5);
        if ( v12 < 0 )
          break;
      }
      v9 = a3;
    }
  }
  if ( (a6 & 1) == 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    if ( CurrentThread )
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v12 < 0 )
  {
    if ( v12 != -1073741536 )
      return (unsigned int)v12;
    return v7;
  }
  else
  {
LABEL_16:
    if ( v9 )
      return v9(a1, a5);
    else
      return (unsigned int)v12;
  }
}
