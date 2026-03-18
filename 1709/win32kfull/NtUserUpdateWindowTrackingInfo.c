/*
 * XREFs of NtUserUpdateWindowTrackingInfo @ 0x1C01ED2B0
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     TransformWindowTrackInfo @ 0x1C0084D4C (TransformWindowTrackInfo.c)
 *     IsShellParticipatesInSizing @ 0x1C00938B0 (IsShellParticipatesInSizing.c)
 *     UpdateSizeTrackingInfo @ 0x1C01DD398 (UpdateSizeTrackingInfo.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserUpdateWindowTrackingInfo(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  int updated; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagWND *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  INT v20[4]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v21[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  updated = 0;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v12 = (struct tagWND *)v7;
  if ( v7 && (((*(_WORD *)(v7 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v21[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v21;
    v21[1] = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    if ( (unsigned int)IsShellParticipatesInSizing(v7, v8, v10, v11) )
    {
      if ( *(_QWORD *)(gptiCurrent + 400LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL)
                                                                                 + 328LL)
                                                                     + 16LL)
                                                         + 400LL)
        && IAMThreadAccessGranted(gptiCurrent) )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned __int64 *)MmUserProbeAddress;
        v17 = *a2;
        *(_QWORD *)v20 = *a2;
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (unsigned __int64 *)MmUserProbeAddress;
        v18 = *a3;
        v22 = *a3;
        if ( (int)v17 > 0 )
        {
          v13 = HIDWORD(v17);
          if ( SHIDWORD(v17) > 0 && (int)v18 > 0 )
          {
            v13 = HIDWORD(v18);
            if ( SHIDWORD(v18) > 0 && (int)v17 >= (int)v18 && v20[1] >= SHIDWORD(v22) )
            {
              TransformWindowTrackInfo((__int64)v12, v20, (INT *)&v22, 1);
              updated = UpdateSizeTrackingInfo(v12, v20, &v22);
              goto LABEL_21;
            }
          }
        }
        v14 = 87LL;
      }
      else
      {
        v14 = 5LL;
      }
    }
    else
    {
      v14 = 5023LL;
    }
    UserSetLastError(v14, v13);
LABEL_21:
    ThreadUnlock1(v16, v15);
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return updated;
}
