/*
 * XREFs of GetHolographicInputSession @ 0x180070758
 * Callers:
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x180070FF0 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180071130 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180051AB0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180066864 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x18006695C (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 *     ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAAEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH11@Z @ 0x180070AAC (--$emplace_back@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessio.c)
 *     ??1?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAA@XZ @ 0x18007197C (--1-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderConfig@@@std@@@std@@Q.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_ @ 0x1800725EC (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetHolographicInputSession(__int64 a1)
{
  __int64 v2; // r8
  const char *v3; // r9
  unsigned __int64 v4; // rdx
  void **v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdi
  void **v9; // rbx
  int v11; // [rsp+38h] [rbp-D0h] BYREF
  int v12; // [rsp+3Ch] [rbp-CCh] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v14; // [rsp+58h] [rbp-B0h] BYREF
  __m128i si128; // [rsp+68h] [rbp-A0h]
  __int128 v16; // [rsp+78h] [rbp-90h]
  void *Src[2]; // [rsp+88h] [rbp-80h] BYREF
  __m128i v18; // [rsp+98h] [rbp-70h]
  __int64 v19; // [rsp+A8h] [rbp-60h]
  __int64 v20; // [rsp+B0h] [rbp-58h]
  __int64 v21; // [rsp+B8h] [rbp-50h]
  __int64 v22; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v23; // [rsp+C8h] [rbp-40h]
  WCHAR Buffer[264]; // [rsp+D8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+208h]

  v13[1] = -2LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v14) = 0;
  v16 = 0uLL;
  v18 = si128;
  LOWORD(Src[0]) = 0;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  std::wstring::operator=(&v14, L"HolographicInput");
  v16 = xmmword_1800FD288;
  v19 = 64LL;
  v20 = 0x810000002LL;
  v21 = 0x10000000002LL;
  memset_0(Buffer, 0, 0x208uLL);
  if ( !GetWindowsDirectoryW(Buffer, 0x104u) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0xDA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      v3);
  v4 = -1LL;
  do
    ++v4;
  while ( Buffer[v4] );
  if ( v4 > v18.m128i_i64[1] )
  {
    std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
      (unsigned __int64 *)Src,
      v4,
      v2,
      Buffer);
  }
  else
  {
    v5 = Src;
    if ( v18.m128i_i64[1] >= 8uLL )
      v5 = (void **)Src[0];
    v18.m128i_i64[0] = v4;
    v6 = 2 * v4;
    memmove(v5, Buffer, 2 * v4);
    *(_WORD *)((char *)v5 + v6) = 0;
  }
  v7 = v18.m128i_i64[0];
  if ( v18.m128i_i64[1] - v18.m128i_i64[0] < 0x1AuLL )
  {
    std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_(
      Src,
      26LL);
  }
  else
  {
    v8 = v18.m128i_i64[0] + 26;
    v18.m128i_i64[0] += 26LL;
    v9 = Src;
    if ( v18.m128i_i64[1] >= 8uLL )
      v9 = (void **)Src[0];
    memmove((char *)v9 + 2 * v7, L"\\Temp\\HolographicInput.etl", 0x34uLL);
    *((_WORD *)v9 + v8) = 0;
  }
  v11 = 0;
  v12 = 0;
  LODWORD(v13[0]) = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v22,
    L"{3317C7E7-7C40-4275-9F7B-D539C10E19BA}",
    v13,
    &v12,
    &v11);
  LODWORD(v13[0]) = 0;
  v12 = 0;
  v11 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v22,
    L"{F903DB44-149E-4B4E-AFE1-2A1096F53DFA}",
    &v11,
    &v12,
    v13);
  LODWORD(v13[0]) = 0;
  v12 = 0;
  v11 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v22,
    L"{6E831A67-EB0D-55CD-69C0-CFE57755346D}",
    &v11,
    &v12,
    v13);
  LODWORD(v13[0]) = 0;
  v12 = 0;
  v11 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v22,
    L"{D27719C1-8DCF-555B-E03F-EF4E275A4799}",
    &v11,
    &v12,
    v13);
  *(_OWORD *)a1 = v14;
  *(__m128i *)(a1 + 16) = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v14) = 0;
  *(_OWORD *)(a1 + 32) = v16;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)Src;
  *(__m128i *)(a1 + 64) = v18;
  v18 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(Src[0]) = 0;
  *(_QWORD *)(a1 + 80) = v19;
  *(_QWORD *)(a1 + 88) = v20;
  *(_QWORD *)(a1 + 96) = v21;
  *(_QWORD *)(a1 + 104) = v22;
  *(_OWORD *)(a1 + 112) = v23;
  v22 = 0LL;
  v23 = 0LL;
  std::vector<TraceSessionProviderConfig>::~vector<TraceSessionProviderConfig>(&v22);
  std::wstring::_Tidy_deallocate((unsigned __int64 *)Src);
  std::wstring::_Tidy_deallocate((unsigned __int64 *)&v14);
  return a1;
}
