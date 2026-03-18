/*
 * XREFs of AcpiIsDeviceSecure @ 0x1C00884E4
 * Callers:
 *     AcpiCheckSecureDevice @ 0x1C008847C (AcpiCheckSecureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     AcpiSearchSdevTable @ 0x1C008865C (AcpiSearchSdevTable.c)
 *     ACPIQueryDeviceBiosName @ 0x1C008BEA0 (ACPIQueryDeviceBiosName.c)
 */

char __fastcall AcpiIsDeviceSecure(__int64 a1)
{
  char v1; // bl
  __int64 v3; // rsi
  __int64 v5; // [rsp+20h] [rbp-48h] BYREF
  PVOID P; // [rsp+28h] [rbp-40h]
  int v7; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v8[12]; // [rsp+34h] [rbp-34h] BYREF
  _BYTE v9[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+48h] [rbp-20h]

  v1 = 0;
  v5 = 0LL;
  P = 0LL;
  if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1447380051LL, 0LL, 0LL);
    if ( v3 )
    {
      if ( (int)ACPIQueryDeviceBiosName(*(_QWORD *)(a1 + 720), &v5) >= 0
        && (unsigned __int8)AcpiSearchSdevTable(v3, &v5, v8) )
      {
        v7 = 3;
        if ( (int)VslQuerySecureDevice(&v7, v9) < 0 )
        {
          v1 = 0;
        }
        else
        {
          v1 = v9[0];
          *(_QWORD *)(a1 + 912) = v10;
        }
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  return v1;
}
