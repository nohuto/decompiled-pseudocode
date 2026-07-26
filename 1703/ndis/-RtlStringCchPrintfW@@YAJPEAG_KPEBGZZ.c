/*
 * XREFs of ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00169DC
 * Callers:
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00A929C (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00AD3E4 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00AD630 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00AED00 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00AFE40 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C00BCB94 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00DB224 (ndisGetOrCreateFilterInstanceKey.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00DF04C (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00F0B44 (-ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisBindReadProtocolDriverFromV1Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00F1230 (-ndisBindReadProtocolDriverFromV1Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 RtlStringCchPrintfW(wchar_t *Dest, __int64 a2, const unsigned __int16 *a3, ...)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( a2 )
      *Dest = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = _vsnwprintf(Dest, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      Dest[v5] = 0;
      return (unsigned int)-2147483643;
    }
    else if ( v6 == v5 )
    {
      Dest[v5] = 0;
    }
  }
  return (unsigned int)v4;
}
