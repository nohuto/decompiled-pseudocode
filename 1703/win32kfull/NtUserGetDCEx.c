/*
 * XREFs of NtUserGetDCEx @ 0x1C00FB690
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetDCEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 DCEx; // rdi
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx

  EnterSharedCrit(0LL, 1LL);
  if ( a2 && !(unsigned int)GreIsValidRegion(a2) || a2 == ghrgnGDC || (a3 & 0xFFDAF800) != 0 )
  {
    v14 = 87LL;
    goto LABEL_22;
  }
  if ( !a1 )
  {
    v8 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 16LL);
    if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) & 0x20000000) != 0 )
      v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 376) + 720LL)
                      + 24LL) & 1;
    else
      v12 = 0;
    if ( !v12 )
      goto LABEL_17;
    v13 = v8 ? *v8 : 0LL;
    if ( ValidateHwnd(v13) )
      goto LABEL_17;
    v14 = 5LL;
LABEL_22:
    DCEx = 0LL;
    UserSetLastError(v14);
    goto LABEL_23;
  }
  v8 = (_QWORD *)ValidateHwnd(a1);
  if ( !v8 )
  {
    DCEx = 0LL;
    goto LABEL_23;
  }
LABEL_17:
  DCEx = 0LL;
  if ( !a2 || (unsigned int)GreLockRegion(a2) )
  {
    DCEx = _GetDCEx(v8, a2, a3);
    if ( a2 )
      GreUnlockRegion(a2);
  }
LABEL_23:
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return DCEx;
}
