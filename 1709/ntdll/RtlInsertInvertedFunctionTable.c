/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x180022828
 * Callers:
 *     LdrpProcessMappedModule @ 0x180022BE8 (LdrpProcessMappedModule.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlpInsertInvertedFunctionTableEntry @ 0x18002274C (RtlpInsertInvertedFunctionTableEntry.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlInsertInvertedFunctionTable(unsigned __int64 a1, int a2)
{
  int v2; // edi
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = RtlpImageDirectoryEntryToDataEx(a1, a2, 3, (unsigned int)&v8, (__int64)&v9);
  v5 = v9;
  if ( v4 < 0 )
    v5 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  LdrProtectMrdata(0LL);
  RtlpInsertInvertedFunctionTableEntry(v6, a1, v5, v2, v8);
  LdrProtectMrdata(1LL);
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
