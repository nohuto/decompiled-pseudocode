/*
 * XREFs of MmAddRangeToCrashDump @ 0x1402130DC
 * Callers:
 *     MmGetDumpRange @ 0x140213238 (MmGetDumpRange.c)
 *     ExAddPrivateDataToCrashDump @ 0x14025AC40 (ExAddPrivateDataToCrashDump.c)
 *     IopLiveDumpMarkDeviceNode @ 0x140416884 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1404168E4 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1404169D0 (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x140416A90 (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x140416BA4 (IopLiveDumpMarkRequiredDumpData.c)
 *     MmAddPrivateDataToCrashDump @ 0x140419828 (MmAddPrivateDataToCrashDump.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiAddRangeToCrashDump @ 0x140212C24 (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall MmAddRangeToCrashDump(
        __int64 (__fastcall **a1)(_QWORD, __int64, __int64),
        unsigned __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  int v5; // eax
  unsigned __int64 v6; // rdi
  unsigned __int64 *v7; // rcx
  __int64 v8; // rdx
  KIRQL v9; // si
  unsigned int v10; // ebx
  char v12[8]; // [rsp+30h] [rbp-88h] BYREF
  char v13; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v14; // [rsp+70h] [rbp-48h]
  unsigned __int64 v15; // [rsp+78h] [rbp-40h]
  int v16; // [rsp+80h] [rbp-38h]

  v16 = 0;
  v4 = a2;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    v5 = v16;
    if ( (void (__noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink != KeBalanceSetManager )
      v5 = 1;
    v16 = v5;
  }
  v14 = a2;
  v6 = a2 + a3 - 1;
  v15 = v6;
  v7 = (unsigned __int64 *)&v13;
  v8 = 4LL;
  do
  {
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v7 - 1) = v4;
    *v7 = v6;
    v7 += 2;
    --v8;
  }
  while ( v8 );
  v9 = 17;
  if ( (KiBugCheckActive & 3) == 0 && (struct _KTHREAD *)qword_14036C958 != KeGetCurrentThread() )
    v9 = ExAcquireSpinLockShared(&dword_14036C59C);
  v10 = MiAddRangeToCrashDump(a1, v4, v6, (__int64)v12, 3u);
  if ( v9 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
    __writecr8(v9);
  }
  return v10;
}
