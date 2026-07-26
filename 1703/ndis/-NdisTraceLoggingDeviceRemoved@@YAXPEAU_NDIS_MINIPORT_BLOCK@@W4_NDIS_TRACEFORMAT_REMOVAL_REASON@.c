/*
 * XREFs of ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C0025B2C
 * Callers:
 *     ndisPnPIrpStopDevice @ 0x1C00E16DC (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00E1888 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00E1C80 (ndisWdfPreReleaseHardware.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FA6C4 (ndisPnPIrpRemoveDevice.c)
 *     ndisPmHaltMiniport @ 0x1C0104E6C (ndisPmHaltMiniport.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0015A3C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0015A70 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeviceRemoved(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v4; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v6; // [rsp+60h] [rbp-48h]
  int v7; // [rsp+68h] [rbp-40h]
  int v8; // [rsp+6Ch] [rbp-3Ch]
  const struct _TlgProvider_t *v9; // [rsp+70h] [rbp-38h]
  int v10; // [rsp+78h] [rbp-30h]
  int v11; // [rsp+7Ch] [rbp-2Ch]

  if ( (unsigned int)dword_1C0091010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v4;
      v9 = v1 + 63;
      v4 = (int)v3;
      v7 = 4;
      v10 = 16;
      TlgWrite(v1, &unk_1C0080695, v2, v3, 4u, &pData);
    }
  }
}
