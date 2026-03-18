/*
 * XREFs of NtUserSetLayeredWindowAttributes @ 0x1C008F740
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000AC04 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     WindowHasShadow @ 0x1C0066870 (WindowHasShadow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0090BA8 (_SetLayeredWindowAttributes.c)
 *     zzzUpdateShadowAlpha @ 0x1C012AEE8 (zzzUpdateShadowAlpha.c)
 */

__int64 __fastcall NtUserSetLayeredWindowAttributes(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    v14[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v14;
    v14[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    if ( (a4 & 0xFFFFFFFC) != 0 || (unsigned int)IsWindowDesktopComposed(v8) && (*(_DWORD *)(v8 + 304) & 0x20) != 0 )
    {
      UserSetLastError(87LL, v6);
      v12 = 0;
    }
    else
    {
      v9 = SetLayeredWindowAttributes((struct tagWND *)v8);
      if ( v9 < 0 )
      {
        v12 = 0;
        UserSetLastStatus(v9, 1);
      }
      else
      {
        v12 = 1;
        if ( (a4 & 2) != 0 && (unsigned int)WindowHasShadow(v8) )
          zzzUpdateShadowAlpha(v8);
      }
    }
    ThreadUnlock1(v11, v10);
  }
  else
  {
    v12 = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v12;
}
