/*
 * XREFs of xxxSoundSentry @ 0x1C012362C
 * Callers:
 *     NtUserSoundSentry @ 0x1C000D2A0 (NtUserSoundSentry.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     xxxMessageBeep @ 0x1C013EAE0 (xxxMessageBeep.c)
 *     xxxOldMessageBeep @ 0x1C01A1DD4 (xxxOldMessageBeep.c)
 *     UserBeep @ 0x1C01A1E74 (UserBeep.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C001D870 (NtGdiPatBlt.c)
 *     GetPrimaryMonitorRect @ 0x1C0049BEC (GetPrimaryMonitorRect.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     xxxFlashWindow @ 0x1C0084014 (xxxFlashWindow.c)
 *     InternalSetTimer @ 0x1C0087850 (InternalSetTimer.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     GreTransformPoints @ 0x1C00F5EFC (GreTransformPoints.c)
 *     GetScreenRect @ 0x1C013FD78 (GetScreenRect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     GreEnableAppContainerRestriction @ 0x1C024C044 (GreEnableAppContainerRestriction.c)
 */

__int64 __fastcall xxxSoundSentry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  __m128i v8; // xmm6
  __int64 v9; // rax
  __int64 v10; // rax
  HDC v11; // rdi
  __int64 v12; // rcx
  __int64 DesktopWindow; // rax
  HDC DCEx; // rbx
  __int64 v15; // rcx
  HDC v16; // rcx
  __int128 v17; // xmm0
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD v21[3]; // [rsp+38h] [rbp-9h] BYREF
  _BYTE v22[16]; // [rsp+50h] [rbp+Fh] BYREF
  __int128 v23; // [rsp+60h] [rbp+1Fh] BYREF
  struct tagRECT v24; // [rsp+70h] [rbp+2Fh] BYREF

  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    v4 = 50LL;
LABEL_3:
    UserSetLastError(v4, a2);
    return 0LL;
  }
  if ( gpqForeground )
  {
    v6 = *(_QWORD *)(gpqForeground + 120LL);
    if ( v6 )
    {
      if ( !gtmridSoundSentry )
      {
        if ( (unsigned int)(*((_DWORD *)&gSoundSentry + 8) - 1) <= 2 )
        {
          v7 = *(unsigned int *)(gpsi + 4980LL);
          gdwCurrentEffect = *((_DWORD *)&gSoundSentry + 8);
          if ( (int)v7 < 1 )
            v7 = 1200LL;
          ghwndSoundSentry = *(HWND *)v6;
          gtmridSoundSentry = InternalSetTimer(0LL, 0LL, v7, (__int64)SoundSentryTimer, 0, 20);
          if ( !gtmridSoundSentry )
          {
            v4 = 170LL;
            goto LABEL_3;
          }
        }
        switch ( *((_DWORD *)&gSoundSentry + 8) )
        {
          case 1:
            ThreadWin32Thread = W32GetThreadWin32Thread(
                                  (__int64)KeGetCurrentThread(),
                                  (unsigned int)(*((_DWORD *)&gSoundSentry + 8) - 1),
                                  a3,
                                  a4);
            v21[0] = *(_QWORD *)(ThreadWin32Thread + 392);
            *(_QWORD *)(ThreadWin32Thread + 392) = v21;
            v21[1] = v6;
            _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
            xxxFlashWindow((_QWORD *)v6, 3u, 0);
            ThreadUnlock1(v20, v19);
            return 1LL;
          case 2:
            if ( (unsigned int)IsWindowDesktopComposed(v6) )
            {
              v24 = *(struct tagRECT *)(v6 + 128);
              LogicalToPhysicalDPIRect(&v24, &v24, *(unsigned int *)(v6 + 368), 0LL);
              grcScreenFlash = v24;
              DesktopWindow = GetDesktopWindow(v6);
              DCEx = (HDC)_GetDCEx(DesktopWindow, 0LL, 3LL);
              GreEnableAppContainerRestriction(0LL);
              if ( gdwInAtomicOperation )
              {
                v15 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v15, gdwInAtomicOperation);
              NtGdiPatBlt(DCEx, v24.left, v24.top, v24.right - v24.left, v24.bottom - v24.top, 5570569);
              EnterCrit(0LL, 1LL);
              GreEnableAppContainerRestriction(1LL);
              v16 = DCEx;
              goto LABEL_31;
            }
            v11 = (HDC)_GetDCEx(v6, 0LL, 65537LL);
            if ( (*(_WORD *)(v6 + 82) & 0x3FFF) == 0x29D )
              v17 = *GetPrimaryMonitorRect(&v23);
            else
              v17 = *(_OWORD *)(v6 + 128);
            v24.right = DWORD2(v17) - v17;
            v24.bottom = HIDWORD(v17) - DWORD1(v17);
            *(_QWORD *)&v24.left = 0LL;
            GreTransformPoints(v11, (struct _POINTL *)&v24, (struct _POINTL *)&v24, 2, 0);
            GreEnableAppContainerRestriction(0LL);
            goto LABEL_29;
          case 3:
            v8 = *(__m128i *)GetScreenRect(v22);
            v9 = GetDesktopWindow(v6);
            v10 = _GetDCEx(v9, 0LL, 3LL);
            *(_QWORD *)&v24.left = 0LL;
            v11 = (HDC)v10;
            v24.right = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) - _mm_cvtsi128_si32(v8);
            v24.bottom = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
            GreEnableAppContainerRestriction(0LL);
            if ( (unsigned int)IsWindowDesktopComposed(v6) )
            {
              if ( gdwInAtomicOperation )
              {
                v12 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v12, gdwInAtomicOperation);
              NtGdiPatBlt(v11, v24.left, v24.top, v24.right - v24.left, v24.bottom - v24.top, 5570569);
              EnterCrit(0LL, 1LL);
              goto LABEL_30;
            }
LABEL_29:
            NtGdiPatBlt(v11, v24.left, v24.top, v24.right - v24.left, v24.bottom - v24.top, 5570569);
LABEL_30:
            GreEnableAppContainerRestriction(1LL);
            v16 = v11;
LABEL_31:
            _ReleaseDC(v16);
            break;
        }
      }
    }
  }
  return 1LL;
}
