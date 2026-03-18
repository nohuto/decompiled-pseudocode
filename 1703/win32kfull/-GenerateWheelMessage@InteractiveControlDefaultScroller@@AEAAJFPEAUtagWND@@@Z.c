/*
 * XREFs of ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0221A98
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0221680 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagI.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ProcessQueuedMouseEvents @ 0x1C00FF6A4 (ProcessQueuedMouseEvents.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     QueueMouseEvent @ 0x1C01A0984 (QueueMouseEvent.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C0221E10 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C0221ECC (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateWheelMessage(
        InteractiveControlDefaultScroller *this,
        __int16 a2,
        struct tagWND *a3)
{
  int v3; // r15d
  __int64 v4; // r14
  struct tagWND *v8; // rcx
  __int128 v9; // xmm0
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18[2]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+7h] BYREF
  __int128 v20; // [rsp+A8h] [rbp+Fh]

  v3 = *((_DWORD *)this + 14);
  v4 = *((_QWORD *)a3 + 2);
  v19 = 0LL;
  v20 = 0uLL;
  if ( a2 )
  {
    if ( IsCompositionInputWindow(a3) && (v8 = *(struct tagWND **)(*(_QWORD *)(v4 + 384) + 88LL)) != 0LL )
    {
      v9 = *((_OWORD *)v8 + 9);
    }
    else
    {
      v9 = *((_OWORD *)a3 + 8);
      v8 = a3;
    }
    v18[1] = *((_QWORD *)&v9 + 1);
    LODWORD(v18[0]) = v9 + (DWORD2(v9) - (int)v9) / 2;
    HIDWORD(v18[0]) = DWORD1(v9) + (HIDWORD(v9) - DWORD1(v9)) / 2;
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow((__int64)v8);
    LogicalToPhysicalDPIPoint(v18, v18, MonitorFlagsFromWindow, 0LL);
    if ( v3 != 2 || (unsigned int)InteractiveControlDefaultScroller::SendZoomHotkey(this, a2) )
    {
      v11 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      v12 = MilliSecsToQpcCount(v11);
      *(_DWORD *)((char *)&v19 + 2) = 67109120;
      HIWORD(v19) = a2;
      UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
      if ( (gdwMitConfig & 1) != 0 )
      {
        *(_QWORD *)((char *)&v20 + 4) = v18[0];
        SynthesizeMouseInput(0LL, &v19, v11, v12, 65632);
      }
      else
      {
        QueueMouseEvent(
          SWORD2(v19),
          SHIWORD(v19),
          HIDWORD(v20),
          v18[0],
          v11,
          v12,
          0LL,
          (__int64)&v19,
          0LL,
          0,
          1,
          1,
          0,
          1,
          0,
          0,
          0LL,
          0LL);
      }
      ProcessQueuedMouseEvents();
      EnterCrit(0LL, 1LL);
    }
    if ( v3 == 2 )
      InteractiveControlDefaultScroller::SendZoomModifiers(*((_BYTE *)this + 53), 0);
  }
  return 0LL;
}
