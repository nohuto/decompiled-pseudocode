/*
 * XREFs of NtUserRegisterHotKey @ 0x1C00BCFA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _RegisterHotKey @ 0x1C00BD09C (_RegisterHotKey.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRegisterHotKey(__int64 a1, __int64 a2, int a3, int a4)
{
  struct tagWND *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v14; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-28h]
  _BYTE v16[24]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v16);
  if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 376LL)) )
    goto LABEL_15;
  if ( (a3 & 0xFFFF97F0) != 0 )
  {
    UserSetLastError(1004LL);
LABEL_14:
    v12 = 0;
    goto LABEL_7;
  }
  if ( (a3 & 0x800) == 0 )
  {
LABEL_4:
    if ( !a1 )
    {
      v7 = 0LL;
      goto LABEL_6;
    }
    v7 = (struct tagWND *)ValidateHwnd(a1);
    if ( v7 )
    {
LABEL_6:
      LODWORD(BugCheckParameter2) = a4;
      v12 = RegisterHotKey(v7, BugCheckParameter2);
      goto LABEL_7;
    }
    goto LABEL_14;
  }
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_15:
    v14 = 5LL;
  }
  else
  {
    if ( a4 )
      goto LABEL_4;
    v14 = 87LL;
  }
  v12 = 0;
  UserSetLastError(v14);
LABEL_7:
  if ( !v16[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v16);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v12;
}
