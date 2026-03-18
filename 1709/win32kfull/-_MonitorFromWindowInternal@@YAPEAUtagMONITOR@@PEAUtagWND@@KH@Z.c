/*
 * XREFs of ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C005D868
 * Callers:
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C0051F24 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     xxxCheckFullScreen @ 0x1C005F0B8 (xxxCheckFullScreen.c)
 *     GetNewMonitor @ 0x1C00644F0 (GetNewMonitor.c)
 *     CalcWindowFullScreen @ 0x1C0066940 (CalcWindowFullScreen.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00764D8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     SkipWindowOnMonitor @ 0x1C00C83C4 (SkipWindowOnMonitor.c)
 *     SelectWindowRgn @ 0x1C00E6E74 (SelectWindowRgn.c)
 *     IsSmallerThanScreen @ 0x1C0115C10 (IsSmallerThanScreen.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01AACAC (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 *     NtUserSetWindowShowState @ 0x1C01EC4F0 (NtUserSetWindowShowState.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020518C (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall _MonitorFromWindowInternal(struct tagWND *a1, int a2, int a3)
{
  __int64 v7; // r8
  struct tagRECT v8; // xmm0
  struct tagRECT *v9; // rcx
  struct tagRECT *Prop; // rax
  struct tagRECT v11; // [rsp+20h] [rbp-28h] BYREF

  if ( **(_DWORD **)GetDispInfo() == 1 && a2 )
    return *(struct tagMONITOR **)(GetDispInfo() + 88);
  if ( a1 )
  {
    if ( (*((_BYTE *)a1 + 71) & 0x20) == 0 )
      goto LABEL_6;
    Prop = (struct tagRECT *)GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
    if ( Prop )
    {
      v7 = *((unsigned int *)a1 + 92);
      if ( !a3 )
      {
        v9 = Prop;
        return (struct tagMONITOR *)MonitorFromRect(v9);
      }
      v8 = *Prop;
      goto LABEL_8;
    }
    if ( (*(_WORD *)(*((_QWORD *)a1 + 13) + 82LL) & 0x3FFF) != 0x29D )
    {
LABEL_6:
      v7 = *((unsigned int *)a1 + 92);
      if ( !a3 )
      {
        v9 = (struct tagRECT *)((char *)a1 + 128);
        return (struct tagMONITOR *)MonitorFromRect(v9);
      }
      v8 = (struct tagRECT)*((_OWORD *)a1 + 8);
LABEL_8:
      v11 = v8;
      LogicalToPhysicalDPIRect(&v11, &v11, v7, 0LL);
      v9 = &v11;
      return (struct tagMONITOR *)MonitorFromRect(v9);
    }
    return *(struct tagMONITOR **)(GetDispInfo() + 88);
  }
  if ( (unsigned int)(a2 - 1) <= 1 )
    return *(struct tagMONITOR **)(GetDispInfo() + 88);
  return 0LL;
}
