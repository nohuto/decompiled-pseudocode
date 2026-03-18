/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x140160E1C
 * Callers:
 *     MiProcessLoaderEntry @ 0x140160F88 (MiProcessLoaderEntry.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14003FAC0 (RtlpImageDirectoryEntryToDataEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x140160EA4 (RtlpInsertInvertedFunctionTableEntry.c)
 *     MmLockLoadedModuleListExclusive @ 0x14016113C (MmLockLoadedModuleListExclusive.c)
 */

__int64 __fastcall RtlInsertInvertedFunctionTable(unsigned __int64 a1, int a2)
{
  int v3; // esi
  NTSTATUS v4; // eax
  int v5; // ebx
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  v4 = RtlpImageDirectoryEntryToDataEx(a1, 1, 3u, (int)&v9, &v8);
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
