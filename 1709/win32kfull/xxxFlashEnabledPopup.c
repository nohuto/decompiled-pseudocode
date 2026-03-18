/*
 * XREFs of xxxFlashEnabledPopup @ 0x1C020F4B8
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0096704 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     xxxFlashWindow @ 0x1C0084014 (xxxFlashWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxMessageBeep @ 0x1C013EAE0 (xxxMessageBeep.c)
 *     DWP_GetEnabledPopup @ 0x1C020F330 (DWP_GetEnabledPopup.c)
 */

__int64 __fastcall xxxFlashEnabledPopup(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 EnabledPopup; // rbx
  __int64 ThreadWin32Thread; // rax
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = HIDWORD(gSoundSentry);
  if ( (v4 & 1) == 0 )
  {
    EnabledPopup = DWP_GetEnabledPopup(a1);
    if ( EnabledPopup )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, a3, a4);
      v11[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v11;
      v11[1] = EnabledPopup;
      _InterlockedIncrement((volatile signed __int32 *)(EnabledPopup + 8));
      v7 = (_DWORD *)UPDWORDPointer(8196LL);
      xxxFlashWindow((_QWORD *)EnabledPopup, ((unsigned __int16)*v7 << 16) | 3, *(_DWORD *)(gpsi + 4980LL) >> 3);
      ThreadUnlock1(v9, v8);
    }
  }
  return xxxMessageBeep(0LL, v4, a3, a4);
}
