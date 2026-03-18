/*
 * XREFs of xxxActiveWindowTracking @ 0x1C01BD2BC
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00408F0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00CC9DC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 * Callees:
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     IsForegroundLocked @ 0x1C00B45FC (IsForegroundLocked.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     GetActiveTrackPwnd @ 0x1C01BC974 (GetActiveTrackPwnd.c)
 */

__int64 __fastcall xxxActiveWindowTracking(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 ActiveTrackPwnd; // rax
  struct tagWND *v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v15; // eax
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL);
  v17 = v6;
  v7 = *(_DWORD *)(v6 + 340);
  if ( (v7 & 0x200000) == 0 )
    return 0LL;
  *(_DWORD *)(v6 + 340) = v7 & 0xFFDFFFFF;
  if ( (unsigned int)IsForegroundLocked() )
    return 0LL;
  ActiveTrackPwnd = GetActiveTrackPwnd((struct tagWND *)a1, &v17);
  v10 = (struct tagWND *)ActiveTrackPwnd;
  if ( !ActiveTrackPwnd )
    return 0LL;
  if ( a1 != ActiveTrackPwnd )
  {
    v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v16;
    v16[1] = ActiveTrackPwnd;
    ++*(_DWORD *)(ActiveTrackPwnd + 8);
  }
  v11 = xxxSendMessage(ActiveTrackPwnd, 33, *(_QWORD *)ActiveTrackPwnd, a3 | (a2 << 16));
  v14 = v11;
  if ( v11 <= 0 )
    goto LABEL_10;
  if ( v11 <= 2 )
  {
    if ( v17 == gpqForeground )
      v15 = xxxActivateThisWindow(v10, 0LL, ~(unsigned __int8)((unsigned int)gpdwCPUserPreferencesMask >> 3) & 8, 0);
    else
      v15 = xxxSetForegroundWindow2(
              (LARGE_INTEGER *)v10,
              0LL,
              ~(unsigned __int8)((unsigned int)gpdwCPUserPreferencesMask >> 4) & 4 | 2u,
              0);
    if ( v15 && v14 != 2 )
      goto LABEL_11;
    goto LABEL_19;
  }
  if ( v11 == 4 )
  {
LABEL_19:
    v14 = 1;
    goto LABEL_11;
  }
LABEL_10:
  v14 = 0;
LABEL_11:
  if ( (struct tagWND *)a1 != v10 )
    ThreadUnlock1(v13, v12);
  return v14;
}
