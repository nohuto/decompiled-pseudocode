/*
 * XREFs of ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C00BAED8
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00B6980 (ndisPnPAddDevice.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00B7F90 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBGPEAEW4BooleanDisposition@1@@Z @ 0x1C00BB224 (-QueryValueBoolean@KRegKey@@QEAAJPEBGPEAEW4BooleanDisposition@1@@Z.c)
 *     ?ReadAdditionalNetworkInterfaceParameters@BindRegistry@Ndis@@YAJAEAVKRegKey@@PEAU_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@@Z @ 0x1C00C15C0 (-ReadAdditionalNetworkInterfaceParameters@BindRegistry@Ndis@@YAJAEAVKRegKey@@PEAU_NDIS_INTERFACE.c)
 *     ndisIfReadInterfaceAddDeviceParametersForLWMiniport @ 0x1C00DDA04 (ndisIfReadInterfaceAddDeviceParametersForLWMiniport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 */

__int64 __fastcall KRegKey::QueryValueBoolean(
        KRegKey *this,
        struct _UNICODE_STRING *a2,
        unsigned __int8 *a3,
        enum KRegKey::BooleanDisposition a4)
{
  NTSTATUS v6; // eax
  unsigned __int8 v7; // cl
  ULONG v8; // edx
  int v9; // ebx
  ULONG v11; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v12[6]; // [rsp+38h] [rbp-30h] BYREF

  v6 = ZwQueryValueKey(this->m_ptr, a2, KeyValuePartialInformation, v12, 0x14u, &v11);
  v7 = 0;
  if ( v6 >= 0 )
  {
    if ( v12[1] != 4 || v12[2] != 4 )
    {
      v8 = v11;
      goto LABEL_11;
    }
    v8 = v12[3];
    v6 = 0;
  }
  else
  {
    v8 = v11;
  }
  if ( v6 == -1073741772 )
  {
    if ( a4 == FailIfNotFound )
      return 3221225524LL;
    v9 = a4 - 1;
    if ( !v9 )
    {
LABEL_6:
      *a3 = v7;
      return 0LL;
    }
    if ( v9 != 1 )
      return 3221225524LL;
LABEL_13:
    v7 = 1;
    goto LABEL_6;
  }
LABEL_11:
  if ( !v8 )
    goto LABEL_6;
  if ( v8 == 1 )
    goto LABEL_13;
  return 3221227787LL;
}
