/*
 * XREFs of ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180038CD0
 * Callers:
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x180014500 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x1800360A0 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J@Z @ 0x180037650 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     std::_Func_impl_no_alloc__lambda_a6a881e12778e3952f42054a91b627a8__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call @ 0x1800551B0 (std--_Func_impl_no_alloc__lambda_a6a881e12778e3952f42054a91b627a8__bool_WAVEFORMATE_ea_1800551B0.c)
 *     _lambda_1a1596b8a660531830807c55faa94ced_::operator() @ 0x1800644F4 (_lambda_1a1596b8a660531830807c55faa94ced_--operator().c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x180095CF4 (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audio.c)
 *     _lambda_068f763f677867854f08eaa5008b23ee_::operator() @ 0x180099EF0 (_lambda_068f763f677867854f08eaa5008b23ee_--operator().c)
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800B8A7C (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1800B8DBC (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800C3510 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x1800C3E80 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800C46C0 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800CFF20 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800D1D08 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 *     std::_Func_impl_no_alloc__lambda_bd75e556b07ba4833421d9775be0d6c1__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call @ 0x1800EDA40 (std--_Func_impl_no_alloc__lambda_bd75e556b07ba4833421d9775be0d6c1__bool_WAVEFORMATE_ea_1800EDA40.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800657A9 (memcmp_0.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x1800ECB20 (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
        __int64 a1,
        int a2,
        unsigned __int16 *a3,
        struct _GUID *a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  struct _GUID v10; // xmm0
  __int64 v11; // rbx
  __int64 *v12; // rbx
  __int64 v14; // rcx
  int v15; // eax
  CAudioSignalProcessingModeMap *v16; // rcx
  int v17; // r10d
  int v18; // edx
  struct _GUID *v19; // rax
  struct _GUID v20; // xmm1
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rdx
  int v25; // r8d
  __int64 v26; // r14
  int v27; // eax
  __int64 v28; // r9
  __int64 v29; // rbx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // r15
  unsigned __int16 **v33; // r13
  unsigned __int16 *v34; // rcx
  unsigned __int16 v35; // dx
  unsigned __int16 v36; // ax
  __int128 v37; // xmm1
  __int64 v38; // xmm0_8
  int v39; // r10d
  __int16 v40; // r11
  unsigned __int16 v41; // dx
  unsigned __int16 v42; // ax
  __int128 v43; // xmm1
  __int16 v44; // di
  __int64 v45; // xmm0_8
  int v46; // r9d
  __int16 v47; // dx
  int v48; // ecx
  __int16 v49; // ax
  __int64 v50; // rax
  _QWORD *v52; // r10
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int16 v56; // r8
  __int128 v57; // xmm0
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int16 v60; // r8
  __int128 v61; // xmm0
  int v62; // eax
  int v63; // [rsp+20h] [rbp-C9h]
  int v64; // [rsp+24h] [rbp-C5h]
  int v65; // [rsp+28h] [rbp-C1h]
  __int64 v66; // [rsp+30h] [rbp-B9h]
  struct _GUID v67; // [rsp+60h] [rbp-89h] BYREF
  __int128 Buf2; // [rsp+70h] [rbp-79h] BYREF
  _BYTE v69[24]; // [rsp+80h] [rbp-69h]
  __int128 Buf1; // [rsp+98h] [rbp-51h] BYREF
  _BYTE v71[24]; // [rsp+A8h] [rbp-41h]
  struct _GUID v72; // [rsp+C0h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+3Fh]

  v10 = *a4;
  v11 = 184LL;
  if ( a2 == 3 )
    v11 = 192LL;
  v12 = (__int64 *)(a1 + v11);
  v14 = a2 + 2LL * a2 + 175;
  v67 = *a4;
  v15 = *(_DWORD *)(a1 + 8 * v14 + 16);
  v16 = (CAudioSignalProcessingModeMap *)(a1 + 8 * v14);
  v17 = 0;
  v18 = 0;
  if ( v15 > 0 )
  {
    while ( 1 )
    {
      v52 = (_QWORD *)(*(_QWORD *)v16 + 16LL * v18);
      v53 = *v52 - *(_QWORD *)&v67.Data1;
      if ( *v52 == *(_QWORD *)&v67.Data1 )
        v53 = v52[1] - *(_QWORD *)v67.Data4;
      if ( !v53 )
        break;
      if ( ++v18 >= v15 )
        goto LABEL_68;
    }
    if ( v18 == -1 )
    {
LABEL_68:
      v17 = 0;
      goto LABEL_4;
    }
    v67 = v10;
    v19 = CAudioSignalProcessingModeMap::Lookup(v16, &v72, &v67);
    v17 = 0;
  }
  else
  {
LABEL_4:
    v67 = v10;
    v19 = &v67;
  }
  v20 = *v19;
  v21 = *(_QWORD *)&v19->Data1;
  v66 = v21;
  v22 = *(_QWORD *)&v19->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  v67 = v20;
  v23 = *(_QWORD *)v20.Data4;
  if ( v21 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v22 = *(_QWORD *)v20.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v22 )
  {
    v67 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v23 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    v21 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v66 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  }
  v24 = *v12;
  v25 = 0;
  v64 = 0;
  v26 = 0LL;
  *(_QWORD *)&v72.Data1 = v24;
  v65 = *(_DWORD *)(v24 + 8);
  v27 = v65;
  v28 = v65;
  *(_QWORD *)&v67.Data1 = v65;
  while ( 1 )
  {
    if ( v26 >= v28 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14BF,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x88890008LL,
        v63);
      return 2290679816LL;
    }
    if ( v26 < 0 || v25 >= v27 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180094118LL);
    }
    v29 = *(_QWORD *)(*(_QWORD *)v24 + 8 * v26);
    v30 = *(_QWORD *)v29 - v21;
    if ( *(_QWORD *)v29 == v21 )
      v30 = *(_QWORD *)(v29 + 8) - v23;
    if ( !v30 )
    {
      v31 = 0;
      v63 = 0;
      v32 = 0LL;
      if ( *(int *)(v29 + 24) > 0LL )
        break;
    }
LABEL_62:
    v27 = v65;
    v64 = ++v25;
    ++v26;
  }
  while ( 1 )
  {
    if ( v32 < 0 || v31 >= *(_DWORD *)(v29 + 24) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180094102LL);
    }
    v33 = *(unsigned __int16 ***)(*(_QWORD *)(v29 + 16) + 8 * v32);
    v34 = *v33;
    if ( a3 )
      break;
    if ( !v34 )
      goto LABEL_51;
LABEL_60:
    ++v32;
    v31 = ++v63;
    if ( v32 >= *(int *)(v29 + 24) )
    {
      v21 = v66;
      v24 = *(_QWORD *)&v72.Data1;
      v25 = v64;
      v28 = *(_QWORD *)&v67.Data1;
      goto LABEL_62;
    }
  }
  if ( !v34 )
    goto LABEL_60;
  v35 = *a3;
  v36 = a3[8];
  if ( *a3 == 0xFFFE )
  {
    if ( v36 != 22 )
    {
      v54 = *((_QWORD *)a3 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
      if ( !v54 )
        v54 = *((_QWORD *)a3 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
      if ( v54 )
      {
        v55 = *((_QWORD *)a3 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
        if ( !v55 )
          v55 = *((_QWORD *)a3 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
        if ( v55 )
          goto LABEL_60;
      }
    }
    v37 = *((_OWORD *)a3 + 1);
    Buf1 = *(_OWORD *)a3;
    v38 = *((_QWORD *)a3 + 4);
    *(_OWORD *)v71 = v37;
    v39 = DWORD1(v37);
    *(_WORD *)v71 = 22;
    v40 = Buf1;
    *(_QWORD *)&v71[16] = v38;
  }
  else
  {
    if ( v36 && ((v35 - 1) & 0xFFFD) != 0 )
      goto LABEL_60;
    v56 = a3[1];
    if ( (unsigned __int16)(v56 - 1) > 1u || ((a3[7] - 8) & 0xFFE7) != 0 )
      goto LABEL_60;
    v57 = *(_OWORD *)a3;
    *(_WORD *)&v71[2] = a3[7];
    v40 = -2;
    LOBYTE(v17) = v56 == 1;
    *(_WORD *)v71 = 22;
    v39 = v17 + 3;
    Buf1 = v57;
    *(_DWORD *)&v71[4] = v39;
    *(GUID *)&v71[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
    LOWORD(Buf1) = -2;
    *(_DWORD *)&v71[8] = v35;
  }
  v41 = *v34;
  v42 = v34[8];
  if ( *v34 == 0xFFFE )
  {
    if ( v42 == 22 )
      goto LABEL_26;
    v58 = *((_QWORD *)v34 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v58 )
      v58 = *((_QWORD *)v34 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( !v58 )
      goto LABEL_26;
    v59 = *((_QWORD *)v34 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v59 )
      v59 = *((_QWORD *)v34 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( !v59 )
    {
LABEL_26:
      v43 = *((_OWORD *)v34 + 1);
      Buf2 = *(_OWORD *)v34;
      v44 = Buf2;
      v45 = *((_QWORD *)v34 + 4);
      *(_OWORD *)v69 = v43;
      v46 = DWORD1(v43);
      *(_QWORD *)&v69[16] = v45;
      *(_WORD *)v69 = 22;
      goto LABEL_27;
    }
    goto LABEL_59;
  }
  if ( v42 && ((v41 - 1) & 0xFFFD) != 0 )
    goto LABEL_59;
  v60 = v34[1];
  if ( (unsigned __int16)(v60 - 1) > 1u )
    goto LABEL_59;
  v44 = -2;
  if ( ((v34[7] - 8) & 0xFFE7) != 0 )
    goto LABEL_59;
  v61 = *(_OWORD *)v34;
  *(_WORD *)&v69[2] = v34[7];
  *(_WORD *)v69 = 22;
  Buf2 = v61;
  LOWORD(Buf2) = -2;
  v46 = (v60 == 1) + 3;
  *(GUID *)&v69[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
  *(_DWORD *)&v69[4] = v46;
  *(_DWORD *)&v69[8] = v41;
LABEL_27:
  if ( WORD1(Buf1) )
  {
    v47 = WORD1(Buf2);
  }
  else
  {
    v47 = 0;
    DWORD2(Buf2) = 0;
    WORD1(Buf2) = 0;
    WORD6(Buf2) = 0;
  }
  if ( DWORD1(Buf1) )
  {
    v48 = DWORD1(Buf2);
  }
  else
  {
    v48 = 0;
    *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
  }
  if ( HIWORD(Buf1) )
  {
    v49 = HIWORD(Buf2);
  }
  else
  {
    v49 = 0;
    HIDWORD(Buf2) = 0;
  }
  if ( !v39 )
  {
    v46 = 0;
    *(_DWORD *)&v69[4] = 0;
  }
  if ( !v40 )
  {
    v44 = 0;
    LOWORD(Buf2) = 0;
  }
  if ( !v47 )
  {
    WORD1(Buf1) = 0;
    DWORD2(Buf1) = 0;
    WORD6(Buf1) = 0;
  }
  if ( !v48 )
    *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
  if ( !v49 )
    HIDWORD(Buf1) = 0;
  if ( !v46 )
    *(_DWORD *)&v71[4] = 0;
  if ( !v44 )
    LOWORD(Buf1) = 0;
  v50 = *(_QWORD *)&v71[8] - *(_QWORD *)&v69[8];
  if ( *(_QWORD *)&v71[8] == *(_QWORD *)&v69[8] )
    v50 = *(_QWORD *)&v71[16] - *(_QWORD *)&v69[16];
  if ( v50 || memcmp_0(&Buf1, &Buf2, 0x28uLL) )
  {
LABEL_59:
    v17 = 0;
    goto LABEL_60;
  }
LABEL_51:
  if ( a6 )
    *a6 = *((_DWORD *)v33 + 3);
  if ( a7 )
    *a7 = *((_DWORD *)v33 + 2);
  if ( a8 )
    *a8 = *((_DWORD *)v33 + 4);
  if ( a9 )
  {
    if ( a5 )
      v62 = *((_DWORD *)v33 + 6);
    else
      v62 = *((_DWORD *)v33 + 5);
    *a9 = v62;
  }
  return 0LL;
}
