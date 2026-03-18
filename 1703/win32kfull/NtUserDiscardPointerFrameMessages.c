/*
 * XREFs of NtUserDiscardPointerFrameMessages @ 0x1C01D7580
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01BB9C4 (xxxDiscardPointerFrameMessagesInternal.c)
 */

__int64 __fastcall NtUserDiscardPointerFrameMessages(int a1)
{
  int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // rax
  __int64 v8; // rcx

  v2 = 1;
  EnterCrit(0LL, 1LL);
  v5 = 0LL;
  if ( !a1 || HIWORD(a1) )
  {
    v8 = 87LL;
    goto LABEL_10;
  }
  v6 = gptiCurrent;
  if ( (unsigned __int16)a1 == 1 )
  {
    v7 = *(_DWORD **)(gptiCurrent + 1136LL);
    if ( !v7 || (*v7 & 1) == 0 )
      goto LABEL_6;
  }
  else
  {
    if ( (*(_DWORD *)(gptiCurrent + 1096LL) & 0x100) != 0 )
    {
LABEL_6:
      v8 = 5LL;
LABEL_10:
      v2 = 0;
      UserSetLastError(v8);
      goto LABEL_11;
    }
    v2 = xxxDiscardPointerFrameMessagesInternal(a1);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v6, v5, v3, v4);
  return v2;
}
