/*
 * XREFs of _lambda_c447e8a4e728711a505eb4f690ea7de9_::operator() @ 0x1800DA6B8
 * Callers:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___ @ 0x1800DA214 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_1800DA214.c)
 * Callees:
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAAAEAUSpatialInteractionSnapshot@Holographic@Internal@Windows@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x18009C570 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@USpatialInteractionSna.c)
 */

__int64 __fastcall lambda_c447e8a4e728711a505eb4f690ea7de9_::operator()(__int64 **a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 *v4; // rcx
  LARGE_INTEGER *v5; // rdi
  __int64 v6; // rbx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+10h] BYREF

  result = std::map<std::wstring,Windows::Internal::Holographic::SpatialInteractionSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>>>::operator[](
             a1[1] + 3,
             a2);
  v4 = *a1;
  v5 = (LARGE_INTEGER *)result;
  v6 = **a1;
  if ( *(_DWORD *)v4[1] )
  {
    *(_DWORD *)(result + 144) = *(_DWORD *)(v6 + 232);
    QueryPerformanceCounter(&PerformanceCount);
    result = PerformanceCount.QuadPart;
    v5[19] = PerformanceCount;
  }
  if ( !v5[17].QuadPart )
  {
    v5[16].LowPart = *(_DWORD *)(v6 + 228);
    QueryPerformanceCounter(&PerformanceCount);
    result = PerformanceCount.QuadPart;
    v5[17] = PerformanceCount;
  }
  if ( *(_BYTE *)(v6 + 408) )
  {
    v5[5].LowPart = *(_DWORD *)(v6 + 392);
    v5[5].HighPart = *(_DWORD *)(v6 + 396);
    v5[6].LowPart = *(_DWORD *)(v6 + 400);
    v5[6].HighPart = *(_DWORD *)(v6 + 404);
    QueryPerformanceCounter(&PerformanceCount);
    result = PerformanceCount.QuadPart;
    v5[7] = PerformanceCount;
  }
  if ( *(_BYTE *)(v6 + 274) )
  {
    v5[8].LowPart = *(_DWORD *)(v6 + 248);
    v5[8].HighPart = *(_DWORD *)(v6 + 252);
    QueryPerformanceCounter(&PerformanceCount);
    result = PerformanceCount.QuadPart;
    v5[9] = PerformanceCount;
  }
  if ( *(_BYTE *)(v6 + 276) )
  {
    v5[10].LowPart = *(_DWORD *)(v6 + 256);
    v5[10].HighPart = *(_DWORD *)(v6 + 260);
    QueryPerformanceCounter(&PerformanceCount);
    result = PerformanceCount.QuadPart;
    v5[11] = PerformanceCount;
  }
  if ( *(_BYTE *)(v6 + 275) )
  {
    v5[12].LowPart = *(_DWORD *)(v6 + 264);
    QueryPerformanceCounter(&PerformanceCount);
    result = PerformanceCount.QuadPart;
    v5[13] = PerformanceCount;
  }
  if ( *(_BYTE *)(v6 + 284) )
  {
    v5[14].LowPart = *(_DWORD *)(v6 + 280);
    QueryPerformanceCounter(&PerformanceCount);
    result = PerformanceCount.QuadPart;
    v5[15] = PerformanceCount;
  }
  return result;
}
