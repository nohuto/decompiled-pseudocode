/*
 * XREFs of ??_ECAsyncFlushResponse@@UEAAPEAXI@Z @ 0x1800B0100
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CAsyncFlushResponse@@UEAA@XZ @ 0x1800B0138 (--1CAsyncFlushResponse@@UEAA@XZ.c)
 */

CAsyncFlushResponse *__fastcall CAsyncFlushResponse::`vector deleting destructor'(CAsyncFlushResponse *this, char a2)
{
  CAsyncFlushResponse::~CAsyncFlushResponse(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
