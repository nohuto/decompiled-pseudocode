/*
 * XREFs of ??_EXamlLauncherState@@UEAAPEAXI@Z @ 0x180184BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x180187744 (--1XamlLauncherState@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

XamlLauncherState *__fastcall XamlLauncherState::`vector deleting destructor'(XamlLauncherState *this, char a2)
{
  XamlLauncherState::~XamlLauncherState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
