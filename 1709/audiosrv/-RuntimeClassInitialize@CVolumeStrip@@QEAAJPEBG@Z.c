/*
 * XREFs of ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18006D86C
 * Callers:
 *     ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x18006BD08 (--$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVol.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180008324 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001B028 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800354B8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005ABB0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     ??0CMeterControlBase@@QEAA@XZ @ 0x180065A38 (--0CMeterControlBase@@QEAA@XZ.c)
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800665E8 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??0CMuteControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x180066808 (--0CMuteControlBase@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180066D64 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x180067D20 (--0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180068FFC (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x18006BE40 (--0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ?InitKsDataFormat@@YAXPEATKSDATAFORMAT@@PEAUtWAVEFORMATEX@@@Z @ 0x18006D068 (-InitKsDataFormat@@YAXPEATKSDATAFORMAT@@PEAUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall CVolumeStrip::RuntimeClassInitialize(void **this, const unsigned __int16 *a2)
{
  unsigned __int16 **v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  void *v15; // r14
  LPVOID *v16; // r15
  void *v17; // rcx
  struct IPartsList *v18; // rcx
  int v19; // eax
  CVolumeControlBase *v20; // rax
  UUID *v21; // rbx
  __int64 v22; // rdx
  char v23; // r14
  int v24; // eax
  LPVOID v25; // rcx
  CVolumeSoftware *v26; // rax
  CVolumeSoftware *v27; // rcx
  int v28; // eax
  CMuteControlBase *v29; // rax
  CMuteControlBase *v30; // rbx
  char v31; // r14
  int v32; // eax
  LPVOID v33; // rcx
  CMuteControlBase *v34; // rax
  CMuteControlBase *v35; // rbx
  int v36; // eax
  CMeterControlBase *v37; // rax
  CMeterControlBase *v38; // rbx
  char v39; // r14
  int v40; // eax
  LPVOID v41; // rcx
  CMeterControlBase *v42; // rax
  struct _RTL_CRITICAL_SECTION *v43; // rbx
  int v44; // eax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v48; // [rsp+28h] [rbp-69h]
  int v49[2]; // [rsp+38h] [rbp-59h] BYREF
  char v50; // [rsp+40h] [rbp-51h]
  __int64 v51; // [rsp+48h] [rbp-49h] BYREF
  LPVOID *p_pv; // [rsp+50h] [rbp-41h]
  LPVOID v53; // [rsp+58h] [rbp-39h] BYREF
  char v54; // [rsp+60h] [rbp-31h]
  __int64 v55; // [rsp+68h] [rbp-29h]
  KSDATAFORMAT v56; // [rsp+78h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  struct IPartsList *v58; // [rsp+F8h] [rbp+67h] BYREF
  struct IMMDevice *v59; // [rsp+108h] [rbp+77h] BYREF
  LPVOID pv; // [rsp+110h] [rbp+7Fh] BYREF

  v55 = -2LL;
  v4 = (unsigned __int16 **)(this + 29);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    this + 29,
    0LL);
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  v8 = _AllocStringWorker<CTCoAllocPolicy>(v6, v5, a2, v7, v48, v4);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v59 = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                     + 40LL))(
            *(_QWORD *)&g_DeviceEnumerator,
            *v4,
            &v59);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x136,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)(unsigned int)v10);
LABEL_113:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v59);
      return v9;
    }
    v51 = 0LL;
    v11 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v59->lpVtbl->QueryInterface)(
            v59,
            &GUID_419e19f7_d318_4c05_b705_2f17133c55da,
            &v51);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15E1,
        (__int64)"internal\\sdk\\inc\\wil/resultmacros.h",
        (const char *)(unsigned int)v11);
      v12 = v9;
      v13 = 313LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v13,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)v12);
LABEL_112:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
      goto LABEL_113;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v51 + 64LL))(v51, (char *)this + 240);
    v9 = v14;
    if ( v14 < 0 )
    {
      v12 = (unsigned int)v14;
      v13 = 315LL;
      goto LABEL_11;
    }
    v58 = 0LL;
    *(_QWORD *)v49 = 0LL;
    if ( ((int (__fastcall *)(struct IMMDevice *, GUID *, __int64))v59->lpVtbl->Activate)(
           v59,
           &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
           23LL) >= 0 )
    {
      pv = 0LL;
      p_pv = &pv;
      v53 = 0LL;
      v54 = 1;
      v9 = (*(__int64 (__fastcall **)(CPolicyConfig *, unsigned __int16 *, _QWORD, LPVOID *))(*(_QWORD *)g_PolicyConfig
                                                                                            + 32LL))(
             g_PolicyConfig,
             *v4,
             0LL,
             &v53);
      if ( v54 )
      {
        v15 = v53;
        v16 = p_pv;
        v17 = *p_pv;
        if ( v53 != *p_pv )
        {
          if ( v17 )
            CoTaskMemFree(v17);
          *v16 = v15;
        }
      }
      if ( (v9 & 0x80000000) != 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x144,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
          (const char *)v9);
        if ( pv )
          CoTaskMemFree(pv);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v49);
        goto LABEL_111;
      }
      InitKsDataFormat(&v56, (struct tWAVEFORMATEX *)pv);
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_879f8c7a46163fac74ca54c33ad9d683_Traceguids, this);
      }
      v18 = v58;
      v58 = 0LL;
      if ( v18 )
        ((void (__fastcall *)(struct IPartsList *))v18->lpVtbl->Release)(v18);
      v19 = (*(__int64 (__fastcall **)(_QWORD, KSDATAFORMAT *, __int64))(**(_QWORD **)v49 + 24LL))(
              *(_QWORD *)v49,
              &v56,
              64LL);
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x14C,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
          (const char *)(unsigned int)v19);
      if ( pv )
        CoTaskMemFree(pv);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v49);
    if ( v58 )
    {
      v20 = (CVolumeControlBase *)operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
      v21 = (UUID *)v20;
      *(_QWORD *)v49 = v20;
      if ( v20 )
      {
        CVolumeControlBase::CVolumeControlBase(v20, (struct IVolumeStrip *)(this + 1));
        *(_QWORD *)&v21->Data1 = &CVolumeHardware::`vftable';
        *(_QWORD *)&v21[15].Data1 = 0LL;
        *(_QWORD *)v21[15].Data4 = 0LL;
        v21[16] = GUID_00000000_0000_0000_0000_000000000000;
        *(_QWORD *)&v21[17].Data1 = 0LL;
      }
      else
      {
        v21 = 0LL;
      }
      pv = v21;
      if ( !v21 )
      {
        v22 = 345LL;
LABEL_99:
        v9 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
          (const char *)0x8007000ELL);
        goto LABEL_111;
      }
      *(_QWORD *)v49 = &pv;
      v23 = 1;
      v50 = 1;
      v24 = CVolumeHardware::Initialize(v21, (struct IUnknown *)v59, v58);
      v25 = pv;
      if ( v24 >= 0 )
      {
        this[31] = pv;
        v23 = 0;
      }
      if ( v23 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v25 + 16LL))(v25);
    }
    if ( !this[31] )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xDu,
          (__int64)&WPP_879f8c7a46163fac74ca54c33ad9d683_Traceguids,
          a2);
      }
      v26 = (CVolumeSoftware *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
      *(_QWORD *)v49 = v26;
      if ( v26 )
        v27 = CVolumeSoftware::CVolumeSoftware(v26, (struct IVolumeStrip *)(this + 1));
      else
        v27 = 0LL;
      pv = v27;
      if ( !v27 )
      {
        v22 = 360LL;
        goto LABEL_99;
      }
      *(_QWORD *)v49 = &pv;
      v50 = 1;
      v28 = (*(__int64 (__fastcall **)(CVolumeSoftware *, struct IMMDevice *))(*(_QWORD *)v27 + 48LL))(v27, v59);
      v9 = v28;
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x16B,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
          (const char *)(unsigned int)v28);
LABEL_54:
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
        goto LABEL_111;
      }
      this[31] = pv;
    }
    if ( v58 )
    {
      v29 = (CMuteControlBase *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
      v30 = v29;
      *(_QWORD *)v49 = v29;
      if ( v29 )
      {
        CMuteControlBase::CMuteControlBase(v29, (struct IVolumeStrip *)(this + 1));
        *(_QWORD *)v30 = &CMuteHardware::`vftable';
        *((_QWORD *)v30 + 5) = 0LL;
        *((_QWORD *)v30 + 6) = 0LL;
        *((_DWORD *)v30 + 14) = 0;
      }
      else
      {
        v30 = 0LL;
      }
      pv = v30;
      if ( !v30 )
      {
        v22 = 384LL;
        goto LABEL_99;
      }
      *(_QWORD *)v49 = &pv;
      v31 = 1;
      v50 = 1;
      v32 = CMuteHardware::Initialize(v30, (struct IUnknown *)v59, v58);
      v33 = pv;
      if ( v32 >= 0 )
      {
        this[32] = pv;
        v31 = 0;
      }
      if ( v31 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v33 + 16LL))(v33);
    }
    if ( !this[32] )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xEu,
          (__int64)&WPP_879f8c7a46163fac74ca54c33ad9d683_Traceguids,
          a2);
      }
      v34 = (CMuteControlBase *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      v35 = v34;
      *(_QWORD *)v49 = v34;
      if ( v34 )
      {
        CMuteControlBase::CMuteControlBase(v34, (struct IVolumeStrip *)(this + 1));
        *(_QWORD *)v35 = &CMuteSoftware::`vftable';
        *((_QWORD *)v35 + 5) = 0LL;
        ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)v35 + 48));
        *((_QWORD *)v35 + 11) = 0LL;
        *((_BYTE *)v35 + 96) = 0;
      }
      else
      {
        v35 = 0LL;
      }
      pv = v35;
      if ( !v35 )
      {
        v22 = 399LL;
        goto LABEL_99;
      }
      *(_QWORD *)v49 = &pv;
      v50 = 1;
      v36 = (*(__int64 (__fastcall **)(CMuteControlBase *, struct IMMDevice *))(*(_QWORD *)v35 + 48LL))(v35, v59);
      v9 = v36;
      if ( v36 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x192,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
          (const char *)(unsigned int)v36);
        goto LABEL_54;
      }
      this[32] = pv;
    }
    if ( v58 )
    {
      v37 = (CMeterControlBase *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      v38 = v37;
      *(_QWORD *)v49 = v37;
      if ( v37 )
      {
        CMeterControlBase::CMeterControlBase(v37);
        *(_QWORD *)v38 = &CMeterHardware::`vftable';
        *((_QWORD *)v38 + 4) = 0LL;
        *((_QWORD *)v38 + 5) = 0LL;
      }
      else
      {
        v38 = 0LL;
      }
      pv = v38;
      if ( !v38 )
      {
        v22 = 418LL;
        goto LABEL_99;
      }
      *(_QWORD *)v49 = &pv;
      v39 = 1;
      v50 = 1;
      v40 = CMeterHardware::Initialize(v38, (struct IUnknown *)v59, v58);
      v41 = pv;
      if ( v40 >= 0 )
      {
        this[33] = pv;
        v39 = 0;
      }
      if ( v39 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v41 + 16LL))(v41);
    }
    if ( !this[33] )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xFu,
          (__int64)&WPP_879f8c7a46163fac74ca54c33ad9d683_Traceguids,
          a2);
      }
      v42 = (CMeterControlBase *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
      v43 = (struct _RTL_CRITICAL_SECTION *)v42;
      *(_QWORD *)v49 = v42;
      if ( v42 )
      {
        CMeterControlBase::CMeterControlBase(v42);
        v43->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CMeterSoftware::`vftable';
        v43->SpinCount = 0LL;
        ATL::CCriticalSection::CCriticalSection(v43 + 1);
      }
      else
      {
        v43 = 0LL;
      }
      pv = v43;
      if ( !v43 )
      {
        v22 = 433LL;
        goto LABEL_99;
      }
      *(_QWORD *)v49 = &pv;
      v50 = 1;
      v44 = (*(__int64 (__fastcall **)(struct _RTL_CRITICAL_SECTION *, struct IMMDevice *))&v43->DebugInfo[1].Type)(
              v43,
              v59);
      v9 = v44;
      if ( v44 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x1B4,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
          (const char *)(unsigned int)v44);
        goto LABEL_54;
      }
      this[33] = pv;
    }
    v45 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)this[33] + 96LL))(this[33]);
    v9 = v45;
    if ( v45 >= 0 )
    {
      v45 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)this[32] + 96LL))(this[32]);
      v9 = v45;
      if ( v45 >= 0 )
      {
        v45 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)this[31] + 192LL))(this[31]);
        v9 = v45;
        if ( v45 >= 0 )
        {
          v9 = 0;
          goto LABEL_111;
        }
        v46 = 454LL;
      }
      else
      {
        v46 = 453LL;
      }
    }
    else
    {
      v46 = 452LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v46,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v45);
LABEL_111:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v58);
    goto LABEL_112;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x133,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
