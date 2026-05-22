/*
 * XREFs of _lambda_0fddcef448335abe1f4d73902a9dcee8_::operator() @ 0x1800C4800
 * Callers:
 *     ?EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ @ 0x1800C4510 (-EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ.c)
 *     wil::details::lambda_call__lambda_0fddcef448335abe1f4d73902a9dcee8___::_lambda_call__lambda_0fddcef448335abe1f4d73902a9dcee8___ @ 0x1800C7010 (wil--details--lambda_call__lambda_0fddcef448335abe1f4d73902a9dcee8___--_lambda_call__lambda_0fdd.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18007595C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ?AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800C2C60 (-AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SA.c)
 *     ?ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEB_WGG_N1GGG1EIKAEBUPoseData@2@2@Z @ 0x1800C2CEC (-ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEB_WGG_N1GGG1EI.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0fddcef448335abe1f4d73902a9dcee8_::operator()(_QWORD *a1)
{
  wchar_t *StringRawBuffer; // rsi
  __int64 v3; // rbx
  bool v4; // bp
  const struct SpatialInteractionDevices::PoseData *v5; // r14
  const struct SpatialInteractionDevices::PoseData *v6; // r15
  _DWORD *v7; // r12
  int *v8; // r13
  _DWORD *v9; // rcx
  __int64 v10; // r8
  SpatialInteractionDevices::SpatialInteractionTrace *v11; // rcx
  unsigned __int64 v13[4]; // [rsp+98h] [rbp-50h] BYREF

  StringRawBuffer = (wchar_t *)WindowsGetStringRawBuffer(*(HSTRING *)(*a1 + 792LL), 0LL);
  v3 = *a1;
  v4 = *(_BYTE *)(*a1 + 409LL) != 0;
  v5 = (const struct SpatialInteractionDevices::PoseData *)(*a1 + 444LL);
  v6 = (const struct SpatialInteractionDevices::PoseData *)(*a1 + 412LL);
  v7 = (_DWORD *)a1[2];
  v8 = (int *)a1[1];
  v9 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v9 && *v9 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::ParsingInitialized_(
      v11,
      *v8,
      *(_DWORD *)(v3 + 344),
      *(_DWORD *)(v3 + 348),
      StringRawBuffer,
      *(_WORD *)(v3 + 104),
      *(_WORD *)(v3 + 106),
      *(_BYTE *)(v3 + 800),
      *(_BYTE *)(v3 + 768),
      *(_WORD *)(v3 + 392),
      *(_WORD *)(v3 + 394),
      *(_WORD *)(v3 + 396),
      v4,
      *(_BYTE *)(v3 + 410),
      *(_DWORD *)(v3 + 360),
      *v7,
      v6,
      v5);
  }
  std::wstring::wstring(v13, StringRawBuffer, v10);
  Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping(
    *a1 + 344LL,
    (__int64)v13);
  return std::wstring::_Tidy_deallocate(v13);
}
