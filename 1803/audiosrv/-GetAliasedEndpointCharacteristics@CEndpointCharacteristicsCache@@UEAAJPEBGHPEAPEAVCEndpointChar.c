/*
 * XREFs of ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x1800379F0
 * Callers:
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x180014500 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18001760C (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023A10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180024820 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180035BF0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x1800360A0 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180048360 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x180049610 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005A210 (-PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANC.c)
 * Callees:
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x180038C5C (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     McTemplateU0zq @ 0x180049E20 (McTemplateU0zq.c)
 *     McTemplateU0z @ 0x180049EB8 (McTemplateU0z.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18004F2A8 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18004FFD8 (--4-$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x180050038 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ?CreateNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x180056D68 (-CreateNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@V.c)
 *     ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x180056DC8 (-GetNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEn.c)
 *     ??A?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@QEAAAEAV?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@PEBG@Z @ 0x180056E40 (--A-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEndpoint.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?IsStale@CEndpointCharacteristics@@QEAAHXZ @ 0x1800955F8 (-IsStale@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x1800ED090 (-RemoveNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@V.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
        RTL_SRWLOCK *this,
        unsigned __int16 *a2,
        int a3,
        struct CEndpointCharacteristics **a4)
{
  int v6; // r12d
  CEndpointCharacteristics *v7; // rdi
  int v8; // ebx
  RTL_SRWLOCK *v9; // r13
  unsigned int v10; // r10d
  unsigned __int16 *v11; // rcx
  unsigned __int16 v12; // r11
  unsigned __int16 v13; // ax
  unsigned __int16 *i; // r9
  unsigned __int16 *v15; // rax
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // r9d
  unsigned __int16 *v19; // rcx
  __int64 Node; // rbx
  unsigned __int16 *v21; // rax
  int v22; // ecx
  int v23; // edx
  __int64 v24; // rbx
  __int64 v25; // rsi
  void (*v26)(void); // rax
  RTL_SRWLOCK *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  void *v30; // rbx
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  struct CEndpointCharacteristics **v35; // r14
  int updated; // eax
  unsigned int v37; // ebx
  CEndpointCharacteristics *v39; // rax
  __int64 v40; // rdx
  const GUID *v41; // r8
  const GUID *v42; // r9
  ATL::CAtlException *v43; // rbx
  int ppv; // [rsp+20h] [rbp-118h]
  int v45; // [rsp+30h] [rbp-108h] BYREF
  LPVOID v46; // [rsp+38h] [rbp-100h] BYREF
  __int64 v47; // [rsp+40h] [rbp-F8h] BYREF
  CEndpointCharacteristics *v48; // [rsp+48h] [rbp-F0h] BYREF
  PWSTR ppszOut; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v50; // [rsp+58h] [rbp-E0h] BYREF
  struct CEndpointCharacteristics **v51; // [rsp+60h] [rbp-D8h]
  PROPVARIANT propvar; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v53; // [rsp+70h] [rbp-C8h]
  __int64 v54; // [rsp+78h] [rbp-C0h]
  PSRWLOCK SRWLock; // [rsp+80h] [rbp-B8h]
  struct CEndpointCharacteristics **v56; // [rsp+88h] [rbp-B0h]
  __int64 v57; // [rsp+90h] [rbp-A8h]
  ATL::CAtlException *v58; // [rsp+98h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-98h] BYREF
  const char *v60; // [rsp+C0h] [rbp-78h]
  __int64 v61; // [rsp+C8h] [rbp-70h]
  int *v62; // [rsp+D0h] [rbp-68h]
  __int64 v63; // [rsp+D8h] [rbp-60h]
  __int64 *v64; // [rsp+E0h] [rbp-58h]
  __int64 v65; // [rsp+E8h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v57 = -2LL;
  v51 = a4;
  v45 = a3;
  v56 = a4;
  v6 = 0;
  v7 = 0LL;
  v48 = 0LL;
  *a4 = 0LL;
  v8 = -2147023728;
  v46 = 0LL;
  v47 = 0LL;
  v50 = 0LL;
  propvar = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  ppszOut = 0LL;
  if ( CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &v46) >= 0
    && (*(int (__fastcall **)(LPVOID, unsigned __int16 *, __int64 *))(*(_QWORD *)v46 + 40LL))(v46, a2, &v47) >= 0
    && (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v47 + 32LL))(v47, 0LL, &v50) >= 0
    && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v50 + 40LL))(
         v50,
         &PKEY_Aliased_EndpointId,
         &propvar) >= 0
    && (_WORD)propvar == 31
    && PropVariantToStringAlloc(&propvar, &ppszOut) >= 0 )
  {
    v8 = 0;
  }
  PropVariantClear(&propvar);
  if ( v50 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  if ( v46 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v46 + 16LL))(v46);
  if ( v8 >= 0 )
    a2 = ppszOut;
  SRWLock = this + 2;
  AcquireSRWLockShared(this + 2);
  v9 = this + 3;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v10 = 0;
  v11 = a2;
  v12 = *a2;
  if ( *a2 )
  {
    v13 = *a2;
    do
    {
      v10 = v13 + 33 * v10;
      v13 = *++v11;
    }
    while ( *v11 );
  }
  if ( v9->Ptr )
  {
    for ( i = (unsigned __int16 *)*((_QWORD *)v9->Ptr + v10 % LODWORD(this[5].Ptr));
          ;
          i = (unsigned __int16 *)*((_QWORD *)i + 2) )
    {
      if ( !i )
        goto LABEL_52;
      if ( *((_DWORD *)i + 6) == v10 )
      {
        v15 = *(unsigned __int16 **)i;
        do
        {
          v16 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v15 - *(_QWORD *)i);
          v17 = *v15 - v16;
          if ( v17 )
            break;
          ++v15;
        }
        while ( v16 );
        if ( !v17 )
          break;
      }
    }
    v18 = 0;
    v19 = a2;
    if ( v12 )
    {
      do
      {
        v18 = v12 + 33 * v18;
        v12 = *++v19;
      }
      while ( *v19 );
    }
    if ( v9->Ptr && (Node = *((_QWORD *)v9->Ptr + v18 % LODWORD(this[5].Ptr))) != 0 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(Node + 24) == v18 )
        {
          v21 = *(unsigned __int16 **)Node;
          do
          {
            v22 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v21 - *(_QWORD *)Node);
            v23 = *v21 - v22;
            if ( v23 )
              break;
            ++v21;
          }
          while ( v22 );
          if ( !v23 )
            break;
        }
        Node = *(_QWORD *)(Node + 16);
        if ( !Node )
          goto LABEL_39;
      }
    }
    else
    {
LABEL_39:
      Node = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::CreateNode(
               &this[3],
               a2,
               v18 % LODWORD(this[5].Ptr));
    }
    v24 = *(_QWORD *)(Node + 8);
    v46 = (LPVOID)v24;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    v25 = 0LL;
    propvar = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(v24 + 32) + 40LL))(
           *(_QWORD *)(v24 + 32),
           &PKEY_MMDEVAPI_ActiveTime,
           &propvar) >= 0
      && (_WORD)propvar == 21 )
    {
      v25 = v53;
    }
    PropVariantClear(&propvar);
    if ( *(_QWORD *)(v24 + 152) == v25 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
      v7 = (CEndpointCharacteristics *)v24;
      v48 = (CEndpointCharacteristics *)v24;
    }
    v26 = *(void (**)(void))(*(_QWORD *)v24 + 16LL);
    if ( (char *)v26 != (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
    {
LABEL_51:
      v26();
      goto LABEL_52;
    }
    if ( !ATL::SafeDecrementReferenceMultiThread((int *)(v24 + 12)) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 48LL))(v24, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v26 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        goto LABEL_51;
      }
    }
  }
LABEL_52:
  v27 = SRWLock;
  ReleaseSRWLockShared(SRWLock);
  if ( v7 )
  {
    v35 = v51;
  }
  else
  {
    AcquireSRWLockExclusive(v27);
    if ( !ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
            (_DWORD)v9,
            (_DWORD)a2,
            (unsigned int)&v50,
            (unsigned int)&v47,
            (__int64)&v46) )
      goto LABEL_61;
    v30 = *(void **)ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::operator[](
                      v9,
                      a2);
    v46 = v30;
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v46);
    if ( (unsigned int)CEndpointCharacteristics::IsStale((CEndpointCharacteristics *)v30) )
    {
      v46 = 0LL;
      v31 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
              (_DWORD)v9,
              (_DWORD)a2,
              (unsigned int)&v47,
              (unsigned int)&v50,
              (__int64)&v46);
      if ( v31 )
        ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::RemoveNode(
          v9,
          v31,
          v46);
    }
    else
    {
      Microsoft::WRL::ComPtr<CEndpointCharacteristics>::operator=(&v48, &v46);
      v7 = v48;
    }
    if ( v30 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v30 + 16LL))(v30);
    if ( !v7 )
    {
LABEL_61:
      if ( !v45 )
      {
        if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
          McTemplateU0z(v29, v28, a2);
        v45 = 1;
        v46 = a2;
        v32 = Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristics,CEndpointCharacteristics,unsigned short const * &,int &>(
                &v48,
                &v46,
                &v45);
        v6 = v32;
        if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
          McTemplateU0zq(v33, &EndpointCharacteristics_CreateInstance_Task_Stop, a2, v32);
        v7 = v48;
        if ( v48 )
        {
          v6 = 0;
          try
          {
            v34 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::operator[](
                    v9,
                    a2);
            Microsoft::WRL::ComPtr<CEndpointCharacteristics>::operator=(v34, &v48);
          }
          catch ( ATL::CAtlException *v58 )
          {
            v43 = v58;
            if ( *(_DWORD *)v58 == -1073741571 )
              _o__resetstkoflw();
            v45 = *(_DWORD *)v43;
            v6 = v45;
            v7 = v48;
            v35 = v56;
            v27 = SRWLock;
            goto LABEL_69;
          }
        }
      }
    }
    v35 = v51;
LABEL_69:
    ReleaseSRWLockExclusive(v27);
    if ( v6 < 0 )
      goto LABEL_77;
  }
  if ( v7 )
  {
    updated = CEndpointCharacteristics::UpdateAPOEnableStatus(v7);
    v37 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12F0,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)updated,
        ppv);
      CoTaskMemFree(ppszOut);
      ppszOut = 0LL;
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v7 + 16LL))(v7);
      return v37;
    }
    v39 = v7;
    v7 = 0LL;
    *v35 = v39;
  }
  else
  {
    v6 = -2147023728;
  }
LABEL_77:
  LODWORD(v47) = v6;
  v45 = 4857;
  if ( v6 < 0 && (unsigned int)hProvider > 3 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 4uLL) )
  {
    v60 = "CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics";
    v61 = 65LL;
    v62 = &v45;
    v63 = v40;
    v64 = &v47;
    v65 = v40;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014791D, v41, v42, 5u, &pData);
  }
  CoTaskMemFree(ppszOut);
  ppszOut = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
