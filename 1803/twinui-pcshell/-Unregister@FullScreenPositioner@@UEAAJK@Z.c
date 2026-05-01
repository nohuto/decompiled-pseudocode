/*
 * XREFs of ?Unregister@FullScreenPositioner@@UEAAJK@Z @ 0x18014E4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FullScreenPositioner::Unregister(FullScreenPositioner *this, unsigned int a2)
{
  return CGITRegistrationList::Unregister((FullScreenPositioner *)((char *)this + 96), a2);
}
