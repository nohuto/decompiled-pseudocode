/*
 * XREFs of ?SetComponentOpacity@CSwitchItemElement@@UEAAJW4SwitchItemComponent@@NW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180288F70
 * Callers:
 *     <none>
 * Callees:
 *     ??$_AnimateComponent@P8IDCompThumbnail@@EAAJNW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@ZNW42@PEAU3@@CSwitchItemElement@@IEAAJW4SwitchItemComponent@@P8IDCompThumbnail@@EAAJNW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@ZN12@Z @ 0x180287EAC (--$_AnimateComponent@P8IDCompThumbnail@@EAAJNW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboa.c)
 */

__int64 __fastcall CSwitchItemElement::SetComponentOpacity(__int64 a1, int a2, __int64 a3)
{
  return CSwitchItemElement::_AnimateComponent<long (IDCompThumbnail::*)(double,enum DCompThumbnailAnimation,IUIAnimationStoryboardEventHandler2 *),double,enum DCompThumbnailAnimation,IUIAnimationStoryboardEventHandler2 *>(
           (_QWORD *)(a1 - 224),
           a2,
           a3);
}
