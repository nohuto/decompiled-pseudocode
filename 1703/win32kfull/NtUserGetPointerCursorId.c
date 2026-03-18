/*
 * XREFs of NtUserGetPointerCursorId @ 0x1C01DA000
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     GetPointerCursorIdInternal @ 0x1C01BAEAC (GetPointerCursorIdInternal.c)
 */

__int64 __fastcall NtUserGetPointerCursorId(int a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int PointerCursorIdInternal; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h]

  v11 = 0;
  v4 = EnterSharedCrit(0LL, 1LL);
  v12 = v4;
  if ( a1 && !HIWORD(a1) && a2 )
  {
    PointerCursorIdInternal = GetPointerCursorIdInternal(v4, a1, &v11);
    if ( PointerCursorIdInternal )
    {
      v6 = W32UserProbeAddress;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (_DWORD *)W32UserProbeAddress;
      *a2 = v11;
    }
  }
  else
  {
    PointerCursorIdInternal = 0;
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return PointerCursorIdInternal;
}
