/*
 * XREFs of ?GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ @ 0x18002CD50
 * Callers:
 *     ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x1800AAD14 (-UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 *     ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x1800AAE28 (-RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CAnimation::GetAnimationScenario(CAnimation *this)
{
  return (struct _GUID *)*((_QWORD *)this + 9);
}
