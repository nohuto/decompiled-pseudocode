/*
 * XREFs of NtUserCalculatePopupWindowPosition @ 0x1C01D69B0
 * Callers:
 *     <none>
 * Callees:
 *     _MonitorFromPoint @ 0x1C0020750 (_MonitorFromPoint.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     FindBestPos @ 0x1C02135AC (FindBestPos.c)
 */

__int64 __fastcall NtUserCalculatePopupWindowPosition(
        unsigned __int64 *a1,
        __int64 *a2,
        int a3,
        __int128 *a4,
        _DWORD *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rsi
  struct tagMONITOR *v16; // r13
  int BestPos; // eax
  _OWORD *v18; // rcx
  __int64 v20; // [rsp+50h] [rbp-A8h]
  __int64 v21; // [rsp+60h] [rbp-98h]
  __int64 v22[4]; // [rsp+80h] [rbp-78h] BYREF
  __int128 v23; // [rsp+A0h] [rbp-58h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a3 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004LL);
    v13 = 0;
  }
  else
  {
    v13 = 0;
    if ( a5 )
    {
      if ( a4 )
      {
        if ( (unsigned __int64)a4 >= W32UserProbeAddress )
          a4 = (__int128 *)W32UserProbeAddress;
        v23 = *a4;
        a4 = &v23;
      }
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (__int64 *)W32UserProbeAddress;
      v20 = *a2;
      if ( (int)*a2 < 0 || (HIDWORD(*a2) & 0x80000000) != 0 )
      {
        UserSetLastError(87LL);
      }
      else
      {
        if ( (unsigned __int64)a1 >= W32UserProbeAddress )
          a1 = (unsigned __int64 *)W32UserProbeAddress;
        v14 = *a1;
        v21 = v14;
        v15 = HIDWORD(v14);
        v16 = (struct tagMONITOR *)MonitorFromPoint(v14, 2u);
        if ( (a3 & 4) != 0 )
        {
          LODWORD(v14) = v14 - (int)v20 / 2;
        }
        else if ( (a3 & 8) != 0 )
        {
          LODWORD(v14) = v14 - v20;
        }
        if ( (a3 & 0x10) != 0 )
        {
          LODWORD(v15) = SHIDWORD(v20) / -2 + v15;
        }
        else if ( (a3 & 0x20) != 0 )
        {
          LODWORD(v15) = v15 - HIDWORD(v20);
        }
        v13 = 1;
        SmartObjStackRef<tagPOPUPMENU>::Init(v22, 0LL);
        BestPos = FindBestPos(v14, v15, (__int64)a4, a3 | 0x20000u, (__int64)v22, v16, v21);
        v18 = a5;
        if ( (unsigned __int64)a5 >= W32UserProbeAddress )
          v18 = (_OWORD *)W32UserProbeAddress;
        *v18 = *v18;
        *a5 = (__int16)BestPos;
        v9 = (unsigned int)SHIWORD(BestPos);
        a5[1] = v9;
        a5[2] = v20 + (__int16)BestPos;
        v10 = (unsigned int)(v9 + HIDWORD(v20));
        a5[3] = v10;
      }
    }
    else
    {
      UserSetLastError(87LL);
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
