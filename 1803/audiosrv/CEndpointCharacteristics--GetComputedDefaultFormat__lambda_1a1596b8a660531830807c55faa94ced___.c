/*
 * XREFs of CEndpointCharacteristics::GetComputedDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___ @ 0x180063DC4
 * Callers:
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___ @ 0x18006428C (CEndpointCharacteristics--GetDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___.c)
 * Callees:
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x180039AD4 (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_1a1596b8a660531830807c55faa94ced___ @ 0x180063A9C (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_1a1596b8a660531830807c55faa94ced__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c___ @ 0x180063BF0 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x180097F5C (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     ?AllocateBytes@?$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800E9CF0 (-AllocateBytes@-$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x1800EFDC8 (-LogEPCError@@YAXPEBDHJ@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::GetComputedDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct tWAVEFORMATEX **a4)
{
  int FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c; // ebx
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned int *v10; // rax
  __int64 v11; // rcx
  unsigned int *v13; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v20[3]; // [rsp+70h] [rbp-98h] BYREF
  __m256i v21; // [rsp+88h] [rbp-80h]
  PROPVARIANT pvar; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-58h]
  __int64 v24; // [rsp+B8h] [rbp-50h]
  PROPVARIANT v25; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-40h]
  __int64 v27; // [rsp+D0h] [rbp-38h]
  __int64 v28; // [rsp+D8h] [rbp-30h]
  __int128 v29; // [rsp+E8h] [rbp-20h] BYREF
  __m256i v30; // [rsp+F8h] [rbp-10h]
  __int128 v31; // [rsp+118h] [rbp+10h] BYREF
  int v32; // [rsp+128h] [rbp+20h]
  __int128 v33; // [rsp+130h] [rbp+28h] BYREF
  int v34; // [rsp+140h] [rbp+38h]

  v28 = -2LL;
  ppv = 0LL;
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
  FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 32) + 40LL))(
                                                                            *(_QWORD *)(a1 + 32),
                                                                            &v33,
                                                                            &pvar);
  if ( FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c >= 0 )
  {
    FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 32) + 40LL))(
                                                                              *(_QWORD *)(a1 + 32),
                                                                              &v31,
                                                                              &v25);
    if ( FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c >= 0 )
    {
      FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c = CoCreateInstance(
                                                                                &CLSID_MMDeviceEnumerator,
                                                                                0LL,
                                                                                0x17u,
                                                                                &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                                                                                &ppv);
      if ( FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c >= 0 )
      {
        FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(
                                                                                  ppv,
                                                                                  v23,
                                                                                  &v18);
        if ( FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c >= 0 )
        {
          FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 24LL))(
                                                                                    v18,
                                                                                    &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                                                                                    23LL,
                                                                                    0LL,
                                                                                    &v17);
          if ( FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c >= 0 )
          {
            FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 56LL))(
                                                                                      v17,
                                                                                      (unsigned int)v26,
                                                                                      &v15);
            if ( FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c >= 0 )
            {
              v14 = 0LL;
              FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v15 + 104LL))(
                                                                                        v15,
                                                                                        1LL,
                                                                                        &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
                                                                                        &v14);
              if ( FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c < 0 )
              {
LABEL_8:
                ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v14);
                goto LABEL_23;
              }
              v13 = 0LL;
              if ( (*(int (__fastcall **)(__int64, unsigned int **))(*(_QWORD *)v14 + 32LL))(v14, &v13) >= 0 )
              {
                *(_OWORD *)&v20[1] = *(_OWORD *)a3;
                v21.m256i_i64[0] = *(_QWORD *)(a3 + 16);
                FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_1a1596b8a660531830807c55faa94ced___(
                                                                                          v8,
                                                                                          (__int64)&v20[1],
                                                                                          v13,
                                                                                          a4);
                if ( FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c < 0 )
                {
                  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>((LPVOID *)&v13);
                  goto LABEL_8;
                }
              }
              ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>((LPVOID *)&v13);
              ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v14);
              FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v15 + 104LL))(
                                                                                        v15,
                                                                                        1LL,
                                                                                        &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                                                                                        &v16);
              if ( FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c >= 0 && !*a4 )
              {
                v9 = v16;
                v13 = 0LL;
                ATL::CHeapPtrBase<KSDATAFORMAT,ATL::CComAllocator>::AllocateBytes(&v13);
                v10 = v13;
                if ( !v13 )
                {
                  FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c = -2147024882;
LABEL_16:
                  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>((LPVOID *)&v13);
                  goto LABEL_23;
                }
                *v13 = 104;
                *((GUID *)v10 + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
                *((GUID *)v10 + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
                *((GUID *)v10 + 2) = GUID_00000001_0000_0010_8000_00aa00389b71;
                *((_WORD *)v10 + 32) = -2;
                *(GUID *)(v10 + 22) = GUID_00000000_0000_0010_8000_00aa00389b71;
                v10[22] = 1;
                v20[1] = v9;
                v20[2] = v10;
                v21.m256i_i64[0] = (__int64)a4;
                *(_OWORD *)&v21.m256i_u64[1] = *(_OWORD *)a3;
                v21.m256i_i64[3] = *(_QWORD *)(a3 + 16);
                v29 = *(_OWORD *)&v20[1];
                v30 = v21;
                FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c = CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c___(
                                                                                          a1,
                                                                                          (__int64)(v10 + 16),
                                                                                          &v29);
                ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>((LPVOID *)&v13);
                if ( FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c >= 0 && !*a4 )
                {
                  v13 = 0LL;
                  FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c = (*(__int64 (__fastcall **)(__int64, unsigned int **))(*(_QWORD *)v16 + 32LL))(
                                                                                            v16,
                                                                                            &v13);
                  if ( FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c < 0 )
                    goto LABEL_16;
                  *(_OWORD *)&v20[1] = *(_OWORD *)a3;
                  v21.m256i_i64[0] = *(_QWORD *)(a3 + 16);
                  FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_1a1596b8a660531830807c55faa94ced___(
                                                                                            v11,
                                                                                            (__int64)&v20[1],
                                                                                            v13,
                                                                                            a4);
                  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>((LPVOID *)&v13);
                  if ( FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c >= 0 && !*a4 )
                    FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c = -2004287480;
                }
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
  LogEPCError(
    "CEndpointCharacteristics::GetComputedDefaultFormat",
    5964,
    FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v17);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v15);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v16);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v18);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&ppv);
  return (unsigned int)FirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c;
}
