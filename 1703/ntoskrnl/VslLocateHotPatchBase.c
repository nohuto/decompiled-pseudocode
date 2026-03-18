/*
 * XREFs of VslLocateHotPatchBase @ 0x1401ED4EC
 * Callers:
 *     MiLocateHotPatchBase @ 0x1406B5678 (MiLocateHotPatchBase.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
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
  result = VslpEnterIumSecureMode(1, 53LL, 0LL, (__int64)v7);
  if ( result >= 0 )
  {
    *a3 = v9;
    *a4 = v10;
  }
  return result;
}
