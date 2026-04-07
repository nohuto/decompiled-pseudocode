/*
 * XREFs of ?RecordAppName@CDwmWinSqm@@QEAAXPEAGK@Z @ 0x1800863C0
 * Callers:
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18008657C (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 */

void __fastcall CDwmWinSqm::RecordAppName(CDwmWinSqm *this, unsigned __int16 *a2, unsigned int a3)
{
  const wchar_t *v5; // rax
  const wchar_t *v6; // rax
  int v7; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v8; // [rsp+28h] [rbp-D8h] BYREF
  int v9; // [rsp+30h] [rbp-D0h]
  const wchar_t *v10; // [rsp+38h] [rbp-C8h]
  int v11; // [rsp+40h] [rbp-C0h]
  const wchar_t *v12; // [rsp+48h] [rbp-B8h]
  _WORD v13[64]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v14[64]; // [rsp+D0h] [rbp-30h] BYREF

  memset_0(v13, 0, sizeof(v13));
  memset_0(v14, 0, sizeof(v14));
  memset_0(&v8, 0, 0x28uLL);
  if ( !a2 || !*a2 )
    a2 = L"(null)";
  v5 = v13;
  v8 = a2;
  if ( !v13[0] )
    v5 = L"(null)";
  v7 = 2;
  v10 = v5;
  v9 = 2;
  v6 = v14;
  if ( !v14[0] )
    v6 = L"(null)";
  v11 = 2;
  v12 = v6;
  WinSqmAddToStream(0LL, a3, 3LL, &v7);
}
