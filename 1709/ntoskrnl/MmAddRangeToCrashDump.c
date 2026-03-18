/*
 * XREFs of MmAddRangeToCrashDump @ 0x14021AE94
 * Callers:
 *     MmGetDumpRange @ 0x14021AFE8 (MmGetDumpRange.c)
 *     ExAddPrivateDataToCrashDump @ 0x140284390 (ExAddPrivateDataToCrashDump.c)
 *     IopLiveDumpMarkDeviceNode @ 0x14042B8B8 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x14042B918 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x14042BA04 (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x14042BAC4 (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x14042BBD8 (IopLiveDumpMarkRequiredDumpData.c)
 *     MmAddPrivateDataToCrashDump @ 0x1404306F4 (MmAddPrivateDataToCrashDump.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     MiIsWorkingSetTrimThread @ 0x140126894 (MiIsWorkingSetTrimThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiAddRangeToCrashDump @ 0x14021A994 (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall MmAddRangeToCrashDump(
        __int64 (__fastcall **a1)(_QWORD, __int64, __int64),
        unsigned __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r9
  BOOL IsWorkingSetTrimThread; // eax
  int v7; // ecx
  unsigned __int64 v8; // rdi
  unsigned __int64 *v9; // rcx
  __int64 v10; // rdx
  KIRQL v11; // si
  unsigned int v12; // ebx
  char v14[8]; // [rsp+30h] [rbp-88h] BYREF
  char v15; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp-48h]
  unsigned __int64 v17; // [rsp+78h] [rbp-40h]
  int v18; // [rsp+80h] [rbp-38h]

  v18 = 0;
  v4 = a2;
  v5 = 1LL;
  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
  {
    IsWorkingSetTrimThread = MiIsWorkingSetTrimThread();
    v7 = v18;
    if ( !IsWorkingSetTrimThread )
      v7 = v5;
    v18 = v7;
  }
  v16 = a2;
  v8 = a2 + a3 - 1;
  v17 = v8;
  v9 = (unsigned __int64 *)&v15;
  v10 = 4LL;
  do
  {
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v9 - 1) = v4;
    *v9 = v8;
    v9 += 2;
    v10 -= v5;
  }
  while ( v10 );
  v11 = 17;
  if ( (KiBugCheckActive & 3) == 0 && (struct _KTHREAD *)qword_140388B50 != KeGetCurrentThread() )
    v11 = ExAcquireSpinLockShared(&dword_140388924);
  v12 = MiAddRangeToCrashDump(a1, v4, v8, (__int64)v14, 3u);
  if ( v11 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
    __writecr8(v11);
  }
  return v12;
}
