/*
 * XREFs of ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0222FBC
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0222B94 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagI.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0061FD0 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C022329C (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C0223364 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateWheelMessage(
        InteractiveControlDefaultScroller *this,
        __int16 a2,
        struct tagWND *a3)
{
  int v3; // r15d
  __int64 v6; // r11
  __int64 v7; // r8
  __int128 v8; // xmm0
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  __int128 v16; // [rsp+48h] [rbp-18h]

  v3 = *((_DWORD *)this + 14);
  v15 = 0LL;
  v16 = 0uLL;
  if ( a2 )
  {
    if ( (unsigned int)IsCompositionInputWindow(a3)
      && (v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 408LL) + 120LL)) != 0 )
    {
      v8 = *(_OWORD *)(v7 + 144);
    }
    else
    {
      v8 = *(_OWORD *)(v6 + 128);
      v7 = v6;
    }
    v14[1] = *((_QWORD *)&v8 + 1);
    LODWORD(v14[0]) = v8 + (DWORD2(v8) - (int)v8) / 2;
    HIDWORD(v14[0]) = DWORD1(v8) + (HIDWORD(v8) - DWORD1(v8)) / 2;
    LogicalToPhysicalDPIPoint(v14, v14, *(unsigned int *)(v7 + 368), 0LL);
    if ( v3 != 2 || (unsigned int)InteractiveControlDefaultScroller::SendZoomHotkey(this, a2) )
    {
      v9 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      v10 = MilliSecsToQpcCount(v9);
      *(_DWORD *)((char *)&v15 + 2) = 67109120;
      HIWORD(v15) = a2;
      UserSessionSwitchLeaveCrit(v12, v11);
      *(_QWORD *)((char *)&v16 + 4) = v14[0];
      SynthesizeMouseInput(0LL, &v15, v9, v10, 65632);
      ProcessMouseEvent();
      EnterCrit(0LL, 1LL);
    }
    if ( v3 == 2 )
      InteractiveControlDefaultScroller::SendZoomModifiers(*((_BYTE *)this + 53), 0);
  }
  return 0LL;
}
