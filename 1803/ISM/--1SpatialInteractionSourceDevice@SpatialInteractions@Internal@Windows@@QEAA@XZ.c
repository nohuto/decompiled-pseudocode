/*
 * XREFs of ??1SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800D5D60
 * Callers:
 *     ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800D5E1C (--1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SpatialInteractionSourceController_::_1_::dtor$2 @ 0x1800EA652 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--Spatia_ea_1800EA652.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::~SpatialInteractionSourceDevice(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *this,
        __int64 a2)
{
  char *v3; // rdi
  char *v4; // rcx
  struct _TP_TIMER *v5; // rdi
  __int64 v6; // rcx

  v3 = (char *)this + 144;
  v4 = (char *)*((_QWORD *)this + 25);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v3;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *((_QWORD *)v3 + 7) = 0LL;
  }
  *((_QWORD *)this + 14) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::`vftable';
  v5 = (struct _TP_TIMER *)*((_QWORD *)this + 15);
  if ( v5 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 15), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v5, 1);
    CloseThreadpoolTimer(v5);
    *((_QWORD *)this + 15) = 0LL;
  }
  WindowsDeleteString(*((HSTRING *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
