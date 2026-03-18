/*
 * XREFs of ?ProcessMouseInputViaRim@@YAXPEAUDEVICEINFO@@PEAXK1@Z @ 0x1C019CEF8
 * Callers:
 *     xxxDesktopThread @ 0x1C00C7B20 (xxxDesktopThread.c)
 * Callees:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00BBE1C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C019C500 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     MonotonicTick @ 0x1C01A0938 (MonotonicTick.c)
 *     QueueMouseEvent @ 0x1C01A0984 (QueueMouseEvent.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C01A8160 (FindRimDevBackedDeviceInfo.c)
 *     TPAAPShouldAllowNow @ 0x1C01B116C (TPAAPShouldAllowNow.c)
 *     StopFade @ 0x1C01C2190 (StopFade.c)
 */

void __fastcall ProcessMouseInputViaRim(struct DEVICEINFO *a1, unsigned int *a2, unsigned int a3, void *a4)
{
  __int16 v4; // r12
  __int64 v5; // rsi
  unsigned int *v6; // rbx
  __int64 RimDevBackedDeviceInfo; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r13
  __int64 v14; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 QuadPart; // r14
  __int64 v17; // rsi
  INT v18; // ecx
  __int16 v19; // cx
  int v20; // r9d
  int v21; // [rsp+38h] [rbp-90h]
  struct tagPOINT v22; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+10h] BYREF
  void *v24; // [rsp+E8h] [rbp+20h]

  v24 = a4;
  v22 = (struct tagPOINT)a1;
  v4 = *(_WORD *)a2;
  v5 = a3;
  v6 = a2;
  RimDevBackedDeviceInfo = FindRimDevBackedDeviceInfo(a4, *(_WORD *)a2 == 0xFFFE, 0LL);
  if ( RimDevBackedDeviceInfo )
  {
    v23 = 0LL;
    EtwTraceMouseInputApc();
    if ( (*gpsi & 0x2000) == 0 )
    {
      MonotonicTick();
      if ( !gptiBlockInput )
      {
        if ( (gdwPUDFlags & 0x100) != 0 )
          ResetAccessibilityCountersOnMouseInput();
        if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 && (gfade[12] & 0x80u) != 0 )
        {
          EnterCrit(0LL, 1LL);
          if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
          {
            v10 = gfade[12];
            if ( (v10 & 0x80u) != 0LL )
            {
              StopFade();
              giSonarRadius = -1;
              if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
              {
                if ( gbLastVkForSonar )
                  gbLastVkForSonar = 0;
              }
            }
          }
          UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
        }
        if ( *(int *)(RimDevBackedDeviceInfo + 256) >= 0 )
        {
          v13 = (unsigned __int64)v6 + v5;
          v22 = *(struct tagPOINT *)gptCursorAsync;
          do
          {
            if ( v4 == -2 )
            {
              v14 = UpconvertTime(v6[5], v8);
              PerformanceCounter.QuadPart = MilliSecsToQpcCount(v14);
              v6[5] = 0;
            }
            else
            {
              v14 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
            }
            QuadPart = PerformanceCounter.QuadPart;
            v17 = (unsigned __int64)(v6 + 6) & -(__int64)((unsigned __int64)(v6 + 6) < v13);
            if ( (*((_BYTE *)v6 + 2) & 4) != 0 )
            {
              RIMRefreshDeviceAttributes(aDeviceTemplate[12], v24);
            }
            else
            {
              if ( (v6[1] & 0x2AA) != 0 )
                PoLatencySensitivityHint(0LL);
              v18 = v6[3];
              if ( !v18 && !v6[4] )
                goto LABEL_30;
              GetMouseCoord(
                v18,
                v6[4],
                *((unsigned __int16 *)v6 + 1),
                v14,
                v6[5],
                &v22,
                (struct _SUBPIXELS *)&v23,
                v21,
                v4 == -2,
                *((_WORD *)v6 + 1) & 0x80);
              if ( !v17
                || *((_WORD *)v6 + 2)
                || *(_WORD *)(((unsigned __int64)(v6 + 6) & -(__int64)((unsigned __int64)(v6 + 6) < v13)) + 4)
                || ((*((_BYTE *)v6 + 2) ^ *(_BYTE *)(((unsigned __int64)(v6 + 6) & -(__int64)((unsigned __int64)(v6 + 6) < v13))
                                                   + 2)) & 1) != 0 )
              {
                xxxMoveEventAbsolute(
                  v22.x,
                  v22.y,
                  v6[5],
                  *(_QWORD *)RimDevBackedDeviceInfo,
                  (__int64)v6,
                  v14,
                  QuadPart,
                  v4 == -2,
                  1,
                  1);
                v22 = *(struct tagPOINT *)gptCursorAsync;
LABEL_30:
                if ( (*(_BYTE *)(RimDevBackedDeviceInfo + 732) & 1) != 0 )
                {
                  if ( (v6[1] & 1) != 0 )
                  {
                    if ( (unsigned int)TPAAPShouldAllowNow(4LL, 0LL, 1LL) )
                    {
                      *(_DWORD *)(RimDevBackedDeviceInfo + 740) &= ~1u;
                    }
                    else
                    {
                      *((_WORD *)v6 + 2) &= ~1u;
                      *(_DWORD *)(RimDevBackedDeviceInfo + 740) |= 1u;
                    }
                  }
                  v19 = *((_WORD *)v6 + 2);
                  if ( (v19 & 2) != 0 && (*(_DWORD *)(RimDevBackedDeviceInfo + 740) & 1) != 0 )
                  {
                    *((_WORD *)v6 + 2) = v19 & 0xFFFD;
                    *(_DWORD *)(RimDevBackedDeviceInfo + 740) &= ~1u;
                  }
                }
                if ( v4 != -2 || (v20 = 0, *(_DWORD *)(RimDevBackedDeviceInfo + 392)) )
                  v20 = 1;
                QueueMouseEvent(
                  *((unsigned __int16 *)v6 + 2),
                  *((unsigned __int16 *)v6 + 3),
                  v6[5],
                  *(_DWORD *)gptCursorAsync,
                  v14,
                  QuadPart,
                  *(_QWORD *)RimDevBackedDeviceInfo,
                  (__int64)v6,
                  (__int64)&v23,
                  v4 == -2,
                  ((unsigned __int64)(v6 + 6) & -(__int64)((unsigned __int64)(v6 + 6) < v13)) == 0,
                  v4 == -2,
                  0,
                  v20,
                  0,
                  0,
                  0LL,
                  RimDevBackedDeviceInfo + 384);
              }
            }
            v6 = (unsigned int *)((unsigned __int64)(v6 + 6) & -(__int64)((unsigned __int64)(v6 + 6) < v13));
          }
          while ( v17 );
        }
      }
    }
  }
}
