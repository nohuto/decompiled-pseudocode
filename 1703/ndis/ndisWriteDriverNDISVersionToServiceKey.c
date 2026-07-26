/*
 * XREFs of ndisWriteDriverNDISVersionToServiceKey @ 0x1C00B83FC
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00160A0 (NdisFRegisterFilterDriver.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0020200 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisRegisterProtocolDriver @ 0x1C00B7D70 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C00DC150 (NdisRegisterProtocol.c)
 *     ndisGetMiniportInfo @ 0x1C00DDD7C (ndisGetMiniportInfo.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisWriteDriverNDISVersionToServiceKey(int a1, int a2, char a3, int a4, int a5, __int64 a6)
{
  __int64 v6; // rsi
  const WCHAR *v10; // rdx
  const WCHAR *v11; // rdx
  const WCHAR *v12; // rdx
  int ValueData; // [rsp+60h] [rbp+18h] BYREF

  v6 = a6;
  ValueData = a1;
  RtlWriteRegistryValue(1u, *(PCWSTR *)(a6 + 8), L"NdisMajorVersion", 4u, &ValueData, 4u);
  v10 = *(const WCHAR **)(v6 + 8);
  ValueData = a2;
  RtlWriteRegistryValue(1u, v10, L"NdisMinorVersion", 4u, &ValueData, 4u);
  v11 = *(const WCHAR **)(v6 + 8);
  if ( a3 )
  {
    ValueData = a4;
    RtlWriteRegistryValue(1u, v11, L"DriverMajorVersion", 4u, &ValueData, 4u);
    v12 = *(const WCHAR **)(v6 + 8);
    ValueData = a5;
    return RtlWriteRegistryValue(1u, v12, L"DriverMinorVersion", 4u, &ValueData, 4u);
  }
  else
  {
    RtlDeleteRegistryValue(1u, v11, L"DriverMajorVersion");
    return RtlDeleteRegistryValue(1u, *(PCWSTR *)(v6 + 8), L"DriverMinorVersion");
  }
}
