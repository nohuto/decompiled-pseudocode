/*
 * XREFs of ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18004A190
 * Callers:
 *     ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x180049F3C (--$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVol.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180015514 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002FE5C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x180049610 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?InitKsDataFormat@@YAXPEATKSDATAFORMAT@@PEAUtWAVEFORMATEX@@@Z @ 0x18004A020 (-InitKsDataFormat@@YAXPEATKSDATAFORMAT@@PEAUtWAVEFORMATEX@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x18004A970 (-Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?Release@CMeterControlBase@@UEAAKXZ @ 0x18004A980 (-Release@CMeterControlBase@@UEAAKXZ.c)
 *     ??0CMeterControlBase@@QEAA@XZ @ 0x18004AB44 (--0CMeterControlBase@@QEAA@XZ.c)
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18004ABC4 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?RegisterForNotifications@CMuteHardware@@UEAAJXZ @ 0x18004AE50 (-RegisterForNotifications@CMuteHardware@@UEAAJXZ.c)
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18004AEB8 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??0CMuteControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x18004B144 (--0CMuteControlBase@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004B238 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??0CVolumeHardware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x18004D6BC (--0CVolumeHardware@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ?RegisterForNotifications@CVolumeHardware@@UEAAJXZ @ 0x18004D770 (-RegisterForNotifications@CVolumeHardware@@UEAAJXZ.c)
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18004D7BC (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     ??0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x1800A530C (--0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall CVolumeStrip::RuntimeClassInitialize(CVolumeStrip *this, const unsigned __int16 *a2)
{
  unsigned __int16 **v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 (__fastcall *v13)(CPolicyConfig *, unsigned __int16 *, int, struct tWAVEFORMATEX **); // rax
  unsigned __int16 *v14; // rdx
  unsigned int DeviceFormat; // eax
  struct tWAVEFORMATEX *v16; // r14
  _QWORD *v17; // r15
  struct tWAVEFORMATEX *v18; // rcx
  __int64 v19; // rbx
  struct IPartsList *v20; // rcx
  int v21; // eax
  CVolumeHardware *v22; // rax
  CVolumeHardware *v23; // rax
  char v24; // bl
  int v25; // eax
  LPVOID v26; // rcx
  CMuteControlBase *v27; // rax
  CMuteControlBase *v28; // rbx
  char v29; // r14
  int v30; // eax
  LPVOID v31; // rcx
  CMeterControlBase *v32; // rax
  CMeterControlBase *v33; // rbx
  char v34; // r14
  int v35; // eax
  CMeterControlBase *v36; // rcx
  void (*v37)(void); // rax
  LPVOID v38; // rcx
  CMeterControlBase *v39; // rax
  struct _RTL_CRITICAL_SECTION *v40; // rbx
  __int64 (__fastcall *v41)(CMeterSoftware *__hidden, struct IMMDevice *); // rax
  int v42; // eax
  LPVOID v43; // rax
  int v44; // eax
  CMuteHardware *v45; // rcx
  __int64 (*v46)(void); // rax
  int v47; // eax
  CVolumeHardware *v48; // rcx
  __int64 (*v49)(void); // rax
  int v50; // eax
  unsigned __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rdx
  CVolumeSoftware *v55; // rax
  CVolumeSoftware *v56; // rcx
  int v57; // eax
  CMuteControlBase *v58; // rax
  CMuteControlBase *v59; // rbx
  int v60; // eax
  unsigned __int64 v61; // r9
  __int64 v62; // [rsp+28h] [rbp-69h]
  int v63; // [rsp+28h] [rbp-69h]
  void *v64; // [rsp+28h] [rbp-69h]
  int v65[2]; // [rsp+38h] [rbp-59h] BYREF
  char v66; // [rsp+40h] [rbp-51h]
  __int64 v67; // [rsp+48h] [rbp-49h] BYREF
  LPVOID *p_pv; // [rsp+50h] [rbp-41h]
  struct tWAVEFORMATEX *v69; // [rsp+58h] [rbp-39h] BYREF
  char v70; // [rsp+60h] [rbp-31h]
  __int64 v71; // [rsp+68h] [rbp-29h]
  KSDATAFORMAT v72; // [rsp+78h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  struct IMMDevice *v74; // [rsp+F8h] [rbp+67h] BYREF
  struct IPartsList *v75; // [rsp+108h] [rbp+77h] BYREF
  LPVOID pv; // [rsp+110h] [rbp+7Fh] BYREF

  v71 = -2LL;
  v4 = (unsigned __int16 **)((char *)this + 232);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    (char *)this + 232,
    0LL);
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  v8 = _AllocStringWorker<CTCoAllocPolicy>(v6, v5, a2, v7, v62, v4);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x133,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v8,
      v63);
    return v9;
  }
  v74 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                   + 40LL))(
          *(_QWORD *)&g_DeviceEnumerator,
          *v4,
          &v74);
  v9 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x136,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v10,
      v63);
    goto LABEL_71;
  }
  v67 = 0LL;
  v11 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v74->lpVtbl->QueryInterface)(
          v74,
          &GUID_419e19f7_d318_4c05_b705_2f17133c55da,
          &v67);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161F,
      (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v11,
      v63);
    v52 = v9;
    v53 = 313LL;
LABEL_78:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v53,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)v52,
      v63);
    goto LABEL_70;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v67 + 64LL))(v67, (char *)this + 240);
  v9 = v12;
  if ( v12 < 0 )
  {
    v52 = (unsigned int)v12;
    v53 = 315LL;
    goto LABEL_78;
  }
  v75 = 0LL;
  *(_QWORD *)v65 = 0LL;
  v64 = v65;
  if ( ((int (__fastcall *)(struct IMMDevice *, GUID *, __int64))v74->lpVtbl->Activate)(
         v74,
         &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
         23LL) >= 0 )
  {
    pv = 0LL;
    p_pv = &pv;
    v69 = 0LL;
    v70 = 1;
    v13 = *(__int64 (__fastcall **)(CPolicyConfig *, unsigned __int16 *, int, struct tWAVEFORMATEX **))(*(_QWORD *)g_PolicyConfig + 32LL);
    v14 = *v4;
    if ( v13 == CPolicyConfig::GetDeviceFormat )
      DeviceFormat = CPolicyConfig::GetDeviceFormat(g_PolicyConfig, v14, 0, &v69);
    else
      DeviceFormat = v13(g_PolicyConfig, v14, 0, &v69);
    v9 = DeviceFormat;
    if ( v70 )
    {
      v16 = v69;
      v17 = p_pv;
      v18 = (struct tWAVEFORMATEX *)*p_pv;
      if ( v69 != *p_pv )
      {
        if ( v18 )
          CoTaskMemFree(v18);
        *v17 = v16;
      }
    }
    if ( (v9 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)v9,
        (int)v65);
      if ( pv )
        CoTaskMemFree(pv);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v65);
      goto LABEL_69;
    }
    InitKsDataFormat(&v72, (struct tWAVEFORMATEX *)pv);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_507d7cb4b14a35034dcca2f146935df3_Traceguids, this);
    }
    v19 = *(_QWORD *)v65;
    v20 = v75;
    v75 = 0LL;
    if ( v20 )
      ((void (__fastcall *)(struct IPartsList *))v20->lpVtbl->Release)(v20);
    v64 = &v75;
    v21 = (*(__int64 (__fastcall **)(__int64, KSDATAFORMAT *, __int64))(*(_QWORD *)v19 + 24LL))(v19, &v72, 64LL);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x14C,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)(unsigned int)v21,
        (int)&v75);
    if ( pv )
      CoTaskMemFree(pv);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v65);
  if ( v75 )
  {
    v22 = (CVolumeHardware *)operator new(0x1B0uLL, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)v65 = v22;
    if ( v22 )
      v23 = CVolumeHardware::CVolumeHardware(v22, (CVolumeStrip *)((char *)this + 8));
    else
      v23 = 0LL;
    pv = v23;
    if ( !v23 )
    {
      v9 = -2147024882;
      v54 = 345LL;
LABEL_127:
      v61 = v9;
      goto LABEL_128;
    }
    *(_QWORD *)v65 = &pv;
    v66 = 1;
    v24 = 1;
    v25 = CVolumeHardware::Initialize(v23, v74, v75);
    v26 = pv;
    if ( v25 >= 0 )
    {
      *((_QWORD *)this + 31) = pv;
      v24 = 0;
    }
    if ( v24 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v26 + 16LL))(v26);
  }
  if ( *((_QWORD *)this + 31) )
    goto LABEL_33;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_507d7cb4b14a35034dcca2f146935df3_Traceguids, a2);
  }
  v55 = (CVolumeSoftware *)operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)v65 = v55;
  if ( v55 )
    v56 = CVolumeSoftware::CVolumeSoftware(v55, (CVolumeStrip *)((char *)this + 8));
  else
    v56 = 0LL;
  pv = v56;
  if ( !v56 )
  {
    v9 = -2147024882;
    v54 = 360LL;
    goto LABEL_127;
  }
  *(_QWORD *)v65 = &pv;
  v66 = 1;
  v57 = (*(__int64 (__fastcall **)(CVolumeSoftware *, struct IMMDevice *))(*(_QWORD *)v56 + 48LL))(v56, v74);
  v9 = v57;
  if ( v57 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v57,
      (int)v64);
LABEL_99:
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    goto LABEL_69;
  }
  *((_QWORD *)this + 31) = pv;
LABEL_33:
  if ( !v75 )
    goto LABEL_41;
  v27 = (CMuteControlBase *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v28 = v27;
  *(_QWORD *)v65 = v27;
  if ( v27 )
  {
    CMuteControlBase::CMuteControlBase(v27, (CVolumeStrip *)((char *)this + 8));
    *(_QWORD *)v28 = &CMuteHardware::`vftable';
    *((_QWORD *)v28 + 6) = 0LL;
    *((_QWORD *)v28 + 7) = 0LL;
    *((_DWORD *)v28 + 16) = 0;
    *(GUID *)((char *)v28 + 68) = GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    v28 = 0LL;
  }
  pv = v28;
  if ( !v28 )
  {
    v9 = -2147024882;
    v54 = 384LL;
    goto LABEL_127;
  }
  *(_QWORD *)v65 = &pv;
  v66 = 1;
  v29 = 1;
  v30 = CMuteHardware::Initialize(v28, v74, v75);
  v31 = pv;
  if ( v30 >= 0 )
  {
    *((_QWORD *)this + 32) = pv;
    v29 = 0;
  }
  if ( v29 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v31 + 16LL))(v31);
LABEL_41:
  if ( *((_QWORD *)this + 32) )
    goto LABEL_42;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_507d7cb4b14a35034dcca2f146935df3_Traceguids, a2);
  }
  v58 = (CMuteControlBase *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v59 = v58;
  *(_QWORD *)v65 = v58;
  if ( v58 )
  {
    CMuteControlBase::CMuteControlBase(v58, (CVolumeStrip *)((char *)this + 8));
    *(_QWORD *)v59 = &CMuteSoftware::`vftable';
    *((_QWORD *)v59 + 6) = 0LL;
    ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)v59 + 56));
    *((_QWORD *)v59 + 12) = 0LL;
    *((_BYTE *)v59 + 104) = 0;
  }
  else
  {
    v59 = 0LL;
  }
  pv = v59;
  if ( !v59 )
  {
    v9 = -2147024882;
    v54 = 399LL;
    goto LABEL_127;
  }
  *(_QWORD *)v65 = &pv;
  v66 = 1;
  v60 = (*(__int64 (__fastcall **)(CMuteControlBase *, struct IMMDevice *))(*(_QWORD *)v59 + 48LL))(v59, v74);
  v9 = v60;
  if ( v60 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x192,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v60,
      (int)v64);
    goto LABEL_99;
  }
  *((_QWORD *)this + 32) = pv;
LABEL_42:
  if ( !v75 )
    goto LABEL_51;
  v32 = (CMeterControlBase *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v33 = v32;
  *(_QWORD *)v65 = v32;
  if ( v32 )
  {
    CMeterControlBase::CMeterControlBase(v32);
    *(_QWORD *)v33 = &CMeterHardware::`vftable';
    *((_QWORD *)v33 + 4) = 0LL;
    *((_QWORD *)v33 + 5) = 0LL;
  }
  else
  {
    v33 = 0LL;
  }
  pv = v33;
  if ( !v33 )
  {
    v9 = -2147024882;
    v54 = 418LL;
    goto LABEL_127;
  }
  *(_QWORD *)v65 = &pv;
  v66 = 1;
  v34 = 1;
  v35 = CMeterHardware::Initialize(v33, v74, v75);
  v36 = (CMeterControlBase *)pv;
  if ( v35 >= 0 )
  {
    *((_QWORD *)this + 33) = pv;
    v34 = 0;
  }
  if ( v34 )
  {
    v37 = *(void (**)(void))(*(_QWORD *)v36 + 16LL);
    if ( (char *)v37 == (char *)CMeterControlBase::Release )
      CMeterControlBase::Release(v36);
    else
      v37();
  }
LABEL_51:
  v38 = (LPVOID)*((_QWORD *)this + 33);
  if ( v38 )
    goto LABEL_61;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_507d7cb4b14a35034dcca2f146935df3_Traceguids, a2);
  }
  v39 = (CMeterControlBase *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v40 = (struct _RTL_CRITICAL_SECTION *)v39;
  *(_QWORD *)v65 = v39;
  if ( v39 )
  {
    CMeterControlBase::CMeterControlBase(v39);
    v40->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CMeterSoftware::`vftable';
    v40->SpinCount = 0LL;
    ATL::CCriticalSection::CCriticalSection(v40 + 1);
  }
  else
  {
    v40 = 0LL;
  }
  pv = v40;
  if ( !v40 )
  {
    v9 = -2147024882;
    v54 = 433LL;
    goto LABEL_127;
  }
  *(_QWORD *)v65 = &pv;
  v66 = 1;
  v41 = *(__int64 (__fastcall **)(CMeterSoftware *__hidden, struct IMMDevice *))&v40->DebugInfo[1].Type;
  if ( v41 == CMeterSoftware::Initialize )
    v42 = CMeterSoftware::Initialize((CMeterSoftware *)v40, v74);
  else
    v42 = v41((CMeterSoftware *)v40, v74);
  v9 = v42;
  if ( v42 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B4,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v42,
      (int)v64);
    goto LABEL_99;
  }
  v43 = pv;
  *((_QWORD *)this + 33) = pv;
  v38 = v43;
LABEL_61:
  v44 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v38 + 96LL))(v38);
  v9 = v44;
  if ( v44 < 0 )
  {
    v61 = (unsigned int)v44;
    v54 = 452LL;
LABEL_128:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v54,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)v61,
      (int)v64);
    goto LABEL_69;
  }
  v45 = (CMuteHardware *)*((_QWORD *)this + 32);
  v46 = *(__int64 (**)(void))(*(_QWORD *)v45 + 96LL);
  if ( (char *)v46 == (char *)CMuteHardware::RegisterForNotifications )
    v47 = CMuteHardware::RegisterForNotifications(v45);
  else
    v47 = v46();
  v9 = v47;
  if ( v47 < 0 )
  {
    v54 = 453LL;
    goto LABEL_127;
  }
  v48 = (CVolumeHardware *)*((_QWORD *)this + 31);
  v49 = *(__int64 (**)(void))(*(_QWORD *)v48 + 192LL);
  if ( (char *)v49 == (char *)CVolumeHardware::RegisterForNotifications )
    v50 = CVolumeHardware::RegisterForNotifications(v48);
  else
    v50 = v49();
  v9 = v50;
  if ( v50 < 0 )
  {
    v54 = 454LL;
    goto LABEL_127;
  }
  v9 = 0;
LABEL_69:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v75);
LABEL_70:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v67);
LABEL_71:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v74);
  return v9;
}
