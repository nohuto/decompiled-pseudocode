/*
 * XREFs of NtUserSetActivationFilter @ 0x1C0006CD0
 * Callers:
 *     <none>
 * Callees:
 *     _SetActivationFilter @ 0x1C0006D84 (_SetActivationFilter.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     IsIAMThread @ 0x1C00F6870 (IsIAMThread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetActivationFilter(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rcx
  char v13; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v4 = ValidateHwnd(a1);
    if ( v4 && (unsigned int)IsIAMThread(*(_QWORD *)(v4 + 16)) )
    {
      v8 = SetActivationFilter(v5, a2);
      goto LABEL_5;
    }
    v12 = 87LL;
  }
  else
  {
    v12 = 5LL;
  }
  v8 = 0;
  UserSetLastError(v12);
LABEL_5:
  if ( !v13 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v13);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return v8;
}
