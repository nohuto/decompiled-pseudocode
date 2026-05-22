/*
 * XREFs of GetHolographicInputSession @ 0x180090C58
 * Callers:
 *     ?OnFinalRelease@SpatialInputControllerCollection@@MEAAXXZ @ 0x180092B20 (-OnFinalRelease@SpatialInputControllerCollection@@MEAAXXZ.c)
 *     ?OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180092EE0 (-OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x1800340E8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x180034164 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800559E8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAA@XZ @ 0x180096504 (--1-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderConfig@@@std@@@std@@Q.c)
 *     ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAXAEAY0CH@$$CBG$$QEAH11@Z @ 0x18009802C (--$emplace_back@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessio.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetHolographicInputSession(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  const char *v5; // r9
  int v7; // [rsp+38h] [rbp-D0h] BYREF
  int v8; // [rsp+3Ch] [rbp-CCh] BYREF
  _QWORD v9[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v10; // [rsp+58h] [rbp-B0h] BYREF
  __m128i si128; // [rsp+68h] [rbp-A0h]
  __int128 v12; // [rsp+78h] [rbp-90h]
  __int128 Src; // [rsp+88h] [rbp-80h] BYREF
  __m128i v14; // [rsp+98h] [rbp-70h]
  __int64 v15; // [rsp+A8h] [rbp-60h]
  __int64 v16; // [rsp+B0h] [rbp-58h]
  __int64 v17; // [rsp+B8h] [rbp-50h]
  __int64 v18; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v19; // [rsp+C8h] [rbp-40h]
  WCHAR Buffer[264]; // [rsp+D8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+300h] [rbp+1F8h]

  v9[1] = -2LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v10) = 0;
  v12 = 0uLL;
  v14 = si128;
  LOWORD(Src) = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  std::wstring::assign(&v10, L"HolographicInput", a3);
  v12 = xmmword_1800E42B0;
  v15 = 64LL;
  v16 = 0x810000002LL;
  v17 = 0x10000000002LL;
  memset(Buffer, 0, 0x208uLL);
  if ( !GetWindowsDirectoryW(Buffer, 0x104u) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0xC8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      v5);
  std::wstring::assign(&Src, Buffer, v4);
  std::wstring::append(&Src, L"\\Temp\\HolographicInput.etl");
  v7 = 0;
  v8 = 0;
  LODWORD(v9[0]) = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v18,
    L"{3317C7E7-7C40-4275-9F7B-D539C10E19BA}",
    v9,
    &v8,
    &v7);
  LODWORD(v9[0]) = 0;
  v8 = 0;
  v7 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v18,
    L"{F903DB44-149E-4B4E-AFE1-2A1096F53DFA}",
    &v7,
    &v8,
    v9);
  LODWORD(v9[0]) = 0;
  v8 = 0;
  v7 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v18,
    L"{6E831A67-EB0D-55CD-69C0-CFE57755346D}",
    &v7,
    &v8,
    v9);
  LODWORD(v9[0]) = 0;
  v8 = 0;
  v7 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v18,
    L"{D27719C1-8DCF-555B-E03F-EF4E275A4799}",
    &v7,
    &v8,
    v9);
  *(_OWORD *)a1 = v10;
  *(__m128i *)(a1 + 16) = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v10) = 0;
  *(_OWORD *)(a1 + 32) = v12;
  *(_OWORD *)(a1 + 48) = Src;
  *(__m128i *)(a1 + 64) = v14;
  v14 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(Src) = 0;
  *(_QWORD *)(a1 + 80) = v15;
  *(_QWORD *)(a1 + 88) = v16;
  *(_QWORD *)(a1 + 96) = v17;
  *(_QWORD *)(a1 + 104) = v18;
  *(_OWORD *)(a1 + 112) = v19;
  v18 = 0LL;
  v19 = 0LL;
  std::vector<TraceSessionProviderConfig>::~vector<TraceSessionProviderConfig>(&v18);
  std::wstring::_Tidy_deallocate((unsigned __int64 *)&Src);
  std::wstring::_Tidy_deallocate((unsigned __int64 *)&v10);
  return a1;
}
