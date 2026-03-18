/*
 * XREFs of ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x18011AE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::UnRegisterNotifiers(CWeakReferenceBase **this)
{
  ReleaseInterface<CWeakReference<CVisual>>(this + 16);
}
