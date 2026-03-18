/*
 * XREFs of BcpDisplayEarlyBugCheckScreen @ 0x140838C80
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x1402674B4 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     BgConsoleGetInterface @ 0x140755EA8 (BgConsoleGetInterface.c)
 *     BgConsoleDestroyInterface @ 0x140758AC0 (BgConsoleDestroyInterface.c)
 */

__int64 __fastcall BcpDisplayEarlyBugCheckScreen(unsigned int a1, _QWORD *a2, __int64 a3)
{
  __int64 (__fastcall **Interface)(); // rax
  __int64 (__fastcall **v7)(); // rbx
  __int64 v8; // r8
  int v9; // r9d
  unsigned __int8 v10; // al
  __int64 v11; // rcx
  __int16 v12; // dx
  _QWORD *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // r8
  int v16; // r9d
  unsigned __int8 v17; // al
  __int64 v18; // rcx
  __int16 v19; // dx

  Interface = BgConsoleGetInterface();
  v7 = Interface;
  if ( Interface )
  {
    if ( ((int (__fastcall *)(__int64, __int64, __int64, _QWORD))*Interface)(2LL, 0xFFFFFFFFLL, 4278190080LL, 0LL) >= 0 )
    {
      v7[1]();
      ((void (__fastcall *)(const wchar_t *))v7[3])(L"Your PC needs to restart.\r\n");
      ((void (__fastcall *)(const wchar_t *))v7[3])(L"Please hold down the power button.\r\n");
      ((void (__fastcall *)(const wchar_t *))v7[3])(L"Error Code:");
      ((void (__fastcall *)(const wchar_t *))v7[3])(L" ");
      LODWORD(v8) = 2;
      v9 = 28;
      **(_WORD **)(a3 + 24) = 48;
      *(_WORD *)(*(_QWORD *)(a3 + 24) + 2LL) = 120;
      do
      {
        v10 = (a1 >> v9) & 0xF;
        v11 = (unsigned int)v8;
        if ( v10 >= 0xAu )
          v12 = (unsigned __int8)(v10 - 10) + 65;
        else
          v12 = v10 + 48;
        v8 = (unsigned int)(v8 + 1);
        v9 -= 4;
        *(_WORD *)(*(_QWORD *)(a3 + 24) + 2 * v11) = v12;
      }
      while ( v9 >= 0 );
      *(_WORD *)(*(_QWORD *)(a3 + 24) + 2 * v8) = 0;
      ((void (__fastcall *)(_QWORD))v7[3])(*(_QWORD *)(a3 + 24));
      ((void (__fastcall *)(const WCHAR *))v7[3])(L"\r\n");
      ((void (__fastcall *)(const wchar_t *))v7[3])(L"Parameters:");
      ((void (__fastcall *)(const WCHAR *))v7[3])(L"\r\n");
      v13 = (_QWORD *)(a3 + 40);
      v14 = 4LL;
      do
      {
        *(_WORD *)*v13 = 48;
        LODWORD(v15) = 2;
        v16 = 60;
        *(_WORD *)(*v13 + 2LL) = 120;
        do
        {
          v17 = (*a2 >> v16) & 0xF;
          v18 = (unsigned int)v15;
          if ( v17 >= 0xAu )
            v19 = (unsigned __int8)(v17 - 10) + 65;
          else
            v19 = v17 + 48;
          v15 = (unsigned int)(v15 + 1);
          v16 -= 4;
          *(_WORD *)(*v13 + 2 * v18) = v19;
        }
        while ( v16 >= 0 );
        *(_WORD *)(*v13 + 2 * v15) = 0;
        ((void (__fastcall *)(_QWORD))v7[3])(*v13);
        ((void (__fastcall *)(const WCHAR *))v7[3])(L"\r\n");
        ++a2;
        v13 += 2;
        --v14;
      }
      while ( v14 );
    }
    BgConsoleDestroyInterface(v7);
  }
  return 0LL;
}
