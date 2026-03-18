/*
 * XREFs of NtUserSetFallbackForeground @ 0x1C01DF500
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _SetFallbackForeground @ 0x1C01B1E18 (_SetFallbackForeground.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetFallbackForeground(__int64 a1, int a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r10
  char v13; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v4 = 5LL;
LABEL_3:
    v5 = 0;
    UserSetLastError(v4);
    goto LABEL_15;
  }
  if ( a1 )
  {
    v10 = ValidateHwnd(a1);
    if ( !v10 || (*(_WORD *)(v10 + 82) & 0x3FFF) == 0x29D || !(unsigned int)IsTopLevelWindow(v10) )
      goto LABEL_8;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    if ( !a2 )
    {
LABEL_8:
      v4 = 87LL;
      goto LABEL_3;
    }
  }
  else if ( a2 )
  {
    goto LABEL_8;
  }
  v5 = SetFallbackForeground(v11, a2);
LABEL_15:
  if ( !v13 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v13);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v5;
}
