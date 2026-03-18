/*
 * XREFs of NtUserGetDCEx @ 0x1C0107E30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetDCEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rsi
  __int64 DCEx; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx

  EnterSharedCrit(0LL, 1LL);
  if ( a2 && !(unsigned int)GreIsValidRegion(a2) || a2 == ghrgnGDC || (a3 & 0xFFDAF800) != 0 )
  {
    v21 = 87LL;
    goto LABEL_22;
  }
  if ( !a1 )
  {
    v11 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8) + 432)
                                 + 8LL)
                     + 16LL);
    if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15) + 464) & 0x20000000) != 0 )
      v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18)
                                              + 400)
                                  + 728LL)
                      + 24LL) & 1;
    else
      v19 = 0;
    if ( !v19 )
      goto LABEL_17;
    v20 = v11 ? *v11 : 0LL;
    if ( ValidateHwnd(v20) )
      goto LABEL_17;
    v21 = 5LL;
LABEL_22:
    DCEx = 0LL;
    UserSetLastError(v21, v6);
    goto LABEL_23;
  }
  v11 = (_QWORD *)ValidateHwnd(a1);
  if ( !v11 )
  {
    DCEx = 0LL;
    goto LABEL_23;
  }
LABEL_17:
  DCEx = 0LL;
  if ( !a2 || (unsigned int)GreLockRegion(a2) )
  {
    DCEx = _GetDCEx(v11, a2, a3);
    if ( a2 )
      GreUnlockRegion(a2);
  }
LABEL_23:
  UserSessionSwitchLeaveCrit(v10, v9);
  return DCEx;
}
