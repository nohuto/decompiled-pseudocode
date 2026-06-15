/*
 * XREFs of CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87___ @ 0x1800ADD54
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800B2F84 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180008A30 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180021268 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180023870 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180031688 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180033A5A (memset.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ForEachViableDataRange__lambda_225fd911592b9cedd82c362abdcc44ab___ @ 0x1800AE3E0 (ForEachViableDataRange__lambda_225fd911592b9cedd82c362abdcc44ab___.c)
 *     ForEachViableDataRange__lambda_9c7c2d53555921d5de44fb6456baa793___ @ 0x1800AE474 (ForEachViableDataRange__lambda_9c7c2d53555921d5de44fb6456baa793___.c)
 *     ForEachViableDataRange__lambda_d4588c005402a78ac3a647ced08f3c2b___ @ 0x1800AE508 (ForEachViableDataRange__lambda_d4588c005402a78ac3a647ced08f3c2b___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800AF308 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     _lambda_bc829bb10b63470994cc211668497c87_::operator() @ 0x1800B0698 (_lambda_bc829bb10b63470994cc211668497c87_--operator().c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87___(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        size_t Size,
        __int64 a4,
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
  void *v19; // rcx
  SIZE_T v20; // r12
  int i; // ebx
  int v22; // r13d
  size_t v23; // rcx
  char *v24; // r9
  unsigned int v25; // r12d
  struct _GUID *v26; // rcx
  unsigned int *v27; // r12
  __int16 v28; // r9
  int v29; // ecx
  unsigned int v30; // edx
  LPVOID pv; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v33; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v34; // [rsp+44h] [rbp-C4h]
  __int64 v35; // [rsp+48h] [rbp-C0h]
  struct _GUID *v36; // [rsp+50h] [rbp-B8h]
  __int64 v37; // [rsp+58h] [rbp-B0h]
  __int64 v38; // [rsp+60h] [rbp-A8h]
  _DWORD *v39; // [rsp+68h] [rbp-A0h]
  struct IUnknown *v40; // [rsp+70h] [rbp-98h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+78h] [rbp-90h] BYREF
  void *Src; // [rsp+90h] [rbp-78h]
  struct _GUID v43; // [rsp+98h] [rbp-70h] BYREF
  char *v44; // [rsp+A8h] [rbp-60h]
  __int64 v45; // [rsp+B0h] [rbp-58h]
  __int64 v46; // [rsp+B8h] [rbp-50h]
  __int64 v47; // [rsp+C0h] [rbp-48h]
  __int64 v48; // [rsp+C8h] [rbp-40h]
  __int64 v49[2]; // [rsp+D8h] [rbp-30h] BYREF
  __m256i v50; // [rsp+E8h] [rbp-20h]
  __int128 v51; // [rsp+108h] [rbp+0h]
  __int64 v52; // [rsp+118h] [rbp+10h]
  _DWORD v53[14]; // [rsp+128h] [rbp+20h] BYREF
  _OWORD v54[2]; // [rsp+160h] [rbp+58h] BYREF
  int v55; // [rsp+180h] [rbp+78h]
  int v56; // [rsp+184h] [rbp+7Ch]
  _DWORD v57[2]; // [rsp+188h] [rbp+80h]
  __int64 v58; // [rsp+190h] [rbp+88h]
  __int128 v59; // [rsp+198h] [rbp+90h]
  __int128 v60; // [rsp+1A8h] [rbp+A0h]
  int v61; // [rsp+1B8h] [rbp+B0h]
  __int64 v62; // [rsp+1C0h] [rbp+B8h]
  __int128 v63; // [rsp+1C8h] [rbp+C0h]
  int v64; // [rsp+1D8h] [rbp+D0h]
  __int64 v65; // [rsp+1E0h] [rbp+D8h]
  __int128 v66; // [rsp+1E8h] [rbp+E0h]
  int v67; // [rsp+1F8h] [rbp+F0h]
  __int64 v68; // [rsp+200h] [rbp+F8h]
  __int128 v69; // [rsp+208h] [rbp+100h]

  v48 = -2LL;
  v38 = a4;
  v6 = (unsigned int)Size;
  v36 = a5;
  v45 = (__int64)a6;
  v46 = 0LL;
  v47 = 0LL;
  v9 = 0;
  memset(&pvar, 0, sizeof(pvar));
  v53[0] = 8000;
  v53[1] = 11025;
  v53[2] = 16000;
  v53[3] = 22050;
  v53[4] = 24000;
  v53[5] = 32000;
  v53[6] = 44100;
  v53[7] = 48000;
  v53[8] = 88200;
  v53[9] = 96000;
  v53[10] = 176400;
  v53[11] = 192000;
  v53[12] = 352800;
  v53[13] = 384000;
  v54[0] = _mm_load_si128((const __m128i *)&_xmm);
  v54[1] = _mm_load_si128((const __m128i *)&_xmm);
  v55 = 32;
  v56 = 32;
  v57[0] = 0;
  v58 = 0LL;
  v59 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_bc829bb10b63470994cc211668497c87_>'::`2'::s_ChannelMaskEntry_1;
  v60 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_bc829bb10b63470994cc211668497c87_>'::`2'::s_ChannelMaskEntry_2;
  v61 = 0;
  v62 = 0LL;
  v63 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_bc829bb10b63470994cc211668497c87_>'::`2'::s_ChannelMaskEntry_4;
  v64 = 0;
  v65 = 0LL;
  v66 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_bc829bb10b63470994cc211668497c87_>'::`2'::s_ChannelMaskEntry_6;
  v67 = 0;
  v68 = 0LL;
  v69 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_bc829bb10b63470994cc211668497c87_>'::`2'::s_ChannelMaskEntry_8;
  v10 = 0LL;
  v44 = 0LL;
  v11 = *a6;
  v12 = a6[1];
  v13 = a6[2];
  v14 = a6[3];
  v15 = *((_QWORD *)a6 + 8);
  v40 = 0LL;
  v16 = (struct IUnknown *)*((_QWORD *)this + 2);
  if ( v16 )
  {
    ATL::AtlComQIPtrAssign(&v40, v16, &GUID_419e19f7_d318_4c05_b705_2f17133c55da);
    if ( v40 )
    {
      v33 = 0;
      ((void (__fastcall *)(struct IUnknown *, unsigned int *))v40->lpVtbl[3].Release)(v40, &v33);
    }
  }
  pv = 0LL;
  *(_OWORD *)v49 = v11;
  *(_OWORD *)v50.m256i_i8 = v12;
  *(_OWORD *)&v50.m256i_u64[2] = v13;
  v51 = v14;
  v52 = v15;
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___(
    (int)this,
    (__int64)v49,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  *(_OWORD *)v49 = v11;
  *(_OWORD *)v50.m256i_i8 = v12;
  *(_OWORD *)&v50.m256i_u64[2] = v13;
  v51 = v14;
  v52 = v15;
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___(
    (int)this,
    (__int64)v49,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  v43 = *v36;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               this,
                                               a2,
                                               &v43,
                                               (struct tWAVEFORMATEX **)&pv);
  v18 = pv;
  if ( ProposedConnectorFormatForProcessingMode >= 0 )
  {
    if ( *((_WORD *)pv + 7) )
    {
      if ( *((_DWORD *)pv + 2) )
      {
        if ( *((_WORD *)pv + 6) )
        {
          if ( *((_WORD *)pv + 1) )
          {
            if ( *((_DWORD *)pv + 1) )
            {
              v9 = lambda_bc829bb10b63470994cc211668497c87_::operator()(a6, pv, 0LL);
              if ( v9 < 0 )
              {
                v19 = v18;
LABEL_12:
                CoTaskMemFree(v19);
                goto LABEL_40;
              }
            }
          }
        }
      }
    }
  }
  CoTaskMemFree(v18);
  *(_QWORD *)&v43.Data1 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, struct tagPROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
         *((_QWORD *)this + 4),
         &PKEY_AudioEngine_DeviceFormat,
         &pvar) >= 0
    && pvar.vt == 65
    && IsValidWfxBlob(&pvar) )
  {
    v9 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData);
    if ( v9 >= 0 )
    {
      v9 = lambda_bc829bb10b63470994cc211668497c87_::operator()(a6, pvar.bstrblobVal.pData, 0LL);
      if ( v9 < 0 )
      {
        v19 = 0LL;
        goto LABEL_12;
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  CoTaskMemFree(0LL);
  v20 = (unsigned int)(3 * v6);
  *(_QWORD *)&v43.Data1 = v20;
  v10 = (char *)operator new[](v20, (const struct std::nothrow_t *)&std::nothrow);
  v44 = v10;
  if ( v10 )
  {
    for ( i = 0; (unsigned int)i < 9; ++i )
    {
      v22 = v57[4 * i];
      if ( v22 )
      {
        memset(v10, 1, v20);
        if ( (unsigned __int8)ForEachViableDataRange__lambda_225fd911592b9cedd82c362abdcc44ab_(
                                (unsigned int)v6,
                                v38,
                                v10,
                                (unsigned int)i) )
        {
          LODWORD(v35) = 0;
          if ( v22 > 0 )
          {
            v23 = v6;
            v24 = &v10[v6];
            Src = &v10[v6];
            pv = 0LL;
            while ( 2 )
            {
              v25 = 0;
              v34 = 0;
              v39 = v53;
              do
              {
                memcpy_0(v24, v10, v23);
                LODWORD(v37) = *v39;
                if ( (unsigned __int8)ForEachViableDataRange__lambda_d4588c005402a78ac3a647ced08f3c2b_(
                                        (unsigned int)v6,
                                        v38,
                                        Src,
                                        (unsigned int)v37) )
                {
                  v33 = 0;
                  v26 = (struct _GUID *)&v10[(unsigned int)(2 * v6)];
                  v36 = v26;
                  v27 = (unsigned int *)v54;
                  while ( 1 )
                  {
                    memcpy_0(v26, Src, v6);
                    if ( (unsigned __int8)ForEachViableDataRange__lambda_9c7c2d53555921d5de44fb6456baa793_(
                                            (unsigned int)v6,
                                            v38,
                                            v36,
                                            *v27) )
                    {
                      v29 = *(_DWORD *)((char *)pv + *(&v58 + 2 * i));
                      v30 = v27[1];
                      if ( !v29 && i <= 2 )
                        v29 = 4 - (i != 1);
                      v50.m256i_i16[1] = v28;
                      v50.m256i_i32[1] = v29;
                      *(GUID *)&v50.m256i_u64[1] = GUID_00000001_0000_0010_8000_00aa00389b71;
                      LOWORD(v49[0]) = -2;
                      HIWORD(v49[1]) = v30;
                      v50.m256i_i16[0] = 22;
                      WORD1(v49[0]) = i;
                      HIDWORD(v49[0]) = v37;
                      WORD2(v49[1]) = i * ((unsigned __int16)v30 >> 3);
                      LODWORD(v49[1]) = v37 * WORD2(v49[1]);
                      v9 = lambda_bc829bb10b63470994cc211668497c87_::operator()(v45, v49, 0LL);
                      if ( v9 < 0 )
                        goto LABEL_40;
                    }
                    ++v33;
                    v27 += 2;
                    v26 = v36;
                    if ( v33 >= 5 )
                    {
                      v25 = v34;
                      break;
                    }
                  }
                }
                v34 = ++v25;
                ++v39;
                v23 = v6;
                v24 = &v10[v6];
              }
              while ( v25 < 0xE );
              LODWORD(v35) = v35 + 1;
              pv = (char *)pv + 4;
              v24 = &v10[v6];
              if ( (int)v35 < v22 )
                continue;
              break;
            }
            v20 = *(_QWORD *)&v43.Data1;
          }
        }
      }
    }
  }
  else
  {
    v9 = -2147024882;
  }
LABEL_40:
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( v40 )
    ((void (__fastcall *)(struct IUnknown *))v40->lpVtbl->Release)(v40);
  operator delete(v10, (const struct std::nothrow_t *)1);
  return (unsigned int)v9;
}
