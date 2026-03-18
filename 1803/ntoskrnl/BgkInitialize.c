/*
 * XREFs of BgkInitialize @ 0x1408E447C
 * Callers:
 *     InbvDriverInitialize @ 0x1408BA654 (InbvDriverInitialize.c)
 * Callees:
 *     BgkpTryEnableConsole @ 0x140165B6C (BgkpTryEnableConsole.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     BgConsoleGetInterface @ 0x14083B4E4 (BgConsoleGetInterface.c)
 *     BgLibraryInitialize @ 0x14083B9D0 (BgLibraryInitialize.c)
 *     BgkpLockBgfxCodeSection @ 0x14083C6B0 (BgkpLockBgfxCodeSection.c)
 *     BgkDestroy @ 0x14083DC74 (BgkDestroy.c)
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
    return byte_1403CDD5C == 0 ? 0xC0000001 : 0;
  if ( !a2 )
  {
    BgkDestroy();
    qword_1403D10F0 = 0LL;
    BgkpLockBgfxCodeSection();
  }
  result = BgLibraryInitialize(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 184LL), a2);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      Interface = BgConsoleGetInterface();
      qword_1403CDD38 = (__int64)Interface;
      if ( Interface )
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))*Interface)(
          (unsigned int)InitConsoleFlags,
          4291217094LL,
          (unsigned int)dword_1403E9BB0,
          0LL);
      v6 = ((__int64 (__fastcall *)(__int64, __int64, int *, char *))off_140397D98[0])(9LL, 4LL, &dword_1403E64C0, &v8);
      v7 = dword_1403E64C0;
      if ( v6 < 0 )
        v7 = 2;
      dword_1403E64C0 = v7;
    }
    byte_1403CDD5C = 1;
    byte_1403CDD5D = 1;
    BgkpTryEnableConsole();
    return 0LL;
  }
  return result;
}
