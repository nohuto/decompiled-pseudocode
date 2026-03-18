/*
 * XREFs of NtUserSetWindowArrangement @ 0x1C01DFF40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     IsHungWindow @ 0x1C004A0A0 (IsHungWindow.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00B3D10 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     BeginSetWindowArrangement @ 0x1C01F5A08 (BeginSetWindowArrangement.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowArrangement(__int64 a1, __int128 *a2, __int128 *a3, unsigned int a4)
{
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int128 v21; // [rsp+28h] [rbp-40h] BYREF
  __int128 v22; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = 0;
  gbValidateHandleForIL = 0;
  v9 = ValidateHwnd(a1);
  v14 = v9;
  if ( v9 && (((*(_WORD *)(v9 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v23;
    v23[1] = v9;
    ++*(_DWORD *)(v9 + 8);
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 328LL) && IAMThreadAccessGranted(gptiCurrent) )
    {
      if ( *(_QWORD *)(v14 + 16) == v16 || (a4 & 0xFFFFFFFC) != 0 )
      {
        v15 = 87LL;
        goto LABEL_22;
      }
      if ( (unsigned int)IsHungWindow(v14)
        || (v17 = *(_QWORD *)(v14 + 168), *(_WORD *)(v17 + 8) == *(_WORD *)(gpsi + 884LL)) )
      {
        v15 = 5023LL;
        goto LABEL_22;
      }
      if ( (a4 & 1) != 0 || CheckLegacyForegroundAccess(gpsi, v17) )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (__int128 *)W32UserProbeAddress;
        v22 = *a2;
        if ( a3 )
        {
          if ( (unsigned __int64)a3 >= W32UserProbeAddress )
            a3 = (__int128 *)W32UserProbeAddress;
          v21 = *a3;
        }
        else
        {
          v21 = 0uLL;
        }
        v8 = BeginSetWindowArrangement(v14, &v22, &v21, a4);
        goto LABEL_23;
      }
    }
    v15 = 5LL;
LABEL_22:
    UserSetLastError(v15);
LABEL_23:
    ThreadUnlock1(v19, v18);
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v8;
}
