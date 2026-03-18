/*
 * XREFs of ??_G?$CLocalMrowWriter@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z @ 0x180164A50
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CLocalMrowWriter<SharedBufferDataFlipChain>::`scalar deleting destructor'(_QWORD *lpMem, char a2)
{
  __int64 v4; // rcx

  *lpMem = &CMrowReader<SharedBufferDataFlipChain>::`vftable';
  v4 = lpMem[1];
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    lpMem[1] = 0LL;
  }
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return lpMem;
}
