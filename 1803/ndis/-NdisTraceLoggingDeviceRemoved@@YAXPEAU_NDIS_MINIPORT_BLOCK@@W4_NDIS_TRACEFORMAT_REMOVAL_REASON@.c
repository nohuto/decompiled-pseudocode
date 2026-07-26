/*
 * XREFs of ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C00127CC
 * Callers:
 *     ndisPnPIrpRemoveDevice @ 0x1C00B1B84 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EE11C (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00EE2C8 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00EE6D8 (ndisWdfPreReleaseHardware.c)
 *     ndisPmHaltMiniport @ 0x1C010FD6C (ndisPmHaltMiniport.c)
 * Callees:
 *     _TlgWrite @ 0x1C0012C84 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C001EF44 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 */

void NdisTraceLoggingDeviceRemoved()
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  __int64 v2; // r10
  int v3; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  __int64 v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      v7 = 0;
      v10 = 0;
      v5 = &v3;
      v8 = v2 + 4032;
      v3 = (int)v1;
      v6 = 4;
      v9 = 16;
      TlgWrite(&hProvider, &unk_1C0086348, v0, v1, 4u, &pData);
    }
  }
}
