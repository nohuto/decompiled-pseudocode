/*
 * XREFs of ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800D5E1C
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VSpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@@std@@EEAAXXZ @ 0x1800AB0B0 (-_Destroy@-$_Ref_count_obj@VSpatialInteractionSourceController@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ??1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x1800A150C (--1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ?ControllerHapticsStatistics_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKJJN@Z @ 0x1800D3EEC (-ControllerHapticsStatistics_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKJJN@Z.c)
 *     ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x1800D40AC (-Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z.c)
 *     ?ReleaseNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x1800D920C (-ReleaseNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Intern.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::~SpatialInteractionSourceController(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  double v8; // xmm6_8
  int v9; // eax
  _DWORD *v10; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v11; // rcx
  void *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx

  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::`vftable';
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 944);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 944));
  v3 = *((_QWORD *)this + 123);
  if ( v3 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 72));
    *(_BYTE *)(v3 + 231) = 0;
    v5 = *(_QWORD *)(v3 + 184);
    if ( v5 )
    {
      LOBYTE(v4) = v5 != v3 + 128;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, v4);
      *(_QWORD *)(v3 + 184) = 0LL;
    }
    v6 = *(_QWORD *)(v3 + 120);
    if ( v6 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 56LL))(v6, 0LL);
    v7 = *(_QWORD *)(v3 + 120);
    if ( v7 )
    {
      *(_QWORD *)(v3 + 120) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( v3 != -72 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 72));
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  v8 = DOUBLE_N1_0;
  v9 = *((_DWORD *)this + 251);
  if ( v9 )
    v8 = (double)*((int *)this + 252) / (double)v9;
  v10 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v10 && *v10 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::ControllerHapticsStatistics_(
      v11,
      *((_DWORD *)this + 2),
      *((_DWORD *)this + 250),
      *((_DWORD *)this + 251),
      v8);
  }
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandler(this);
  v12 = (void *)*((_QWORD *)this + 103);
  if ( v12 )
  {
    SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(
      *((SpatialInteractionDevices::SpatialInteractionHeartbeat **)this + 103),
      1);
    operator delete(v12);
    *((_QWORD *)this + 103) = 0LL;
  }
  v13 = *((_QWORD *)this + 123);
  if ( v13 )
  {
    *((_QWORD *)this + 123) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  DeleteCriticalSection(v2);
  v14 = *((_QWORD *)this + 116);
  if ( v14 )
  {
    *((_QWORD *)this + 116) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 888));
  WindowsDeleteString(*((HSTRING *)this + 109));
  *((_QWORD *)this + 109) = 0LL;
  v15 = *((_QWORD *)this + 108);
  if ( v15 )
  {
    *((_QWORD *)this + 108) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  SpatialInteractionDevices::HID_HANDLE::~HID_HANDLE((Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 448));
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::~SpatialInteractionSourceDevice(this, v16);
}
