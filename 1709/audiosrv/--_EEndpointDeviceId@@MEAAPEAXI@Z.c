/*
 * XREFs of ??_EEndpointDeviceId@@MEAAPEAXI@Z @ 0x1800ECECC
 * Callers:
 *     ??_EEndpointDeviceId@@O7EAAPEAXI@Z @ 0x180037AD0 (--_EEndpointDeviceId@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

EndpointDeviceId *__fastcall EndpointDeviceId::`vector deleting destructor'(EndpointDeviceId *this, char a2)
{
  *(_QWORD *)this = &EndpointDeviceId::`vftable'{for `IEndpointDeviceId'};
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
