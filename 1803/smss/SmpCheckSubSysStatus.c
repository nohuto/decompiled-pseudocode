/*
 * XREFs of SmpCheckSubSysStatus @ 0x140004B78
 * Callers:
 *     SmpWaitForSubSysStartup @ 0x140004958 (SmpWaitForSubSysStartup.c)
 *     SmpWaitForSingleSubSys @ 0x140004B40 (SmpWaitForSingleSubSys.c)
 *     SmpWaitForStatusChange @ 0x1400134D8 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpCheckSubSysStatus(__int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( (*(_BYTE *)(a1 + 8) & 4) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      if ( *(_QWORD *)(a1 + 48) )
        return result;
      return 0LL;
    }
    if ( *(_DWORD *)(a1 + 24) == -1 )
      return 0LL;
  }
  return result;
}
