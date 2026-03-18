/*
 * XREFs of ??1SharedBufferDataFlipChain@@QEAA@XZ @ 0x1801355E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SharedBufferDataFlipChain::~SharedBufferDataFlipChain(void **this)
{
  WPF::ProcessHeapImpl::Free(this[11]);
}
