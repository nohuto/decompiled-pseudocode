/*
 * XREFs of ??_GXamlSnapAssistViewHost@@UEAAPEAXI@Z @ 0x180218460
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1XamlSnapAssistViewHost@@UEAA@XZ @ 0x180218018 (--1XamlSnapAssistViewHost@@UEAA@XZ.c)
 */

XamlSnapAssistViewHost *__fastcall XamlSnapAssistViewHost::`scalar deleting destructor'(
        XamlSnapAssistViewHost *this,
        char a2)
{
  XamlSnapAssistViewHost::~XamlSnapAssistViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD0);
  return this;
}
