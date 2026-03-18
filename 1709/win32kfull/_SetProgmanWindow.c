/*
 * XREFs of _SetProgmanWindow @ 0x1C0213C40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall SetProgmanWindow(unsigned __int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rdx
  unsigned __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(gptiCurrent + 440LL);
  if ( a1 && *(_QWORD *)(v1 + 192) )
  {
    UserSetLastError(5LL, v1);
    return 0LL;
  }
  else
  {
    v3 = v1 + 192;
    if ( a1 )
      *(_QWORD *)(*(_QWORD *)(v3 - 192) + 40LL) = *(_QWORD *)(a1 + 48);
    else
      *(_QWORD *)(*(_QWORD *)(v3 - 192) + 40LL) = 0LL;
    v4 = __PAIR128__(a1, v3);
    HMAssignmentLock(&v4);
    return 1LL;
  }
}
