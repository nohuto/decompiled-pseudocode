/*
 * XREFs of ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C00B0F6C
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00A9500 (ndisPnPAddDevice.c)
 *     ?ReadAdditionalNetworkInterfaceParameters@BindRegistry@Ndis@@YAJAEAVKRegKey@@PEAU_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@@Z @ 0x1C00AD960 (-ReadAdditionalNetworkInterfaceParameters@BindRegistry@Ndis@@YAJAEAVKRegKey@@PEAU_NDIS_INTERFACE.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00AFC10 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00AFE40 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

__int64 __fastcall KRegKey::QueryValueBoolean(
        KRegKey *this,
        struct _UNICODE_STRING *a2,
        unsigned __int8 *a3,
        enum KRegKey::BooleanDisposition a4)
{
  NTSTATUS v6; // eax
  ULONG v7; // ecx
  int v8; // ebx
  ULONG v10; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v11[6]; // [rsp+38h] [rbp-30h] BYREF

  v6 = ZwQueryValueKey(this->m_ptr, a2, KeyValuePartialInformation, v11, 0x14u, &v10);
  if ( v6 >= 0 )
  {
    if ( v11[1] != 4 || v11[2] != 4 )
    {
      v7 = v10;
      goto LABEL_12;
    }
    v7 = v11[3];
    v6 = 0;
  }
  else
  {
    v7 = v10;
  }
  if ( v6 == -1073741772 )
  {
    if ( a4 == FailIfNotFound )
      return 3221225524LL;
    v8 = a4 - 1;
    if ( !v8 )
    {
LABEL_6:
      *a3 = 0;
      return 0LL;
    }
    if ( v8 != 1 )
      return 3221225524LL;
LABEL_14:
    *a3 = 1;
    return 0LL;
  }
LABEL_12:
  if ( !v7 )
    goto LABEL_6;
  if ( v7 == 1 )
    goto LABEL_14;
  return 3221227787LL;
}
