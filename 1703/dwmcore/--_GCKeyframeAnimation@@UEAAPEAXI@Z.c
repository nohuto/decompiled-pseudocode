/*
 * XREFs of ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x180031090
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800339C0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x180034460 (-Release@CResource@@UEAAKXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180030FE8 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CKeyframeAnimation *__fastcall CKeyframeAnimation::`scalar deleting destructor'(CKeyframeAnimation *this, char a2)
{
  CKeyframeAnimation::~CKeyframeAnimation(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
