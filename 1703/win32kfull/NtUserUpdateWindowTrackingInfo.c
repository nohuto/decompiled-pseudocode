/*
 * XREFs of NtUserUpdateWindowTrackingInfo @ 0x1C01E1140
 * Callers:
 *     <none>
 * Callees:
 *     IsShellParticipatesInSizing @ 0x1C0021CB0 (IsShellParticipatesInSizing.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     TransformWindowTrackInfo @ 0x1C00B2E30 (TransformWindowTrackInfo.c)
 *     UpdateSizeTrackingInfo @ 0x1C01F6198 (UpdateSizeTrackingInfo.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserUpdateWindowTrackingInfo(__int64 a1, __int64 *a2, __int64 *a3)
{
  int updated; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagWND *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  INT v19[4]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v20[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  updated = 0;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v12 = (struct tagWND *)v7;
  if ( v7 && (((*(_WORD *)(v7 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v20;
    v20[1] = v7;
    ++*(_DWORD *)(v7 + 8);
    if ( (unsigned int)IsShellParticipatesInSizing(v7, v8, v10, v11) )
    {
      if ( *(_QWORD *)(gptiCurrent + 376LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL)
                                                                                 + 328LL)
                                                                     + 16LL)
                                                         + 376LL)
        && IAMThreadAccessGranted(gptiCurrent) )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (__int64 *)W32UserProbeAddress;
        v16 = *a2;
        *(_QWORD *)v19 = *a2;
        if ( (unsigned __int64)a3 >= W32UserProbeAddress )
          a3 = (__int64 *)W32UserProbeAddress;
        v17 = *a3;
        v21 = *a3;
        if ( (int)v16 > 0
          && SHIDWORD(v16) > 0
          && (int)v17 > 0
          && SHIDWORD(v17) > 0
          && (int)v16 >= (int)v17
          && v19[1] >= SHIDWORD(v21) )
        {
          TransformWindowTrackInfo((__int64)v12, v19, (INT *)&v21, 1);
          updated = UpdateSizeTrackingInfo(v12);
          goto LABEL_21;
        }
        v13 = 87LL;
      }
      else
      {
        v13 = 5LL;
      }
    }
    else
    {
      v13 = 5023LL;
    }
    UserSetLastError(v13);
LABEL_21:
    ThreadUnlock1(v15, v14);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return updated;
}
