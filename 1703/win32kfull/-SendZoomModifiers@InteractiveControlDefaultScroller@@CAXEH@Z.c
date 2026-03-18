/*
 * XREFs of ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C0221ECC
 * Callers:
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0221A98 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C0221E10 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 * Callees:
 *     xxxSendInput @ 0x1C003B1F0 (xxxSendInput.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall InteractiveControlDefaultScroller::SendZoomModifiers(char a1, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // cf
  __int64 v10; // rbp
  unsigned __int16 *v11; // rsi
  int v12; // edi
  __int64 CurrentKbdTables; // rax
  unsigned __int16 v14; // ax
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD v17[16]; // [rsp+20h] [rbp-98h] BYREF

  v4 = 0;
  memset(v17, 0, 0x78uLL);
  if ( (a1 & 1) != 0 )
  {
    LOWORD(v17[1]) = 17;
    v4 = 1;
  }
  if ( (a1 & 2) != 0 )
  {
    v7 = v4++;
    v6 = 5 * v7;
    LOWORD(v17[5 * v7 + 1]) = 18;
  }
  if ( (a1 & 4) != 0 )
  {
    v8 = v4++;
    v6 = 5 * v8;
    LOWORD(v17[5 * v8 + 1]) = 16;
  }
  if ( v4 )
  {
    v9 = a2 != 0;
    v10 = v4;
    v11 = (unsigned __int16 *)&v17[1];
    v12 = v9 ? 0 : 2;
    do
    {
      *((_DWORD *)v11 - 2) = 1;
      CurrentKbdTables = GetCurrentKbdTables(v6, v5);
      v14 = InternalMapVirtualKeyEx(*v11, 0LL, CurrentKbdTables);
      *((_DWORD *)v11 + 1) = v12;
      v11[1] = v14;
      v11 += 20;
      --v10;
    }
    while ( v10 );
    xxxSendInput(v4, (__int64)v17, v15, v16);
  }
}
