/*
 * XREFs of NtUserDiscardPointerFrameMessages @ 0x1C01E3D90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01BF6E0 (xxxDiscardPointerFrameMessagesInternal.c)
 */

__int64 __fastcall NtUserDiscardPointerFrameMessages(int a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // rax
  __int64 v6; // rcx

  v2 = 1;
  EnterCrit(0LL, 1LL);
  v3 = 0LL;
  if ( !a1 || HIWORD(a1) )
  {
    v6 = 87LL;
    goto LABEL_10;
  }
  v4 = gptiCurrent;
  if ( (unsigned __int16)a1 == 1 )
  {
    v5 = *(_DWORD **)(gptiCurrent + 1224LL);
    if ( !v5 || (*v5 & 1) == 0 )
      goto LABEL_6;
  }
  else
  {
    if ( (*(_DWORD *)(gptiCurrent + 1184LL) & 0x100) != 0 )
    {
LABEL_6:
      v6 = 5LL;
LABEL_10:
      v2 = 0;
      UserSetLastError(v6, 0LL);
      goto LABEL_11;
    }
    v2 = xxxDiscardPointerFrameMessagesInternal(a1);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}
