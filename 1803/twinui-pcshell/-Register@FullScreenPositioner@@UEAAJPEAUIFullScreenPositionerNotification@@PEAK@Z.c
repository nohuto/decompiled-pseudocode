/*
 * XREFs of ?Register@FullScreenPositioner@@UEAAJPEAUIFullScreenPositionerNotification@@PEAK@Z @ 0x18014DE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FullScreenPositioner::Register(FullScreenPositioner *this, struct IUnknown *a2, unsigned int *a3)
{
  return CGITRegistrationList::Register((FullScreenPositioner *)((char *)this + 96), a2, a3);
}
