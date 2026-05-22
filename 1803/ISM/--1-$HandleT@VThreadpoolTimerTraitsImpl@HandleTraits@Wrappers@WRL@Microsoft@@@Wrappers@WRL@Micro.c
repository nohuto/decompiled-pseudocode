/*
 * XREFs of ??1?$HandleT@VThreadpoolTimerTraitsImpl@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800D9CEC
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SpatialInteractionSourceDevice_::_1_::dtor$30 @ 0x1800EA584 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDevice--SpatialInt_ea_1800EA584.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::~HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>(
        _QWORD *a1)
{
  struct _TP_TIMER *v1; // rdi

  v1 = (struct _TP_TIMER *)a1[1];
  *a1 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::`vftable';
  if ( v1 )
  {
    SetThreadpoolTimer(v1, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v1, 1);
    CloseThreadpoolTimer(v1);
    a1[1] = 0LL;
  }
}
