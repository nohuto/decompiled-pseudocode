/*
 * XREFs of ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000CBA0
 * Callers:
 *     ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z @ 0x180002CB0 (-GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEA_J@Z @ 0x180003310 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     _lambda_d46c42d8c87c8b0eef0423a918fcc8ac_::operator() @ 0x180040668 (_lambda_d46c42d8c87c8b0eef0423a918fcc8ac_--operator().c)
 *     _lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2_::operator() @ 0x18004C854 (_lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2_--operator().c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x180079CD0 (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audio.c)
 *     _lambda_068f763f677867854f08eaa5008b23ee_::operator() @ 0x18007D2F0 (_lambda_068f763f677867854f08eaa5008b23ee_--operator().c)
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180098E48 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x180099188 (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800A1E30 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x1800A25D0 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800A2C90 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800AA4D4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800ABF78 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180057F9A (memcmp_0.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x1800BE5F0 (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
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
  __int64 v10; // rax
  struct _GUID v11; // xmm0
  __int64 *v12; // rbx
  int v13; // r10d
  __int64 v14; // rax
  int v15; // edx
  CAudioSignalProcessingModeMap *v16; // rcx
  int v17; // eax
  struct _GUID *v18; // rax
  struct _GUID v19; // xmm1
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // r13
  __int64 v25; // r8
  __int64 v26; // r14
  __int64 v27; // rax
  int v28; // r12d
  __int64 v29; // rsi
  unsigned __int16 **v30; // r15
  unsigned __int16 *v31; // rcx
  unsigned __int16 v32; // dx
  __int128 v33; // xmm1
  __int16 v34; // r11
  __int64 v35; // xmm0_8
  int v36; // r10d
  unsigned __int16 v37; // dx
  __int128 v38; // xmm1
  __int16 v39; // bx
  __int64 v40; // xmm0_8
  int v41; // r9d
  __int16 v42; // dx
  int v43; // ecx
  __int16 v44; // ax
  __int64 v45; // rax
  __int64 v47; // r9
  _QWORD *v48; // r10
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int16 v52; // r8
  __int128 v53; // xmm0
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int16 v56; // r8
  __int128 v57; // xmm0
  int v58; // eax
  char v59; // [rsp+20h] [rbp-C9h]
  int v60; // [rsp+24h] [rbp-C5h]
  __int64 v61; // [rsp+28h] [rbp-C1h]
  __int64 v62; // [rsp+30h] [rbp-B9h]
  struct _GUID v63; // [rsp+60h] [rbp-89h] BYREF
  __int128 Buf2; // [rsp+70h] [rbp-79h] BYREF
  _BYTE v65[24]; // [rsp+80h] [rbp-69h]
  __int128 Buf1; // [rsp+98h] [rbp-51h] BYREF
  _BYTE v67[24]; // [rsp+A8h] [rbp-41h]
  struct _GUID v68; // [rsp+C0h] [rbp-29h] BYREF

  if ( a2 == 3 )
    v10 = 192LL;
  else
    v10 = 184LL;
  v11 = *a4;
  v12 = (__int64 *)(a1 + v10);
  v13 = 0;
  v14 = a2 + 58LL;
  v59 = 0;
  v63 = *a4;
  v15 = 0;
  v16 = (CAudioSignalProcessingModeMap *)(a1 + 24 * v14);
  v17 = *((_DWORD *)v16 + 4);
  if ( v17 > 0 )
  {
    while ( 1 )
    {
      v48 = (_QWORD *)(*(_QWORD *)v16 + 16LL * v15);
      v49 = *v48 - *(_QWORD *)&v63.Data1;
      if ( *v48 == *(_QWORD *)&v63.Data1 )
        v49 = v48[1] - *(_QWORD *)v63.Data4;
      if ( !v49 )
        break;
      if ( ++v15 >= v17 )
        goto LABEL_76;
    }
    if ( v15 == -1 )
    {
LABEL_76:
      v13 = 0;
      goto LABEL_4;
    }
    v63 = v11;
    v18 = CAudioSignalProcessingModeMap::Lookup(v16, &v68, &v63);
    v13 = 0;
  }
  else
  {
LABEL_4:
    v63 = v11;
    v18 = &v63;
  }
  v19 = *v18;
  v20 = *(_QWORD *)&v18->Data1;
  v61 = v20;
  v21 = *(_QWORD *)&v18->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  v63 = v19;
  if ( v20 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v21 = *(_QWORD *)v63.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v21 )
  {
    v63 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v20 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v61 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  }
  v22 = *v12;
  v23 = 0;
  *(_QWORD *)&v68.Data1 = v22;
  v24 = 0LL;
  v25 = *(int *)(v22 + 8);
  v62 = v25;
  while ( 1 )
  {
    v60 = v23;
    if ( v24 >= v25 )
      break;
    if ( v24 < 0 || v23 >= *(_DWORD *)(v22 + 8) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180064B23LL);
    }
    v26 = *(_QWORD *)(*(_QWORD *)v22 + 8 * v24);
    v27 = *(_QWORD *)v26 - v20;
    if ( *(_QWORD *)v26 == v20 )
      v27 = *(_QWORD *)(v26 + 8) - *(_QWORD *)v63.Data4;
    if ( !v27 )
    {
      v28 = 0;
      v59 = 1;
      v29 = 0LL;
      if ( *(int *)(v26 + 24) > 0LL )
      {
        while ( 1 )
        {
          if ( v29 < 0 || v28 >= *(_DWORD *)(v26 + 24) )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x180064B0DLL);
          }
          v30 = *(unsigned __int16 ***)(*(_QWORD *)(v26 + 16) + 8 * v29);
          v31 = *v30;
          if ( a3 )
          {
            if ( v31 )
            {
              v32 = *a3;
              if ( *a3 == 0xFFFE )
              {
                if ( a3[8] != 22 )
                {
                  v50 = *((_QWORD *)a3 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
                  if ( !v50 )
                    v50 = *((_QWORD *)a3 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
                  if ( v50 )
                  {
                    v51 = *((_QWORD *)a3 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                    if ( !v51 )
                      v51 = *((_QWORD *)a3 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                    if ( v51 )
                      goto LABEL_52;
                  }
                }
                v33 = *((_OWORD *)a3 + 1);
                Buf1 = *(_OWORD *)a3;
                v34 = Buf1;
                v35 = *((_QWORD *)a3 + 4);
                *(_OWORD *)v67 = v33;
                v36 = DWORD1(v33);
                *(_QWORD *)&v67[16] = v35;
                *(_WORD *)v67 = 22;
              }
              else
              {
                if ( a3[8] && ((v32 - 1) & 0xFFFD) != 0 )
                  goto LABEL_52;
                v52 = a3[1];
                if ( (unsigned __int16)(v52 - 1) > 1u || ((a3[7] - 8) & 0xFFE7) != 0 )
                  goto LABEL_52;
                v53 = *(_OWORD *)a3;
                *(_WORD *)&v67[2] = a3[7];
                v34 = -2;
                LOBYTE(v13) = v52 == 1;
                *(_WORD *)v67 = 22;
                v36 = v13 + 3;
                Buf1 = v53;
                *(_DWORD *)&v67[4] = v36;
                *(GUID *)&v67[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
                LOWORD(Buf1) = -2;
                *(_DWORD *)&v67[8] = v32;
              }
              v37 = *v31;
              if ( *v31 == 0xFFFE )
              {
                if ( v31[8] == 22 )
                  goto LABEL_27;
                v54 = *((_QWORD *)v31 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
                if ( !v54 )
                  v54 = *((_QWORD *)v31 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
                if ( !v54 )
                  goto LABEL_27;
                v55 = *((_QWORD *)v31 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                if ( !v55 )
                  v55 = *((_QWORD *)v31 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                if ( !v55 )
                {
LABEL_27:
                  v38 = *((_OWORD *)v31 + 1);
                  Buf2 = *(_OWORD *)v31;
                  v39 = Buf2;
                  v40 = *((_QWORD *)v31 + 4);
                  *(_OWORD *)v65 = v38;
                  *(_WORD *)v65 = 22;
                  v41 = DWORD1(v38);
                  *(_QWORD *)&v65[16] = v40;
LABEL_28:
                  if ( WORD1(Buf1) )
                  {
                    v42 = WORD1(Buf2);
                  }
                  else
                  {
                    v42 = 0;
                    WORD1(Buf2) = 0;
                    DWORD2(Buf2) = 0;
                    WORD6(Buf2) = 0;
                  }
                  if ( DWORD1(Buf1) )
                  {
                    v43 = DWORD1(Buf2);
                  }
                  else
                  {
                    v43 = 0;
                    *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
                  }
                  if ( HIWORD(Buf1) )
                  {
                    v44 = HIWORD(Buf2);
                  }
                  else
                  {
                    v44 = 0;
                    HIDWORD(Buf2) = 0;
                  }
                  if ( !v36 )
                  {
                    v41 = 0;
                    *(_DWORD *)&v65[4] = 0;
                  }
                  if ( !v34 )
                  {
                    v39 = 0;
                    LOWORD(Buf2) = 0;
                  }
                  if ( !v42 )
                  {
                    WORD1(Buf1) = 0;
                    DWORD2(Buf1) = 0;
                    WORD6(Buf1) = 0;
                  }
                  if ( !v43 )
                    *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
                  if ( !v44 )
                    HIDWORD(Buf1) = 0;
                  if ( !v41 )
                    *(_DWORD *)&v67[4] = 0;
                  if ( !v39 )
                    LOWORD(Buf1) = 0;
                  v45 = *(_QWORD *)&v67[8] - *(_QWORD *)&v65[8];
                  if ( *(_QWORD *)&v67[8] == *(_QWORD *)&v65[8] )
                    v45 = *(_QWORD *)&v67[16] - *(_QWORD *)&v65[16];
                  if ( !v45 && !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
                  {
LABEL_55:
                    if ( a6 )
                      *a6 = *((_DWORD *)v30 + 3);
                    if ( a7 )
                      *a7 = *((_DWORD *)v30 + 2);
                    if ( a8 )
                      *a8 = *((_DWORD *)v30 + 4);
                    if ( a9 )
                    {
                      if ( a5 )
                        v58 = *((_DWORD *)v30 + 6);
                      else
                        v58 = *((_DWORD *)v30 + 5);
                      *a9 = v58;
                    }
                    return 0LL;
                  }
                }
              }
              else if ( !v31[8] || ((v37 - 1) & 0xFFFD) == 0 )
              {
                v56 = v31[1];
                if ( (unsigned __int16)(v56 - 1) <= 1u )
                {
                  v39 = -2;
                  if ( ((v31[7] - 8) & 0xFFE7) == 0 )
                  {
                    v57 = *(_OWORD *)v31;
                    *(_WORD *)&v65[2] = v31[7];
                    *(_WORD *)v65 = 22;
                    *(GUID *)&v65[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
                    *(_DWORD *)&v65[8] = v37;
                    Buf2 = v57;
                    LOWORD(Buf2) = -2;
                    v41 = (v56 == 1) + 3;
                    *(_DWORD *)&v65[4] = v41;
                    goto LABEL_28;
                  }
                }
              }
              v13 = 0;
            }
          }
          else if ( !v31 )
          {
            goto LABEL_55;
          }
LABEL_52:
          ++v28;
          if ( ++v29 >= *(int *)(v26 + 24) )
          {
            v23 = v60;
            v20 = v61;
            v25 = v62;
            break;
          }
        }
      }
    }
    v22 = *(_QWORD *)&v68.Data1;
    ++v23;
    ++v24;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    if ( v59 )
      v47 = 2289827931LL;
    else
      v47 = 2289827930LL;
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_901a5e9bcaaa38e898dae42cff5cb88c_Traceguids, v47);
  }
  return 2290679816LL;
}
