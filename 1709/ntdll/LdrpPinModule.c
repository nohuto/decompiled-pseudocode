/*
 * XREFs of LdrpPinModule @ 0x180011838
 * Callers:
 *     LdrAddRefDll @ 0x1800117D0 (LdrAddRefDll.c)
 *     LdrpInitShimEngine @ 0x1800154C4 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18001566C (LdrpLoadShimEngine.c)
 *     LdrpLoadDllInternal @ 0x18002DFFC (LdrpLoadDllInternal.c)
 *     LdrGetDllHandleEx @ 0x180035770 (LdrGetDllHandleEx.c)
 *     LdrInitShimEngineDynamic @ 0x1800D2880 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpPinNodeRecurse @ 0x180012D7C (LdrpPinNodeRecurse.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpPinModule(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx

  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v3 = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(v3 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v3 - 56LL) & 0x20) == 0 )
  {
    if ( *(_DWORD *)(v3 + 24) )
      LdrpPinNodeRecurse();
    else
      v2 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v2;
}
