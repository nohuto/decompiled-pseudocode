/*
 * XREFs of ??_GWin32BackedViewHostItem@@UEAAPEAXI@Z @ 0x1801AD4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1Win32BackedViewHostItem@@UEAA@XZ @ 0x1801AD114 (--1Win32BackedViewHostItem@@UEAA@XZ.c)
 */

Win32BackedViewHostItem *__fastcall Win32BackedViewHostItem::`scalar deleting destructor'(
        Win32BackedViewHostItem *this,
        char a2)
{
  Win32BackedViewHostItem::~Win32BackedViewHostItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2C8);
  return this;
}
