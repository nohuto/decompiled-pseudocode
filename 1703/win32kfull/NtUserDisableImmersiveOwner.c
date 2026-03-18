/*
 * XREFs of NtUserDisableImmersiveOwner @ 0x1C01D7490
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C00B9628 (IsImmersiveBandOrShellManaged.c)
 *     xxxDisableImmersiveOwner @ 0x1C01D2B6C (xxxDisableImmersiveOwner.c)
 */

__int64 __fastcall NtUserDisableImmersiveOwner(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v2;
  if ( v2 )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v13;
    v13[1] = v2;
    ++*(_DWORD *)(v2 + 8);
    if ( (unsigned int)IsImmersiveBandOrShellManaged(v2)
      && (unsigned int)IsTopLevelWindow(v9)
      && !(unsigned int)IsWindowBeingDestroyed(v8)
      && (*(_BYTE *)(v8 + 71) & 0x18) == 0x10
      && ((unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 376LL))
       || *(_QWORD *)(gptiCurrent + 376LL) == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 376LL)) )
    {
      v7 = xxxDisableImmersiveOwner((struct tagWND *)v8);
    }
    else
    {
      UserSetLastError(5LL);
    }
    ThreadUnlock1(v11, v10);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
