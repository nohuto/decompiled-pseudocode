/*
 * XREFs of SmpUnlockKnownSubSysList @ 0x140004678
 * Callers:
 *     SmpTerminateCSR @ 0x1400010A8 (SmpTerminateCSR.c)
 *     wmain @ 0x1400014B0 (wmain.c)
 *     SmpReadySubSys @ 0x140003A64 (SmpReadySubSys.c)
 *     SmpHandleConnectionRequest @ 0x140004130 (SmpHandleConnectionRequest.c)
 *     SmpSearchKnownSubSysDatabase @ 0x1400045B8 (SmpSearchKnownSubSysDatabase.c)
 *     SmpWaitForSingleSubSys @ 0x140004B40 (SmpWaitForSingleSubSys.c)
 *     SmpLoadSubSystem @ 0x14001244C (SmpLoadSubSystem.c)
 *     SmpDeleteSubSys @ 0x1400132F0 (SmpDeleteSubSys.c)
 *     SmpWaitForStatusChange @ 0x1400134D8 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpUnlockKnownSubSysList(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rcx

  v1 = *(_DWORD *)a1 == 1;
  v2 = *(_QWORD *)(a1 + 8) + 16LL;
  if ( v1 )
    return RtlReleaseSRWLockShared(v2);
  else
    return RtlReleaseSRWLockExclusive(v2);
}
