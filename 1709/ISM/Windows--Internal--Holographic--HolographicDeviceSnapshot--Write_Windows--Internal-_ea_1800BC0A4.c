/*
 * XREFs of Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_879c2317d6bf6f0b2a32d99bde7a5ca8___ @ 0x1800BC0A4
 * Callers:
 *     ?GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x1800B6210 (-GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800771F0 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UGuidLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@2@AEBU_GUID@@@Z @ 0x1800BCE50 (-find@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAAAEAUSpatialGraphSnapshot@Holographic@Internal@Windows@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800BCFB4 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@USpatialGraphSnapshot@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_879c2317d6bf6f0b2a32d99bde7a5ca8___(
        __int64 a1,
        _BYTE **a2)
{
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v4; // rdi
  const char *v5; // r9
  __int64 v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp+10h] BYREF
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v10; // [rsp+60h] [rbp+18h]

  try
  {
    v4 = Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance();
    if ( *((_BYTE *)v4 + 120) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)v4);
      v10 = v4;
      std::_Tree<std::_Tmap_traits<_GUID,std::wstring,Windows::Internal::Holographic::GuidLess,std::allocator<std::pair<_GUID const,std::wstring>>,0>>::find(
        (char *)v4 + 72,
        &v8,
        a1);
      if ( v8 != *((_QWORD *)v4 + 9) )
      {
        v6 = std::map<std::wstring,Windows::Internal::Holographic::SpatialGraphSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>>>::operator[]((int)v4 + 56);
        *(_BYTE *)(v6 + 40) = **a2 != 0;
        QueryPerformanceCounter(&PerformanceCount);
        *(LARGE_INTEGER *)(v6 + 48) = PerformanceCount;
      }
      if ( v4 )
        ReleaseSRWLockExclusive((PSRWLOCK)v4);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x133,
      (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdevicesnapshot.h",
      v5);
  }
}
