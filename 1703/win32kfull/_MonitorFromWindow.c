/*
 * XREFs of _MonitorFromWindow @ 0x1C00208D4
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0015690 (xxxCheckFullScreen.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C0020808 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     CalcWindowFullScreen @ 0x1C0020C84 (CalcWindowFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D980 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetNewMonitor @ 0x1C0060BF0 (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     SelectWindowRgn @ 0x1C009D0B0 (SelectWindowRgn.c)
 *     SkipWindowOnMonitor @ 0x1C00B7360 (SkipWindowOnMonitor.c)
 *     IsSmallerThanScreen @ 0x1C00C3BE0 (IsSmallerThanScreen.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A3538 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     NtUserSetWindowShowState @ 0x1C01E0370 (NtUserSetWindowShowState.c)
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0203704 (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     _MonitorFromWindowFromUser @ 0x1C02390D0 (_MonitorFromWindowFromUser.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromWindow(__int64 a1, unsigned int a2)
{
  __int64 v2; // r10
  char v5; // r11
  __int64 v6; // rcx
  __int128 v7; // xmm0
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int128 *v10; // rcx
  __int128 *Prop; // rax
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v13; // r10
  __int128 *v14; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1;
  if ( *(_DWORD *)*gpDispInfo == 1 && (a2 & 3) != 0 )
    return *(_QWORD *)(GetDispInfo() + 88);
  if ( a1 )
  {
    v5 = 32;
    if ( (*(_BYTE *)(a1 + 71) & 0x20) == 0 )
      goto LABEL_6;
    Prop = (__int128 *)GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
    if ( Prop )
    {
      v6 = v2;
      if ( ((unsigned __int8)a2 & (unsigned __int8)v5) != 0 )
      {
        v7 = *Prop;
        goto LABEL_8;
      }
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(v2);
      v10 = v14;
LABEL_14:
      v9 = a2 | MonitorFlagsFromWindow;
      return MonitorFromRect(v10, v9);
    }
    if ( (*(_WORD *)(*(_QWORD *)(v2 + 104) + 82LL) & 0x3FFF) != 0x29D )
    {
LABEL_6:
      v6 = v2;
      if ( ((unsigned __int8)a2 & (unsigned __int8)v5) != 0 )
      {
        v7 = *(_OWORD *)(v2 + 128);
LABEL_8:
        v15 = v7;
        v8 = GetMonitorFlagsFromWindow(v6);
        ((void (__fastcall *)(__int128 *, __int128 *, _QWORD, _QWORD))LogicalToPhysicalDPIRect)(&v15, &v15, v8, 0LL);
        v9 = a2;
        v10 = &v15;
        return MonitorFromRect(v10, v9);
      }
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(v2);
      v10 = (__int128 *)(v13 + 128);
      goto LABEL_14;
    }
    return *(_QWORD *)(GetDispInfo() + 88);
  }
  if ( (a2 & 3) != 0 )
    return *(_QWORD *)(GetDispInfo() + 88);
  return 0LL;
}
