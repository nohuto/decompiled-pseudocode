/*
 * XREFs of MiFreeWorkingSetSwapContext @ 0x14052D1E0
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140062868 (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x14007F098 (MmInSwapWorkingSet.c)
 *     MiBeginProcessClean @ 0x14007F22C (MiBeginProcessClean.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x140756470 (MiInSwapSharedWorkingSetWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiFreeReservationRun @ 0x1405927B8 (MiFreeReservationRun.c)
 */

void __fastcall MiFreeWorkingSetSwapContext(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx

  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  v4 = *(void **)(a2 + 8);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(void **)(a2 + 56);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  MiFreeReservationRun(a1, a2 + 64);
  ExFreePoolWithTag((PVOID)a2, 0);
}
