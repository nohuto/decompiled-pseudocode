/*
 * XREFs of CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87___ @ 0x1800E7650
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800EA250 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800184EC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180038090 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180038250 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ForEachViableDataRange__lambda_225fd911592b9cedd82c362abdcc44ab___ @ 0x1800E7DD4 (ForEachViableDataRange__lambda_225fd911592b9cedd82c362abdcc44ab___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800E8BD8 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     _lambda_bc829bb10b63470994cc211668497c87_::operator() @ 0x1800E9504 (_lambda_bc829bb10b63470994cc211668497c87_--operator().c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x1800EC9AC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87___(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        size_t Size,
        unsigned int *a4,
        struct _GUID *a5,
        __int128 *a6)
{
  size_t v6; // r14
  int v9; // esi
  char *v10; // rdi
  __int128 v11; // xmm6
  __int128 v12; // xmm7
  __int128 v13; // xmm8
  __int128 v14; // xmm9
  __int64 v15; // xmm10_8
  struct IUnknown *v16; // rdx
  int ProposedConnectorFormatForProcessingMode; // eax
  void *v18; // rbx
  __int64 v19; // r12
  void *v20; // rcx
  SIZE_T v21; // r12
  int i; // ebx
  int v23; // r15d
  char *v24; // rax
  unsigned int v25; // r15d
  unsigned int *v26; // r12
  unsigned int v27; // r11d
  unsigned int *v28; // rcx
  char v29; // r10
  char *v30; // rdx
  size_t v31; // r9
  unsigned int *v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // r12d
  char *v36; // rax
  int *v37; // r15
  unsigned int v38; // eax
  unsigned int *v39; // rdx
  char v40; // r11
  char *v41; // r8
  size_t v42; // r10
  unsigned int *v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // edx
  int v47; // r8d
  LPVOID pv; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+48h] [rbp-C0h]
  int v52; // [rsp+50h] [rbp-B8h]
  unsigned int v53; // [rsp+54h] [rbp-B4h]
  __int64 v54; // [rsp+58h] [rbp-B0h]
  unsigned int *v55; // [rsp+60h] [rbp-A8h]
  struct IUnknown *v56; // [rsp+68h] [rbp-A0h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+70h] [rbp-98h] BYREF
  char *v58; // [rsp+88h] [rbp-80h]
  unsigned int *v59; // [rsp+90h] [rbp-78h]
  struct _GUID v60; // [rsp+98h] [rbp-70h] BYREF
  char *v61; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v62; // [rsp+B0h] [rbp-58h]
  __int64 v63; // [rsp+B8h] [rbp-50h]
  __int64 v64; // [rsp+C0h] [rbp-48h]
  __int64 v65; // [rsp+C8h] [rbp-40h]
  __int64 v66[2]; // [rsp+D8h] [rbp-30h] BYREF
  __m256i v67; // [rsp+E8h] [rbp-20h]
  __int128 v68; // [rsp+108h] [rbp+0h]
  __int64 v69; // [rsp+118h] [rbp+10h]
  _DWORD v70[14]; // [rsp+128h] [rbp+20h] BYREF
  _OWORD v71[2]; // [rsp+160h] [rbp+58h] BYREF
  int v72; // [rsp+180h] [rbp+78h]
  int v73; // [rsp+184h] [rbp+7Ch]
  _DWORD v74[2]; // [rsp+188h] [rbp+80h]
  __int64 v75; // [rsp+190h] [rbp+88h]
  __int128 v76; // [rsp+198h] [rbp+90h]
  __int128 v77; // [rsp+1A8h] [rbp+A0h]
  int v78; // [rsp+1B8h] [rbp+B0h]
  __int64 v79; // [rsp+1C0h] [rbp+B8h]
  __int128 v80; // [rsp+1C8h] [rbp+C0h]
  int v81; // [rsp+1D8h] [rbp+D0h]
  __int64 v82; // [rsp+1E0h] [rbp+D8h]
  __int128 v83; // [rsp+1E8h] [rbp+E0h]
  int v84; // [rsp+1F8h] [rbp+F0h]
  __int64 v85; // [rsp+200h] [rbp+F8h]
  __int128 v86; // [rsp+208h] [rbp+100h]

  v65 = -2LL;
  v55 = a4;
  v6 = (unsigned int)Size;
  v51 = (__int64)a6;
  v63 = 0LL;
  v64 = 0LL;
  v9 = 0;
  memset(&pvar, 0, sizeof(pvar));
  v70[0] = 8000;
  v70[1] = 11025;
  v70[2] = 16000;
  v70[3] = 22050;
  v70[4] = 24000;
  v70[5] = 32000;
  v70[6] = 44100;
  v70[7] = 48000;
  v70[8] = 88200;
  v70[9] = 96000;
  v70[10] = 176400;
  v70[11] = 192000;
  v70[12] = 352800;
  v70[13] = 384000;
  v71[0] = _mm_load_si128((const __m128i *)&_xmm);
  v71[1] = _mm_load_si128((const __m128i *)&_xmm);
  v72 = 32;
  v73 = 32;
  v74[0] = 0;
  v75 = 0LL;
  v76 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_bc829bb10b63470994cc211668497c87_>'::`2'::s_ChannelMaskEntry_1;
  v77 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_bc829bb10b63470994cc211668497c87_>'::`2'::s_ChannelMaskEntry_2;
  v78 = 0;
  v79 = 0LL;
  v80 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_bc829bb10b63470994cc211668497c87_>'::`2'::s_ChannelMaskEntry_4;
  v81 = 0;
  v82 = 0LL;
  v83 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_bc829bb10b63470994cc211668497c87_>'::`2'::s_ChannelMaskEntry_6;
  v84 = 0;
  v85 = 0LL;
  v86 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_bc829bb10b63470994cc211668497c87_>'::`2'::s_ChannelMaskEntry_8;
  v10 = 0LL;
  v61 = 0LL;
  v11 = *a6;
  v12 = a6[1];
  v13 = a6[2];
  v14 = a6[3];
  v15 = *((_QWORD *)a6 + 8);
  v56 = 0LL;
  v16 = (struct IUnknown *)*((_QWORD *)this + 2);
  if ( v16 )
  {
    ATL::AtlComQIPtrAssign(&v56, v16, &GUID_419e19f7_d318_4c05_b705_2f17133c55da);
    if ( v56 )
    {
      LODWORD(v50) = 0;
      ((void (__fastcall *)(struct IUnknown *, __int64 *))v56->lpVtbl[3].Release)(v56, &v50);
    }
  }
  pv = 0LL;
  *(_OWORD *)v66 = v11;
  *(_OWORD *)v67.m256i_i8 = v12;
  *(_OWORD *)&v67.m256i_u64[2] = v13;
  v68 = v14;
  v69 = v15;
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___(
    (int)this,
    (__int64)v66,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  *(_OWORD *)v66 = v11;
  *(_OWORD *)v67.m256i_i8 = v12;
  *(_OWORD *)&v67.m256i_u64[2] = v13;
  v68 = v14;
  v69 = v15;
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___(
    (int)this,
    (__int64)v66,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  v60 = *a5;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               this,
                                               a2,
                                               &v60,
                                               (struct tWAVEFORMATEX **)&pv);
  v18 = pv;
  if ( ProposedConnectorFormatForProcessingMode >= 0
    && *((_WORD *)pv + 7)
    && *((_DWORD *)pv + 2)
    && *((_WORD *)pv + 6)
    && *((_WORD *)pv + 1) )
  {
    v19 = v51;
    if ( *((_DWORD *)pv + 1) )
    {
      v9 = lambda_bc829bb10b63470994cc211668497c87_::operator()(v51, pv, 0LL);
      if ( v9 < 0 )
      {
        v20 = v18;
LABEL_12:
        CoTaskMemFree(v20);
        goto LABEL_69;
      }
    }
  }
  else
  {
    v19 = v51;
  }
  CoTaskMemFree(v18);
  *(_QWORD *)&v60.Data1 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, struct tagPROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
         *((_QWORD *)this + 4),
         &PKEY_AudioEngine_DeviceFormat,
         &pvar) >= 0
    && pvar.vt == 65 )
  {
    if ( (unsigned int)IsValidWfxBlob(&pvar) )
    {
      v9 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData);
      if ( v9 >= 0 )
      {
        v9 = lambda_bc829bb10b63470994cc211668497c87_::operator()(v19, pvar.bstrblobVal.pData, 0LL);
        if ( v9 < 0 )
        {
          v20 = 0LL;
          goto LABEL_12;
        }
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  CoTaskMemFree(0LL);
  v21 = (unsigned int)(3 * v6);
  *(_QWORD *)&v60.Data1 = v21;
  v10 = (char *)operator new[](v21, (const struct std::nothrow_t *)&std::nothrow);
  v61 = v10;
  if ( v10 )
  {
    for ( i = 0; (unsigned int)i < 9; ++i )
    {
      v62 = 16LL * i;
      v23 = v74[v62 / 4];
      LODWORD(v54) = v23;
      if ( v23 )
      {
        memset_0(v10, 1, v21);
        if ( (unsigned __int8)ForEachViableDataRange__lambda_225fd911592b9cedd82c362abdcc44ab_(
                                (unsigned int)v6,
                                v55,
                                v10,
                                (unsigned int)i) )
        {
          v52 = 0;
          if ( v23 > 0 )
          {
            v24 = &v10[v6];
            pv = 0LL;
            while ( 2 )
            {
              v25 = 0;
              LODWORD(v50) = 0;
              v26 = v70;
              v59 = v70;
              do
              {
                memcpy_0(v24, v10, v6);
                v27 = *v26;
                v53 = *v26;
                v28 = v55;
                v29 = 0;
                if ( !(_DWORD)v6 )
                  goto LABEL_43;
                v30 = &v10[v6];
                v31 = v6;
                do
                {
                  v32 = (unsigned int *)((char *)v28 + *v28);
                  if ( *v30 )
                  {
                    v33 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v28 + 2);
                    if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v28 + 2) )
                      v33 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v28 + 3);
                    if ( v33 )
                      goto LABEL_40;
                    v34 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v28 + 4);
                    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v28 + 4) )
                      v34 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v28 + 5);
                    if ( v34 || v27 < v28[19] || v27 > v28[20] )
                    {
LABEL_40:
                      *v30 = 0;
                    }
                    else
                    {
                      *v30 = 1;
                      v29 = 1;
                    }
                  }
                  ++v30;
                  v28 = v32;
                  --v31;
                }
                while ( v31 );
                if ( v29 )
                {
LABEL_43:
                  v35 = 0;
                  v36 = &v10[(unsigned int)(2 * v6)];
                  v58 = v36;
                  v37 = (int *)v71 + 1;
                  while ( 1 )
                  {
                    memcpy_0(v36, &v10[v6], v6);
                    v38 = *(v37 - 1);
                    v39 = v55;
                    v40 = 0;
                    if ( !(_DWORD)v6 )
                      goto LABEL_74;
                    v41 = v58;
                    v42 = v6;
                    do
                    {
                      v43 = (unsigned int *)((char *)v39 + *v39);
                      if ( *v41 )
                      {
                        v44 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v39 + 2);
                        if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v39 + 2) )
                          v44 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v39 + 3);
                        if ( v44 )
                          goto LABEL_56;
                        v45 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v39 + 4);
                        if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v39 + 4) )
                          v45 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v39 + 5);
                        if ( v45 || v38 < v39[17] || v38 > v39[18] )
                        {
LABEL_56:
                          *v41 = 0;
                        }
                        else
                        {
                          *v41 = 1;
                          v40 = 1;
                        }
                      }
                      ++v41;
                      v39 = v43;
                      --v42;
                    }
                    while ( v42 );
                    if ( v40 )
                    {
LABEL_74:
                      v46 = *(_DWORD *)((char *)pv + *(__int64 *)((char *)&v75 + v62));
                      v47 = *v37;
                      if ( !v46 && i <= 2 )
                        v46 = 4 - (i != 1);
                      v67.m256i_i16[1] = v38;
                      v67.m256i_i32[1] = v46;
                      *(GUID *)&v67.m256i_u64[1] = GUID_00000001_0000_0010_8000_00aa00389b71;
                      LOWORD(v66[0]) = -2;
                      HIWORD(v66[1]) = v47;
                      v67.m256i_i16[0] = 22;
                      WORD1(v66[0]) = i;
                      HIDWORD(v66[0]) = v53;
                      WORD2(v66[1]) = i * ((unsigned __int16)v47 >> 3);
                      LODWORD(v66[1]) = v53 * WORD2(v66[1]);
                      v9 = lambda_bc829bb10b63470994cc211668497c87_::operator()(v51, v66, 0LL);
                      if ( v9 < 0 )
                        goto LABEL_69;
                    }
                    ++v35;
                    v37 += 2;
                    v36 = v58;
                    if ( v35 >= 5 )
                    {
                      v25 = v50;
                      v26 = v59;
                      break;
                    }
                  }
                }
                LODWORD(v50) = ++v25;
                v59 = ++v26;
                v24 = &v10[v6];
              }
              while ( v25 < 0xE );
              ++v52;
              pv = (char *)pv + 4;
              v24 = &v10[v6];
              if ( v52 < (int)v54 )
                continue;
              break;
            }
            v21 = *(_QWORD *)&v60.Data1;
          }
        }
      }
    }
  }
  else
  {
    v9 = -2147024882;
  }
LABEL_69:
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( v56 )
    ((void (__fastcall *)(struct IUnknown *))v56->lpVtbl->Release)(v56);
  operator delete(v10, (const struct std::nothrow_t *)1);
  return (unsigned int)v9;
}
