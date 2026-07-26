/*
 * XREFs of ndisQuerySetMiniportDeviceState @ 0x1C00C6640
 * Callers:
 *     ndisSetDevicePower @ 0x1C001FA4C (ndisSetDevicePower.c)
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C01058B0 (ndisDevicePowerDown.c)
 *     ndisQueryPower @ 0x1C0105B58 (ndisQueryPower.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C0009A28 (ndisQuerySetMiniport.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00220E8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     McTemplateK0jqxqqt @ 0x1C0065330 (McTemplateK0jqxqqt.c)
 *     WPP_SF_qZLLL @ 0x1C0065560 (WPP_SF_qZLLL.c)
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
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(0x34u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a1);
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) != 0 )
  {
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_q(0x35u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a1);
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
      if ( (unsigned __int8)byte_1C0098755 >= 4u )
      {
        LODWORD(v12) = a3;
        WPP_SF_qZLLL(a4, v8, a1, *(const wchar_t **)(a1 + 3880), v12, a4, SetMiniport);
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
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_qD(0x37u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a1, v10);
    return v10;
  }
}
