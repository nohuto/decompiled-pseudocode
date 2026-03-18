/*
 * XREFs of xxxGetTitleBarInfoEx @ 0x1C00E7EA8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00412F0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C00E7F98 (DwmSyncGetTitleBarInfo.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C0210C2C (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxGetTitleBarInfoEx(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  void *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  NTSTATUS TitleBarInfo; // edi
  char *v14; // rdi
  __int64 v15; // rbp
  int v16; // eax
  ULONG v18; // eax
  _DWORD *v19; // rdi
  int v20; // ebx
  int v21; // esi
  int v22; // [rsp+60h] [rbp+18h] BYREF
  __int64 v23; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v22 = 0;
  if ( !(unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    goto LABEL_12;
  v10 = (void *)ReferenceDwmApiPort(v6, v5, v7, v8);
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation, v11, v12);
  TitleBarInfo = DwmSyncGetTitleBarInfo(v10);
  EnterCrit(0LL, 1LL);
  if ( TitleBarInfo < 0 )
  {
    v18 = RtlNtStatusToDosError(TitleBarInfo);
    UserSetLastError(v18);
    v16 = 1;
  }
  else
  {
    v2 = 1;
    v23 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 45));
    PhysicalToLogicalDPIRect((char *)a2 + 4, (char *)a2 + 4, 0LL, &v23);
    v14 = (char *)a2 + 44;
    v15 = 6LL;
    do
    {
      PhysicalToLogicalDPIRect(v14, v14, 0LL, &v23);
      v14 += 16;
      --v15;
    }
    while ( v15 );
    v16 = v22;
  }
  if ( !v16 )
  {
LABEL_12:
    memset((char *)a2 + 20, 0, 0x78uLL);
    xxxCommonGetTitleBarInfo(a1, a2);
    v19 = (_DWORD *)((char *)a2 + 28);
    v20 = 2;
    v21 = (_DWORD)a2 + 76;
    do
    {
      if ( (*v19 & 0x8000) == 0 )
        xxxCalcCaptionButton((_DWORD)a1, v20, (unsigned int)&v23, v21, (__int64)&v22, 1);
      ++v20;
      v21 += 16;
      ++v19;
    }
    while ( v20 <= 5 );
    return 1;
  }
  return v2;
}
