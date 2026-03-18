/*
 * XREFs of ??_ECDataWrapper@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z @ 0x180163A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDataWrapper@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x18016394C (--1CDataWrapper@-$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ.c)
 */

void *__fastcall CMrowReader<SharedBufferDataFlipChain>::CDataWrapper::`vector deleting destructor'(
        void *lpMem,
        char a2)
{
  CMrowReader<SharedBufferDataFlipChain>::CDataWrapper::~CDataWrapper((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return lpMem;
}
