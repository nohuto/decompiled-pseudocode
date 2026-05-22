/*
 * XREFs of _lambda_cd0cf05eb48187a67a9205d44c09d298_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK_____ptr64_void_(__cdecl_)(_RTL_SRWLOCK_____ptr64)_&ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_2___RTL_SRWLOCK_____ptr64_0_std::nullptr_t_______ @ 0x180075B70
 * Callers:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_13d25de601502b3f3668de287f572ce2___ @ 0x180075A10 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal--Holographic-.c)
 * Callees:
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAAAEAUSpatialInteractionSnapshot@Holographic@Internal@Windows@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x180076734 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@USpatialInteractionSna.c)
 */

int __fastcall lambda_cd0cf05eb48187a67a9205d44c09d298_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK_____ptr64_void____cdecl____RTL_SRWLOCK_____ptr64___ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_2___RTL_SRWLOCK_____ptr64_0_std::nullptr_t_______(
        __int64 ***a1,
        int a2,
        LARGE_INTEGER a3)
{
  __int64 v4; // rax
  LARGE_INTEGER *v5; // rdi
  __int64 *v6; // rdx
  __int64 v7; // rbx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+20h] BYREF

  PerformanceCount = a3;
  v4 = std::map<std::wstring,Windows::Internal::Holographic::SpatialInteractionSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>>>::operator[](a2 + 24);
  v5 = (LARGE_INTEGER *)v4;
  v6 = **a1;
  v7 = *v6;
  if ( *(_DWORD *)(*v6 + 36) )
  {
    *(_DWORD *)(v4 + 144) = *(_DWORD *)(v7 + 40);
    LODWORD(v4) = QueryPerformanceCounter(&PerformanceCount);
    v5[19] = PerformanceCount;
  }
  if ( !v5[17].QuadPart )
  {
    v5[16].LowPart = *(_DWORD *)(v7 + 32);
    QueryPerformanceCounter(&PerformanceCount);
    LODWORD(v4) = PerformanceCount.LowPart;
    v5[17] = PerformanceCount;
  }
  if ( *(_BYTE *)(v7 + 29) )
  {
    v5[5].LowPart = *(_DWORD *)(v7 + 12);
    v5[5].HighPart = *(_DWORD *)(v7 + 16);
    v5[6].LowPart = *(_DWORD *)(v7 + 20);
    v5[6].HighPart = *(_DWORD *)(v7 + 24);
    QueryPerformanceCounter(&PerformanceCount);
    LODWORD(v4) = PerformanceCount.LowPart;
    v5[7] = PerformanceCount;
  }
  if ( *(_BYTE *)(v7 + 52) )
  {
    v5[8].LowPart = *(_DWORD *)(v7 + 44);
    v5[8].HighPart = *(_DWORD *)(v7 + 48);
    QueryPerformanceCounter(&PerformanceCount);
    LODWORD(v4) = PerformanceCount.LowPart;
    v5[9] = PerformanceCount;
  }
  if ( *(_BYTE *)(v7 + 64) )
  {
    v5[10].LowPart = *(_DWORD *)(v7 + 56);
    v5[10].HighPart = *(_DWORD *)(v7 + 60);
    QueryPerformanceCounter(&PerformanceCount);
    LODWORD(v4) = PerformanceCount.LowPart;
    v5[11] = PerformanceCount;
  }
  if ( *(_BYTE *)(v7 + 72) )
  {
    v5[12].LowPart = *(_DWORD *)(v7 + 68);
    QueryPerformanceCounter(&PerformanceCount);
    LODWORD(v4) = PerformanceCount.LowPart;
    v5[13] = PerformanceCount;
  }
  if ( *(_BYTE *)(v7 + 100) )
  {
    v5[14].LowPart = *(_DWORD *)(v7 + 96);
    QueryPerformanceCounter(&PerformanceCount);
    LODWORD(v4) = PerformanceCount.LowPart;
    v5[15] = PerformanceCount;
  }
  return v4;
}
