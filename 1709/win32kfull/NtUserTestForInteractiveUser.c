/*
 * XREFs of NtUserTestForInteractiveUser @ 0x1C01ECDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserTestForInteractiveUser(_QWORD *a1)
{
  unsigned int v2; // ebx

  EnterSharedCrit(0LL, 1LL);
  if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
    a1 = (_QWORD *)MmUserProbeAddress;
  if ( *a1 == *(_QWORD *)(grpWinStaList + 152LL) )
    v2 = 0;
  else
    v2 = -1073741790;
  UserSessionSwitchLeaveCrit(grpWinStaList, grpWinStaList);
  return v2;
}
