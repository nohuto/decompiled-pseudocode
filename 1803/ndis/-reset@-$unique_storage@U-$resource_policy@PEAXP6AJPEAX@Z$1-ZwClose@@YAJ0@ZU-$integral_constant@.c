/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C001F110
 * Callers:
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C00B5340 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 *     ndisPnPAddDevice @ 0x1C00B6980 (ndisPnPAddDevice.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x1C00BAF9C (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     ?ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C3724 (-ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00C3820 (ndisCheckNetworkInterfaceDataMismatch.c)
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00ED8EC (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z @ 0x1C00FDC1C (-ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v4; // rcx
  NTSTATUS result; // eax

  v4 = *a1;
  if ( v4 )
    result = ZwClose(v4);
  *a1 = a2;
  return result;
}
