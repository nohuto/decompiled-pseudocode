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

__int64 __fastcall RtlInsertInvertedFunctionTable(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v4; // esi
  NTSTATUS v5; // eax
  int v6; // ebx
  int v7; // ecx
  __int64 result; // rax
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  LOBYTE(a2) = 1;
  LOWORD(a3) = 3;
  v4 = a1;
  v5 = RtlpImageDirectoryEntryToDataEx(a1, a2, a3, (__int64)&v10, &v9);
  v6 = v9;
  if ( v5 < 0 )
    v6 = 0;
  MmLockLoadedModuleListExclusive(&v9);
  RtlpInsertInvertedFunctionTableEntry(v7, v4, v6, v3, v10);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  result = (unsigned __int8)v9;
  __writecr8((unsigned __int8)v9);
  return result;
}
