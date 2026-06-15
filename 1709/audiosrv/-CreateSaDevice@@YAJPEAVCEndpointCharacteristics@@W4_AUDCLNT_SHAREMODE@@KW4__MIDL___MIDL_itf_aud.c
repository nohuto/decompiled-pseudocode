/*
 * XREFs of ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18000AA00
 * Callers:
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x18000E514 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@P.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _lambda_d725ef2bd5902e1f71ba535d4130c3fe_::operator() @ 0x180008E4C (_lambda_d725ef2bd5902e1f71ba535d4130c3fe_--operator().c)
 *     _lambda_088546142583ed2b95e858f6183ad370_::operator() @ 0x180008ED4 (_lambda_088546142583ed2b95e858f6183ad370_--operator().c)
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x1800091D0 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 *     ?IsMeterAPORequired@CVolumeStrip@@UEAA_NXZ @ 0x1800094F0 (-IsMeterAPORequired@CVolumeStrip@@UEAA_NXZ.c)
 *     ?IsVolumeAPORequired@CVolumeStrip@@UEAA_NXZ @ 0x180009510 (-IsVolumeAPORequired@CVolumeStrip@@UEAA_NXZ.c)
 *     ?IsMuteAPORequired@CVolumeStrip@@UEAA_NXZ @ 0x180009530 (-IsMuteAPORequired@CVolumeStrip@@UEAA_NXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009BB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallb.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000A05C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x18000C450 (-IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E760 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystem.c)
 *     ?GetClsids@CCompositeSystemEffect@@UEAAJPEAIPEAPEAU_GUID@@@Z @ 0x18001ED50 (-GetClsids@CCompositeSystemEffect@@UEAAJPEAIPEAPEAU_GUID@@@Z.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180020B6C (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180020BD0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180021110 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x1800216F8 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800217D0 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180021C48 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180022310 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x180023744 (-GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800B5498 (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x1800B6E00 (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CreateSaDevice(
        struct CEndpointCharacteristics *this,
        enum _AUDCLNT_SHAREMODE a2,
        enum _AUDCLNT_SHAREMODE a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        struct _GUID *a5,
        struct _GUID *a6,
        __int64 a7,
        __int64 a8,
        struct tWAVEFORMATEX *a9,
        const struct tWAVEFORMATEX *a10,
        struct _GUID *a11,
        bool a12,
        struct IAudioDeviceGraph **a13)
{
  struct ICompositeSystemEffect *v14; // rdi
  CCompositeSystemEffect *v15; // rbx
  unsigned int v16; // r14d
  int v17; // eax
  unsigned int v18; // esi
  int v19; // r12d
  CVolumeProvider *v20; // rsi
  CVolumeStrip *v21; // rcx
  __int64 (__fastcall *v22)(CVolumeProvider *, const unsigned __int16 *, struct IVolumeStrip **); // rax
  int DeviceVolumeStrip; // eax
  __int64 (*v24)(void); // rax
  char IsVolumeAPORequired; // al
  __int64 (*v26)(void); // rax
  char IsMuteAPORequired; // al
  __int64 (*v28)(void); // rax
  char IsMeterAPORequired; // al
  struct IAudioProcessingObject *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r14
  _BOOL8 v34; // r8
  __int64 (__fastcall *v35)(CCompositeSystemEffect *__hidden, unsigned int *, struct _GUID **); // rax
  LPVOID v36; // rsi
  _QWORD *v37; // r14
  void *v38; // rcx
  BOOL v39; // edx
  unsigned int v40; // eax
  void *v41; // rsi
  LPVOID v42; // rcx
  HRESULT v43; // eax
  int v44; // eax
  HRESULT v45; // eax
  struct tWAVEFORMATEX *v46; // rcx
  struct _GUID v47; // xmm0
  CAudioSignalProcessingModeMap *v48; // rcx
  int v49; // edx
  int v50; // eax
  LPVOID *v51; // rax
  GUID v52; // xmm0
  BOOL v53; // ecx
  __int64 v54; // rax
  BOOL v55; // ecx
  unsigned int v56; // r9d
  int v57; // r15d
  int v58; // eax
  LPVOID v59; // rdx
  volatile signed __int32 *v60; // r8
  int v61; // eax
  IUnknown *v62; // rax
  void (*v63)(void); // rax
  void (__fastcall *v64)(CCompositeSystemEffect *); // rax
  const GUID *v66; // r8
  const GUID *v67; // r9
  const struct _TlgProvider_t *v68; // rcx
  LPVOID v69; // rsi
  _QWORD *v70; // r14
  void *v71; // rcx
  HRESULT v72; // eax
  GUID *v73; // rcx
  HRESULT v74; // eax
  LPVOID *v75; // r9
  unsigned __int64 v76; // r8
  unsigned int v77; // ecx
  _DWORD *v78; // rax
  int v79; // eax
  int v80; // r10d
  unsigned int v81; // r9d
  unsigned int v82; // ecx
  _DWORD *v83; // rax
  const struct _TlgProvider_t *v84; // rcx
  const struct _TlgProvider_t *v85; // rcx
  const GUID *v86; // r8
  const GUID *v87; // r9
  LPVOID *ppv; // [rsp+20h] [rbp-E0h]
  int ppva; // [rsp+20h] [rbp-E0h]
  int ppvb; // [rsp+20h] [rbp-E0h]
  int ppvc; // [rsp+20h] [rbp-E0h]
  int ppvd; // [rsp+20h] [rbp-E0h]
  int ppve; // [rsp+20h] [rbp-E0h]
  char v94; // [rsp+60h] [rbp-A0h] BYREF
  char v95; // [rsp+61h] [rbp-9Fh] BYREF
  char v96; // [rsp+62h] [rbp-9Eh] BYREF
  _BYTE v97[5]; // [rsp+63h] [rbp-9Dh] BYREF
  LPVOID pv; // [rsp+68h] [rbp-98h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v99; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v100; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v101; // [rsp+7Ch] [rbp-84h] BYREF
  enum _AUDCLNT_SHAREMODE v102; // [rsp+80h] [rbp-80h]
  enum _AUDCLNT_SHAREMODE v103; // [rsp+84h] [rbp-7Ch] BYREF
  WINBOOL fPending[2]; // [rsp+88h] [rbp-78h] BYREF
  CVolumeStrip *v105; // [rsp+90h] [rbp-70h] BYREF
  int v106; // [rsp+98h] [rbp-68h]
  LPVOID v107; // [rsp+A0h] [rbp-60h] BYREF
  struct ICompositeSystemEffect *v108; // [rsp+A8h] [rbp-58h] BYREF
  IUnknown *pProxy; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 *v110; // [rsp+B8h] [rbp-48h] BYREF
  LPVOID v111; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v112; // [rsp+C8h] [rbp-38h] BYREF
  LPVOID v113; // [rsp+D0h] [rbp-30h] BYREF
  CCompositeSystemEffect *v114; // [rsp+D8h] [rbp-28h]
  struct tWAVEFORMATEX *v115; // [rsp+E0h] [rbp-20h]
  LPVOID v116; // [rsp+E8h] [rbp-18h] BYREF
  struct IAudioDeviceGraph **v117; // [rsp+F0h] [rbp-10h]
  __int64 v118; // [rsp+F8h] [rbp-8h]
  LPVOID Context[2]; // [rsp+100h] [rbp+0h] BYREF
  LPVOID *v120; // [rsp+110h] [rbp+10h]
  struct _GUID v121; // [rsp+120h] [rbp+20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  LPVOID *p_pv; // [rsp+140h] [rbp+40h]
  char *v124; // [rsp+148h] [rbp+48h]
  struct _GUID *v125; // [rsp+150h] [rbp+50h]
  __int64 v126; // [rsp+158h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR v127; // [rsp+160h] [rbp+60h] BYREF
  WINBOOL *v128; // [rsp+180h] [rbp+80h]
  __int64 v129; // [rsp+188h] [rbp+88h]
  bool *v130; // [rsp+190h] [rbp+90h]
  __int64 v131; // [rsp+198h] [rbp+98h]
  enum _AUDCLNT_SHAREMODE *v132; // [rsp+1A0h] [rbp+A0h]
  __int64 v133; // [rsp+1A8h] [rbp+A8h]
  char *v134; // [rsp+1B0h] [rbp+B0h]
  __int64 v135; // [rsp+1B8h] [rbp+B8h]
  char *v136; // [rsp+1C0h] [rbp+C0h]
  __int64 v137; // [rsp+1C8h] [rbp+C8h]
  char *v138; // [rsp+1D0h] [rbp+D0h]
  __int64 v139; // [rsp+1D8h] [rbp+D8h]
  _BYTE *v140; // [rsp+1E0h] [rbp+E0h]
  __int64 v141; // [rsp+1E8h] [rbp+E8h]
  unsigned int *v142; // [rsp+1F0h] [rbp+F0h]
  __int64 v143; // [rsp+1F8h] [rbp+F8h]
  unsigned int *v144; // [rsp+200h] [rbp+100h]
  __int64 v145; // [rsp+208h] [rbp+108h]
  char *v146; // [rsp+210h] [rbp+110h]
  __int64 v147; // [rsp+218h] [rbp+118h]
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  v118 = -2LL;
  v103 = a3;
  v102 = a2;
  v99 = a4;
  v111 = a6;
  v115 = a9;
  v117 = a13;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v97[0] = 0;
  v14 = 0LL;
  v108 = 0LL;
  v15 = 0LL;
  v114 = 0LL;
  v113 = 0LL;
  v100 = 0;
  v116 = 0LL;
  v101 = 0;
  v16 = 0;
  v105 = 0LL;
  v110 = 0LL;
  v17 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)this + 2) + 40LL))(
          *((_QWORD *)this + 2),
          &v110);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x90A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v17,
      (int)ppv);
    goto LABEL_96;
  }
  if ( v99 == eLoopbackConnector )
  {
    v106 = 1;
    goto LABEL_4;
  }
  v106 = *((_DWORD *)this + 37);
  v19 = 0;
  if ( v99 == eHostProcessConnector )
    goto LABEL_4;
  if ( v99 != eOffloadConnector )
  {
    if ( v99 <= eOffloadConnector || v99 > eKeywordDetectorConnector )
      goto LABEL_50;
LABEL_4:
    v19 = 0;
    if ( v102 )
      goto LABEL_50;
    v20 = g_pVolumeProvider;
    if ( !g_pVolumeProvider )
    {
      v18 = -2147418113;
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x934,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)0x8000FFFFLL,
        (int)ppv);
      goto LABEL_96;
    }
    v21 = v105;
    v105 = 0LL;
    if ( v21 )
      (*(void (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v21 + 16LL))(v21);
    v22 = *(__int64 (__fastcall **)(CVolumeProvider *, const unsigned __int16 *, struct IVolumeStrip **))(*(_QWORD *)v20 + 48LL);
    if ( v22 == CVolumeProvider::GetDeviceVolumeStrip )
      DeviceVolumeStrip = CVolumeProvider::GetDeviceVolumeStrip(v20, v110, &v105);
    else
      DeviceVolumeStrip = v22(v20, v110, &v105);
    v18 = DeviceVolumeStrip;
    if ( DeviceVolumeStrip < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x935,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)DeviceVolumeStrip,
        (int)ppv);
      goto LABEL_96;
    }
    v24 = *(__int64 (**)(void))(*(_QWORD *)v105 + 224LL);
    if ( (char *)v24 == (char *)CVolumeStrip::IsVolumeAPORequired )
      IsVolumeAPORequired = CVolumeStrip::IsVolumeAPORequired(v105);
    else
      IsVolumeAPORequired = v24();
    v94 = IsVolumeAPORequired;
    v26 = *(__int64 (**)(void))(*(_QWORD *)v105 + 208LL);
    if ( (char *)v26 == (char *)CVolumeStrip::IsMuteAPORequired )
      IsMuteAPORequired = CVolumeStrip::IsMuteAPORequired(v105);
    else
      IsMuteAPORequired = v26();
    v95 = IsMuteAPORequired;
    v28 = *(__int64 (**)(void))(*(_QWORD *)v105 + 216LL);
    if ( (char *)v28 == (char *)CVolumeStrip::IsMeterAPORequired )
      IsMeterAPORequired = CVolumeStrip::IsMeterAPORequired(v105);
    else
      IsMeterAPORequired = v28();
    v96 = IsMeterAPORequired;
    if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 280LL))(g_PolicyManager)
      || (v97[0] = 1, v106) )
    {
      v97[0] = 0;
    }
    if ( v99 && v99 != eKeywordDetectorConnector )
      goto LABEL_46;
    if ( !(unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, v99) )
    {
      *(_QWORD *)&v121.Data1 = 0LL;
      v108 = 0LL;
      CEndpointCharacteristics::GetGfx(
        this,
        v99,
        &v108,
        (struct IAudioProcessingObject **)&v121,
        (struct IAudioSystemEffects2 **)ppv);
      LOBYTE(v19) = IsFixedFormatApo(*(struct IAudioProcessingObject **)&v121.Data1);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v121);
      v14 = v108;
LABEL_37:
      if ( v14 )
      {
        Context[0] = &v113;
        Context[1] = 0LL;
        LOBYTE(v120) = 1;
        (*(void (__fastcall **)(struct ICompositeSystemEffect *, unsigned int *, LPVOID *))(*(_QWORD *)v14 + 32LL))(
          v14,
          &v100,
          &Context[1]);
        if ( (_BYTE)v120 )
        {
          v69 = Context[1];
          v70 = Context[0];
          v71 = *(void **)Context[0];
          if ( Context[1] != *(LPVOID *)Context[0] )
          {
            if ( v71 )
              CoTaskMemFree(v71);
            *v70 = v69;
          }
        }
      }
      if ( v15 )
      {
        Context[0] = &v116;
        Context[1] = 0LL;
        LOBYTE(v120) = 1;
        v35 = *(__int64 (__fastcall **)(CCompositeSystemEffect *__hidden, unsigned int *, struct _GUID **))(*(_QWORD *)v15 + 32LL);
        if ( v35 == CCompositeSystemEffect::GetClsids )
          CCompositeSystemEffect::GetClsids(v15, &v101, (struct _GUID **)&Context[1]);
        else
          v35(v15, &v101, (struct _GUID **)&Context[1]);
        if ( (_BYTE)v120 )
        {
          v36 = Context[1];
          v37 = Context[0];
          v38 = *(void **)Context[0];
          if ( Context[1] != *(LPVOID *)Context[0] )
          {
            if ( v38 )
              CoTaskMemFree(v38);
            *v37 = v36;
          }
        }
      }
LABEL_46:
      v39 = v94 || v95;
      v16 = v100 + v101 + v39 + (v97[0] != 0) + (v96 != 0);
      goto LABEL_50;
    }
    v30 = 0LL;
    *(_QWORD *)fPending = 0LL;
    *(_QWORD *)&v121.Data1 = 0LL;
    v31 = *(_QWORD *)&a5->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( *(_QWORD *)&a5->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
      v31 = *(_QWORD *)a5->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( !v31 )
    {
      if ( (unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(this, v99) )
      {
LABEL_25:
        v32 = *(_QWORD *)&v121.Data1;
        *(_QWORD *)&v121.Data1 = 0LL;
        if ( v32 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        v15 = 0LL;
        v114 = 0LL;
        *(_QWORD *)&v121.Data1 = 0LL;
        if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, v99) )
        {
          v33 = 96LL * (int)v99;
          v34 = *((_BYTE *)this + v33 + 1052) == 0;
          *(GUID *)Context = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          if ( SystemEffectDescriptor::GetChainDescriptorForMode((char *)this + v33 + 1000, Context, v34) )
          {
            if ( *(_DWORD *)(CEndpointCharacteristics::GetSupportedConnectorModesInternal(this, (unsigned int)v99, 0LL)
                           + 8) <= 1u )
            {
              *(GUID *)Context = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
              ppv = Context;
              CEndpointCharacteristics::GetInitializedSystemEffectInterface(this, (char *)this + v33 + 1000, 3LL);
              v15 = v114;
            }
          }
        }
        if ( IsFixedFormatApo(*(struct IAudioProcessingObject **)fPending)
          || IsFixedFormatApo(*(struct IAudioProcessingObject **)&v121.Data1) )
        {
          v19 = 1;
        }
        if ( *(_QWORD *)&v121.Data1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v121.Data1 + 16LL))(*(_QWORD *)&v121.Data1);
        if ( *(_QWORD *)fPending )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)fPending + 16LL))(*(_QWORD *)fPending);
        goto LABEL_37;
      }
      v30 = *(struct IAudioProcessingObject **)fPending;
    }
    *(_OWORD *)Context = *(_OWORD *)v111;
    *(_QWORD *)fPending = 0LL;
    if ( v30 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v30->lpVtbl->Release)(v30);
    v108 = 0LL;
    CEndpointCharacteristics::GetModeEffect(
      this,
      (struct _GUID *)Context,
      0,
      v99,
      &v108,
      (struct IAudioProcessingObject **)fPending,
      0LL);
    v14 = v108;
    goto LABEL_25;
  }
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, Context);
  if ( fPending[0] )
  {
    Context[0] = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  v68 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v68 > 4u )
  {
    v121.Data1 = a12;
    v125 = &v121;
    v126 = 4LL;
    TlgWrite(v68, &unk_18010F597, v66, v67, 3u, &pData);
  }
  if ( a12 )
    goto LABEL_4;
LABEL_50:
  pv = 0LL;
  if ( v16 )
    v40 = v16;
  else
    v40 = 1;
  v41 = CoTaskMemAlloc(16LL * v40 + 168);
  v42 = pv;
  if ( v41 != pv )
  {
    v42 = v41;
    pv = v41;
  }
  if ( v42 )
  {
    v107 = 0LL;
    if ( v102 == AUDCLNT_SHAREMODE_EXCLUSIVE )
    {
      v72 = CoCreateInstance(
              &GUID_75269c13_41e1_4d0e_b8a0_9f8f22e246c9,
              0LL,
              0x17u,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v107);
      v18 = v72;
      if ( v72 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x980,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v72,
          ppva);
        goto LABEL_92;
      }
    }
    else
    {
      if ( v99 != eOffloadConnector )
      {
        v43 = CoCreateInstance(
                &GUID_89115307_8248_448f_ada0_f3f3718a9b2a,
                0LL,
                0x17u,
                &GUID_00000000_0000_0000_c000_000000000046,
                &v107);
        v18 = v43;
        if ( v43 >= 0 )
          goto LABEL_58;
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x98E,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v43,
          ppva);
LABEL_92:
        if ( v107 )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v107 + 16LL))(v107);
        goto LABEL_94;
      }
      v73 = &GUID_c994009c_34d3_4c9d_90ae_8dd53f521058;
      if ( !a12 )
        v73 = &GUID_4654b883_10c0_4524_96b6_7d997104dcf0;
      v74 = CoCreateInstance(v73, 0LL, 0x17u, &GUID_00000000_0000_0000_c000_000000000046, &v107);
      v18 = v74;
      if ( v74 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x989,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v74,
          ppva);
        goto LABEL_92;
      }
    }
LABEL_58:
    pProxy = 0LL;
    v44 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, IUnknown **))v107)(
            v107,
            &GUID_3c169ff7_37b2_484c_b199_c3155590f316,
            &pProxy);
    v18 = v44;
    if ( v44 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15E1,
        (unsigned int)"internal\\sdk\\inc\\wil/resultmacros.h",
        (const char *)(unsigned int)v44,
        ppva);
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x994,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)v18,
        ppvc);
    }
    else if ( pProxy )
    {
      v45 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
      v18 = v45;
      if ( v45 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x99B,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v45,
          ppvb);
      }
      else
      {
        v46 = v115;
        *((_QWORD *)pv + 1) = v115;
        *(_DWORD *)pv = v46->cbSize + 18;
        if ( a10 )
        {
          *((_QWORD *)pv + 3) = a10;
          *((_DWORD *)pv + 4) = a10->cbSize + 18;
        }
        else
        {
          *((_QWORD *)pv + 3) = 0LL;
          *((_DWORD *)pv + 4) = 0;
        }
        *((_DWORD *)pv + 18) = v106;
        *((_QWORD *)pv + 7) = v110;
        *((_QWORD *)pv + 4) = a7;
        *((_QWORD *)pv + 5) = a8;
        *((_DWORD *)pv + 24) = 0;
        *((_DWORD *)pv + 20) = 0;
        *((_DWORD *)pv + 19) = v103;
        *((_DWORD *)pv + 25) = v99;
        *((_DWORD *)pv + 22) = -1;
        *((_DWORD *)pv + 23) = -1;
        *((_DWORD *)pv + 21) = -1;
        if ( v99 == eLoopbackConnector
          || !(unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, v99) )
        {
          v52 = GUID_00000000_0000_0000_0000_000000000000;
        }
        else
        {
          v47 = *a5;
          *(struct _GUID *)Context = *a5;
          v48 = (struct CEndpointCharacteristics *)((char *)this + 16 * v99 + 8 * v99 + 1400);
          v49 = 0;
          v50 = *((_DWORD *)v48 + 4);
          if ( v50 <= 0 )
            goto LABEL_66;
          while ( 1 )
          {
            v75 = (LPVOID *)(*(_QWORD *)v48 + 16LL * v49);
            v76 = (_BYTE *)*v75 - (char *)Context[0];
            if ( *v75 == Context[0] )
              v76 = (_BYTE *)v75[1] - (char *)Context[1];
            if ( !v76 )
              break;
            if ( ++v49 >= v50 )
              goto LABEL_66;
          }
          if ( v49 == -1 )
          {
LABEL_66:
            *(struct _GUID *)Context = v47;
            v51 = Context;
          }
          else
          {
            *(struct _GUID *)Context = v47;
            v51 = (LPVOID *)CAudioSignalProcessingModeMap::Lookup(v48, &v121, (struct _GUID *)Context);
          }
          v52 = *(GUID *)v51;
        }
        *(GUID *)Context = v52;
        *(GUID *)((char *)pv + 104) = v52;
        *(_OWORD *)((char *)pv + 120) = *(_OWORD *)v111;
        *((_DWORD *)pv + 34) = CEndpointCharacteristics::HasHardwareAudioEngine(this);
        *((_DWORD *)pv + 12) = *((_DWORD *)this + 36);
        v53 = !(unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(this)
           || v102 == AUDCLNT_SHAREMODE_EXCLUSIVE;
        *((_DWORD *)pv + 36) = v53;
        v54 = *(_QWORD *)&a5->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
        if ( *(_QWORD *)&a5->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
          v54 = *(_QWORD *)a5->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        v55 = !v54 && (unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(this, v99);
        *((_DWORD *)pv + 35) = v55;
        *(struct _GUID *)((char *)pv + 152) = *a11;
        *((_DWORD *)pv + 37) = v19;
        pData.Ptr = (ULONGLONG)&v99;
        *(_QWORD *)&pData.Size = &v96;
        p_pv = &pv;
        v124 = &v94;
        v125 = (struct _GUID *)&v95;
        v126 = (__int64)v97;
        Context[0] = &v101;
        Context[1] = &pv;
        v120 = &v116;
        if ( v99 && v99 != eKeywordDetectorConnector )
        {
          if ( v99 != eOffloadConnector )
            goto LABEL_82;
          goto LABEL_189;
        }
        if ( !(unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, v99) )
        {
          v80 = ValidateUncompressedWaveFormatEx(v115);
          if ( v80 == 1 )
            lambda_088546142583ed2b95e858f6183ad370_::operator()((__int64)&pData);
          v81 = 0;
          if ( v100 )
          {
            while ( 1 )
            {
              v82 = *((_DWORD *)pv + 24);
              if ( v82 > 0x1F )
                break;
              *((_DWORD *)pv + 20) |= 1 << v82;
              *((_DWORD *)pv + 21) = *((_DWORD *)pv + 24);
              if ( v80 == 1 )
                *((_DWORD *)pv + 22) = *((_DWORD *)pv + 24);
              v83 = pv;
              *(_OWORD *)((char *)pv + 16 * *((unsigned int *)pv + 24) + 168) = *((_OWORD *)v113 + v81);
              ++v83[24];
              if ( ++v81 >= v100 )
                goto LABEL_188;
            }
            v18 = -2005139341;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x9D8,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)0x887C0073LL,
              ppvb);
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0xA2C,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)0x887C0073LL,
              ppve);
            goto LABEL_90;
          }
LABEL_188:
          if ( v80 )
            goto LABEL_82;
LABEL_189:
          lambda_088546142583ed2b95e858f6183ad370_::operator()((__int64)&pData);
          goto LABEL_82;
        }
        v56 = 0;
        if ( v100 )
        {
          while ( 1 )
          {
            v77 = *((_DWORD *)pv + 24);
            if ( v77 > 0x1F )
              break;
            *((_DWORD *)pv + 20) |= 1 << v77;
            *((_DWORD *)pv + 21) = *((_DWORD *)pv + 24);
            v78 = pv;
            *(_OWORD *)((char *)pv + 16 * *((unsigned int *)pv + 24) + 168) = *((_OWORD *)v113 + v56);
            ++v78[24];
            if ( ++v56 >= v100 )
              goto LABEL_79;
          }
          v18 = -2005139341;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x9D8,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)0x887C0073LL,
            ppvb);
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xA04,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)0x887C0073LL,
            ppvd);
          goto LABEL_90;
        }
LABEL_79:
        v57 = ValidateUncompressedWaveFormatEx(v115);
        if ( v57
          || (v58 = lambda_d725ef2bd5902e1f71ba535d4130c3fe_::operator()((__int64)Context, 0), v18 = v58, v58 >= 0) )
        {
          lambda_088546142583ed2b95e858f6183ad370_::operator()((__int64)&pData);
          if ( v57 != 1
            || (v79 = lambda_d725ef2bd5902e1f71ba535d4130c3fe_::operator()((__int64)Context, 1), v18 = v79, v79 >= 0) )
          {
LABEL_82:
            v59 = pv;
            if ( *((_DWORD *)pv + 24) > v16 )
            {
              InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&v121, &v111);
              if ( v121.Data1 )
              {
                v111 = qword_18014C2B8;
                qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
                qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
                InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
              }
              v84 = (const struct _TlgProvider_t *)*((_QWORD *)v111 + 1);
              if ( *(_DWORD *)v84 > 2u && TlgKeywordOn(v84, 0x400000000004uLL) )
              {
                fPending[0] = v99;
                v128 = fPending;
                v129 = 4LL;
                v130 = &a12;
                v131 = 1LL;
                v103 = v102;
                v132 = &v103;
                v133 = 4LL;
                v134 = &v94;
                v135 = 1LL;
                v136 = &v95;
                v137 = 1LL;
                v138 = &v96;
                v139 = 1LL;
                v140 = v97;
                v141 = 1LL;
                v142 = &v100;
                v143 = 4LL;
                v144 = &v101;
                v145 = 4LL;
                v146 = (char *)pv + 96;
                v147 = 4LL;
                TlgWrite(v85, &unk_18010F4CA, v86, v87, 0xCu, &v127);
              }
              v18 = -2005139341;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xA50,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                (const char *)0x887C0073LL,
                ppvb);
            }
            else
            {
              v112 = 0LL;
              if ( v105 )
              {
                (**(void (__fastcall ***)(CVolumeStrip *, GUID *, volatile signed __int32 **))v105)(
                  v105,
                  &GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7,
                  &v112);
                v59 = pv;
                v60 = v112;
              }
              else
              {
                v60 = 0LL;
                v112 = 0LL;
              }
              v61 = ((__int64 (__fastcall *)(IUnknown *, LPVOID, volatile signed __int32 *, _QWORD))pProxy->lpVtbl[1].QueryInterface)(
                      pProxy,
                      v59,
                      v60,
                      (unsigned int)v103);
              v18 = v61;
              if ( v61 < 0 )
              {
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)0xA56,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                  (const char *)(unsigned int)v61,
                  ppvb);
              }
              else
              {
                v62 = pProxy;
                pProxy = 0LL;
                *v117 = (struct IAudioDeviceGraph *)v62;
                v18 = 0;
              }
              if ( v112 )
              {
                v63 = *(void (**)(void))(*(_QWORD *)v112 + 16LL);
                if ( (char *)v63 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>::Release )
                  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>::Release(v112);
                else
                  v63();
              }
            }
            goto LABEL_90;
          }
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xA12,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v79,
            ppvb);
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xA09,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v58,
            ppvb);
        }
      }
    }
    else
    {
      v18 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x995,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)0x8007000ELL,
        ppva);
    }
LABEL_90:
    if ( pProxy )
      ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
    goto LABEL_92;
  }
  v18 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x96E,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)0x8007000ELL,
    (int)ppv);
LABEL_94:
  if ( pv )
    CoTaskMemFree(pv);
LABEL_96:
  if ( v105 )
    (*(void (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v105 + 16LL))(v105);
  if ( v116 )
    CoTaskMemFree(v116);
  if ( v113 )
    CoTaskMemFree(v113);
  if ( v15 )
  {
    v64 = *(void (__fastcall **)(CCompositeSystemEffect *))(*(_QWORD *)v15 + 16LL);
    if ( (char *)v64 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::Release(v15);
    else
      v64(v15);
  }
  if ( v14 )
    (*(void (__fastcall **)(struct ICompositeSystemEffect *))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v110 )
    CoTaskMemFree(v110);
  return v18;
}
