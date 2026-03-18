/*
 * XREFs of NtUserSetParent @ 0x1C010F810
 * Callers:
 *     <none>
 * Callees:
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 */

__int64 __fastcall NtUserSetParent(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct tagWND *v8; // rdi
  __int64 DesktopWindow; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax
  _QWORD v16[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = (struct tagWND *)v4;
  if ( v4 )
  {
    v6 = (*(_WORD *)(v4 + 82) & 0x3FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v16[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v16;
      v16[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      if ( a2 )
      {
        if ( a2 == -3 )
        {
          v15 = *(_QWORD *)(v4 + 24);
          DesktopWindow = 0LL;
          if ( v15 )
            DesktopWindow = *(_QWORD *)(v15 + 104);
        }
        else
        {
          DesktopWindow = ValidateHwnd(a2);
          if ( !DesktopWindow )
          {
LABEL_11:
            ThreadUnlock1(v10, DesktopWindow);
            goto LABEL_12;
          }
        }
      }
      else
      {
        DesktopWindow = GetDesktopWindow(v4);
      }
      v17[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v17;
      v17[1] = DesktopWindow;
      if ( DesktopWindow )
        _InterlockedIncrement((volatile signed __int32 *)(DesktopWindow + 8));
      v11 = (__int64 *)xxxSetParentWorker(v8, DesktopWindow, 0LL);
      if ( v11 )
        v7 = *v11;
      ThreadUnlock1(v13, v12);
      goto LABEL_11;
    }
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
