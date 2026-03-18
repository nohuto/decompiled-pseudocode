/*
 * XREFs of SbGetProcessSwitchContext @ 0x1C00F3C48
 * Callers:
 *     SetManifestWinVer @ 0x1C00F3B20 (SetManifestWinVer.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
unsigned __int64 __fastcall SbGetProcessSwitchContext(unsigned __int64 a1)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 4024 > MmUserProbeAddress || a1 + 4024 < a1 )
      LOBYTE(MmUserProbeAddress) = 0;
    result = a1 + 1496;
    if ( a1 == -1496LL || !*(_DWORD *)(a1 + 1544) )
      return 0LL;
  }
  return result;
}
