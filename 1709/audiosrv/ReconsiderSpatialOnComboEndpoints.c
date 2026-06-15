/*
 * XREFs of ReconsiderSpatialOnComboEndpoints @ 0x1800BAF8C
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18000A8F4 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     std::_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std::allocator_int__void_::_Do_call @ 0x1800BB410 (std--_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     DisableSpatialOnInternalSpeakers @ 0x1800BA840 (DisableSpatialOnInternalSpeakers.c)
 *     EnableSpatialOnSpeakerEndpoint @ 0x1800BA968 (EnableSpatialOnSpeakerEndpoint.c)
 *     SearchForHeadphones @ 0x1800BB1C8 (SearchForHeadphones.c)
 *     VerifyCriticalProcessing @ 0x1800BB2BC (VerifyCriticalProcessing.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ReconsiderSpatialOnComboEndpoints(int a1, __int64 a2)
{
  HRESULT v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  const unsigned __int16 *v11; // rdx
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  bool v17; // [rsp+80h] [rbp+30h] BYREF
  __int64 v18; // [rsp+88h] [rbp+38h] BYREF

  v15[1] = -2LL;
  ppv = 0LL;
  v4 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v13 = 0LL;
    v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 24LL))(ppv, 0LL, 15LL, &v13);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x172,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
        (const char *)(unsigned int)v6);
LABEL_24:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
      goto LABEL_25;
    }
    if ( a1 == 3 )
    {
      DisableSpatialOnInternalSpeakers(v13);
LABEL_23:
      v5 = 0;
      goto LABEL_24;
    }
    v18 = 0LL;
    v7 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, __int64, __int64 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                 + 24LL))(
           g_pEndpointCharacteristicsCache,
           a2,
           1LL,
           &v18);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x17E,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
        (const char *)(unsigned int)v7);
LABEL_21:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
      goto LABEL_24;
    }
    v8 = *(_QWORD *)(v18 + 16);
    v15[0] = v8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = SearchForHeadphones(v13, &v17);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 389LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
        (const char *)(unsigned int)v9);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v15);
      goto LABEL_21;
    }
    if ( v17 )
    {
      v9 = EnableSpatialOnSpeakerEndpoint(v8, L"HP", 0);
      v5 = v9;
      if ( v9 < 0 )
      {
        v10 = 393LL;
        goto LABEL_20;
      }
    }
    else
    {
      v9 = VerifyCriticalProcessing(v18, v8, &v17);
      v5 = v9;
      if ( v9 < 0 )
      {
        v10 = 399LL;
        goto LABEL_20;
      }
      v11 = L"No-HP";
      if ( !v17 )
        v11 = L"CritFilter";
      v9 = EnableSpatialOnSpeakerEndpoint(v8, v11, v17);
      v5 = v9;
      if ( v9 < 0 )
      {
        v10 = 403LL;
        goto LABEL_20;
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v15);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x16F,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
    (const char *)(unsigned int)v4);
LABEL_25:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
  return v5;
}
