/*
 * XREFs of ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C0223364
 * Callers:
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0222FBC (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C022329C (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 * Callees:
 *     xxxSendInput @ 0x1C009CEF0 (xxxSendInput.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall InteractiveControlDefaultScroller::SendZoomModifiers(char a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int8 v6; // al
  __int64 v7; // rbx
  bool v8; // cf
  __int64 v9; // rbp
  unsigned __int16 *v10; // rsi
  int v11; // edi
  __int64 CurrentKbdTables; // rax
  unsigned __int16 v13; // ax
  _QWORD v14[16]; // [rsp+20h] [rbp-98h] BYREF

  memset(v14, 0, 0x78uLL);
  v6 = a1 & 1;
  if ( (a1 & 1) != 0 )
  {
    v5 = 17LL;
    LOWORD(v14[1]) = 17;
  }
  v7 = v6;
  if ( (a1 & 2) != 0 )
  {
    v5 = 5LL * v6;
    LOWORD(v14[5 * v6 + 1]) = 18;
    v7 = (unsigned int)v6 + 1;
  }
  if ( (a1 & 4) != 0 )
  {
    v5 = 5 * v7;
    LOWORD(v14[5 * v7 + 1]) = 16;
    LODWORD(v7) = v7 + 1;
  }
  if ( (_DWORD)v7 )
  {
    v8 = a2 != 0;
    v9 = (unsigned int)v7;
    v10 = (unsigned __int16 *)&v14[1];
    v11 = v8 ? 0 : 2;
    do
    {
      *((_DWORD *)v10 - 2) = 1;
      CurrentKbdTables = GetCurrentKbdTables(v5, v4);
      v13 = InternalMapVirtualKeyEx(*v10, 0LL, CurrentKbdTables);
      *((_DWORD *)v10 + 1) = v11;
      v10[1] = v13;
      v10 += 20;
      --v9;
    }
    while ( v9 );
    xxxSendInput(v7, (__int64)v14);
  }
}
