/*
 * XREFs of ??0?$CComQIPtr@UIPnpDeviceEnumerator@@$1?_GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800BE254
 * Callers:
 *     ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x1800BE474 (-KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z.c)
 *     ?KsNotifications_ServiceStart@@YAJXZ @ 0x1800BE824 (-KsNotifications_ServiceStart@@YAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IPnpDeviceEnumerator,&__s_GUID const _GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0>::CComQIPtr<IPnpDeviceEnumerator,&__s_GUID const _GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0>(
        _QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx

  v2 = *(void (__fastcall ****)(_QWORD, GUID *, _QWORD *))&g_DeviceEnumerator;
  *a1 = 0LL;
  if ( v2 )
    (**v2)(v2, &GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0, a1);
  return a1;
}
