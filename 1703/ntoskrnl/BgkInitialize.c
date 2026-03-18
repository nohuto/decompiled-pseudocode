/*
 * XREFs of BgkInitialize @ 0x14083795C
 * Callers:
 *     InbvDriverInitialize @ 0x140818F1C (InbvDriverInitialize.c)
 * Callees:
 *     BgkpTryEnableConsole @ 0x140140224 (BgkpTryEnableConsole.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     BgkpLockBgfxCodeSection @ 0x140755680 (BgkpLockBgfxCodeSection.c)
 *     BgConsoleGetInterface @ 0x140755EA8 (BgConsoleGetInterface.c)
 *     BgLibraryInitialize @ 0x140756130 (BgLibraryInitialize.c)
 *     BgkDestroy @ 0x140758A14 (BgkDestroy.c)
 */

__int64 __fastcall BgkInitialize(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 (__fastcall **Interface)(); // rax
  int v6; // eax
  int v7; // ecx
  char v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225473LL;
  if ( a2 == 1 )
    return byte_14036E49C == 0 ? 0xC0000001 : 0;
  if ( !a2 )
  {
    BgkDestroy();
    qword_14036EBD0 = 0LL;
    BgkpLockBgfxCodeSection();
  }
  result = BgLibraryInitialize(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 184LL), a2);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      Interface = BgConsoleGetInterface();
      qword_14036E478 = (__int64)Interface;
      if ( Interface )
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))*Interface)(
          (unsigned int)InitConsoleFlags,
          4291217094LL,
          (unsigned int)dword_1403880D0,
          0LL);
      v6 = ((__int64 (__fastcall *)(__int64, __int64, int *, char *))off_14033C718[0])(9LL, 4LL, &dword_1403869B0, &v8);
      v7 = dword_1403869B0;
      if ( v6 < 0 )
        v7 = 2;
      dword_1403869B0 = v7;
    }
    byte_14036E49C = 1;
    byte_14036E49D = 1;
    BgkpTryEnableConsole();
    return 0LL;
  }
  return result;
}
