/*
 * XREFs of xxxActiveWindowTracking @ 0x1C01C11D8
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0096704 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00CF370 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 * Callees:
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     IsForegroundLocked @ 0x1C00CC014 (IsForegroundLocked.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     GetActiveTrackPwnd @ 0x1C01C0854 (GetActiveTrackPwnd.c)
 */

__int64 __fastcall xxxActiveWindowTracking(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 ActiveTrackPwnd; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG_PTR v9; // rdi
  __int64 ThreadWin32Thread; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v15; // eax
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL);
  v17 = v2;
  v3 = *(_DWORD *)(v2 + 380);
  if ( (v3 & 0x200000) == 0 )
    return 0LL;
  *(_DWORD *)(v2 + 380) = v3 & 0xFFDFFFFF;
  if ( (unsigned int)IsForegroundLocked() )
    return 0LL;
  ActiveTrackPwnd = GetActiveTrackPwnd((struct tagWND *)a1, &v17);
  v9 = ActiveTrackPwnd;
  if ( !ActiveTrackPwnd )
    return 0LL;
  if ( a1 != ActiveTrackPwnd )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
    v16[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v16;
    v16[1] = v9;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  }
  v11 = xxxSendMessage(v9);
  v14 = v11;
  if ( v11 <= 0 )
    goto LABEL_10;
  if ( v11 <= 2 )
  {
    if ( v17 == gpqForeground )
      v15 = xxxActivateThisWindow(
              (struct tagWND *)v9,
              0,
              ~(unsigned __int8)((unsigned int)gpdwCPUserPreferencesMask >> 3) & 8,
              0);
    else
      v15 = xxxSetForegroundWindow2(
              (LARGE_INTEGER *)v9,
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
  if ( a1 != v9 )
    ThreadUnlock1(v13, v12);
  return v14;
}
