/*
 * XREFs of CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_0a80d7e3d12d42377e48064cdd362aeb___ @ 0x1800B9E50
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800BC6DC (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000C8C0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000DC50 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002DAEC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18002EBF8 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_4d461d498790dddb1db29f8fdd447ecc___ @ 0x1800BB3A4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_4d461d498790dddb1db29f8fdd447ecc___.c)
 *     _lambda_0a80d7e3d12d42377e48064cdd362aeb_::operator() @ 0x1800BB974 (_lambda_0a80d7e3d12d42377e48064cdd362aeb_--operator().c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_0a80d7e3d12d42377e48064cdd362aeb___(
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
  SIZE_T v21; // r13
  int v22; // ebx
  __int64 v23; // r15
  __int64 v24; // r15
  int v25; // r12d
  unsigned int *v26; // rax
  __int64 v27; // rdx
  char v28; // r10
  _BYTE *v29; // rcx
  size_t v30; // r9
  unsigned int *v31; // r8
  __int64 v32; // rdx
  size_t v33; // r11
  char *v34; // rax
  int *v35; // r13
  unsigned int *v36; // rax
  char v37; // r10
  _BYTE *v38; // rdx
  size_t v39; // r9
  unsigned int *v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // r12d
  unsigned int v44; // r13d
  char *v45; // rax
  int *v46; // r12
  unsigned int v47; // eax
  unsigned int *v48; // rcx
  char *v49; // r8
  size_t v50; // r10
  unsigned int *v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rdx
  char v54; // dl
  int v55; // edx
  int v56; // r8d
  char v58; // [rsp+38h] [rbp-D0h]
  int v59; // [rsp+3Ch] [rbp-CCh] BYREF
  LPVOID pv; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+48h] [rbp-C0h]
  int v62; // [rsp+50h] [rbp-B8h]
  int v63; // [rsp+54h] [rbp-B4h]
  unsigned int *v64; // [rsp+58h] [rbp-B0h]
  struct IUnknown *v65; // [rsp+60h] [rbp-A8h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+68h] [rbp-A0h] BYREF
  char *v67; // [rsp+80h] [rbp-88h]
  int *v68; // [rsp+88h] [rbp-80h]
  SIZE_T v69; // [rsp+90h] [rbp-78h]
  struct _GUID v70; // [rsp+98h] [rbp-70h] BYREF
  char *v71; // [rsp+A8h] [rbp-60h]
  __int64 v72; // [rsp+B0h] [rbp-58h]
  __int64 v73; // [rsp+B8h] [rbp-50h]
  __int64 v74; // [rsp+C0h] [rbp-48h]
  __int64 v75[2]; // [rsp+C8h] [rbp-40h] BYREF
  __m256i v76; // [rsp+D8h] [rbp-30h]
  __int128 v77; // [rsp+F8h] [rbp-10h]
  __int64 v78; // [rsp+108h] [rbp+0h]
  _DWORD v79[14]; // [rsp+118h] [rbp+10h] BYREF
  _OWORD v80[2]; // [rsp+150h] [rbp+48h] BYREF
  int v81; // [rsp+170h] [rbp+68h]
  int v82; // [rsp+174h] [rbp+6Ch]
  _DWORD v83[2]; // [rsp+178h] [rbp+70h]
  __int64 v84; // [rsp+180h] [rbp+78h]
  __int128 v85; // [rsp+188h] [rbp+80h]
  __int128 v86; // [rsp+198h] [rbp+90h]
  int v87; // [rsp+1A8h] [rbp+A0h]
  __int64 v88; // [rsp+1B0h] [rbp+A8h]
  __int128 v89; // [rsp+1B8h] [rbp+B0h]
  int v90; // [rsp+1C8h] [rbp+C0h]
  __int64 v91; // [rsp+1D0h] [rbp+C8h]
  __int128 v92; // [rsp+1D8h] [rbp+D0h]
  int v93; // [rsp+1E8h] [rbp+E0h]
  __int64 v94; // [rsp+1F0h] [rbp+E8h]
  __int128 v95; // [rsp+1F8h] [rbp+F0h]

  v74 = -2LL;
  v64 = a4;
  v6 = (unsigned int)Size;
  v61 = (__int64)a6;
  v72 = 0LL;
  v73 = 0LL;
  v9 = 0;
  memset(&pvar, 0, sizeof(pvar));
  v79[0] = 8000;
  v79[1] = 11025;
  v79[2] = 16000;
  v79[3] = 22050;
  v79[4] = 24000;
  v79[5] = 32000;
  v79[6] = 44100;
  v79[7] = 48000;
  v79[8] = 88200;
  v79[9] = 96000;
  v79[10] = 176400;
  v79[11] = 192000;
  v79[12] = 352800;
  v79[13] = 384000;
  v80[0] = _mm_load_si128((const __m128i *)&_xmm);
  v80[1] = _mm_load_si128((const __m128i *)&_xmm);
  v81 = 32;
  v82 = 32;
  v83[0] = 0;
  v84 = 0LL;
  v85 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_0a80d7e3d12d42377e48064cdd362aeb_>'::`2'::s_ChannelMaskEntry_1;
  v86 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_0a80d7e3d12d42377e48064cdd362aeb_>'::`2'::s_ChannelMaskEntry_2;
  v87 = 0;
  v88 = 0LL;
  v89 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_0a80d7e3d12d42377e48064cdd362aeb_>'::`2'::s_ChannelMaskEntry_4;
  v90 = 0;
  v91 = 0LL;
  v92 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_0a80d7e3d12d42377e48064cdd362aeb_>'::`2'::s_ChannelMaskEntry_6;
  v93 = 0;
  v94 = 0LL;
  v95 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_0a80d7e3d12d42377e48064cdd362aeb_>'::`2'::s_ChannelMaskEntry_8;
  v10 = 0LL;
  v71 = 0LL;
  v11 = *a6;
  v12 = a6[1];
  v13 = a6[2];
  v14 = a6[3];
  v15 = *((_QWORD *)a6 + 8);
  v65 = 0LL;
  v16 = (struct IUnknown *)*((_QWORD *)this + 2);
  if ( v16 )
  {
    ATL::AtlComQIPtrAssign(&v65, v16, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990);
    if ( v65 )
    {
      v59 = 0;
      ((void (__fastcall *)(struct IUnknown *, int *))v65->lpVtbl[3].Release)(v65, &v59);
    }
  }
  pv = 0LL;
  *(_OWORD *)v75 = v11;
  *(_OWORD *)v76.m256i_i8 = v12;
  *(_OWORD *)&v76.m256i_u64[2] = v13;
  v77 = v14;
  v78 = v15;
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_4d461d498790dddb1db29f8fdd447ecc___(
    (int)this,
    (__int64)v75,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  *(_OWORD *)v75 = v11;
  *(_OWORD *)v76.m256i_i8 = v12;
  *(_OWORD *)&v76.m256i_u64[2] = v13;
  v77 = v14;
  v78 = v15;
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_4d461d498790dddb1db29f8fdd447ecc___(
    (int)this,
    (__int64)v75,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  v70 = *a5;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               this,
                                               a2,
                                               &v70,
                                               (struct tWAVEFORMATEX **)&pv);
  v18 = pv;
  if ( ProposedConnectorFormatForProcessingMode >= 0
    && *((_WORD *)pv + 7)
    && *((_DWORD *)pv + 2)
    && *((_WORD *)pv + 6)
    && *((_WORD *)pv + 1) )
  {
    v19 = v61;
    if ( *((_DWORD *)pv + 1) )
    {
      v9 = lambda_0a80d7e3d12d42377e48064cdd362aeb_::operator()(v61, pv, 0LL);
      if ( v9 < 0 )
      {
        v20 = v18;
LABEL_12:
        CoTaskMemFree(v20);
        goto LABEL_86;
      }
    }
  }
  else
  {
    v19 = v61;
  }
  CoTaskMemFree(v18);
  *(_QWORD *)&v70.Data1 = 0LL;
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
      v9 = lambda_0a80d7e3d12d42377e48064cdd362aeb_::operator()(v19, pvar.bstrblobVal.pData, 0LL);
      if ( v9 < 0 )
      {
        v20 = 0LL;
        goto LABEL_12;
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  CoTaskMemFree(0LL);
  v21 = (unsigned int)(3 * v6);
  v69 = v21;
  v10 = (char *)operator new[](v21, (const struct std::nothrow_t *)&std::nothrow);
  v71 = v10;
  if ( !v10 )
  {
    v9 = -2147024882;
    goto LABEL_86;
  }
  v22 = 0;
  v23 = 0LL;
  while ( 1 )
  {
    v24 = 2 * v23;
    v25 = v83[2 * v24];
    if ( v25 )
      break;
LABEL_85:
    v23 = ++v22;
    if ( (unsigned __int64)v22 >= 9 )
      goto LABEL_86;
  }
  memset(v10, 1, v21);
  v26 = v64;
  LODWORD(v27) = 0;
  v28 = 0;
  if ( !(_DWORD)v6 )
    goto LABEL_39;
  v29 = v10;
  v30 = v6;
  do
  {
    v31 = (unsigned int *)((char *)v26 + *v26);
    if ( !*v29 )
      goto LABEL_37;
    v32 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v26 + 2);
    if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v26 + 2) )
      v32 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v26 + 3);
    if ( v32 )
      goto LABEL_35;
    v27 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v26 + 4);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v26 + 4) )
      v27 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v26 + 5);
    if ( v27 )
    {
LABEL_35:
      LODWORD(v27) = 0;
    }
    else if ( v22 <= v26[16] )
    {
      *v29 = 1;
      v28 = 1;
      goto LABEL_37;
    }
    *v29 = 0;
LABEL_37:
    ++v29;
    v26 = v31;
    --v30;
  }
  while ( v30 );
  v21 = v69;
  if ( !v28 )
    goto LABEL_85;
LABEL_39:
  v62 = 0;
  if ( v25 <= 0 )
    goto LABEL_85;
  v33 = v6;
  v34 = &v10[v6];
  *(_QWORD *)&v70.Data1 = &v10[v6];
  pv = 0LL;
LABEL_41:
  v59 = v27;
  v35 = v79;
  v68 = v79;
  while ( 1 )
  {
    memcpy_0(v34, v10, v33);
    v63 = *v35;
    v36 = v64;
    v37 = 0;
    v33 = v6;
    if ( !(_DWORD)v6 )
      break;
    v38 = *(_BYTE **)&v70.Data1;
    v39 = v6;
    do
    {
      v40 = (unsigned int *)((char *)v36 + *v36);
      if ( *v38 )
      {
        v41 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v36 + 2);
        if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v36 + 2) )
          v41 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v36 + 3);
        if ( v41 )
          goto LABEL_54;
        v42 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v36 + 4);
        if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v36 + 4) )
          v42 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v36 + 5);
        if ( v42 || *v35 < v36[19] || *v35 > v36[20] )
        {
LABEL_54:
          *v38 = 0;
        }
        else
        {
          *v38 = 1;
          v37 = 1;
        }
      }
      ++v38;
      v36 = v40;
      --v39;
    }
    while ( v39 );
    v43 = v59;
    LODWORD(v27) = 0;
    if ( v37 )
      break;
LABEL_82:
    v59 = v43 + 1;
    v68 = ++v35;
    v34 = &v10[v33];
    if ( (unsigned int)(v43 + 1) >= 0xE )
    {
      ++v62;
      pv = (char *)pv + 4;
      v34 = &v10[v33];
      if ( v62 < v83[2 * v24] )
        goto LABEL_41;
      v21 = v69;
      goto LABEL_85;
    }
  }
  v44 = 0;
  v45 = &v10[(unsigned int)(2 * v6)];
  v67 = v45;
  v46 = (int *)v80 + 1;
LABEL_58:
  memcpy_0(v45, &v10[v33], v33);
  v47 = *(v46 - 1);
  v48 = v64;
  v58 = 0;
  if ( (_DWORD)v6 )
  {
    v49 = v67;
    v50 = v6;
    while ( 1 )
    {
      v51 = (unsigned int *)((char *)v48 + *v48);
      if ( !*v49 )
        goto LABEL_71;
      v52 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v48 + 2);
      if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v48 + 2) )
        v52 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v48 + 3);
      if ( v52 )
        break;
      v53 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v48 + 4);
      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v48 + 4) )
        v53 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v48 + 5);
      if ( v53 || v47 < v48[17] || v47 > v48[18] )
        break;
      *v49 = 1;
      v54 = 1;
      v58 = 1;
LABEL_72:
      ++v49;
      v48 = v51;
      if ( !--v50 )
      {
        v33 = v6;
        if ( v54 )
          goto LABEL_74;
        LODWORD(v27) = 0;
LABEL_80:
        ++v44;
        v46 += 2;
        v45 = v67;
        if ( v44 >= 5 )
        {
          v43 = v59;
          v35 = v68;
          goto LABEL_82;
        }
        goto LABEL_58;
      }
    }
    *v49 = 0;
LABEL_71:
    v54 = v58;
    goto LABEL_72;
  }
LABEL_74:
  v55 = *(_DWORD *)((char *)pv + *(&v84 + v24));
  v56 = *v46;
  if ( !v55 && v22 <= 2 )
    v55 = 4 - (v22 != 1);
  v76.m256i_i16[1] = v47;
  v76.m256i_i32[1] = v55;
  *(GUID *)&v76.m256i_u64[1] = GUID_00000001_0000_0010_8000_00aa00389b71;
  LOWORD(v75[0]) = -2;
  HIWORD(v75[1]) = v56;
  v76.m256i_i16[0] = 22;
  WORD1(v75[0]) = v22;
  HIDWORD(v75[0]) = v63;
  WORD2(v75[1]) = v22 * ((unsigned __int16)v56 >> 3);
  LODWORD(v75[1]) = v63 * WORD2(v75[1]);
  v9 = lambda_0a80d7e3d12d42377e48064cdd362aeb_::operator()(v61, v75, 0LL);
  LODWORD(v27) = 0;
  if ( v9 >= 0 )
  {
    v33 = v6;
    goto LABEL_80;
  }
LABEL_86:
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( v65 )
    ((void (__fastcall *)(struct IUnknown *))v65->lpVtbl->Release)(v65);
  operator delete(v10, (const struct std::nothrow_t *)1);
  return (unsigned int)v9;
}
