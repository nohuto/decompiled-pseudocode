/*
 * XREFs of SmpLockKnownSubSysList @ 0x140004A78
 * Callers:
 *     SmpReadySubSys @ 0x140003A64 (SmpReadySubSys.c)
 *     SmpWaitForSubSysStartup @ 0x140004958 (SmpWaitForSubSysStartup.c)
 *     SmpWaitForSingleSubSys @ 0x140004B40 (SmpWaitForSingleSubSys.c)
 *     SmpDeleteSubSys @ 0x1400132F0 (SmpDeleteSubSys.c)
 *     SmpWaitForStatusChange @ 0x1400134D8 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpLockKnownSubSysList(char a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  v3 = SmpKnownSubSysTable + 24LL * (a1 & 0x1F);
  if ( a3 )
  {
    *(_QWORD *)(a3 + 8) = v3;
    *(_DWORD *)a3 = a2;
  }
  v4 = v3 + 16;
  if ( a2 == 1 )
    return RtlAcquireSRWLockShared(v4);
  else
    return RtlAcquireSRWLockExclusive(v4);
}
