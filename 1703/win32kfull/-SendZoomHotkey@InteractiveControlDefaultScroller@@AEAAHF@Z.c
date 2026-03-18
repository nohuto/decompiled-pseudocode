/*
 * XREFs of ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C0221E10
 * Callers:
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0221A98 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 * Callees:
 *     xxxSendInput @ 0x1C003B1F0 (xxxSendInput.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C0221ECC (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::SendZoomHotkey(
        InteractiveControlDefaultScroller *this,
        __int16 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int16 v7; // bx
  __int64 CurrentKbdTables; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  _OWORD v12[5]; // [rsp+20h] [rbp-50h] BYREF

  v4 = 1;
  InteractiveControlDefaultScroller::SendZoomModifiers(*((_BYTE *)this + 53), 1);
  if ( *((_BYTE *)this + 52) != 2 )
  {
    memset(v12, 0, sizeof(v12));
    v7 = 187;
    LODWORD(v12[0]) = 1;
    v4 = 0;
    if ( a2 < 0 )
      v7 = 189;
    WORD4(v12[0]) = v7;
    CurrentKbdTables = GetCurrentKbdTables(v6, v5);
    WORD5(v12[0]) = InternalMapVirtualKeyEx(v7, 0LL, CurrentKbdTables);
    *(_OWORD *)((char *)&v12[2] + 8) = v12[0];
    DWORD1(v12[3]) = 2;
    *((_QWORD *)&v12[4] + 1) = *(_QWORD *)&v12[2];
    *(_OWORD *)((char *)&v12[3] + 8) = v12[1];
    xxxSendInput(2u, (__int64)v12, v9, v10);
  }
  return v4;
}
