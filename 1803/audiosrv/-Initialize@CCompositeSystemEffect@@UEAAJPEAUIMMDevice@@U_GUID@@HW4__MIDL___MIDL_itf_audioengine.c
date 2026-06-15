/*
 * XREFs of ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002C760
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180002760 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x180039F30 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180007CB4 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180017ECC (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18002C1E0 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ?InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002D4B0 (-InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__M.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18004F2A8 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x180099F70 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18009EC7C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x180109578 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010B034 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositeSystemEffect::Initialize(
        CCompositeSystemEffect *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  struct IAudioSystemEffects2 **v9; // r13
  bool v10; // r15
  struct IMMDevice *v11; // rcx
  _QWORD *v12; // rdx
  int v13; // esi
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // r14
  int v23; // eax
  int v24; // ecx
  int v25; // ebx
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  int v29; // r15d
  int v30; // eax
  _QWORD *v31; // rbx
  __int64 v32; // rsi
  struct IAudioSystemEffects2 **v33; // rdx
  struct _GUID *v34; // r8
  __int64 (__fastcall *v35)(CAPOWrapperClient *__hidden, struct IMMDevice *, struct _GUID *, struct _GUID *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct IAudioSystemEffects2 **); // rax
  int v36; // eax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rbx
  struct IAudioProcessingObject *v41; // rdx
  struct IAudioSystemEffects2 **v42; // rax
  int v43; // ebx
  int v44; // eax
  int v45; // ecx
  int v46; // ebx
  __int64 v47; // rax
  __int64 v48; // rcx
  int *v49; // rbx
  __int64 (__fastcall *v50)(LPVOID); // rax
  void *(__fastcall *v51)(CAPOWrapperClient *__hidden, unsigned int); // rax
  LPCRITICAL_SECTION v52; // rsi
  __int64 v54; // rcx
  __int64 v55; // rcx
  HANDLE ProcessHeap; // rax
  __int64 v57; // rdx
  struct IAudioProcessingObject **v58; // rsi
  LPCGUID v59; // r8
  LPCGUID v60; // r9
  __int64 v61; // rdx
  struct IAudioProcessingObject **v62; // rbx
  struct IAudioProcessingObject *v63; // rcx
  struct IAudioSystemEffects2 **v64; // rbx
  int v65; // eax
  unsigned int v66; // ebx
  int v67; // eax
  unsigned int v68; // ebx
  int pdwType; // [rsp+20h] [rbp-E0h]
  __int64 v70; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v71; // [rsp+48h] [rbp-B8h] BYREF
  int v72; // [rsp+50h] [rbp-B0h]
  LPVOID lpMem; // [rsp+58h] [rbp-A8h] BYREF
  int v74; // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v75)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-98h] BYREF
  __int64 v76; // [rsp+70h] [rbp-90h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-88h] BYREF
  DWORD pcbData; // [rsp+80h] [rbp-80h] BYREF
  int pvData; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v80; // [rsp+88h] [rbp-78h] BYREF
  int v81; // [rsp+90h] [rbp-70h] BYREF
  struct IAudioSystemEffects2 **v82; // [rsp+98h] [rbp-68h]
  struct _GUID *v83; // [rsp+A0h] [rbp-60h]
  struct IAudioProcessingObject **v84; // [rsp+A8h] [rbp-58h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B8h] [rbp-48h] BYREF
  char v86; // [rsp+C0h] [rbp-40h]
  LPVOID v87; // [rsp+C8h] [rbp-38h] BYREF
  struct _GUID v88; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v89; // [rsp+E0h] [rbp-20h]
  struct _GUID v90; // [rsp+F0h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  const char *v92; // [rsp+120h] [rbp+20h]
  __int64 v93; // [rsp+128h] [rbp+28h]
  int *v94; // [rsp+130h] [rbp+30h]
  __int64 v95; // [rsp+138h] [rbp+38h]
  __int64 v96; // [rsp+140h] [rbp+40h]
  __int64 v97; // [rsp+148h] [rbp+48h]
  int *v98; // [rsp+150h] [rbp+50h]
  __int64 v99; // [rsp+158h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v89 = -2LL;
  v72 = a4;
  v83 = a3;
  v84 = a6;
  v9 = a7;
  v82 = a7;
  pcbData = 4;
  v10 = RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"LoadSystemEffectInAudioSrv",
          0x18u,
          0LL,
          &pvData,
          &pcbData)
     || !pvData;
  v11 = (struct IMMDevice *)*((_QWORD *)this + 13);
  if ( v11 != a2 )
  {
    if ( a2 )
    {
      ((void (__fastcall *)(struct IMMDevice *))a2->lpVtbl->AddRef)(a2);
      v11 = (struct IMMDevice *)*((_QWORD *)this + 13);
    }
    *((_QWORD *)this + 13) = a2;
    if ( v11 )
      ((void (__fastcall *)(struct IMMDevice *))v11->lpVtbl->Release)(v11);
  }
  LODWORD(v12) = 0;
  v13 = 0;
  if ( *((int *)this + 16) > 0 )
  {
    while ( 1 )
    {
      v70 = 0LL;
      if ( v10 )
      {
        pv = 0LL;
        v19 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
        v20 = v19;
        if ( v19 < 0 )
        {
          v39 = 772LL;
          goto LABEL_54;
        }
        v21 = v70;
        if ( v70 )
        {
          v70 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        if ( v13 < 0 || v13 >= *((_DWORD *)this + 16) )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          __debugbreak();
        }
        v22 = *((_QWORD *)this + 7) + 16LL * v13;
        v80 = *((_DWORD *)this + 10);
        v87 = pv;
        v19 = Microsoft::WRL::Details::MakeAndInitialize<CAPOWrapperClient,IAudioProcessingObject,unsigned short const * &,enum APO_TYPE &,_GUID const &>(
                &v70,
                (__int64 *)&v87,
                &v80,
                v22);
        v20 = v19;
        if ( v19 < 0 )
        {
          v39 = 774LL;
LABEL_54:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v39,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v19,
            pdwType);
          if ( pv )
            CoTaskMemFree(pv);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v70);
          return v20;
        }
        if ( pv )
          CoTaskMemFree(pv);
      }
      else
      {
        v75 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v75);
        v14 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)this + 56, v13);
        v15 = CSystemEffectWrapper::Create(v14, a2, 0LL, *((unsigned int *)this + 10));
        v16 = v15;
        if ( v15 < 0 )
        {
          v38 = 760LL;
          goto LABEL_50;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v70);
        v15 = (**v75)(v75, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &v70);
        v16 = v15;
        if ( v15 < 0 )
        {
          v38 = 762LL;
LABEL_50:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v38,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v15,
            pdwType);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v75);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v70);
          return v16;
        }
        v76 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v76);
        v17 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v70)(
                v70,
                &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
                &v76);
        v18 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2FD,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v17,
            pdwType);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v76);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v75);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v70);
          return v18;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v76);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v75);
      }
      v23 = *((_DWORD *)this + 20);
      v24 = *((_DWORD *)this + 21);
      if ( v23 == v24 )
      {
        if ( v24 )
        {
          v25 = 2 * v23;
          if ( (v23 & 0x40000000) != 0 )
            goto LABEL_51;
        }
        else
        {
          v25 = 1;
        }
        if ( (unsigned __int64)v25 > 0xFFFFFFF || (v26 = _o__recalloc(*((_QWORD *)this + 9), v25, 8LL)) == 0 )
        {
LABEL_51:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x309,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            pdwType);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v70);
          return 2147942414LL;
        }
        *((_DWORD *)this + 21) = v25;
        *((_QWORD *)this + 9) = v26;
        v23 = *((_DWORD *)this + 20);
      }
      v27 = (_QWORD *)(*((_QWORD *)this + 9) + 8LL * v23);
      if ( !v27 )
        goto LABEL_35;
      *v27 = v70;
      v28 = v70;
      if ( v70 )
        break;
LABEL_36:
      ++*((_DWORD *)this + 20);
      if ( v28 )
      {
        v70 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      ++v13;
      LODWORD(v12) = 0;
      if ( v13 >= *((_DWORD *)this + 16) )
        goto LABEL_39;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 8LL))(v70);
LABEL_35:
    v28 = v70;
    goto LABEL_36;
  }
LABEL_39:
  v29 = 0;
  v30 = *((_DWORD *)this + 20);
  if ( v30 <= 0 )
  {
LABEL_97:
    v58 = v84;
    if ( v30 == 1 )
    {
      if ( v84 )
      {
        if ( *((int *)this + 20) <= 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v12);
          JUMPOUT(0x18002D0DBLL);
        }
        v62 = (struct IAudioProcessingObject **)*((_QWORD *)this + 9);
        v63 = *v62;
        if ( *v62 )
        {
          ((void (__fastcall *)(struct IAudioProcessingObject *))v63->lpVtbl->AddRef)(v63);
          v63 = *v62;
        }
        *v58 = v63;
      }
      if ( v9 )
      {
        v64 = (struct IAudioSystemEffects2 **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                                (char *)this + 88,
                                                0LL);
        Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(v64);
        *v9 = *v64;
      }
    }
    else
    {
      if ( v84 )
      {
        v65 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *, struct IAudioProcessingObject **))this)(
                this,
                &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
                v84);
        v66 = v65;
        if ( v65 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x337,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v65,
            pdwType);
          return v66;
        }
      }
      if ( v9 )
      {
        v67 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *, struct IAudioSystemEffects2 **))this)(
                this,
                &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
                v9);
        v68 = v67;
        if ( v67 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x33A,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v67,
            pdwType);
          return v68;
        }
      }
    }
    return 0LL;
  }
  while ( 1 )
  {
    lpMem = 0LL;
    v71 = 0LL;
    if ( v29 < 0 || v29 >= *((_DWORD *)this + 20) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      __debugbreak();
    }
    v31 = (_QWORD *)(*((_QWORD *)this + 9) + 8LL * v29);
    v32 = 16LL * v29;
    if ( (**(int (__fastcall ***)(_QWORD, GUID *, LPVOID *))*v31)(
           *v31,
           &GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6,
           &lpMem) < 0 )
    {
      v90 = *v83;
      v40 = *((_QWORD *)this + 7);
      v41 = *(struct IAudioProcessingObject **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                                 (char *)this + 72,
                                                 (unsigned int)v29);
      v42 = (struct IAudioSystemEffects2 **)&v71;
      if ( !v82 )
        v42 = 0LL;
      v36 = InitializeSystemEffectsInterface(a2, v41, (struct _GUID *)(v32 + v40), &v90, v72, a5, v42);
    }
    else
    {
      v33 = (struct IAudioSystemEffects2 **)&v71;
      if ( !v82 )
        v33 = 0LL;
      v88 = *v83;
      v34 = (struct _GUID *)(v32 + *((_QWORD *)this + 7));
      v35 = *(__int64 (__fastcall **)(CAPOWrapperClient *__hidden, struct IMMDevice *, struct _GUID *, struct _GUID *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct IAudioSystemEffects2 **))(*(_QWORD *)lpMem + 24LL);
      if ( v35 == CAPOWrapperClient::InitializeSystemEffectsInterfaceOOP )
      {
        v36 = CAPOWrapperClient::InitializeSystemEffectsInterfaceOOP(
                (CAPOWrapperClient *)lpMem,
                a2,
                v34,
                &v88,
                v72,
                a5,
                v33);
      }
      else
      {
        pdwType = v72;
        v36 = ((__int64 (__fastcall *)(LPVOID, struct IMMDevice *, struct _GUID *, struct _GUID *))v35)(
                lpMem,
                a2,
                v34,
                &v88);
      }
    }
    v43 = v36;
    v74 = v36;
    if ( v36 < 0 )
      break;
    v44 = *((_DWORD *)this + 24);
    v45 = *((_DWORD *)this + 25);
    if ( v44 == v45 )
    {
      if ( v45 )
      {
        v46 = 2 * v44;
        if ( (v44 & 0x40000000) != 0 )
          goto LABEL_95;
      }
      else
      {
        v46 = 1;
      }
      if ( (unsigned __int64)v46 > 0xFFFFFFF || (v47 = _o__recalloc(*((_QWORD *)this + 11), v46, 8LL)) == 0 )
      {
LABEL_95:
        v43 = -2147024882;
        v57 = 797LL;
LABEL_105:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v57,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v43,
          pdwType);
        goto LABEL_106;
      }
      *((_DWORD *)this + 25) = v46;
      *((_QWORD *)this + 11) = v47;
      v44 = *((_DWORD *)this + 24);
    }
    v12 = (_QWORD *)(*((_QWORD *)this + 11) + 8LL * v44);
    if ( v12 )
    {
      *v12 = v71;
      v48 = v71;
      if ( !v71 )
        goto LABEL_74;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 8LL))(v71);
    }
    v48 = v71;
LABEL_74:
    ++*((_DWORD *)this + 24);
    if ( v48 )
    {
      v71 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    }
    v49 = (int *)lpMem;
    if ( !lpMem )
      goto LABEL_93;
    lpMem = 0LL;
    v50 = *(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v49 + 16LL);
    if ( v50 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::Release )
    {
      if ( ATL::SafeDecrementReferenceMultiThread(v49 + 11) )
        goto LABEL_93;
      v51 = *(void *(__fastcall **)(CAPOWrapperClient *__hidden, unsigned int))(*(_QWORD *)v49 + 32LL);
      if ( v51 == CAPOWrapperClient::`scalar deleting destructor' )
      {
        *(_QWORD *)v49 = &CAPOWrapperClient::`vftable';
        *((_QWORD *)v49 + 1) = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObject'};
        *((_QWORD *)v49 + 2) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>'};
        *((_QWORD *)v49 + 3) = &CAPOWrapperClient::`vftable'{for `IAPOAuxiliaryInputConfiguration'};
        *((_QWORD *)v49 + 4) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal>'};
        v52 = g_ADGProcess;
        lpCriticalSection = g_ADGProcess;
        v86 = 0;
        ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
        if ( LODWORD(v52[1].DebugInfo)-- == 1 )
          CAudioDGProcess::StartADGTerminationTimer((struct _TP_TIMER **)v52);
        if ( v86 )
        {
          LeaveCriticalSection(lpCriticalSection);
          v86 = 0;
        }
        v54 = *((_QWORD *)v49 + 7);
        if ( v54 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
        v55 = *((_QWORD *)v49 + 6);
        if ( v55 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
        v49[11] = -1073741823;
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v49);
      }
      else
      {
        v51((CAPOWrapperClient *)v49, 1u);
      }
      if ( !Microsoft::WRL::Details::ModuleBase::module_ )
        goto LABEL_93;
      v50 = *(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
    }
    ((void (*)(void))v50)();
LABEL_93:
    ++v29;
    v30 = *((_DWORD *)this + 20);
    if ( v29 >= v30 )
    {
      v9 = v82;
      goto LABEL_97;
    }
  }
  if ( (unsigned int)hProvider > 2 )
  {
    v92 = "CCompositeSystemEffect::Initialize";
    v93 = 35LL;
    v81 = 807;
    v94 = &v81;
    v95 = 4LL;
    v96 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)this + 56, v29);
    v97 = 16LL;
    v98 = &v74;
    v99 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014794C, v59, v60, 6u, &pData);
    v43 = v74;
  }
  if ( v43 < 0 )
  {
    v57 = 809LL;
    goto LABEL_105;
  }
LABEL_106:
  v61 = v71;
  if ( v71 )
  {
    v71 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&lpMem);
  return (unsigned int)v43;
}
