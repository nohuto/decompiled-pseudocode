/*
 * XREFs of Template_zqttq @ 0x18000B330
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000A9B0 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B110 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     AudioServerGetMixFormat @ 0x18002C9D0 (AudioServerGetMixFormat.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_zqttq(__int64 a1, __int64 a2, const wchar_t *a3, int a4, char a5, char a6, char a7)
{
  __int64 v7; // rax
  int v9; // ecx
  const wchar_t *v11; // [rsp+20h] [rbp-78h] BYREF
  int v12; // [rsp+28h] [rbp-70h]
  int v13; // [rsp+2Ch] [rbp-6Ch]
  int *v14; // [rsp+30h] [rbp-68h]
  __int64 v15; // [rsp+38h] [rbp-60h]
  char *v16; // [rsp+40h] [rbp-58h]
  __int64 v17; // [rsp+48h] [rbp-50h]
  char *v18; // [rsp+50h] [rbp-48h]
  __int64 v19; // [rsp+58h] [rbp-40h]
  char *v20; // [rsp+60h] [rbp-38h]
  __int64 v21; // [rsp+68h] [rbp-30h]
  int v22; // [rsp+B8h] [rbp+20h] BYREF

  v22 = a4;
  if ( a3 )
  {
    v7 = -1LL;
    while ( a3[++v7] != 0 )
      ;
    v9 = 2 * v7 + 2;
  }
  else
  {
    v9 = 10;
    a3 = L"NULL";
  }
  v12 = v9;
  v14 = &v22;
  v11 = a3;
  v13 = 0;
  v16 = &a5;
  v18 = &a6;
  v20 = &a7;
  v15 = 4LL;
  v17 = 4LL;
  v19 = 4LL;
  v21 = 4LL;
  return EtwEventWrite(Microsoft_Windows_AudioHandle, a2, 5LL, &v11);
}
