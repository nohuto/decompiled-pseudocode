/*
 * XREFs of ?AddSpatialInteractionDevice@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180076804
 * Callers:
 *     ?RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_WK@Z @ 0x1800749CC (-RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_WK@Z.c)
 * Callees:
 *     ??4?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@QEAAAEAU0123@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180075D6C (--4-$TimestampedProperty@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Holog.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAAAEAUSpatialInteractionSnapshot@Holographic@Internal@Windows@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x180076734 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@USpatialInteractionSna.c)
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800771F0 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDevice(
        LARGE_INTEGER *Src)
{
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v2; // rbx
  const char *v3; // r9
  LARGE_INTEGER *v4; // rax
  __int64 v5; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v2 = Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance();
    if ( *((_BYTE *)v2 + 120) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)v2);
      v4 = (LARGE_INTEGER *)std::map<std::wstring,Windows::Internal::Holographic::SpatialInteractionSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>>>::operator[](
                              (__int64 *)v2 + 3,
                              Src);
      Windows::Internal::Holographic::TimestampedProperty<std::wstring>::operator=(v4, Src, v5);
      if ( v2 )
        ReleaseSRWLockExclusive((PSRWLOCK)v2);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x112,
      (__int64)"onecoreuap\\analog\\input\\common\\inc\\HolographicDeviceSnapshot.h",
      v3);
  }
}
