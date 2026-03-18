/*
 * XREFs of ExpCaptureWnfStateName @ 0x14050036C
 * Callers:
 *     NtDeleteWnfStateName @ 0x1404FDBB8 (NtDeleteWnfStateName.c)
 *     NtUpdateWnfStateData @ 0x1404FEFC8 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1404FF814 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1404FFEEC (NtQueryWnfStateData.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140500538 (ExpWnfCompleteThreadSubscriptions.c)
 *     NtUnsubscribeWnfStateChange @ 0x14056FFE4 (NtUnsubscribeWnfStateChange.c)
 *     NtQueryWnfStateNameInformation @ 0x140582464 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x1405EBE04 (NtDeleteWnfStateData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpCaptureWnfStateName(__int64 *a1, unsigned __int64 *a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

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
  if ( (v5 & 0xF) != 1 )
    return 3221225485LL;
  v6 = v5;
  v7 = (v5 >> 10) & 1;
  v8 = (v6 >> 6) & 0xF;
  if ( (unsigned int)v8 > 4 || (_DWORD)v7 && (v8 & 0xFFFFFFF9) != 0 )
    return 3221225485LL;
  else
    return 0LL;
}
