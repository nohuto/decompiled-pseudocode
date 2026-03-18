/*
 * XREFs of ??_ECDynamicInlineStorage@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800BDB30
 * Callers:
 *     ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x180023CF0 (--_GCHWDrawListEntry@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

PrimitiveStorage::CDynamicInlineStorage *__fastcall PrimitiveStorage::CDynamicInlineStorage::`vector deleting destructor'(
        PrimitiveStorage::CDynamicInlineStorage *this,
        char a2)
{
  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
