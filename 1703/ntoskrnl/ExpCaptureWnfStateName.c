/*
 * XREFs of ExpCaptureWnfStateName @ 0x1404EF5B8
 * Callers:
 *     NtUnsubscribeWnfStateChange @ 0x140437FC8 (NtUnsubscribeWnfStateChange.c)
 *     NtDeleteWnfStateName @ 0x140438840 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x1404476C4 (NtQueryWnfStateNameInformation.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1404EDF78 (ExpWnfCompleteThreadSubscriptions.c)
 *     NtUpdateWnfStateData @ 0x1404EE944 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1404EEDDC (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1404EF144 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateData @ 0x1405D16C8 (NtDeleteWnfStateData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpCaptureWnfStateName(__int64 *a1, unsigned __int64 *a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx

  if ( a3 )
  {
    v3 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v3 = (__int64)a1;
    v4 = *(_QWORD *)v3;
  }
  else
  {
    v4 = *a1;
  }
  v5 = v4 ^ 0x41C64E6DA3BC0074LL;
  *a2 = v5;
  if ( (v5 & 0xF) != 1 || ((v5 >> 6) & 0xF) > 4 || ((v5 >> 10) & 1) != 0 && ((v5 >> 6) & 9) != 0 )
    return 3221225485LL;
  else
    return 0LL;
}
