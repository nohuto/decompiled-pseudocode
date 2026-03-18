/*
 * XREFs of NtUserSetBrokeredForeground @ 0x1C00D5DB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 *     IsMessageOnlyWindow @ 0x1C00D63A0 (IsMessageOnlyWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetBrokeredForeground(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rcx
  char v12; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  if ( !a1 )
    goto LABEL_17;
  v4 = ValidateHwnd(a1);
  v5 = v4;
  if ( !v4
    || !(unsigned int)IsTopLevelWindow(v4)
    || *(_QWORD *)(v5 + 120)
    || (unsigned int)IsWindowBeingDestroyed(v5)
    || (*(_BYTE *)(v5 + 71) & 0x10) != 0
    || (unsigned int)IsMessageOnlyWindow(v6)
    || GetProp(v5, gatomBrokeredForeground, 1) )
  {
    goto LABEL_17;
  }
  v7 = *(_DWORD *)(v5 + 320);
  if ( v7 != 14 && v7 != 4 )
  {
    UserSetLastError(5LL, v3);
LABEL_17:
    v11 = 87LL;
    goto LABEL_18;
  }
  if ( !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 400LL)) || gptiCurrent != *(_QWORD *)(v5 + 16) )
  {
    v11 = 5LL;
LABEL_18:
    UserSetLastError(v11, v3);
    goto LABEL_13;
  }
  v2 = InternalSetProp(v5, (unsigned __int16)gatomBrokeredForeground, gptiCurrent, 5);
LABEL_13:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v9, v8);
  return v2;
}
