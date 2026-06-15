/*
 * XREFs of ?QueryInterface@EndpointIterator@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EF430
 * Callers:
 *     ?CreateInstance@EndpointDeviceId@@SAJAEBU_GUID@@0KPEAPEAUIEndpointDeviceId@@@Z @ 0x1800ECF04 (-CreateInstance@EndpointDeviceId@@SAJAEBU_GUID@@0KPEAPEAUIEndpointDeviceId@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointIterator::QueryInterface(EndpointIterator *this, const struct _GUID *a2, void **a3)
{
  return (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 2))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}
