/*
 * XREFs of ??0SpatialInteractionController@SpatialInteractionDevices@@QEAA@KKV?$function@$$A6AXXZ@std@@@Z @ 0x1800C3D70
 * Callers:
 *     ?AddDeviceToCache@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x180094304 (-AddDeviceToCache@SpatialInputControllerCollection@@AEAAJKPEAV-$shared_ptr@VSpatialInteractionCo.c)
 * Callees:
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x1800780D8 (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 *     ??0HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x18007C2C0 (--0HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SpatialInteractionDevices::SpatialInteractionController::SpatialInteractionController(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rdx
  PTP_TIMER ThreadpoolTimer; // r15
  struct _TP_TIMER *v13; // rdi
  RegistryHelpers *v14; // rcx
  __int64 *v15; // rdx
  RegistryHelpers *v16; // rcx
  char *v17; // rax
  __int64 v18; // rdx
  char *v19; // rbx
  __int64 v20; // rcx
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  int v23; // [rsp+48h] [rbp-38h]
  __int64 *v24; // [rsp+78h] [rbp-8h]

  SpatialInteractionDevices::HID_HANDLE::HID_HANDLE((SpatialInteractionDevices::HID_HANDLE *)a1);
  *(_DWORD *)(a1 + 344) = a2;
  *(_DWORD *)(a1 + 348) = a3;
  *(_BYTE *)(a1 + 352) = 0;
  memset((void *)(a1 + 356), 0, 0x38uLL);
  v24 = 0LL;
  v8 = *(_QWORD *)(a4 + 56);
  if ( v8 )
  {
    if ( v8 == a4 )
    {
      v24 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 8LL))(v8, &v22);
      v10 = *(_QWORD *)(a4 + 56);
      if ( !v10 )
        goto LABEL_7;
      LOBYTE(v9) = v10 != a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, v9);
    }
    else
    {
      v24 = *(__int64 **)(a4 + 56);
    }
    *(_QWORD *)(a4 + 56) = 0LL;
  }
LABEL_7:
  *(_QWORD *)(a1 + 640) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::`vftable';
  *(_QWORD *)(a1 + 648) = 0LL;
  *(_BYTE *)(a1 + 656) = 0;
  InitializeSRWLock((PSRWLOCK)(a1 + 664));
  *(_QWORD *)(a1 + 728) = 0LL;
  if ( !v24 )
    goto LABEL_13;
  if ( v24 == &v22 )
  {
    *(_QWORD *)(a1 + 728) = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v24 + 8))(v24, a1 + 672);
    if ( !v24 )
      goto LABEL_13;
    v11 = &v22;
    LOBYTE(v11) = v24 != &v22;
    (*(void (__fastcall **)(__int64 *, __int64 *))(*v24 + 32))(v24, v11);
  }
  else
  {
    *(_QWORD *)(a1 + 728) = v24;
  }
  v24 = 0LL;
LABEL_13:
  *(_QWORD *)(a1 + 736) = GetTickCount64();
  *(_QWORD *)(a1 + 744) = 5000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_730587c1c62906cad33c140b5ea68fdf_::_lambda_invoker_cdecl_,
                      (PVOID)(a1 + 640),
                      0LL);
  v13 = *(struct _TP_TIMER **)(a1 + 648);
  if ( ThreadpoolTimer != v13 )
  {
    if ( v13 )
    {
      SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 648), 0LL, 0, 0);
      WaitForThreadpoolTimerCallbacks(v13, 1);
      CloseThreadpoolTimer(v13);
      *(_QWORD *)(a1 + 648) = 0LL;
    }
    *(_QWORD *)(a1 + 648) = ThreadpoolTimer;
  }
  v14 = (RegistryHelpers *)v24;
  if ( v24 )
  {
    v15 = &v22;
    LOBYTE(v15) = v24 != &v22;
    (*(void (__fastcall **)(__int64 *, __int64 *))(*v24 + 32))(v24, v15);
  }
  *(_DWORD *)(a1 + 752) = 0;
  *(_QWORD *)(a1 + 760) = 0LL;
  *(_WORD *)(a1 + 768) = 0;
  *(float *)(a1 + 772) = (float)(int)RegistryHelpers::GetDwordWithDefault(
                                       v14,
                                       L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Holographic",
                                       L"AnalogTriggerInteractionTimeoutInMilliseconds",
                                       (const wchar_t *)0x3E8)
                       / 1000.0;
  *(_DWORD *)(a1 + 776) = 0;
  *(float *)(a1 + 780) = (float)(int)RegistryHelpers::GetDwordWithDefault(
                                       v16,
                                       L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Holographic",
                                       L"AnalogTriggerInteractionThresholdPercent",
                                       (const wchar_t *)0xA)
                       / 100.0;
  *(_DWORD *)(a1 + 784) = 0;
  *(_QWORD *)(a1 + 792) = 0LL;
  *(_BYTE *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 840) = 0LL;
  *(_QWORD *)(a1 + 848) = 0LL;
  InitializeSRWLock((PSRWLOCK)(a1 + 856));
  *(_QWORD *)(a1 + 864) = 0LL;
  *(_QWORD *)(a1 + 872) = 0LL;
  *(_DWORD *)(a1 + 880) = 0;
  *(_QWORD *)(a1 + 888) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 896), 0, 0);
  *(_BYTE *)(a1 + 944) = 0;
  *(_QWORD *)(a1 + 952) = 0LL;
  *(_QWORD *)(a1 + 960) = 0LL;
  *(_BYTE *)(a1 + 1052) = 0;
  InitializeSRWLock((PSRWLOCK)(a1 + 1056));
  *(_BYTE *)(a1 + 1064) = 0;
  *(_QWORD *)(a1 + 1072) = 0LL;
  *(_WORD *)(a1 + 1080) = 0;
  *(_DWORD *)(a1 + 1084) = 0;
  *(_BYTE *)(a1 + 1088) = 0;
  memset((void *)(a1 + 476), 0, 0xA0uLL);
  memset((void *)(a1 + 356), 0, 0x38uLL);
  HIDWORD(v22) = HIDWORD(qword_180110688);
  v23 = dword_180110690;
  *(_DWORD *)(a1 + 444) = qword_180110688;
  *(_DWORD *)(a1 + 448) = HIDWORD(v22);
  *(_DWORD *)(a1 + 452) = v23;
  *(_DWORD *)(a1 + 456) = 0;
  *(_DWORD *)(a1 + 460) = _mm_shuffle_ps((__m128)xmmword_1800ED530, (__m128)xmmword_1800ED530, 85).m128_u32[0];
  *(_DWORD *)(a1 + 464) = _mm_shuffle_ps((__m128)xmmword_1800ED530, (__m128)xmmword_1800ED530, 170).m128_u32[0];
  *(_DWORD *)(a1 + 468) = _mm_shuffle_ps((__m128)xmmword_1800ED530, (__m128)xmmword_1800ED530, 255).m128_u32[0];
  *(_WORD *)(a1 + 472) = 257;
  v22 = qword_180110688;
  v23 = dword_180110690;
  *(_DWORD *)(a1 + 412) = qword_180110688;
  *(_DWORD *)(a1 + 416) = HIDWORD(v22);
  *(_DWORD *)(a1 + 420) = v23;
  *(_DWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 428) = _mm_shuffle_ps((__m128)xmmword_1800ED530, (__m128)xmmword_1800ED530, 85).m128_u32[0];
  *(_DWORD *)(a1 + 432) = _mm_shuffle_ps((__m128)xmmword_1800ED530, (__m128)xmmword_1800ED530, 170).m128_u32[0];
  *(_DWORD *)(a1 + 436) = _mm_shuffle_ps((__m128)xmmword_1800ED530, (__m128)xmmword_1800ED530, 255).m128_u32[0];
  *(_WORD *)(a1 + 440) = 257;
  v17 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = v17;
  if ( v17 )
  {
    memset(v17, 0, 0x40uLL);
    *(_DWORD *)v19 = 0;
    *(_QWORD *)(v19 + 4) = 0LL;
    *(_QWORD *)(v19 + 12) = 0LL;
    *((_WORD *)v19 + 10) = 0;
    *((_QWORD *)v19 + 3) = 0LL;
    *((_QWORD *)v19 + 4) = 0LL;
    *((_QWORD *)v19 + 5) = 0LL;
    *((_QWORD *)v19 + 6) = 0LL;
    *((_QWORD *)v19 + 7) = 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  *(_QWORD *)(a1 + 840) = v19;
  v20 = *(_QWORD *)(a4 + 56);
  if ( v20 )
  {
    LOBYTE(v18) = v20 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 32LL))(v20, v18);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return a1;
}
