/*
 * XREFs of BgkInitialize @ 0x14086FB18
 * Callers:
 *     InbvDriverInitialize @ 0x140832D94 (InbvDriverInitialize.c)
 * Callees:
 *     BgkpTryEnableConsole @ 0x14013ED70 (BgkpTryEnableConsole.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     BgConsoleGetInterface @ 0x1407CE5F0 (BgConsoleGetInterface.c)
 *     BgLibraryInitialize @ 0x1407D088C (BgLibraryInitialize.c)
 *     BgkpLockBgfxCodeSection @ 0x1407D0C80 (BgkpLockBgfxCodeSection.c)
 *     BgkDestroy @ 0x1407D0D0C (BgkDestroy.c)
 */

__int64 __fastcall BgkInitialize(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 (__fastcall **Interface)(); // rax
  int v6; // eax
  int v7; // ecx
  char v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225473LL;
  if ( a2 == 1 )
    return byte_140389F20 == 0 ? 0xC0000001 : 0;
  if ( !a2 )
  {
    BgkDestroy();
    qword_14038CE00 = 0LL;
    BgkpLockBgfxCodeSection();
  }
  result = BgLibraryInitialize(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 184LL), a2);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      Interface = BgConsoleGetInterface();
      qword_140389F08 = (__int64)Interface;
      if ( Interface )
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))*Interface)(
          (unsigned int)InitConsoleFlags,
          4291217094LL,
          (unsigned int)dword_1403A3670,
          0LL);
      v6 = ((__int64 (__fastcall *)(__int64, __int64, int *, char *))off_140354F48[0])(9LL, 4LL, &dword_1403A1E28, &v8);
      v7 = dword_1403A1E28;
      if ( v6 < 0 )
        v7 = 2;
      dword_1403A1E28 = v7;
    }
    byte_140389F20 = 1;
    byte_140389F22 = 1;
    BgkpTryEnableConsole();
    return 0LL;
  }
  return result;
}
