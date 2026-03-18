/*
 * XREFs of MiTrimAllSystemPagableMemory @ 0x140215758
 * Callers:
 *     MmTrimAllSystemPagableMemory @ 0x140215BA0 (MmTrimAllSystemPagableMemory.c)
 *     MmVerifierTrimMemory @ 0x140763CB8 (MmVerifierTrimMemory.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400E2B84 (KeAreInterruptsEnabled.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiPurgePartitionStandby @ 0x140138E54 (MiPurgePartitionStandby.c)
 *     MiEmptyTargetedWorkingSet @ 0x140214EA0 (MiEmptyTargetedWorkingSet.c)
 */

__int64 __fastcall MiTrimAllSystemPagableMemory(int a1, int a2)
{
  _DWORD *v2; // r14
  __int64 v3; // rbx
  _DWORD *v4; // rsi
  __int64 v6; // r15
  unsigned int v7; // r8d
  _DWORD *v8; // rdx
  _DWORD *v9; // rcx
  unsigned int v11; // edi
  struct _KTHREAD *CurrentThread; // rbp
  int v13; // r13d
  __int16 v14; // dx
  ULONG_PTR *v15; // rcx

  v2 = &unk_14036CFA8;
  v3 = 1LL;
  v4 = &unk_14036D180;
  v6 = 3LL;
  if ( !a1 )
  {
    v7 = 0;
    v8 = &unk_14036CFA8;
    v9 = &unk_14036D180;
    do
    {
      v3 = (__int64)v9;
      if ( v9 && *v8 != v9[1] )
        break;
      ++v7;
      v9 += 68;
      ++v8;
    }
    while ( v7 < 3 );
    if ( v7 == 3 )
      return 0LL;
  }
  if ( KeGetCurrentIrql() > 1u )
    return 0LL;
  v11 = 0;
  CurrentThread = 0LL;
  v13 = 0;
  if ( _InterlockedIncrement(&dword_14036CF88) <= 1 && KeAreInterruptsEnabled() )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = 1;
    CurrentThread->SpecialApcDisable += v14;
    if ( !a1 )
    {
      do
      {
        v3 = (__int64)v4;
        if ( v4 && *v2 != v4[1] )
        {
          v11 = 1;
          MiEmptyTargetedWorkingSet((__int64)v4);
          *v2 = v4[1];
        }
        v4 += 68;
        ++v2;
        --v6;
      }
      while ( v6 );
      goto LABEL_22;
    }
    if ( a1 == 1 )
    {
      v3 = (__int64)&CurrentThread->ApcState.Process[1].IdealNode[12];
    }
    else
    {
      if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      {
LABEL_22:
        if ( a2 == 1 && v11 == 1 )
        {
          if ( a1 == 1 )
            v15 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v3 + 172));
          else
            v15 = &MiSystemPartition;
          MiPurgePartitionStandby((__int64)v15, 8u);
        }
        goto LABEL_28;
      }
      v3 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
    }
    MiEmptyTargetedWorkingSet(v3);
    v11 = 1;
    goto LABEL_22;
  }
LABEL_28:
  _InterlockedDecrement(&dword_14036CF88);
  if ( v13 == 1 )
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v11;
}
