/*
 * XREFs of ??0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@123@KKV?$function@$$A6AXXZ@std@@@Z @ 0x1800D59A4
 * Callers:
 *     ?OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKKPEAUIHidDevice@234@PEAUMPCControllerDeviceInfo@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A57B0 (-OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@U.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x18009D864 (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 *     ??0HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x1800A1410 (--0HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ?HapticsIntensityLevelsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKE@Z @ 0x1800D3950 (-HapticsIntensityLevelsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKE@Z.c)
 *     ??0SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@123@KKV?$function@$$A6AXXZ@std@@@Z @ 0x1800D4470 (--0SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@123@.c)
 *     ?SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXH@Z @ 0x1800D6060 (-SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Wi.c)
 *     ?SetHapticsOutputReportPeriodMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXI@Z @ 0x1800D60D0 (-SetHapticsOutputReportPeriodMicroseconds@SpatialInteractionSourceController@SpatialInteractions.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SpatialInteractionSourceController(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5)
{
  __int64 (__fastcall ***v9)(_QWORD, unsigned int *); // rcx
  RegistryHelpers *v10; // rcx
  RegistryHelpers *v11; // rcx
  _DWORD *v12; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v13; // rcx
  char *v14; // rax
  __int64 v15; // rdx
  char *v16; // rbx
  __int64 v17; // rcx
  unsigned int v19[2]; // [rsp+40h] [rbp-40h] BYREF
  int v20; // [rsp+48h] [rbp-38h]
  __int64 v21; // [rsp+78h] [rbp-8h]

  v21 = 0LL;
  v9 = *(__int64 (__fastcall ****)(_QWORD, unsigned int *))(a5 + 56);
  if ( v9 )
    v21 = (**v9)(v9, v19);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SpatialInteractionSourceDevice(
    (__int64)this,
    a2,
    a3,
    a4,
    (__int64)v19);
  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::`vftable';
  SpatialInteractionDevices::HID_HANDLE::HID_HANDLE((Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 448));
  *((_DWORD *)this + 188) = 0;
  *((_QWORD *)this + 95) = 0LL;
  *((_WORD *)this + 384) = 0;
  *((float *)this + 193) = (float)(int)RegistryHelpers::GetDwordWithDefault(
                                         v10,
                                         (const WCHAR *)&stru_1800FE650,
                                         L"AnalogTriggerInteractionTimeoutInMilliseconds",
                                         (const wchar_t *)0x3E8)
                         / 1000.0;
  *((_DWORD *)this + 194) = 0;
  *((float *)this + 195) = (float)(int)RegistryHelpers::GetDwordWithDefault(
                                         v11,
                                         (const WCHAR *)&stru_1800FE650,
                                         L"AnalogTriggerInteractionThresholdPercent",
                                         (const wchar_t *)0xA)
                         / 100.0;
  *((_WORD *)this + 392) = 0;
  *((_QWORD *)this + 103) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 104);
  *((_QWORD *)this + 105) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  *((_DWORD *)this + 214) = 0;
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 109) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 888), 0, 0);
  *((_QWORD *)this + 116) = 0LL;
  *((_DWORD *)this + 234) = 0;
  *((_BYTE *)this + 940) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 944), 0, 0);
  *((_QWORD *)this + 123) = 0LL;
  *((_DWORD *)this + 248) = 0;
  *((_BYTE *)this + 996) = 0;
  *((_QWORD *)this + 125) = 0LL;
  *((_DWORD *)this + 252) = 0;
  *((_BYTE *)this + 1096) = 0;
  InitializeSRWLock((PSRWLOCK)this + 138);
  *((_QWORD *)this + 139) = 0LL;
  *((_QWORD *)this + 140) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_QWORD *)this + 142) = 0LL;
  *((_BYTE *)this + 1144) = 0;
  *((_DWORD *)this + 287) = 0;
  memset_0((char *)this + 224, 0, 0xE0uLL);
  v19[1] = HIDWORD(qword_1801369E0);
  v20 = dword_1801369E8;
  *((_DWORD *)this + 17) = qword_1801369E0;
  *((_DWORD *)this + 18) = v19[1];
  *((_DWORD *)this + 19) = v20;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = _mm_shuffle_ps((__m128)xmmword_18010C908, (__m128)xmmword_18010C908, 85).m128_u32[0];
  *((_DWORD *)this + 22) = _mm_shuffle_ps((__m128)xmmword_18010C908, (__m128)xmmword_18010C908, 170).m128_u32[0];
  *((_DWORD *)this + 23) = _mm_shuffle_ps((__m128)xmmword_18010C908, (__m128)xmmword_18010C908, 255).m128_u32[0];
  *((_WORD *)this + 48) = 257;
  *(_QWORD *)v19 = qword_1801369E0;
  v20 = dword_1801369E8;
  *((_DWORD *)this + 9) = qword_1801369E0;
  *((_DWORD *)this + 10) = v19[1];
  *((_DWORD *)this + 11) = v20;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = _mm_shuffle_ps((__m128)xmmword_18010C908, (__m128)xmmword_18010C908, 85).m128_u32[0];
  *((_DWORD *)this + 14) = _mm_shuffle_ps((__m128)xmmword_18010C908, (__m128)xmmword_18010C908, 170).m128_u32[0];
  *((_DWORD *)this + 15) = _mm_shuffle_ps((__m128)xmmword_18010C908, (__m128)xmmword_18010C908, 255).m128_u32[0];
  *((_WORD *)this + 32) = 257;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetButtonLatencyMicroseconds(this, 13000);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetHapticsOutputReportPeriodMicroseconds(
    this,
    0x7530u);
  *((_BYTE *)this + 996) = 100;
  v12 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v12 && *v12 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::HapticsIntensityLevelsSet_(
      v13,
      *((_DWORD *)this + 2),
      *((_DWORD *)this + 3),
      100);
  }
  v14 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v14;
  if ( v14 )
  {
    memset_0(v14, 0, 0x40uLL);
    *((_DWORD *)v16 + 4) = 0;
    *((_WORD *)v16 + 10) = 0;
    *((_QWORD *)v16 + 3) = 0LL;
    *((_DWORD *)v16 + 8) = 0;
    *(_QWORD *)(v16 + 36) = 0LL;
    *(_QWORD *)(v16 + 44) = 0LL;
    *(_QWORD *)(v16 + 52) = 0LL;
    *((_DWORD *)v16 + 15) = 0;
  }
  else
  {
    v16 = 0LL;
  }
  *((_QWORD *)this + 103) = v16;
  v17 = *(_QWORD *)(a5 + 56);
  if ( v17 )
  {
    LOBYTE(v15) = v17 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL))(v17, v15);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return this;
}
