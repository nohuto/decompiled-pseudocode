/*
 * XREFs of ??_GCD2DPrimitiveProperties@@MEAAPEAXI@Z @ 0x1800C07B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CD2DPrimitiveProperties@@MEAA@XZ @ 0x1800C07E0 (--1CD2DPrimitiveProperties@@MEAA@XZ.c)
 */

CD2DPrimitiveProperties *__fastcall CD2DPrimitiveProperties::`scalar deleting destructor'(
        CD2DPrimitiveProperties *this,
        char a2)
{
  CD2DPrimitiveProperties::~CD2DPrimitiveProperties(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
