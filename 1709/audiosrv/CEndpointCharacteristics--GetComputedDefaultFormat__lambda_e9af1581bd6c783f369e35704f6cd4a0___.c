/*
 * XREFs of CEndpointCharacteristics::GetComputedDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___ @ 0x180035CC0
 * Callers:
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___ @ 0x180036178 (CEndpointCharacteristics--GetDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x180031248 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_e9af1581bd6c783f369e35704f6cd4a0___ @ 0x180035998 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_e9af1581bd6c783f369e35704f6cd4a0__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_7aa2d33e36a32a2890f09fc92a95f1fa___ @ 0x180035AEC (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_7aa2d33e36a32a2890f09fc92a95f.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x18005ACAC (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x18005C8C8 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     ?AllocateBytes@?$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800B20E4 (-AllocateBytes@-$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::GetComputedDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        struct tWAVEFORMATEX **a4)
{
  int Instance; // ebx
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned int *v10; // rax
  __int64 v11; // rcx
  unsigned int *v13; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int *v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID ppv[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v20; // [rsp+70h] [rbp-90h] BYREF
  __m256i v21; // [rsp+80h] [rbp-80h]
  PROPVARIANT pvar; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-58h]
  __int64 v24; // [rsp+B0h] [rbp-50h]
  PROPVARIANT v25; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  __int64 v28; // [rsp+D0h] [rbp-30h]
  __int128 v29; // [rsp+E0h] [rbp-20h] BYREF
  __m256i v30; // [rsp+F0h] [rbp-10h]
  __int128 v31; // [rsp+110h] [rbp+10h] BYREF
  int v32; // [rsp+120h] [rbp+20h]
  __int128 v33; // [rsp+128h] [rbp+28h] BYREF
  int v34; // [rsp+138h] [rbp+38h]

  v28 = -2LL;
  ppv[0] = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  *a4 = 0LL;
  pvar = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  *(_QWORD *)&v31 = 0x4C7D1B2C233164C8LL;
  *((_QWORD *)&v31 + 1) = 0x67257A6871B668BCLL;
  v33 = v31;
  v34 = 1;
  *(_QWORD *)&v31 = 0x41B43EBB9A82A7DBLL;
  *((_QWORD *)&v31 + 1) = 0xFC181731B718BA83uLL;
  v32 = 1;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 32) + 40LL))(
               *(_QWORD *)(a1 + 32),
               &v33,
               &pvar);
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 32) + 40LL))(
                 *(_QWORD *)(a1 + 32),
                 &v31,
                 &v25);
    if ( Instance >= 0 )
    {
      Instance = CoCreateInstance(
                   &CLSID_MMDeviceEnumerator,
                   0LL,
                   0x17u,
                   &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                   ppv);
      if ( Instance >= 0 )
      {
        Instance = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv[0] + 40LL))(ppv[0], v23, &v18);
        if ( Instance >= 0 )
        {
          Instance = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 24LL))(
                       v18,
                       &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                       23LL,
                       0LL,
                       &v17);
          if ( Instance >= 0 )
          {
            Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 56LL))(
                         v17,
                         (unsigned int)v26,
                         &v15);
            if ( Instance >= 0 )
            {
              v13 = 0LL;
              Instance = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, unsigned int **))(*(_QWORD *)v15 + 104LL))(
                           v15,
                           1LL,
                           &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
                           &v13);
              if ( Instance < 0 )
              {
LABEL_8:
                ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v13);
                goto LABEL_23;
              }
              v14 = 0LL;
              if ( (*(int (__fastcall **)(unsigned int *, unsigned int **))(*(_QWORD *)v13 + 32LL))(v13, &v14) >= 0 )
              {
                v20 = *a3;
                v21.m256i_i64[0] = *((_QWORD *)a3 + 2);
                Instance = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_e9af1581bd6c783f369e35704f6cd4a0___(
                             v8,
                             (__int64)&v20,
                             v14,
                             a4);
                if ( Instance < 0 )
                {
                  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v14);
                  goto LABEL_8;
                }
              }
              ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v14);
              ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v13);
              Instance = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v15 + 104LL))(
                           v15,
                           1LL,
                           &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                           &v16);
              if ( Instance >= 0 && !*a4 )
              {
                v9 = v16;
                v13 = 0LL;
                ATL::CHeapPtrBase<KSDATAFORMAT,ATL::CComAllocator>::AllocateBytes(&v13);
                v10 = v13;
                if ( !v13 )
                {
                  Instance = -2147024882;
LABEL_16:
                  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v13);
                  goto LABEL_23;
                }
                *v13 = 104;
                *((GUID *)v10 + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
                *((GUID *)v10 + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
                *((GUID *)v10 + 2) = GUID_00000001_0000_0010_8000_00aa00389b71;
                *((_WORD *)v10 + 32) = -2;
                *(GUID *)(v10 + 22) = GUID_00000000_0000_0010_8000_00aa00389b71;
                v10[22] = 1;
                *(_QWORD *)&v20 = v9;
                *((_QWORD *)&v20 + 1) = v10;
                v21.m256i_i64[0] = (__int64)a4;
                *(_OWORD *)&v21.m256i_u64[1] = *a3;
                v21.m256i_i64[3] = *((_QWORD *)a3 + 2);
                v29 = v20;
                v30 = v21;
                Instance = CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_7aa2d33e36a32a2890f09fc92a95f1fa___(
                             a1,
                             (__int64)(v10 + 16),
                             &v29);
                if ( Instance < 0 )
                  goto LABEL_16;
                ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v13);
                if ( *a4 )
                  goto LABEL_23;
                v13 = 0LL;
                Instance = (*(__int64 (__fastcall **)(__int64, unsigned int **))(*(_QWORD *)v16 + 32LL))(v16, &v13);
                if ( Instance < 0 )
                  goto LABEL_16;
                v20 = *a3;
                v21.m256i_i64[0] = *((_QWORD *)a3 + 2);
                Instance = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_e9af1581bd6c783f369e35704f6cd4a0___(
                             v11,
                             (__int64)&v20,
                             v13,
                             a4);
                if ( Instance < 0 )
                  goto LABEL_16;
                ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v13);
                if ( !*a4 )
                  Instance = -2004287480;
              }
            }
          }
        }
      }
    }
  }
LABEL_23:
  PropVariantClear(&pvar);
  PropVariantClear(&v25);
  LogEPCError("CEndpointCharacteristics::GetComputedDefaultFormat", 5928, Instance);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppv);
  return (unsigned int)Instance;
}
