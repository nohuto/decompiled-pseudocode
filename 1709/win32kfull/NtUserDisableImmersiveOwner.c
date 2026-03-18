/*
 * XREFs of NtUserDisableImmersiveOwner @ 0x1C01E3CA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C00C8B90 (IsImmersiveBandOrShellManaged.c)
 *     xxxDisableImmersiveOwner @ 0x1C01D2E5C (xxxDisableImmersiveOwner.c)
 */

__int64 __fastcall NtUserDisableImmersiveOwner(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0;
  v6 = v2;
  if ( v2 )
  {
    v12[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v12;
    v12[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    if ( (unsigned int)IsImmersiveBandOrShellManaged(v2)
      && (unsigned int)IsTopLevelWindow(v8)
      && !(unsigned int)IsWindowBeingDestroyed(v6)
      && (*(_BYTE *)(v6 + 71) & 0x18) == 0x10
      && ((unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 400LL))
       || *(_QWORD *)(gptiCurrent + 400LL) == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 400LL)) )
    {
      v5 = xxxDisableImmersiveOwner((struct tagWND *)v6);
    }
    else
    {
      UserSetLastError(5LL, v7);
    }
    ThreadUnlock1(v10, v9);
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
