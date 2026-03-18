/*
 * XREFs of NtUserGetPointerType @ 0x1C01DA2F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6880 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerType(unsigned int a1, _DWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h]

  v4 = 1;
  v5 = EnterSharedCrit(0LL, 1LL);
  v12 = v5;
  if ( !a1 || (v8 = HIWORD(a1), HIWORD(a1)) || !a2 )
  {
    v4 = 0;
    UserSetLastError(87LL);
    goto LABEL_13;
  }
  if ( a1 == 1 )
  {
    v9 = 4LL;
    v11 = 4;
  }
  else
  {
    if ( !GetThreadPointerData((struct _LIST_ENTRY *)(v5 + 968), a1, &v11, 0LL, 0LL) )
    {
      UserSetLastError(87LL);
      v4 = 0;
      goto LABEL_13;
    }
    v9 = v11;
  }
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (_DWORD *)W32UserProbeAddress;
  *a2 = v9;
LABEL_13:
  UserSessionSwitchLeaveCrit(v6, v9, v8, v7);
  return v4;
}
