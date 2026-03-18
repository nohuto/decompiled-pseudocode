/*
 * XREFs of VslLocateHotPatchBase @ 0x14022FE2C
 * Callers:
 *     MiLocateHotPatchBase @ 0x14074C654 (MiLocateHotPatchBase.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslLocateHotPatchBase(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  NTSTATUS result; // eax
  _BYTE v7[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+30h] [rbp-78h]
  int v10; // [rsp+38h] [rbp-70h]

  v8 = a1;
  v9 = a2;
  result = VslpEnterIumSecureMode(2u, 61LL, 0, (__int64)v7);
  if ( result >= 0 )
  {
    *a3 = v9;
    *a4 = v10;
  }
  return result;
}
