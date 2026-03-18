/*
 * XREFs of _SetTaskmanWindow @ 0x1C0122030
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall SetTaskmanWindow(unsigned __int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  unsigned __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(gptiCurrent + 440LL);
  if ( a1 && *(_QWORD *)(v1 + 184) )
  {
    UserSetLastError(5LL, v1);
    return 0LL;
  }
  else
  {
    v2 = v1 + 184;
    if ( a1 )
      *(_QWORD *)(*(_QWORD *)(v2 - 184) + 32LL) = *(_QWORD *)(a1 + 48);
    else
      *(_QWORD *)(*(_QWORD *)(v2 - 184) + 32LL) = 0LL;
    v4 = __PAIR128__(a1, v2);
    HMAssignmentLock(&v4);
    return 1LL;
  }
}
