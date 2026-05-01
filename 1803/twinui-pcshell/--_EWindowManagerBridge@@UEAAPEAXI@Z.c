/*
 * XREFs of ??_EWindowManagerBridge@@UEAAPEAXI@Z @ 0x1801D2FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowManagerBridge@@UEAA@XZ @ 0x1801D2BB4 (--1WindowManagerBridge@@UEAA@XZ.c)
 */

WindowManagerBridge *__fastcall WindowManagerBridge::`vector deleting destructor'(WindowManagerBridge *this, char a2)
{
  WindowManagerBridge::~WindowManagerBridge(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x128);
  return this;
}
