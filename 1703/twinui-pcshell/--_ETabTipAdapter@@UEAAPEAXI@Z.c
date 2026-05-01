/*
 * XREFs of ??_ETabTipAdapter@@UEAAPEAXI@Z @ 0x18016DDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1TabTipAdapter@@UEAA@XZ @ 0x18016DE14 (--1TabTipAdapter@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TabTipAdapter *__fastcall TabTipAdapter::`vector deleting destructor'(TabTipAdapter *this, char a2)
{
  TabTipAdapter::~TabTipAdapter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
