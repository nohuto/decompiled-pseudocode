/*
 * XREFs of ??_GCD2DPrimitiveProperties@@MEAAPEAXI@Z @ 0x180001F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DEffect@@MEAA@XZ @ 0x180001F80 (--1CD2DEffect@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CD2DPrimitiveProperties *__fastcall CD2DPrimitiveProperties::`scalar deleting destructor'(
        CD2DPrimitiveProperties *this,
        char a2)
{
  CD2DEffect::~CD2DEffect(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
