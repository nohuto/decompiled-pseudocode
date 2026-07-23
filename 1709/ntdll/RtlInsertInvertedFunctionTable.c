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

void __fastcall RtlInsertInvertedFunctionTable(unsigned __int64 a1, int a2)
{
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // [rsp+50h] [rbp+18h]
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v4 = RtlpImageDirectoryEntryToDataEx(a1, (__int64)&v8);
  v5 = v8;
  if ( v4 < 0 )
    v5 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  LdrProtectMrdata(0LL);
  RtlpInsertInvertedFunctionTableEntry(v6, a1, v5, a2, v7);
  LdrProtectMrdata(1LL);
  RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
