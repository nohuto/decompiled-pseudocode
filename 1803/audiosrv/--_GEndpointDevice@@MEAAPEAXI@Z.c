/*
 * XREFs of ??_GEndpointDevice@@MEAAPEAXI@Z @ 0x1801180A8
 * Callers:
 *     ??_EEndpointDevice@@O7EAAPEAXI@Z @ 0x180066850 (--_EEndpointDevice@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1EndpointDevice@@MEAA@XZ @ 0x180117FCC (--1EndpointDevice@@MEAA@XZ.c)
 */

EndpointDevice *__fastcall EndpointDevice::`scalar deleting destructor'(EndpointDevice *this, char a2)
{
  EndpointDevice::~EndpointDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
