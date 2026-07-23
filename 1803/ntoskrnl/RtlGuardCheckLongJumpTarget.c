/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x14028F66C
 * Callers:
 *     RtlUnwindEx @ 0x14012DE70 (RtlUnwindEx.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14012EDA0 (RtlpxLookupFunctionTable.c)
 *     VslGetNestedPageProtectionFlags @ 0x14017D610 (VslGetNestedPageProtectionFlags.c)
 *     bsearch_s @ 0x140188D10 (bsearch_s.c)
 *     RtlFailFast2 @ 0x1401B38D0 (RtlFailFast2.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1405FAB30 (LdrImageDirectoryEntryToLoadConfig.c)
 */

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  __int64 Config; // rax
  rsize_t v6; // r8
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-28h] BYREF
  int Key; // [rsp+68h] [rbp+10h] BYREF

  LOBYTE(Key) = IsFastFail;
  if ( (VslGetNestedPageProtectionFlags() & 0x80u) != 0LL )
  {
    if ( (unsigned __int64)PcValue < *(&xmmword_140463020 + 1)
      || (unsigned __int64)PcValue >= *(&xmmword_140463020 + 1) + (unsigned int)qword_140463030 )
    {
      RtlpxLookupFunctionTable((unsigned __int64)PcValue, (unsigned __int64)BaseAddress);
    }
    else
    {
      *(_OWORD *)BaseAddress = *(_OWORD *)&xmmword_140463020;
    }
    if ( !BaseAddress[1]
      || (Config = LdrImageDirectoryEntryToLoadConfig(BaseAddress[1])) != 0
      && *(_DWORD *)Config >= 0xC0u
      && (*(_DWORD *)(Config + 144) & 0x10000) != 0
      && ((Key = (_DWORD)PcValue - LODWORD(BaseAddress[1]), (v6 = *(_QWORD *)(Config + 184)) == 0)
       || !bsearch_s(
             &Key,
             *(const void **)(Config + 176),
             v6,
             (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
             (int (__cdecl *)(void *, const void *, const void *))RtlpTargetCompare,
             0LL)) )
    {
      RtlFailFast2(0x26u);
    }
  }
  return 0;
}
