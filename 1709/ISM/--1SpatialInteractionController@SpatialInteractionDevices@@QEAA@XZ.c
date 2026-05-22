/*
 * XREFs of ??1SpatialInteractionController@SpatialInteractionDevices@@QEAA@XZ @ 0x1800C422C
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VSpatialInteractionController@SpatialInteractionDevices@@@std@@EEAAXXZ @ 0x180098AF0 (-_Destroy@-$_Ref_count_obj@VSpatialInteractionController@SpatialInteractionDevices@@@std@@EEAAXX.c)
 * Callees:
 *     ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x1800C3930 (-Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall SpatialInteractionDevices::SpatialInteractionController::~SpatialInteractionController(
        SpatialInteractionDevices::SpatialInteractionController *this)
{
  __int64 v2; // rcx
  void *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _TP_TIMER *v10; // rdi

  v2 = *((_QWORD *)this + 119);
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 56LL))(v2, 0LL);
  v3 = (void *)*((_QWORD *)this + 105);
  if ( v3 )
  {
    SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(
      *((SpatialInteractionDevices::SpatialInteractionHeartbeat **)this + 105),
      1);
    operator delete(v3);
    *((_QWORD *)this + 105) = 0LL;
  }
  v4 = *((_QWORD *)this + 120);
  if ( v4 )
  {
    *((_QWORD *)this + 120) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 119);
  if ( v5 )
  {
    *((_QWORD *)this + 119) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 896));
  v6 = *((_QWORD *)this + 111);
  if ( v6 )
  {
    *((_QWORD *)this + 111) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 106);
  if ( v7 )
  {
    *((_QWORD *)this + 106) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  WindowsDeleteString(*((HSTRING *)this + 99));
  *((_QWORD *)this + 99) = 0LL;
  v9 = *((_QWORD *)this + 91);
  if ( v9 )
  {
    LOBYTE(v8) = v9 != (_QWORD)this + 672;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v8);
    *((_QWORD *)this + 91) = 0LL;
  }
  *((_QWORD *)this + 80) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::`vftable';
  v10 = (struct _TP_TIMER *)*((_QWORD *)this + 81);
  if ( v10 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 81), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v10, 1);
    CloseThreadpoolTimer(v10);
    *((_QWORD *)this + 81) = 0LL;
  }
  SpatialInteractionDevices::HID_HANDLE::~HID_HANDLE(this);
}
