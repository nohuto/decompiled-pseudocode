/*
 * XREFs of ??_EXamlLauncherState@@UEAAPEAXI@Z @ 0x180150270
 * Callers:
 *     <none>
 * Callees:
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x1801537AC (--1XamlLauncherState@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

XamlLauncherState *__fastcall XamlLauncherState::`vector deleting destructor'(XamlLauncherState *this, char a2)
{
  XamlLauncherState::~XamlLauncherState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
