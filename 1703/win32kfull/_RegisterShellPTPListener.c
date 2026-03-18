/*
 * XREFs of _RegisterShellPTPListener @ 0x1C0118EFC
 * Callers:
 *     NtUserRegisterShellPTPListener @ 0x1C0118E50 (NtUserRegisterShellPTPListener.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall RegisterShellPTPListener(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 && (v3 = *(_QWORD *)(v2 + 8)) != 0 )
  {
    if ( !a2 )
    {
      if ( *(_QWORD *)(v3 + 224) == a1 )
        HMAssignmentUnlock(v3 + 224);
      return 1LL;
    }
    v4 = (_QWORD *)(v3 + 224);
    if ( !*v4 )
    {
      v6[1] = a1;
      v6[0] = v4;
      HMAssignmentLock(v6);
      return 1LL;
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  return 0LL;
}
