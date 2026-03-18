/*
 * XREFs of ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x1800C0280
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800339C0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x180034460 (-Release@CResource@@UEAAKXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x1800C0348 (--1CAtlasedRectsMesh@@MEAA@XZ.c)
 */

CAtlasedRectsMesh *__fastcall CAtlasedRectsMesh::`vector deleting destructor'(CAtlasedRectsMesh *this, char a2)
{
  CAtlasedRectsMesh::~CAtlasedRectsMesh(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
