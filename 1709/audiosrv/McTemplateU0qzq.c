/*
 * XREFs of McTemplateU0qzq @ 0x1800ACF80
 * Callers:
 *     ?Invoke@DEVICE_EVENT@@UEAAXXZ @ 0x1800AC680 (-Invoke@DEVICE_EVENT@@UEAAXXZ.c)
 *     ServiceDeviceEvent @ 0x1800AD01C (ServiceDeviceEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x18006487C (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0qzq(__int64 a1, __int128 *a2, int a3, const wchar_t *a4, char a5)
{
  __int64 v5; // rax
  int v6; // ecx
  _BYTE v8[16]; // [rsp+20h] [rbp-50h] BYREF
  int *v9; // [rsp+30h] [rbp-40h]
  __int64 v10; // [rsp+38h] [rbp-38h]
  const wchar_t *v11; // [rsp+40h] [rbp-30h]
  int v12; // [rsp+48h] [rbp-28h]
  int v13; // [rsp+4Ch] [rbp-24h]
  char *v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+90h] [rbp+20h] BYREF

  v16 = a3;
  v9 = &v16;
  v10 = 4LL;
  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v12 = v6;
  v13 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v15 = 4LL;
  v11 = a4;
  v14 = &a5;
  return McGenEventWriteUM(AUDIO_EVENT_PROVIDER_Context, a2, 4LL, (__int64)v8);
}
