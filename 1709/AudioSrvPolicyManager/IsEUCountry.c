/*
 * XREFs of IsEUCountry @ 0x1800213F4
 * Callers:
 *     ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x180020F5C (-CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 * Callees:
 *     ?push_back@?$vector@PEBGV?$allocator@PEBG@utl@@@utl@@QEAA_NAEBQEBG@Z @ 0x1800212EC (-push_back@-$vector@PEBGV-$allocator@PEBG@utl@@@utl@@QEAA_NAEBQEBG@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800213D8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180026990 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 IsEUCountry()
{
  HRESULT v0; // eax
  int v1; // ebx
  LPCWCH *v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // r15d
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // r14d
  const WCHAR *StringRawBuffer; // rax
  const wchar_t *v10; // [rsp+38h] [rbp-19h] BYREF
  void *v11[2]; // [rsp+40h] [rbp-11h] BYREF
  __int64 v12; // [rsp+50h] [rbp-1h]
  HSTRING v13; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+1Fh] BYREF
  HSTRING string; // [rsp+88h] [rbp+37h] BYREF

  v14[1] = -2LL;
  *(__m128i *)v11 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v12 = -1LL;
  v10 = L"DZ";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"AU";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"AT";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"BY";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"BE";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"BA";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"BG";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"HR";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"CY";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"CZ";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"DK";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"EG";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"EE";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"FI";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"FR";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"DE";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"GR";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"HN";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"HK";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"HU";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"IS";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"IN";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"IE";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"IL";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"IT";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"JO";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"KE";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"KW";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"LV";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"LB";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"LI";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"LT";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"LU";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"MO";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"MY";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"MT";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"MA";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"NP";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"NL";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"NZ";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"NG";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"NO";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"PG";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"PY";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"PH";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"PL";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"PT";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"QA";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"RO";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"WS";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"SA";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"RS";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"SG";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"SK";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"SI";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"ZA";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"ES";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"LK";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"SE";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"CH";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"TW";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"TH";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"TN";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"TR";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"UA";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"AE";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v10 = L"GB";
  utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(v11, (char *)&v10);
  v14[0] = 0LL;
  v13 = 0LL;
  string = 0LL;
  v0 = WindowsCreateStringReference(L"Windows.Globalization.GeographicRegion", 0x26u, &hstringHeader, &string);
  if ( v0 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v0);
  v14[0] = 0LL;
  v1 = RoActivateInstance(string, &v10);
  if ( v1 >= 0 )
  {
    if ( *(_QWORD *)&GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v14[0] = v10;
    }
    else
    {
      v1 = (**(__int64 (__fastcall ***)(const wchar_t *, GUID *, _QWORD *))v10)(
             v10,
             &GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903,
             v14);
      (*(void (__fastcall **)(const wchar_t *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  v2 = (LPCWCH *)v11[0];
  if ( v1 >= 0
    && (v3 = v14[0],
        WindowsDeleteString(v13),
        v13 = 0LL,
        (*(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v3 + 56LL))(v3, &v13) >= 0)
    && (v4 = 0, (v5 = ((char *)v11[1] - (char *)v2) >> 3) != 0) )
  {
    v6 = 0LL;
    v7 = 1;
    while ( 1 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(v13, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, v2[v6], -1, 0) == 2 )
        break;
      v6 = ++v4;
      if ( v4 >= v5 )
        goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    v7 = 0;
  }
  WindowsDeleteString(v13);
  v13 = 0LL;
  if ( v14[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
  if ( v2 != (LPCWCH *)-1LL )
    operator delete(v2, (const struct std::nothrow_t *)&unk_18002FEFA);
  return v7;
}
