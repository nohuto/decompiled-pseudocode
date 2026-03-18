/*
 * XREFs of ??_GCChannelTable@@UEAAPEAXI@Z @ 0x180120E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CChannelTable@@UEAA@XZ @ 0x180120E00 (--1CChannelTable@@UEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CChannelTable::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CChannelTable::~CChannelTable(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
