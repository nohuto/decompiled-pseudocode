/*
 * XREFs of ?QueryInterface@EndpointDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180057800
 * Callers:
 *     ?CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x18005528C (-CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::QueryInterface(EndpointDevice *this, const struct _GUID *a2, void **a3)
{
  EndpointDevice *v3; // rcx
  __int64 (__fastcall *v4)(EndpointDevice *__hidden, const struct _GUID *, void **); // rax

  v3 = (EndpointDevice *)*((_QWORD *)this + 2);
  v4 = **(__int64 (__fastcall ***)(EndpointDevice *__hidden, const struct _GUID *, void **))v3;
  if ( v4 == EndpointDevice::NonDelegatingQueryInterface )
    return EndpointDevice::NonDelegatingQueryInterface(v3, a2, a3);
  else
    return v4(v3, a2, a3);
}
