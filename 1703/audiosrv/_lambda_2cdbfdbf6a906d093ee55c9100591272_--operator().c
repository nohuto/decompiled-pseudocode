/*
 * XREFs of _lambda_2cdbfdbf6a906d093ee55c9100591272_::operator() @ 0x18000FC80
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000DF80 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000E870 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call @ 0x18000FC70 (std--_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std--allocator_int__long_SystemEffectD.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180010540 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180010A50 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 * Callees:
 *     ?CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@2@Z @ 0x180010250 (-CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV-$CSi.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800336DC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180033760 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_cb1a7eba790d7310050f17c894bfcd12_::operator() @ 0x18004C8E4 (_lambda_cb1a7eba790d7310050f17c894bfcd12_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x180079B7C (-IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator() @ 0x1800BBAE0 (_lambda_759c10d6a679fdab43c4d5c1468c56ec_--operator().c)
 *     ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x1800BDDF8 (-GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_2cdbfdbf6a906d093ee55c9100591272_::operator()(
        CEndpointCharacteristics **a1,
        __int64 a2,
        int *a3)
{
  __int64 v4; // r14
  CEndpointCharacteristics **v5; // r15
  CEndpointCharacteristics *v6; // rcx
  __int64 v7; // r12
  int v8; // esi
  signed int v9; // eax
  __int64 v10; // rcx
  char v11; // di
  CEndpointCharacteristics *v12; // rax
  int v13; // r11d
  int v14; // r10d
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  int v17; // r13d
  char *v18; // rcx
  int v19; // r14d
  int v20; // esi
  int v21; // edi
  int v22; // eax
  __int64 *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // r11d
  int v27; // r9d
  __int64 v28; // r15
  char *v29; // rax
  char *v30; // rax
  __int64 v31; // rsi
  void *v32; // rdi
  char *v33; // r13
  __int64 v34; // rax
  unsigned int v35; // r15d
  void *v36; // rcx
  void *v37; // rcx
  unsigned int v38; // r14d
  int v39; // edi
  __int64 v41; // r15
  __int64 v42; // rdx
  _OWORD *v43; // r15
  int v44; // eax
  char *v45; // rax
  char *v46; // r8
  char *v47; // rax
  void *v48; // rcx
  void *v49; // rcx
  unsigned int v50; // r15d
  unsigned int v51; // r12d
  _OWORD *v52; // rsi
  int v53; // eax
  int v54; // edi
  int v55; // edi
  __int64 v56; // rax
  _OWORD *v57; // rax
  int v58; // eax
  int v59; // edi
  int v60; // edi
  __int64 v61; // rax
  _OWORD *v62; // rax
  bool v63; // sf
  __int64 v64; // rdx
  char *v65; // rcx
  unsigned int v66; // r8d
  _QWORD *v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rdx
  char *v74; // r14
  void **v75; // [rsp+20h] [rbp-99h]
  int v76; // [rsp+20h] [rbp-99h]
  int v77; // [rsp+20h] [rbp-99h]
  unsigned int v78; // [rsp+30h] [rbp-89h] BYREF
  char *v79; // [rsp+38h] [rbp-81h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v81; // [rsp+48h] [rbp-71h] BYREF
  char *v82; // [rsp+50h] [rbp-69h] BYREF
  int v83; // [rsp+58h] [rbp-61h]
  void *Block; // [rsp+60h] [rbp-59h] BYREF
  __int64 v85; // [rsp+68h] [rbp-51h]
  void *v86; // [rsp+70h] [rbp-49h] BYREF
  __int64 v87; // [rsp+78h] [rbp-41h]
  void *v88; // [rsp+80h] [rbp-39h] BYREF
  __int64 v89; // [rsp+88h] [rbp-31h]
  void *v90; // [rsp+90h] [rbp-29h] BYREF
  __int64 v91; // [rsp+98h] [rbp-21h]
  __int64 v92; // [rsp+A0h] [rbp-19h]
  __int64 v93; // [rsp+A8h] [rbp-11h]
  CEndpointCharacteristics **v94; // [rsp+B0h] [rbp-9h]
  __int64 v95; // [rsp+B8h] [rbp-1h]
  PROPVARIANT pvar[2]; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v97; // [rsp+D0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v95 = -2LL;
  v4 = a2;
  v92 = a2;
  v5 = a1;
  v94 = a1;
  v6 = *a1;
  pvar[0] = 0LL;
  pvar[1] = 0LL;
  v97 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v83 = 0;
  if ( (*(int (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)v6 + 4) + 40LL))(
         *((_QWORD *)v6 + 4),
         &PKEY_SpatialAudioEndpoint_VirtualSurroundEffectMode,
         pvar) >= 0
    && LOWORD(pvar[0]) == 19 )
  {
    if ( LODWORD(pvar[1]) <= 2 )
      v8 = (int)pvar[1];
    v83 = v8;
  }
  PropVariantClear(pvar);
  if ( v8 )
  {
    if ( (unsigned int)CEndpointCharacteristics::IsOffloadCapable(*v5) )
    {
      CEndpointCharacteristics::GetSpatialRenderingMode(*v5, &v81);
      if ( ((v81 - 1) & 0xFFFFFFFC) != 0 || v81 == 2 )
      {
        v8 = 0;
        v83 = 0;
      }
    }
  }
  v9 = 0;
  v81 = 0;
  if ( a3[2] <= 0 )
    goto LABEL_59;
  v10 = 0LL;
  v93 = 0LL;
  while ( 2 )
  {
    if ( v10 < 0 || v9 >= a3[2] )
      goto LABEL_163;
    *(_OWORD *)pvar = *(_OWORD *)(*(_QWORD *)a3 + 16 * v10);
    if ( v8 )
    {
      v11 = 1;
      if ( v8 != 2 )
        goto LABEL_10;
      v79 = 0LL;
      v82 = 0LL;
      pv = 0LL;
      v78 = 0;
      v75 = (void **)&v82;
      if ( (int)lambda_cb1a7eba790d7310050f17c894bfcd12_::operator()(v5 + 1, v4, pvar, &v79) >= 0 )
      {
        v65 = v82;
        if ( v82
          && (*(int (__fastcall **)(char *, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v82 + 24LL))(
               v82,
               &pv,
               &v78,
               0LL) >= 0
          && (v66 = 0, v78) )
        {
          while ( 1 )
          {
            v67 = (char *)pv + 16 * v66;
            v68 = *v67 - *(_QWORD *)&GUID_6f64adc7_8211_11e2_8c70_2c27d7f001fa.Data1;
            if ( *v67 == *(_QWORD *)&GUID_6f64adc7_8211_11e2_8c70_2c27d7f001fa.Data1 )
              v68 = v67[1] - *(_QWORD *)GUID_6f64adc7_8211_11e2_8c70_2c27d7f001fa.Data4;
            if ( !v68 )
              break;
            v69 = *v67 - *(_QWORD *)&GUID_6f64adc6_8211_11e2_8c70_2c27d7f001fa.Data1;
            if ( *v67 == *(_QWORD *)&GUID_6f64adc6_8211_11e2_8c70_2c27d7f001fa.Data1 )
              v69 = v67[1] - *(_QWORD *)GUID_6f64adc6_8211_11e2_8c70_2c27d7f001fa.Data4;
            if ( !v69 )
              break;
            if ( ++v66 >= v78 )
              goto LABEL_125;
          }
        }
        else
        {
LABEL_125:
          if ( !v79
            || !(unsigned __int8)lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(v65, v79, 48000LL, 6LL)
            && !(unsigned __int8)lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(v70, v79, 48000LL, 8LL)
            && !(unsigned __int8)lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(v71, v79, 44100LL, 6LL)
            && !(unsigned __int8)lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(v72, v79, 44100LL, 8LL) )
          {
            goto LABEL_131;
          }
        }
        v11 = 0;
      }
LABEL_131:
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v82 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v82 + 16LL))(v82);
      if ( v79 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v79 + 16LL))(v79);
      goto LABEL_10;
    }
    v11 = 0;
LABEL_10:
    v12 = *v5;
    v13 = 0;
    v78 = 0;
    v14 = *((_DWORD *)v12 + 18);
    if ( v14 <= 0 )
    {
LABEL_16:
      v78 = -1;
    }
    else
    {
      v15 = *((_QWORD *)v12 + 8);
      while ( 1 )
      {
        v16 = *(_QWORD *)(v15 + 16LL * v13) - (unsigned __int64)pvar[0];
        if ( !v16 )
          v16 = *(_QWORD *)(v15 + 16LL * v13 + 8) - (unsigned __int64)pvar[1];
        if ( !v16 )
          break;
        v78 = ++v13;
        if ( v13 >= v14 )
          goto LABEL_16;
      }
    }
    if ( v11 )
    {
      v82 = (char *)&unk_18012AC98;
      LODWORD(v79) = 1;
    }
    else
    {
      v82 = 0LL;
      LODWORD(v79) = 0;
    }
    v86 = 0LL;
    v17 = 0;
    v87 = 0LL;
    LODWORD(pv) = 0;
    v18 = 0LL;
    Block = 0LL;
    v19 = 0;
    v85 = 0LL;
    v20 = 0;
    v21 = 0;
    v22 = a3[2];
    if ( v22 <= 0 )
      goto LABEL_37;
    while ( 1 )
    {
      v23 = *(__int64 **)(v92 + 16);
      if ( !v23 )
        goto LABEL_25;
      if ( v21 < 0 || v21 >= v22 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x18005CE15LL);
      }
      v24 = *(_QWORD *)a3;
      v25 = 16LL * v21;
      v26 = 0;
      v27 = *((_DWORD *)v23 + 2);
      if ( v27 > 0 )
      {
        v41 = *v23;
        while ( 1 )
        {
          v42 = *(_QWORD *)(v41 + 16LL * v26) - *(_QWORD *)(v25 + v24);
          if ( !v42 )
            v42 = *(_QWORD *)(v41 + 16LL * v26 + 8) - *(_QWORD *)(v25 + v24 + 8);
          if ( !v42 )
            break;
          if ( ++v26 >= v27 )
            goto LABEL_24;
        }
        if ( v26 != -1 )
          break;
      }
LABEL_24:
      v18 = (char *)Block;
LABEL_25:
      if ( v21 < 0 || v21 >= v22 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
LABEL_163:
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x18005CE41LL);
      }
      v28 = *(_QWORD *)a3;
      if ( v19 == v20 )
      {
        if ( v20 )
        {
          v20 = 2 * v19;
          if ( (v19 & 0x40000000) != 0 || (unsigned int)v20 > 0x7FFFFFF )
          {
LABEL_144:
            v73 = 250LL;
            goto LABEL_145;
          }
        }
        else
        {
          v20 = 1;
        }
        v29 = (char *)_o__recalloc(v18, v20, 16LL);
        if ( !v29 )
          goto LABEL_144;
        HIDWORD(v85) = v20;
        v18 = v29;
        Block = v29;
      }
      v30 = &v18[16 * v19];
      if ( v30 )
        *(_OWORD *)v30 = *(_OWORD *)(v28 + v7);
      LODWORD(v85) = ++v19;
LABEL_35:
      ++v21;
      v7 += 16LL;
      v22 = a3[2];
      if ( v21 >= v22 )
        goto LABEL_36;
    }
    v43 = (_OWORD *)(v7 + v24);
    if ( v17 != (_DWORD)pv )
    {
      v46 = (char *)v86;
LABEL_70:
      v47 = &v46[16 * v17];
      if ( v47 )
        *(_OWORD *)v47 = *v43;
      LODWORD(v87) = ++v17;
      v18 = (char *)Block;
      goto LABEL_35;
    }
    if ( !(_DWORD)pv )
    {
      v44 = 1;
      LODWORD(pv) = 1;
      goto LABEL_68;
    }
    v44 = 2 * v17;
    LODWORD(pv) = 2 * v17;
    if ( (v17 & 0x40000000) == 0 && (unsigned int)v44 <= 0x7FFFFFF )
    {
LABEL_68:
      v45 = (char *)_o__recalloc(v86, v44, 16LL);
      if ( !v45 )
        goto LABEL_143;
      HIDWORD(v87) = (_DWORD)pv;
      v46 = v45;
      v86 = v45;
      goto LABEL_70;
    }
LABEL_143:
    v73 = 245LL;
LABEL_145:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v73,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      (int)v75);
LABEL_36:
    v7 = 0LL;
LABEL_37:
    v90 = 0LL;
    v91 = 0LL;
    v88 = 0LL;
    v89 = 0LL;
    v75 = &v90;
    v31 = v92;
    SystemEffectDescriptor::CreateOverrideChainLists(v92, (unsigned int)v79, v82, 1LL);
    v32 = v88;
    if ( v17 <= 0 )
    {
LABEL_38:
      v33 = (char *)v90;
      if ( v19 > 0 )
      {
        if ( v78 == -1 || (v34 = *(_QWORD *)(v31 + 16)) == 0 )
        {
          v82 = 0LL;
          v35 = 0;
        }
        else
        {
          v82 = *(char **)(v34 + 56);
          v35 = *(_DWORD *)(v34 + 64);
        }
        v36 = (void *)*((_QWORD *)a3 + 5);
        if ( v36 )
        {
          free(v36);
          *((_QWORD *)a3 + 5) = 0LL;
        }
        *((_QWORD *)a3 + 6) = 0LL;
        v37 = (void *)*((_QWORD *)a3 + 7);
        if ( v37 )
        {
          free(v37);
          *((_QWORD *)a3 + 7) = 0LL;
        }
        *((_QWORD *)a3 + 8) = 0LL;
        v38 = v91;
        if ( (_DWORD)v91 )
        {
          while ( 1 )
          {
            v79 = &v33[16 * (unsigned int)v7];
            if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a3 + 10, v79) )
              break;
            if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a3 + 14, v79) )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x48,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)0x8007000ELL,
                (int)&v90);
              v7 = 0LL;
              goto LABEL_159;
            }
            LODWORD(v7) = v7 + 1;
            if ( (unsigned int)v7 >= v38 )
              goto LABEL_47;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x46,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            (int)&v90);
          v7 = 0LL;
        }
        else
        {
LABEL_47:
          v7 = 0LL;
          v39 = 0;
          if ( !v35 )
          {
LABEL_48:
            v32 = v88;
            goto LABEL_49;
          }
          v74 = v82;
          while ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                  a3 + 14,
                                  &v74[16 * v39]) )
          {
            if ( ++v39 >= v35 )
              goto LABEL_48;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4D,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            (int)&v90);
        }
LABEL_159:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x189,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL,
          v77);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v88);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v90);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&Block);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v86);
        goto LABEL_58;
      }
LABEL_49:
      if ( v32 )
      {
        free(v32);
        v88 = 0LL;
      }
      v89 = 0LL;
      if ( v33 )
      {
        free(v33);
        v90 = 0LL;
      }
      v91 = 0LL;
      if ( Block )
      {
        free(Block);
        Block = 0LL;
      }
      v85 = 0LL;
      if ( v86 )
      {
        free(v86);
        v86 = 0LL;
      }
      v87 = 0LL;
      goto LABEL_58;
    }
    v48 = (void *)*((_QWORD *)a3 + 5);
    if ( v48 )
    {
      free(v48);
      *((_QWORD *)a3 + 5) = 0LL;
    }
    *((_QWORD *)a3 + 6) = 0LL;
    v49 = (void *)*((_QWORD *)a3 + 7);
    if ( v49 )
    {
      free(v49);
      *((_QWORD *)a3 + 7) = 0LL;
    }
    *((_QWORD *)a3 + 8) = 0LL;
    v50 = 0;
    v51 = v89;
    if ( !(_DWORD)v89 )
    {
LABEL_95:
      v7 = 0LL;
      goto LABEL_38;
    }
    v52 = v32;
    while ( 2 )
    {
      v53 = a3[13];
      v54 = a3[12];
      if ( v54 == v53 )
      {
        if ( v53 )
        {
          v63 = (v54 & 0x40000000) != 0;
          v55 = 2 * v54;
          if ( v63 || (unsigned int)v55 > 0x7FFFFFF )
          {
LABEL_104:
            v64 = 70LL;
            goto LABEL_146;
          }
        }
        else
        {
          v55 = 1;
        }
        v56 = _o__recalloc(*((_QWORD *)a3 + 5), v55, 16LL);
        if ( !v56 )
          goto LABEL_104;
        a3[13] = v55;
        *((_QWORD *)a3 + 5) = v56;
      }
      v57 = (_OWORD *)(*((_QWORD *)a3 + 5) + 16LL * a3[12]);
      if ( v57 )
        *v57 = *v52;
      ++a3[12];
      v58 = a3[17];
      v59 = a3[16];
      if ( v59 != v58 )
        goto LABEL_91;
      if ( !v58 )
      {
        v60 = 1;
        goto LABEL_89;
      }
      v63 = (v59 & 0x40000000) != 0;
      v60 = 2 * v59;
      if ( !v63 && (unsigned int)v60 <= 0x7FFFFFF )
      {
LABEL_89:
        v61 = _o__recalloc(*((_QWORD *)a3 + 7), v60, 16LL);
        if ( !v61 )
          break;
        a3[17] = v60;
        *((_QWORD *)a3 + 7) = v61;
LABEL_91:
        v62 = (_OWORD *)(*((_QWORD *)a3 + 7) + 16LL * a3[16]);
        if ( v62 )
          *v62 = *v52;
        ++a3[16];
        ++v50;
        ++v52;
        if ( v50 >= v51 )
        {
          v32 = v88;
          v31 = v92;
          goto LABEL_95;
        }
        continue;
      }
      break;
    }
    v64 = 72LL;
LABEL_146:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v64,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      (int)&v90);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x182,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v76);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v88);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v90);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&Block);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v86);
    v7 = 0LL;
LABEL_58:
    v9 = v81 + 1;
    v81 = v9;
    v10 = ++v93;
    if ( v9 < a3[2] )
    {
      v8 = v83;
      v4 = v92;
      v5 = v94;
      continue;
    }
    break;
  }
LABEL_59:
  *((_BYTE *)a3 + 16) = 1;
  return 0LL;
}
