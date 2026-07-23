/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x140240FAC
 * Callers:
 *     RtlUnwindEx @ 0x140009D90 (RtlUnwindEx.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1400E4B40 (RtlpxLookupFunctionTable.c)
 *     VslGetNestedPageProtectionFlags @ 0x140159240 (VslGetNestedPageProtectionFlags.c)
 *     bsearch_s @ 0x14016A580 (bsearch_s.c)
 *     RtlFailFast2 @ 0x140189F60 (RtlFailFast2.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1404B15A0 (LdrImageDirectoryEntryToLoadConfig.c)
 */

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  __int64 Config; // rax
  rsize_t v6; // r8
  PVOID BaseAddress[5]; // [rsp+30h] [rbp-28h] BYREF
  int Key; // [rsp+68h] [rbp+10h] BYREF

  LOBYTE(Key) = IsFastFail;
  if ( (VslGetNestedPageProtectionFlags() & 0x80u) != 0LL )
  {
    if ( (unsigned __int64)PcValue < *(&xmmword_1403F7020 + 1)
      || (unsigned __int64)PcValue >= *(&xmmword_1403F7020 + 1) + (unsigned int)qword_1403F7030 )
    {
      RtlpxLookupFunctionTable((unsigned __int64)PcValue, (__int64 *)BaseAddress);
    }
    else
    {
      *(_OWORD *)BaseAddress = *(_OWORD *)&xmmword_1403F7020;
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
