/*
 * XREFs of ndisQuerySetMiniportDeviceState @ 0x1C00B0810
 * Callers:
 *     ndisSetDevicePower @ 0x1C000F884 (ndisSetDevicePower.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 *     ndisQueryPower @ 0x1C0100D1C (ndisQueryPower.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000AE40 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0jqxqqt @ 0x1C0065E50 (McTemplateK0jqxqqt.c)
 *     WPP_SF_qZLLL @ 0x1C0066088 (WPP_SF_qZLLL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C007EA58 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisQuerySetMiniportDeviceState(__int64 a1, int a2, int a3, unsigned __int8 a4)
{
  unsigned int SetMiniport; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v12; // [rsp+20h] [rbp-E0h]
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[248]; // [rsp+60h] [rbp-A0h] BYREF

  v13 = a2;
  memset(v14, 0, sizeof(v14));
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(0x34u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1);
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) != 0 )
  {
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_q(0x35u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1);
    return 0LL;
  }
  else
  {
    memset(v14, 0, sizeof(v14));
    *(_DWORD *)&v14[88] |= 8u;
    *(_QWORD *)&v14[104] = &ndisIntReqGeneric;
    *(_DWORD *)v14 = 15466902;
    *(_DWORD *)&v14[32] = a3;
    *(_DWORD *)&v14[48] = 4;
    *(_DWORD *)&v14[8] = 0;
    *(_DWORD *)&v14[4] = a4 != 0;
    *(_QWORD *)&v14[40] = &v13;
    SetMiniport = ndisQuerySetMiniport((void *)a1, 0LL, (struct _NDIS_OID_REQUEST *)v14, 0LL, 0LL);
    v10 = SetMiniport;
    if ( SetMiniport && SetMiniport != -1073741637 )
    {
      if ( (unsigned __int8)byte_1C0099615 >= 4u )
      {
        LODWORD(v12) = a3;
        WPP_SF_qZLLL(v9, v8, a1, *(const wchar_t **)(a1 + 3880), v12, a4, SetMiniport);
      }
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        McTemplateK0jqxqqt(
          v9,
          v8,
          (const GUID *)(a1 + 4032),
          a1 + 4032,
          *(_DWORD *)(a1 + 4080),
          *(_QWORD *)(a1 + 4048),
          v10,
          a3,
          a4);
    }
    if ( a4 && v10 != -1073741637 && v10 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_qD(0x37u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1, v10);
    return v10;
  }
}
