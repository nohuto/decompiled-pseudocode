/*
 * XREFs of ??_EXamlAltTabViewHost@@UEAAPEAXI@Z @ 0x180216D30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1XamlAltTabViewHost@@UEAA@XZ @ 0x1802168F0 (--1XamlAltTabViewHost@@UEAA@XZ.c)
 */

XamlAltTabViewHost *__fastcall XamlAltTabViewHost::`vector deleting destructor'(XamlAltTabViewHost *this, char a2)
{
  XamlAltTabViewHost::~XamlAltTabViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC8);
  return this;
}
