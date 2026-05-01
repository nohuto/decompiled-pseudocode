/*
 * XREFs of ??_GXamlAllUpViewHost@@UEAAPEAXI@Z @ 0x180208AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1XamlAllUpViewHost@@UEAA@XZ @ 0x180207714 (--1XamlAllUpViewHost@@UEAA@XZ.c)
 */

XamlAllUpViewHost *__fastcall XamlAllUpViewHost::`scalar deleting destructor'(XamlAllUpViewHost *this, char a2)
{
  XamlAllUpViewHost::~XamlAllUpViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2C8);
  return this;
}
