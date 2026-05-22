/*
 * XREFs of _lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator() @ 0x1800D6758
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D6470 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 *     wil::details::lambda_call__lambda_b6eb6e6574f6e884ecb744657c22bdda___::_lambda_call__lambda_b6eb6e6574f6e884ecb744657c22bdda___ @ 0x1800D9514 (wil--details--lambda_call__lambda_b6eb6e6574f6e884ecb744657c22bdda___--_lambda_call__lambda_b6eb.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18006966C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800D31C4 (-AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SA.c)
 *     ?ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEB_WGG_N1GGG1EIKAEBUPoseData@2@2@Z @ 0x1800D3250 (-ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEB_WGG_N1GGG1EI.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator()(_QWORD *a1)
{
  wchar_t *StringRawBuffer; // rsi
  __int64 v3; // rdi
  bool v4; // bp
  const struct SpatialInteractionDevices::PoseData *v5; // r14
  const struct SpatialInteractionDevices::PoseData *v6; // r15
  _DWORD *v7; // r12
  int *v8; // r13
  _DWORD *v9; // rcx
  __int64 v10; // r8
  SpatialInteractionDevices::SpatialInteractionTrace *v11; // rcx
  char result; // al
  unsigned __int64 v13[4]; // [rsp+98h] [rbp-50h] BYREF

  StringRawBuffer = (wchar_t *)WindowsGetStringRawBuffer(*(HSTRING *)(*a1 + 24LL), 0LL);
  v3 = *a1;
  v4 = *(_BYTE *)(*a1 + 285LL) != 0;
  v5 = (const struct SpatialInteractionDevices::PoseData *)(*a1 + 68LL);
  v6 = (const struct SpatialInteractionDevices::PoseData *)(*a1 + 36LL);
  v7 = (_DWORD *)a1[2];
  v8 = (int *)a1[1];
  v9 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v9 && *v9 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::ParsingInitialized_(
      v11,
      *v8,
      *(_DWORD *)(v3 + 8),
      *(_DWORD *)(v3 + 12),
      StringRawBuffer,
      *(_WORD *)(v3 + 512),
      *(_WORD *)(v3 + 514),
      *(_BYTE *)(v3 + 784),
      *(_BYTE *)(v3 + 768),
      *(_WORD *)(v3 + 268),
      *(_WORD *)(v3 + 270),
      *(_WORD *)(v3 + 272),
      v4,
      *(_BYTE *)(v3 + 286),
      *(_DWORD *)(v3 + 228),
      *v7,
      v6,
      v5);
  }
  std::wstring::wstring(v13, StringRawBuffer, v10);
  Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping(
    *a1 + 8LL,
    (__int64)v13);
  std::wstring::_Tidy_deallocate(v13);
  result = *(_BYTE *)(*a1 + 101LL);
  *(_BYTE *)(*a1 + 101LL) = 1;
  return result;
}
