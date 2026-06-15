/*
 * XREFs of ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x18000E750
 * Callers:
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x18000E310 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 * Callees:
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x18000E3C4 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CSaDeviceProxy *__fastcall CSaDeviceProxy::`vector deleting destructor'(CSaDeviceProxy *this, char a2)
{
  CSaDeviceProxy::~CSaDeviceProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
