/*
 * XREFs of SepDesktopAppModifyTokenBreakaway @ 0x14029FF4C
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x14006EBC0 (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14006BBD4 (AuthzBasepSetSecurityAttributesToken.c)
 */

__int64 __fastcall SepDesktopAppModifyTokenBreakaway(__int64 a1, _WORD *a2, char a3)
{
  __int16 v3; // ax
  __int16 v4; // ax
  __int64 v5; // rcx
  _DWORD v7[2]; // [rsp+20h] [rbp-40h] BYREF
  int *v8; // [rsp+28h] [rbp-38h]
  int v9; // [rsp+30h] [rbp-30h] BYREF
  const wchar_t *v10; // [rsp+38h] [rbp-28h]
  __int64 v11; // [rsp+40h] [rbp-20h]
  __int64 v12; // [rsp+48h] [rbp-18h]
  _WORD *v13; // [rsp+50h] [rbp-10h]
  int v14; // [rsp+80h] [rbp+20h] BYREF

  v9 = 1310738;
  v10 = L"WIN://PKG";
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v3 = *a2;
  if ( a3 == 1 )
    v4 = v3 | 0x20;
  else
    v4 = v3 & 0xFFDF;
  *a2 = v4;
  v5 = *(_QWORD *)(a1 + 776);
  LOWORD(v11) = 2;
  v13 = a2;
  v8 = &v9;
  LODWORD(v12) = 1;
  v14 = 4;
  v7[0] = 1;
  v7[1] = 1;
  return AuthzBasepSetSecurityAttributesToken(v5, &v14, (__int64)v7);
}
