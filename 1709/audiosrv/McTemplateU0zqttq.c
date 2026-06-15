/*
 * XREFs of McTemplateU0zqttq @ 0x180090734
 * Callers:
 *     AudioServerGetMixFormat @ 0x180012990 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x18001F5A0 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800268C0 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x18006487C (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0zqttq(__int64 a1, __int128 *a2, const wchar_t *a3, int a4, char a5, char a6, char a7)
{
  __int64 v7; // rax
  int v8; // ecx
  _BYTE v10[16]; // [rsp+20h] [rbp-31h] BYREF
  const wchar_t *v11; // [rsp+30h] [rbp-21h]
  int v12; // [rsp+38h] [rbp-19h]
  int v13; // [rsp+3Ch] [rbp-15h]
  int *v14; // [rsp+40h] [rbp-11h]
  __int64 v15; // [rsp+48h] [rbp-9h]
  char *v16; // [rsp+50h] [rbp-1h]
  __int64 v17; // [rsp+58h] [rbp+7h]
  char *v18; // [rsp+60h] [rbp+Fh]
  __int64 v19; // [rsp+68h] [rbp+17h]
  char *v20; // [rsp+70h] [rbp+1Fh]
  __int64 v21; // [rsp+78h] [rbp+27h]
  int v22; // [rsp+B8h] [rbp+67h] BYREF

  v22 = a4;
  if ( a3 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v12 = v8;
  v13 = 0;
  if ( !a3 )
    a3 = L"NULL";
  v15 = 4LL;
  v11 = a3;
  v14 = &v22;
  v17 = 4LL;
  v16 = &a5;
  v19 = 4LL;
  v18 = &a6;
  v21 = 4LL;
  v20 = &a7;
  return McGenEventWriteUM(AUDIO_EVENT_PROVIDER_Context, a2, 6LL, (__int64)v10);
}
