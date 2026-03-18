/*
 * XREFs of VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14022F970
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x140084C68 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma()
{
  __int64 v0; // rdx
  char v1; // r8
  char v2; // r9
  int v3; // r10d
  NTSTATUS v5; // eax
  char v6; // dl
  _BYTE v7[8]; // [rsp+20h] [rbp-88h] BYREF
  int v8; // [rsp+28h] [rbp-80h]
  char v9; // [rsp+2Ch] [rbp-7Ch]
  char v10; // [rsp+2Dh] [rbp-7Bh]
  char v11; // [rsp+2Eh] [rbp-7Ah]
  int v12; // [rsp+30h] [rbp-78h]

  if ( !HvlQueryVsmConnection(0LL) )
    return -1;
  v9 = v0;
  v10 = v1;
  LOWORD(v0) = 243;
  v11 = v2;
  v8 = v3;
  v12 = 2;
  v5 = VslpEnterIumSecureMode(2u, v0, 0, (__int64)v7);
  v6 = -1;
  if ( v5 >= 0 )
    return v12;
  return v6;
}
