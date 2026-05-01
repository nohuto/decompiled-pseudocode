/*
 * XREFs of ??_GApplicationViewBackedViewHostItem@@UEAAPEAXI@Z @ 0x1801AD400
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ApplicationViewBackedViewHostItem@@UEAA@XZ @ 0x1801ACE78 (--1ApplicationViewBackedViewHostItem@@UEAA@XZ.c)
 */

ApplicationViewBackedViewHostItem *__fastcall ApplicationViewBackedViewHostItem::`scalar deleting destructor'(
        ApplicationViewBackedViewHostItem *this,
        char a2)
{
  ApplicationViewBackedViewHostItem::~ApplicationViewBackedViewHostItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x228);
  return this;
}
