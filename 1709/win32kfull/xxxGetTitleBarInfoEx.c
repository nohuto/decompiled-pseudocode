/*
 * XREFs of xxxGetTitleBarInfoEx @ 0x1C004A0DC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 * Callees:
 *     DwmSyncGetTitleBarInfo @ 0x1C004A1D0 (DwmSyncGetTitleBarInfo.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00777C0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C0212320 (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxGetTitleBarInfoEx(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  void *v6; // rsi
  NTSTATUS TitleBarInfo; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 CurrentThreadDpiAwarenessContext; // r15
  char *v11; // rsi
  __int64 v12; // rbp
  int v13; // eax
  ULONG v15; // eax
  _DWORD *v16; // rsi
  int v17; // ebx
  int v18; // edi
  int v19; // [rsp+70h] [rbp+18h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0;
  v19 = 0;
  if ( !(unsigned int)IsToplevelWindowDesktopComposed() )
    goto LABEL_12;
  v6 = (void *)ReferenceDwmApiPort();
  if ( gdwInAtomicOperation )
  {
    v5 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v5, gdwInAtomicOperation);
  TitleBarInfo = DwmSyncGetTitleBarInfo(v6);
  EnterCrit(0LL, 1LL);
  if ( TitleBarInfo < 0 )
  {
    v15 = RtlNtStatusToDosError(TitleBarInfo);
    UserSetLastError(v15);
    v13 = 1;
  }
  else
  {
    v2 = 1;
    v20 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 45));
    CurrentThreadDpiAwarenessContext = (unsigned int)W32GetCurrentThreadDpiAwarenessContext(v9, v8);
    PhysicalToLogicalDPIRect((char *)a2 + 4, (char *)a2 + 4, CurrentThreadDpiAwarenessContext, &v20);
    v11 = (char *)a2 + 44;
    v12 = 6LL;
    do
    {
      PhysicalToLogicalDPIRect(v11, v11, (unsigned int)CurrentThreadDpiAwarenessContext, &v20);
      v11 += 16;
      --v12;
    }
    while ( v12 );
    v13 = v19;
  }
  if ( !v13 )
  {
LABEL_12:
    memset((char *)a2 + 20, 0, 0x78uLL);
    xxxCommonGetTitleBarInfo(a1, a2);
    v16 = (_DWORD *)((char *)a2 + 28);
    v17 = 2;
    v18 = (_DWORD)a2 + 76;
    do
    {
      if ( (*v16 & 0x8000) == 0 )
        xxxCalcCaptionButton((_DWORD)a1, v17, (unsigned int)&v20, v18, (__int64)&v19, 1);
      ++v17;
      v18 += 16;
      ++v16;
    }
    while ( v17 <= 5 );
    return 1;
  }
  return v2;
}
