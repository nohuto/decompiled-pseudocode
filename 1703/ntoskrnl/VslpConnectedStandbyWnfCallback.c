/*
 * XREFs of VslpConnectedStandbyWnfCallback @ 0x1406885C0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x140457810 (ExQueryWnfStateData.c)
 */

NTSTATUS __fastcall VslpConnectedStandbyWnfCallback(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v2; // rax
  unsigned int v3; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v4[8]; // [rsp+28h] [rbp-B0h] BYREF
  _QWORD v5[2]; // [rsp+30h] [rbp-A8h] BYREF
  char v6; // [rsp+40h] [rbp-98h]
  _BYTE v7[12]; // [rsp+50h] [rbp-88h] BYREF
  int v8; // [rsp+5Ch] [rbp-7Ch]

  v3 = 20;
  result = ExQueryWnfStateData(a1, (__int64)v4, (__int64)v5, &v3);
  if ( result >= 0 )
  {
    v2 = v5[0] - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( v5[0] == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v2 = v5[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    v7[8] = v2 == 0;
    v7[9] = v6;
    v8 = 0;
    return VslpEnterIumSecureMode(1, 47LL, 0LL, (__int64)v7);
  }
  return result;
}
