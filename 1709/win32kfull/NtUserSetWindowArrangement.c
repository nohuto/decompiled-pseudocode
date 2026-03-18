/*
 * XREFs of NtUserSetWindowArrangement @ 0x1C01EC0C0
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsHungWindow @ 0x1C0088E80 (IsHungWindow.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00CB9BC (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     BeginSetWindowArrangement @ 0x1C01DCD08 (BeginSetWindowArrangement.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowArrangement(__int64 a1, __int128 *a2, __int128 *a3, int a4)
{
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int128 v18; // [rsp+28h] [rbp-40h] BYREF
  __int128 v19; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v20[3]; // [rsp+48h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = 0;
  gbValidateHandleForIL = 0;
  v9 = ValidateHwnd(a1);
  v12 = v9;
  if ( v9 && (((*(_WORD *)(v9 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v20[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v20;
    v20[1] = v9;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 328LL) && IAMThreadAccessGranted(gptiCurrent) )
    {
      if ( *(_QWORD *)(v12 + 16) == v14 || (a4 & 0xFFFFFFFC) != 0 )
      {
        v13 = 87LL;
        goto LABEL_22;
      }
      if ( (unsigned int)IsHungWindow(v12)
        || (v10 = *(_QWORD *)(v12 + 168), *(_WORD *)(v10 + 8) == *(_WORD *)(gpsi + 884LL)) )
      {
        v13 = 5023LL;
        goto LABEL_22;
      }
      if ( (a4 & 1) != 0 || CheckLegacyForegroundAccess(gpsi, v10) )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (__int128 *)MmUserProbeAddress;
        v19 = *a2;
        if ( a3 )
        {
          if ( (unsigned __int64)a3 >= MmUserProbeAddress )
            a3 = (__int128 *)MmUserProbeAddress;
          v18 = *a3;
        }
        else
        {
          v18 = 0uLL;
        }
        v8 = BeginSetWindowArrangement(v12, &v19, &v18, a4);
        goto LABEL_23;
      }
    }
    v13 = 5LL;
LABEL_22:
    UserSetLastError(v13, v10);
LABEL_23:
    ThreadUnlock1(v16, v15);
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return v8;
}
