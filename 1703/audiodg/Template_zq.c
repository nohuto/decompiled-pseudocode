/*
 * XREFs of Template_zq @ 0x14001AE44
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001A900 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
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
  return ((__int64 (__fastcall *)(REGHANDLE, void *, __int64, const wchar_t **))EtwEventWrite)(
           Microsoft_Windows_AudioHandle,
           &CreateDeviceEndpointInstance_Task_Start,
           2LL,
           &v7);
}
