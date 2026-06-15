/*
 * XREFs of Template_qzq @ 0x1800B9564
 * Callers:
 *     ?Invoke@DEVICE_EVENT@@UEAAXXZ @ 0x1800B8D10 (-Invoke@DEVICE_EVENT@@UEAAXXZ.c)
 *     ServiceDeviceEvent @ 0x1800B92C0 (ServiceDeviceEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_qzq(__int64 a1, __int64 a2, int a3, const wchar_t *a4, char a5)
{
  __int64 v5; // rax
  int v6; // ecx
  _QWORD v8[3]; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+38h] [rbp-28h]
  int v10; // [rsp+3Ch] [rbp-24h]
  char *v11; // [rsp+40h] [rbp-20h]
  __int64 v12; // [rsp+48h] [rbp-18h]
  int v13; // [rsp+80h] [rbp+20h] BYREF

  v13 = a3;
  v8[1] = 4LL;
  v8[0] = &v13;
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
  v9 = v6;
  if ( !a4 )
    a4 = L"NULL";
  v10 = 0;
  v8[2] = a4;
  v11 = &a5;
  v12 = 4LL;
  return EtwEventWrite(Microsoft_Windows_AudioHandle, a2, 3LL, v8);
}
