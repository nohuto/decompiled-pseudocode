/*
 * XREFs of NtUserAcquireIAMKey @ 0x1C0123A50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserAcquireIAMKey(_QWORD *Address)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx

  EnterCrit(0LL, 1LL);
  v2 = *(_QWORD *)(gptiCurrent + 432LL);
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_QWORD *)(v3 + 168);
  v5 = 0;
  if ( v4
    && *(_QWORD *)(v3 + 160)
    && *(_QWORD *)(gptiCurrent + 400LL) == v4
    && !*(_QWORD *)(v2 + 288)
    && *(_DWORD *)(v2 + 272) )
  {
    ProbeForWrite(Address, 8uLL, 4u);
    *Address = *(_QWORD *)(v2 + 280);
    *(_QWORD *)(v2 + 288) = gptiCurrent;
    *(_DWORD *)(v2 + 272) = 0;
    v5 = 1;
  }
  else
  {
    UserSetLastError(5LL, v3);
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v5;
}
