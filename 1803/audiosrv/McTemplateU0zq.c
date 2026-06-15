/*
 * XREFs of McTemplateU0zq @ 0x180049E20
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x1800379F0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x18005C480 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x18005C7B0 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180017BB0 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0zq(__int64 a1, __int128 *a2, const wchar_t *a3, int a4)
{
  __int64 v4; // rax
  int v5; // ecx
  _BYTE v7[16]; // [rsp+20h] [rbp-48h] BYREF
  const wchar_t *v8; // [rsp+30h] [rbp-38h]
  int v9; // [rsp+38h] [rbp-30h]
  int v10; // [rsp+3Ch] [rbp-2Ch]
  int *v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+88h] [rbp+20h] BYREF

  v13 = a4;
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
  v9 = v5;
  v10 = 0;
  if ( !a3 )
    a3 = L"NULL";
  v12 = 4LL;
  v8 = a3;
  v11 = &v13;
  return McGenEventWriteUM(AUDIO_EVENT_PROVIDER_Context, a2, 3LL, (__int64)v7);
}
