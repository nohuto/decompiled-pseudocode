/*
 * XREFs of ??_GCInteractionContextWrapper@@UEAAPEAXI@Z @ 0x1800B7CA0
 * Callers:
 *     ??_ECInteractionContextWrapper@@W7EAAPEAXI@Z @ 0x1800C6790 (--_ECInteractionContextWrapper@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CInteractionContextWrapper@@UEAA@XZ @ 0x1800B7BE4 (--1CInteractionContextWrapper@@UEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CInteractionContextWrapper::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CInteractionContextWrapper::~CInteractionContextWrapper(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
