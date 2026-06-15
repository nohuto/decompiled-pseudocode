/*
 * XREFs of ReconsiderSpatialOnComboEndpoints @ 0x180039894
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x1800031B0 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     std::_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std::allocator_int__void_::_Do_call @ 0x1800451D0 (std--_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     VerifyCriticalProcessing @ 0x180039234 (VerifyCriticalProcessing.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800399F0 (--1-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     EnableSpatialOnSpeakerEndpoint @ 0x180039A24 (EnableSpatialOnSpeakerEndpoint.c)
 *     SearchForHeadphones @ 0x18003C5D0 (SearchForHeadphones.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     DisableSpatialOnInternalSpeakers @ 0x1800C06B4 (DisableSpatialOnInternalSpeakers.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ReconsiderSpatialOnComboEndpoints(int a1, const unsigned __int16 *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int AliasedEndpointCharacteristics; // eax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // r8
  const wchar_t *v11; // rdx
  __int64 v13; // rdx
  int ppv; // [rsp+20h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  LPVOID v16; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  bool v19; // [rsp+80h] [rbp+30h] BYREF
  struct CEndpointCharacteristics *v20; // [rsp+88h] [rbp+38h] BYREF

  v17[1] = -2LL;
  v16 = 0LL;
  v4 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &v16);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x16D,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v4,
      ppv);
    goto LABEL_14;
  }
  v15 = 0LL;
  v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v16 + 24LL))(v16, 0LL, 15LL, &v15);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x170,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v6,
      ppv);
    goto LABEL_13;
  }
  if ( a1 == 3 )
  {
    DisableSpatialOnInternalSpeakers(v15);
    goto LABEL_12;
  }
  v20 = 0LL;
  AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(a2, 1, &v20);
  v5 = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x17C,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)AliasedEndpointCharacteristics,
      ppv);
LABEL_25:
    wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::~com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(&v20);
    goto LABEL_13;
  }
  v8 = *((_QWORD *)v20 + 2);
  v17[0] = v8;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = SearchForHeadphones(v15, &v19);
  v5 = v9;
  if ( v9 < 0 )
  {
    v13 = 387LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v9,
      ppv);
    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(v17);
    goto LABEL_25;
  }
  if ( !v19 )
  {
    v9 = VerifyCriticalProcessing((__int64)v20, v8, &v19);
    v5 = v9;
    if ( v9 < 0 )
    {
      v13 = 397LL;
    }
    else
    {
      v11 = L"No-HP";
      LOBYTE(v10) = v19;
      if ( !v19 )
        v11 = L"CritFilter";
      v9 = EnableSpatialOnSpeakerEndpoint(v8, v11, v10);
      v5 = v9;
      if ( v9 >= 0 )
        goto LABEL_11;
      v13 = 401LL;
    }
    goto LABEL_24;
  }
  v9 = EnableSpatialOnSpeakerEndpoint(v8, L"HP", 0LL);
  v5 = v9;
  if ( v9 < 0 )
  {
    v13 = 391LL;
    goto LABEL_24;
  }
LABEL_11:
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(v17);
  wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::~com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(&v20);
LABEL_12:
  v5 = 0;
LABEL_13:
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v15);
LABEL_14:
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)&v16);
  return v5;
}
