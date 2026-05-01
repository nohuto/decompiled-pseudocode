/*
 * XREFs of ??_GXamlAllUpViewHost@@UEAAPEAXI@Z @ 0x180158090
 * Callers:
 *     <none>
 * Callees:
 *     ??1XamlAllUpViewHost@@UEAA@XZ @ 0x1801580C4 (--1XamlAllUpViewHost@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

XamlAllUpViewHost *__fastcall XamlAllUpViewHost::`scalar deleting destructor'(XamlAllUpViewHost *this, char a2)
{
  XamlAllUpViewHost::~XamlAllUpViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
