/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x180020260
 * Callers:
 *     RtlUnwindEx @ 0x180026F90 (RtlUnwindEx.c)
 *     RtlGuardRestoreContext @ 0x180078800 (RtlGuardRestoreContext.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1800230B8 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     RtlQueryProtectedPolicy @ 0x180075B20 (RtlQueryProtectedPolicy.c)
 *     bsearch_s @ 0x1800936F0 (bsearch_s.c)
 *     RtlFailFast2 @ 0x1800A4E90 (RtlFailFast2.c)
 */

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  bool v4; // bp
  int v6; // eax
  char v7; // bl
  __int64 Config; // rax
  rsize_t v9; // r8
  unsigned __int64 PolicyValue; // [rsp+30h] [rbp-28h] BYREF
  int v12[4]; // [rsp+38h] [rbp-20h]
  int Key; // [rsp+78h] [rbp+20h] BYREF

  v4 = IsFastFail;
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( !v6 )
  {
    if ( !IsLongJumpTarget )
      return 0;
    v7 = 1;
LABEL_15:
    *(_BYTE *)IsLongJumpTarget = v7;
    return 0;
  }
  v7 = 0;
  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_18016F4D0 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_18016F4D0 + 1)
                                  + (unsigned __int64)(unsigned int)qword_18016F4E0 )
  {
    RtlpxLookupFunctionTable(PcValue);
  }
  else
  {
    *(_OWORD *)v12 = xmmword_18016F4D0;
  }
  if ( *(_QWORD *)&v12[2] )
  {
    Config = LdrImageDirectoryEntryToLoadConfig(v12[2]);
    if ( !Config
      || *(_DWORD *)Config < 0xC0u
      || (*(_DWORD *)(Config + 144) & 0x10000) == 0
      || (Key = (_DWORD)PcValue - v12[2], (v9 = *(_QWORD *)(Config + 184)) != 0)
      && bsearch_s(
           &Key,
           *(const void **)(Config + 176),
           v9,
           (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
           RtlpTargetCompare,
           0LL) )
    {
LABEL_10:
      v7 = 1;
      goto LABEL_11;
    }
  }
  else if ( RtlQueryProtectedPolicy((PGUID)&stru_180131ED8, &PolicyValue) >= 0 && PolicyValue )
  {
    goto LABEL_10;
  }
  if ( !v4 )
    RtlFailFast2(38LL, PcValue);
LABEL_11:
  if ( IsLongJumpTarget )
    goto LABEL_15;
  return 0;
}
