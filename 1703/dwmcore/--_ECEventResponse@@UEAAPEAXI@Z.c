/*
 * XREFs of ??_ECEventResponse@@UEAAPEAXI@Z @ 0x18013F220
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CEventResponse@@UEAA@XZ @ 0x18013F1C0 (--1CEventResponse@@UEAA@XZ.c)
 */

HANDLE *__fastcall CEventResponse::`vector deleting destructor'(HANDLE *this, char a2)
{
  CEventResponse::~CEventResponse(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
