/*
 * XREFs of NtUserSetLayeredWindowAttributes @ 0x1C00212F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C00053F0 (UserSetLastStatus.c)
 *     WindowHasShadow @ 0x1C00213F8 (WindowHasShadow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0022C08 (_SetLayeredWindowAttributes.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     zzzUpdateShadowAlpha @ 0x1C011E960 (zzzUpdateShadowAlpha.c)
 */

__int64 __fastcall NtUserSetLayeredWindowAttributes(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rsi
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = 0LL;
  v12 = v6;
  if ( v6 )
  {
    v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v18;
    v18[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    if ( (a4 & 0xFFFFFFFC) != 0 || (unsigned int)IsWindowDesktopComposed(v6) && (*(_DWORD *)(v12 + 304) & 0x20) != 0 )
    {
      UserSetLastError(87LL);
    }
    else
    {
      v13 = SetLayeredWindowAttributes((struct tagWND *)v12);
      if ( v13 >= 0 )
      {
        v16 = 1LL;
        if ( (a4 & 2) != 0 && (unsigned int)WindowHasShadow(v12) )
          zzzUpdateShadowAlpha(v12);
        goto LABEL_9;
      }
      UserSetLastStatus(v13, 1);
    }
    v16 = 0LL;
LABEL_9:
    ThreadUnlock1(v15, v14);
    v11 = v16;
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
