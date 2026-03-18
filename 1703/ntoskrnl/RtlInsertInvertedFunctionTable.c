/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x14006DD94
 * Callers:
 *     MiProcessLoaderEntry @ 0x14006DF00 (MiProcessLoaderEntry.c)
 * Callees:
 *     RtlpInsertInvertedFunctionTableEntry @ 0x14006DE1C (RtlpInsertInvertedFunctionTableEntry.c)
 *     MmLockLoadedModuleListExclusive @ 0x14006E01C (MmLockLoadedModuleListExclusive.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x14008B920 (RtlpImageDirectoryEntryToDataEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall RtlInsertInvertedFunctionTable(void *a1, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // ebx
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  int v9; // [rsp+58h] [rbp+20h]

  v3 = (int)a1;
  v4 = RtlpImageDirectoryEntryToDataEx(a1, (__int64)&v8);
  v5 = v8;
  if ( v4 < 0 )
    v5 = 0;
  MmLockLoadedModuleListExclusive(&v8);
  RtlpInsertInvertedFunctionTableEntry(v6, v3, v5, a2, v9);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  result = (unsigned __int8)v8;
  __writecr8((unsigned __int8)v8);
  return result;
}
