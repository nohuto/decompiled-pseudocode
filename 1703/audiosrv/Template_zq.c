/*
 * XREFs of Template_zq @ 0x1800467E4
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x180035840 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180035B70 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CAC0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_zq(__int64 a1, __int64 a2, const wchar_t *a3, int a4)
{
  __int64 v4; // rax
  int v5; // ecx
  const wchar_t *v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-30h]
  int v9; // [rsp+2Ch] [rbp-2Ch]
  int *v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = a4;
  if ( a3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a3[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v8 = v5;
  if ( !a3 )
    a3 = L"NULL";
  v9 = 0;
  v7 = a3;
  v10 = &v12;
  v11 = 4LL;
  return EtwEventWrite(Microsoft_Windows_AudioHandle, a2, 2LL, &v7);
}
