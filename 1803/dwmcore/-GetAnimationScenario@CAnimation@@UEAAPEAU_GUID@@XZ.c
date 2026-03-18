/*
 * XREFs of ?GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ @ 0x18003F990
 * Callers:
 *     ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x18002D7E8 (-UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 *     ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x18002D8F8 (-RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CAnimation::GetAnimationScenario(CAnimation *this)
{
  return (struct _GUID *)*((_QWORD *)this + 9);
}
