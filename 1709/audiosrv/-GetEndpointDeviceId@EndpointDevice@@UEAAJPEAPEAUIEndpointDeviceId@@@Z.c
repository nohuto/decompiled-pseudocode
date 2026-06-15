/*
 * XREFs of ?GetEndpointDeviceId@EndpointDevice@@UEAAJPEAPEAUIEndpointDeviceId@@@Z @ 0x1800E94E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EndpointDevice::GetEndpointDeviceId(EndpointDevice *this, struct IEndpointDeviceId **a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  if ( a2 )
  {
    *a2 = (struct IEndpointDeviceId *)*((_QWORD *)this + 5);
    v3 = *((_QWORD *)this + 5);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
