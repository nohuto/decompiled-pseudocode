/*
 * XREFs of SepDesktopAppModifyTokenBreakaway @ 0x14025E4C4
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x1400198CC (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14001A0A0 (AuthzBasepSetSecurityAttributesToken.c)
 */

__int64 __fastcall SepDesktopAppModifyTokenBreakaway(__int64 a1, _WORD *a2, char a3)
{
  __int64 v3; // rcx
  _DWORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  int *v6; // [rsp+28h] [rbp-38h]
  int v7; // [rsp+30h] [rbp-30h] BYREF
  const wchar_t *v8; // [rsp+38h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-20h]
  __int64 v10; // [rsp+48h] [rbp-18h]
  _WORD *v11; // [rsp+50h] [rbp-10h]
  int v12; // [rsp+80h] [rbp+20h] BYREF

  v7 = 1310738;
  v8 = L"WIN://PKG";
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( a3 == 1 )
    *a2 |= 0x20u;
  else
    *a2 &= ~0x20u;
  v3 = *(_QWORD *)(a1 + 776);
  v11 = a2;
  LOWORD(v9) = 2;
  LODWORD(v10) = 1;
  v6 = &v7;
  v12 = 4;
  v5[0] = 1;
  v5[1] = 1;
  return AuthzBasepSetSecurityAttributesToken(v3, &v12, (__int64)v5);
}
