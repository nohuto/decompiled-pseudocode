/*
 * XREFs of ??_ECSystemMemoryBitmap@@UEAAPEAXI@Z @ 0x1801A8D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CSystemMemoryBitmap@@UEAA@XZ @ 0x18007DC50 (--1CSystemMemoryBitmap@@UEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CSystemMemoryBitmap::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CSystemMemoryBitmap::~CSystemMemoryBitmap(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
