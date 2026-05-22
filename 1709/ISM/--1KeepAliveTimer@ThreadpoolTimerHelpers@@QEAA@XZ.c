/*
 * XREFs of ??1KeepAliveTimer@ThreadpoolTimerHelpers@@QEAA@XZ @ 0x1800C3AA0
 * Callers:
 *     _SpatialInteractionDevices::SpatialInteractionController::_SpatialInteractionController_::_1_::dtor$1 @ 0x1800D2220 (_SpatialInteractionDevices--SpatialInteractionController--_SpatialInteractionContro_ea_1800D2220.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ThreadpoolTimerHelpers::KeepAliveTimer::~KeepAliveTimer(
        ThreadpoolTimerHelpers::KeepAliveTimer *this,
        __int64 a2)
{
  char *v2; // rdi
  char *v4; // rcx
  struct _TP_TIMER *v5; // rdi

  v2 = (char *)this + 32;
  v4 = (char *)*((_QWORD *)this + 11);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *((_QWORD *)v2 + 7) = 0LL;
  }
  v5 = (struct _TP_TIMER *)*((_QWORD *)this + 1);
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::`vftable';
  if ( v5 )
  {
    SetThreadpoolTimer(v5, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v5, 1);
    CloseThreadpoolTimer(v5);
    *((_QWORD *)this + 1) = 0LL;
  }
}
