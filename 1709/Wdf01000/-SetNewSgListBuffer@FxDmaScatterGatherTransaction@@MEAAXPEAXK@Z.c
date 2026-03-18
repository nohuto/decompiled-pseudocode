/*
 * XREFs of ?SetNewSgListBuffer@FxDmaScatterGatherTransaction@@MEAAXPEAXK@Z @ 0x1C006B240
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ @ 0x1C006AE70 (-FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ.c)
 */

void __fastcall FxDmaScatterGatherTransaction::SetNewSgListBuffer(
        FxDmaScatterGatherTransaction *this,
        void *Buffer,
        unsigned int Size)
{
  FxDmaScatterGatherTransaction::FreeSgListBuffer(this);
  this->m_SGListBuffer = Buffer;
  this->m_SgListBufferSize = Size;
}
