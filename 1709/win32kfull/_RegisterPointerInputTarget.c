/*
 * XREFs of _RegisterPointerInputTarget @ 0x1C01CEA64
 * Callers:
 *     NtUserRegisterPointerInputTarget @ 0x1C01EA8B0 (NtUserRegisterPointerInputTarget.c)
 * Callees:
 *     UpdatePointerRedirIsAlive @ 0x1C0060760 (UpdatePointerRedirIsAlive.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall RegisterPointerInputTarget(__int64 a1, __int64 a2, int a3, int a4)
{
  __int128 v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)&v5 + 1) = a1;
  *(_QWORD *)&v5 = *(_QWORD *)(a1 + 24);
  if ( !(_QWORD)v5 || (v7 = *(_QWORD *)(v5 + 8)) == 0 )
  {
    v8 = 87LL;
    goto LABEL_14;
  }
  UpdatePointerRedirIsAlive(v7);
  a2 = 208LL;
  if ( a3 != 2 )
    a2 = 216LL;
  *(_QWORD *)&v5 = a2 + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v5 + 1) + 24LL) + 8LL);
  if ( !a4 )
  {
    if ( *(_QWORD *)v5 == *((_QWORD *)&v5 + 1) )
      HMAssignmentUnlock(v5);
    return 1LL;
  }
  if ( !*(_QWORD *)v5 )
  {
    v10 = v5;
    HMAssignmentLock(&v10);
    return 1LL;
  }
  if ( *(_QWORD *)v5 == *((_QWORD *)&v5 + 1) )
    return 1LL;
  v8 = 5LL;
LABEL_14:
  UserSetLastError(v8, a2);
  return 0LL;
}
