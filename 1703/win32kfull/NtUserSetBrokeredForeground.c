/*
 * XREFs of NtUserSetBrokeredForeground @ 0x1C00F6260
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     IsMessageOnlyWindow @ 0x1C00F6850 (IsMessageOnlyWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetBrokeredForeground(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  char v12; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  if ( a1 )
  {
    v2 = ValidateHwnd(a1);
    v3 = v2;
    if ( v2 )
    {
      if ( (unsigned int)IsTopLevelWindow(v2)
        && !*(_QWORD *)(v3 + 120)
        && !(unsigned int)IsWindowBeingDestroyed(v3)
        && (*(_BYTE *)(v3 + 71) & 0x10) == 0
        && !(unsigned int)IsMessageOnlyWindow(v4)
        && !GetProp(v3, gatomBrokeredForeground, 1) )
      {
        v5 = *(_DWORD *)(v3 + 320);
        if ( v5 == 14 || v5 == 4 )
        {
          if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 376LL)) && gptiCurrent == *(_QWORD *)(v3 + 16) )
          {
            v8 = InternalSetProp(v3, (unsigned __int16)gatomBrokeredForeground, gptiCurrent, 5);
          }
          else
          {
            UserSetLastError(5LL);
            v8 = 0;
          }
          goto LABEL_13;
        }
        UserSetLastError(5LL);
      }
    }
  }
  v8 = 0;
  UserSetLastError(87LL);
LABEL_13:
  if ( !v12 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v12);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return v8;
}
