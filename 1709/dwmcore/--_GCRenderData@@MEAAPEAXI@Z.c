/*
 * XREFs of ??_GCRenderData@@MEAAPEAXI@Z @ 0x18001D4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRenderData@@MEAA@XZ @ 0x18001E558 (--1CRenderData@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CRenderData *__fastcall CRenderData::`scalar deleting destructor'(CRenderData *this, char a2)
{
  CRenderData::~CRenderData(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
