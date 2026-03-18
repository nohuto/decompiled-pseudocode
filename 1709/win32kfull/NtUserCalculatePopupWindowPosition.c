/*
 * XREFs of NtUserCalculatePopupWindowPosition @ 0x1C01E3140
 * Callers:
 *     <none>
 * Callees:
 *     _MonitorFromPoint @ 0x1C0055A30 (_MonitorFromPoint.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C0142EE8 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     FindBestPos @ 0x1C021494C (FindBestPos.c)
 */

__int64 __fastcall NtUserCalculatePopupWindowPosition(
        unsigned __int64 *a1,
        _QWORD *a2,
        int a3,
        __int128 *a4,
        _DWORD *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  _QWORD *v18; // rax
  int BestPos; // eax
  _OWORD *v20; // rcx
  int v22[2]; // [rsp+50h] [rbp-98h]
  __int64 v23; // [rsp+60h] [rbp-88h]
  __int64 v24; // [rsp+80h] [rbp-68h] BYREF
  __int128 v25; // [rsp+90h] [rbp-58h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a3 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004LL, v9);
    v12 = 0;
  }
  else
  {
    v12 = 0;
    if ( a5 )
    {
      if ( a4 )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (__int128 *)MmUserProbeAddress;
        v25 = *a4;
        a4 = &v25;
      }
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_QWORD *)MmUserProbeAddress;
      *(_QWORD *)v22 = *a2;
      if ( (int)*a2 < 0 || (HIDWORD(*a2) & 0x80000000) != 0 )
      {
        UserSetLastError(87LL, v9);
      }
      else
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (unsigned __int64 *)MmUserProbeAddress;
        v13 = *a1;
        v23 = v13;
        v14 = HIDWORD(v13);
        v17 = MonitorFromPoint(v13, 2u, 0);
        if ( (a3 & 4) != 0 )
        {
          LODWORD(v13) = v13 - v22[0] / 2;
        }
        else if ( (a3 & 8) != 0 )
        {
          LODWORD(v13) = v13 - v22[0];
        }
        if ( (a3 & 0x10) != 0 )
        {
          LODWORD(v14) = v22[1] / -2 + v14;
        }
        else if ( (a3 & 0x20) != 0 )
        {
          LODWORD(v14) = v14 - v22[1];
        }
        v12 = 1;
        v18 = SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(&v24, 0LL, v15, v16);
        BestPos = FindBestPos(v13, v14, v22[0], v22[1], (__int64)a4, a3 | 0x20000u, (__int64)v18, v17, v23);
        v20 = a5;
        if ( (unsigned __int64)a5 >= MmUserProbeAddress )
          v20 = (_OWORD *)MmUserProbeAddress;
        *v20 = *v20;
        *a5 = (__int16)BestPos;
        v10 = (unsigned int)SHIWORD(BestPos);
        a5[1] = v10;
        a5[2] = v22[0] + (__int16)BestPos;
        v11 = (unsigned int)(v10 + v22[1]);
        a5[3] = v11;
      }
    }
    else
    {
      UserSetLastError(87LL, v9);
    }
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return v12;
}
