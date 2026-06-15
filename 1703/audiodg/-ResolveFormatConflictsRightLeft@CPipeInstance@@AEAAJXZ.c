/*
 * XREFs of ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000CC90
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140007C50 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B9C0 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x14000BB78 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000DCB0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000DE00 (-GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000DE50 (-IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000DFB0 (-IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000E110 (-SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000E210 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000E2F0 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000E380 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000E410 (-IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000E460 (-IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000E610 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400112E0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1400143E0 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x1400152C0 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140015384 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x14001B5DC (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x14001B990 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x14001B9A0 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14001E75E (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x14003077C (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x140030948 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140030EE8 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140030F34 (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140030F84 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140034E94 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     WPP_SF_q @ 0x14003651C (WPP_SF_q.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14003ED34 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     WPP_SF__guid_ @ 0x14003FBC8 (WPP_SF__guid_.c)
 *     WPP_SF_qs @ 0x14003FBF4 (WPP_SF_qs.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140046F74 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CPipeInstance::ResolveFormatConflictsRightLeft(CPipeInstance *this)
{
  CPipeInstance *v1; // r12
  CAudioMediaType *v2; // rbx
  __int64 v3; // rax
  CProcessNode *v4; // rcx
  __int64 (__fastcall *v5)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int RightFormat; // eax
  int v7; // r8d
  int Converter; // r15d
  __int64 (*Release)(void); // rax
  const struct tWAVEFORMATEX *AudioFormat; // rax
  const struct tWAVEFORMATEX *v11; // r14
  __int64 cbSize; // rsi
  struct tWAVEFORMATEX *v13; // rax
  struct tWAVEFORMATEX *v14; // rdi
  struct CProcessNode *v15; // rsi
  CPipeInstance *v16; // rcx
  CProcessNode *v17; // rdi
  __int64 (__fastcall *v18)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int LeftFormat; // eax
  __int64 v20; // r14
  char v21; // r12
  __int64 v22; // rdi
  struct IAudioProcessingObject **v23; // r12
  int v24; // eax
  __int64 (__fastcall *v25)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int v26; // eax
  void (*v27)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  void (*v28)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  struct IUnknown *v29; // r12
  CAudioMediaType *v30; // rcx
  struct IUnknown *v31; // rcx
  int (*v32)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int IsLeftFormatSupported; // eax
  void (*v34)(void); // rax
  int v35; // eax
  int v36; // eax
  int (*v37)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int IsRightFormatSupported; // eax
  struct IUnknown *v39; // rdx
  ULONG (__stdcall *v40)(IUnknown *); // rax
  struct IUnknown *v41; // rdi
  void (__fastcall *v42)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  void (__fastcall *v43)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  struct IUnknown *v44; // r12
  ULONG (__stdcall *v45)(IUnknown *); // rax
  struct IAudioMediaType *v46; // rdi
  ULONG (__stdcall *AddRef)(IAudioMediaType *); // rax
  struct IAudioMediaType *v48; // rdx
  void (__fastcall ***v49)(_QWORD, __int64); // r14
  _QWORD *v50; // rdi
  __int64 v51; // r12
  __int64 v52; // rax
  _QWORD *v53; // rcx
  struct IUnknown *v54; // rdi
  ULONG (__stdcall *v55)(IUnknown *); // rax
  void (*v56)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  _QWORD *v57; // rcx
  unsigned int (__fastcall *v58)(CAudioMediaType *__hidden); // rax
  void (*v59)(void); // rax
  void (*v60)(void); // rax
  ATL::CAtlException *v62; // rbx
  CAudioMediaType *v63; // rcx
  ULONG (__stdcall *v64)(IAudioMediaType *); // rax
  void (*v65)(void); // rax
  unsigned int v66; // eax
  CPipeInstance *v67; // r14
  CPipeInstance *v68; // r14
  const struct tWAVEFORMATEX *v69; // rdi
  const struct tWAVEFORMATEX *v70; // rax
  CAudioMediaType *v71; // rcx
  ULONG (__stdcall *v72)(IAudioMediaType *); // rax
  void (*v73)(void); // rax
  void (*v74)(void); // rax
  void (*v75)(void); // rax
  int v76; // eax
  const char *v77; // rax
  int ppv; // [rsp+20h] [rbp-118h]
  void (__fastcall ****v79)(_QWORD, __int64); // [rsp+28h] [rbp-110h]
  struct IAudioSystemEffects2 **v80; // [rsp+30h] [rbp-108h]
  struct IUnknown *v81; // [rsp+40h] [rbp-F8h] BYREF
  CPipeInstance *v82; // [rsp+48h] [rbp-F0h]
  char v83; // [rsp+50h] [rbp-E8h]
  char v84; // [rsp+51h] [rbp-E7h]
  struct IUnknown *v85; // [rsp+58h] [rbp-E0h] BYREF
  struct IAudioMediaType *v86; // [rsp+60h] [rbp-D8h] BYREF
  CProcessNode *v87; // [rsp+68h] [rbp-D0h]
  struct CProcessNode *v88; // [rsp+70h] [rbp-C8h] BYREF
  struct IUnknown *v89; // [rsp+78h] [rbp-C0h] BYREF
  unsigned int v90; // [rsp+80h] [rbp-B8h]
  struct IAudioMediaType *v91; // [rsp+88h] [rbp-B0h] BYREF
  struct CProcessNode *v92; // [rsp+90h] [rbp-A8h]
  void (__fastcall ***v93)(_QWORD, __int64); // [rsp+98h] [rbp-A0h] BYREF
  int v94; // [rsp+A0h] [rbp-98h] BYREF
  CPipeInstance *v95; // [rsp+A8h] [rbp-90h]
  struct IMMDevice *v96; // [rsp+B0h] [rbp-88h] BYREF
  LPVOID v97; // [rsp+B8h] [rbp-80h] BYREF
  struct _GUID v98; // [rsp+C0h] [rbp-78h] BYREF
  _QWORD v99[3]; // [rsp+D0h] [rbp-68h] BYREF
  ATL::CAtlException *v100; // [rsp+E8h] [rbp-50h] BYREF
  struct _GUID v101; // [rsp+F0h] [rbp-48h] BYREF

  v99[1] = -2LL;
  v1 = this;
  v82 = this;
  v95 = this;
  v93 = 0LL;
  v83 = 0;
  v81 = 0LL;
  v97 = 0LL;
  v96 = 0LL;
  v89 = 0LL;
  v2 = 0LL;
  v91 = 0LL;
  v3 = *((_QWORD *)this + 2);
  if ( !v3 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = *(CProcessNode **)(v3 + 16);
  v5 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v4 + 16LL);
  if ( v5 == CProcessNode::GetRightFormat )
    RightFormat = CProcessNode::GetRightFormat(v4, (struct IAudioMediaType **)&v89);
  else
    RightFormat = v5(v4, (struct IAudioMediaType **)&v89);
  Converter = RightFormat;
  if ( RightFormat < 0 )
    goto LABEL_128;
  Release = (__int64 (*)(void))v89->lpVtbl[1].Release;
  if ( (char *)Release == (char *)CAudioMediaType::GetAudioFormat )
    AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v89);
  else
    AudioFormat = (const struct tWAVEFORMATEX *)Release();
  v11 = AudioFormat;
  cbSize = AudioFormat->cbSize;
  v13 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v14 = v13;
  if ( !v13 )
  {
    Converter = -2147024882;
    goto LABEL_128;
  }
  memcpy_0(v13, v11, cbSize + 18);
  ConvertPCMWfxToIEEEFloat(v14);
  Converter = CAudioMediaType::Create(v14, (unsigned int)v14->cbSize + 18, &v91, 0.0, 0);
  CoTaskMemFree(v14);
  if ( Converter < 0 )
  {
LABEL_269:
    v2 = (CAudioMediaType *)v91;
LABEL_128:
    v57 = WPP_GLOBAL_Control;
    goto LABEL_129;
  }
  v15 = (struct CProcessNode *)*((_QWORD *)v1 + 3);
  v88 = v15;
  v16 = *(CPipeInstance **)v1;
  if ( *(_QWORD *)v1 )
  {
    if ( *((_DWORD *)v1 + 30) && !*((_DWORD *)v16 + 51) )
    {
      v88 = 0LL;
      CPipeInstance::GetAPONodeAndConnection(v16, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, &v88, 0LL, 0LL);
      v17 = v88;
      v87 = v88;
      if ( v88 )
        goto LABEL_14;
      v88 = 0LL;
      CPipeInstance::GetAPONodeAndConnection(
        *(CPipeInstance **)v1,
        &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693,
        &v88,
        0LL,
        0LL);
      v17 = v88;
      v87 = v88;
      if ( v88 )
        goto LABEL_14;
      v16 = *(CPipeInstance **)v1;
    }
    v17 = *(CProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((char *)v16 + 16);
  }
  else if ( *((_DWORD *)v1 + 2) )
  {
    v17 = *(CProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(0LL, &v88);
    v15 = v88;
  }
  else
  {
    if ( !v15 )
      ATL::AtlThrowImpl(-2147467259);
    v17 = (CProcessNode *)*((_QWORD *)v15 + 2);
    v15 = (struct CProcessNode *)*((_QWORD *)v15 + 1);
  }
  v87 = v17;
LABEL_14:
  v18 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v17 + 8LL);
  if ( v18 == CProcessNode::GetLeftFormat )
    LeftFormat = CProcessNode::GetLeftFormat(v17, (struct IAudioMediaType **)&v81);
  else
    LeftFormat = v18(v17, (struct IAudioMediaType **)&v81);
  Converter = LeftFormat;
  if ( LeftFormat < 0 )
    goto LABEL_269;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids, v1);
  }
  v2 = (CAudioMediaType *)v91;
  while ( 1 )
  {
    if ( !v15 )
    {
      v56 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v17 + 24LL);
      if ( v56 == CProcessNode::SetRightFormat )
        CProcessNode::SetRightFormat(v17, (struct IAudioMediaType *)v81);
      else
        ((void (__fastcall *)(CProcessNode *, struct IUnknown *, int (*)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *)))v56)(
          v17,
          v81,
          CProcessNode::IsRightFormatSupported);
      goto LABEL_127;
    }
    v85 = 0LL;
    v86 = 0LL;
    v92 = v15;
    v20 = *((_QWORD *)v15 + 2);
    v15 = (struct CProcessNode *)*((_QWORD *)v15 + 1);
    v88 = v15;
    v21 = 0;
    v84 = 0;
    if ( *(_DWORD *)(v20 + 40) != 2 )
    {
      v37 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v20 + 48LL);
      if ( v37 == CProcessNode::IsRightFormatSupported )
        IsRightFormatSupported = CProcessNode::IsRightFormatSupported(
                                   (CProcessNode *)v20,
                                   (struct IAudioMediaType *)v81,
                                   (struct IAudioMediaType **)&v85,
                                   0LL);
      else
        IsRightFormatSupported = ((__int64 (__fastcall *)(__int64, struct IUnknown *, struct IUnknown **, _QWORD))v37)(
                                   v20,
                                   v81,
                                   &v85,
                                   0LL);
      Converter = IsRightFormatSupported;
      if ( IsRightFormatSupported >= 0 )
      {
LABEL_32:
        if ( Converter == 1 )
        {
          v32 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v17 + 40LL);
          if ( (char *)v32 == (char *)CAPOProcessNode::IsLeftFormatSupported )
          {
            IsLeftFormatSupported = CAPOProcessNode::IsLeftFormatSupported(
                                      v17,
                                      (struct IAudioMediaType *)v85,
                                      &v86,
                                      0LL);
          }
          else if ( v32 == CProcessNode::IsLeftFormatSupported )
          {
            IsLeftFormatSupported = CProcessNode::IsLeftFormatSupported(v17, (struct IAudioMediaType *)v85, &v86, 0LL);
          }
          else
          {
            IsLeftFormatSupported = ((__int64 (__fastcall *)(CProcessNode *, struct IUnknown *, struct IAudioMediaType **, _QWORD))v32)(
                                      v17,
                                      v85,
                                      &v86,
                                      0LL);
          }
          Converter = IsLeftFormatSupported;
          if ( IsLeftFormatSupported < 0 )
          {
            v63 = (CAudioMediaType *)v86;
            if ( v86 )
            {
              v64 = v86->lpVtbl->Release;
              if ( (char *)v64 == (char *)CAudioMediaType::Release )
                goto LABEL_220;
              goto LABEL_163;
            }
            goto LABEL_164;
          }
          if ( IsLeftFormatSupported )
          {
            if ( IsLeftFormatSupported == 1 )
            {
              v44 = v81;
              if ( v81 )
              {
                v81 = 0LL;
                v45 = v44->lpVtbl->Release;
                if ( (char *)v45 == (char *)CAudioMediaType::Release )
                  CAudioMediaType::Release((CAudioMediaType *)v44);
                else
                  ((void (__fastcall *)(struct IUnknown *))v45)(v44);
                v44 = v81;
              }
              v46 = v86;
              if ( v44 != (struct IUnknown *)v86 )
              {
                if ( v86 )
                {
                  AddRef = v86->lpVtbl->AddRef;
                  if ( (char *)AddRef == (char *)CAudioMediaType::AddRef )
                    CAudioMediaType::AddRef((CAudioMediaType *)v86);
                  else
                    ((void (__fastcall *)(struct IAudioMediaType *))AddRef)(v86);
                  v44 = v81;
                }
                if ( v44 )
                  ((void (__fastcall *)(struct IUnknown *))v44->lpVtbl->Release)(v44);
                v44 = (struct IUnknown *)v46;
                v81 = (struct IUnknown *)v46;
              }
              goto LABEL_99;
            }
          }
          else
          {
            v39 = v81;
            if ( v81 )
            {
              v81 = 0LL;
              v40 = v39->lpVtbl->Release;
              if ( (char *)v40 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v39);
              else
                ((void (__fastcall *)(struct IUnknown *))v40)(v39);
              v39 = v81;
            }
            v41 = v85;
            if ( v39 != v85 )
            {
              if ( v85 )
              {
                ((void (__fastcall *)(struct IUnknown *))v85->lpVtbl->AddRef)(v85);
                v39 = v81;
              }
              if ( v39 )
                ((void (__fastcall *)(struct IUnknown *))v39->lpVtbl->Release)(v39);
              v39 = v41;
              v81 = v41;
            }
            v42 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v87 + 24LL);
            if ( v42 == CAPOProcessNode::SetLeftFormat )
              CAPOProcessNode::SetLeftFormat(v87, (struct IAudioMediaType *)v39);
            else
              ((void (__fastcall *)(CProcessNode *))v42)(v87);
            v43 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v20 + 32LL);
            if ( v43 == CAPOProcessNode::SetRightFormat )
              CAPOProcessNode::SetRightFormat((CAPOProcessNode *)v20, (struct IAudioMediaType *)v81);
            else
              v43((CAPOProcessNode *)v20, (struct IAudioMediaType *)v81);
            if ( v21 )
            {
              ATL::CComPtrBase<IAudioProcessingObject>::Release(&v81);
              v29 = v81;
              if ( v81 == v89 )
                goto LABEL_40;
              ATL::AtlComPtrAssign(&v81, v89);
            }
          }
        }
        else if ( !Converter )
        {
          v27 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v17 + 24LL);
          if ( (char *)v27 == (char *)CAPOProcessNode::SetLeftFormat )
          {
            CAPOProcessNode::SetLeftFormat(v17, (struct IAudioMediaType *)v81);
          }
          else if ( v27 == CProcessNode::SetRightFormat )
          {
            CProcessNode::SetRightFormat(v17, (struct IAudioMediaType *)v81);
          }
          else
          {
            ((void (__fastcall *)(CProcessNode *, struct IUnknown *))v27)(v17, v81);
          }
          v28 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v20 + 32LL);
          if ( (char *)v28 == (char *)CAPOProcessNode::SetRightFormat )
          {
            CAPOProcessNode::SetRightFormat((CAPOProcessNode *)v20, (struct IAudioMediaType *)v81);
          }
          else if ( v28 == CProcessNode::SetRightFormat )
          {
            CProcessNode::SetRightFormat((CProcessNode *)v20, (struct IAudioMediaType *)v81);
          }
          else
          {
            ((void (__fastcall *)(__int64, struct IUnknown *))v28)(v20, v81);
          }
          if ( v21 )
          {
            v29 = v81;
            if ( v81 )
            {
              v81 = 0LL;
              ((void (__fastcall *)(struct IUnknown *))v29->lpVtbl->Release)(v29);
              v29 = v81;
            }
            v54 = v89;
            if ( v29 != v89 )
            {
              if ( v89 )
              {
                v55 = v89->lpVtbl->AddRef;
                if ( (char *)v55 == (char *)CAudioMediaType::AddRef )
                  CAudioMediaType::AddRef((CAudioMediaType *)v89);
                else
                  ((void (__fastcall *)(struct IUnknown *))v55)(v89);
                v29 = v81;
              }
              if ( v29 )
                ((void (__fastcall *)(struct IUnknown *))v29->lpVtbl->Release)(v29);
              v29 = v54;
              v81 = v54;
            }
            goto LABEL_40;
          }
        }
        v29 = v81;
LABEL_40:
        if ( (*((_BYTE *)v82 + 132) & 8) == 0
          || (v69 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v2 + 40LL))(v2),
              v70 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))v29->lpVtbl[1].Release)(v29),
              !(unsigned int)CompareWaveFormat(v70, v69)) )
        {
          v87 = (CProcessNode *)v20;
          goto LABEL_42;
        }
        if ( !v85 && v89 )
          ATL::AtlComPtrAssign(&v85, v89);
        v44 = v81;
LABEL_99:
        v48 = (struct IAudioMediaType *)v44;
        v1 = v82;
        Converter = CPipeInstance::FindConverter(v82, v48, (struct IAudioMediaType *)v85, &v94, &v101);
        if ( Converter < 0 )
        {
          v71 = (CAudioMediaType *)v86;
          if ( !v86 )
            goto LABEL_240;
          v72 = v86->lpVtbl->Release;
          if ( (char *)v72 == (char *)CAudioMediaType::Release )
            goto LABEL_238;
        }
        else
        {
          v98 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v79 = &v93;
          Converter = CAPOProcessNode::CreateAPOProcessNode(&v101, *(unsigned int *)(v20 + 24), (unsigned int)v94);
          if ( Converter >= 0 )
          {
            Converter = 0;
            try
            {
              v49 = v93;
              v99[0] = v93;
              v50 = (_QWORD *)((char *)v1 + 16);
              if ( v92 )
              {
                v51 = *(_QWORD *)v92;
                ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(v50);
                v15 = (struct CProcessNode *)v50[4];
                v99[2] = v15;
                v52 = *(_QWORD *)v15;
                *(_QWORD *)&v98.Data1 = v15;
                if ( v15 )
                  *((_QWORD *)v15 + 2) = v49;
                v50[4] = v52;
                v53 = v92;
                *((_QWORD *)v15 + 1) = v92;
                *(_QWORD *)v15 = v51;
                ++v50[2];
                if ( *v53 )
                  *(_QWORD *)(*v53 + 8LL) = v15;
                else
                  v50[1] = v15;
                *v53 = v15;
              }
              else
              {
                v15 = (struct CProcessNode *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(
                                               v50,
                                               v99);
              }
              v88 = v15;
            }
            catch ( ATL::CAtlException *v100 )
            {
              v62 = v100;
              if ( *(_DWORD *)v100 == -1073741571 )
                _o__resetstkoflw();
              LODWORD(v82) = *(_DWORD *)v62;
              Converter = (int)v82;
              if ( (int)v82 < 0 )
              {
                if ( v86 )
                {
                  v74 = (void (*)(void))v86->lpVtbl->Release;
                  if ( (char *)v74 == (char *)CAudioMediaType::Release )
                    CAudioMediaType::Release((CAudioMediaType *)v86);
                  else
                    v74();
                }
                if ( v85 )
                {
                  v75 = (void (*)(void))v85->lpVtbl->Release;
                  if ( (char *)v75 == (char *)CAudioMediaType::Release )
                    CAudioMediaType::Release((CAudioMediaType *)v85);
                  else
                    v75();
                }
                if ( v93 )
                  (**v93)(v93, 1LL);
                v2 = (CAudioMediaType *)v91;
                v1 = v95;
                goto LABEL_127;
              }
              v2 = (CAudioMediaType *)v91;
              v15 = v88;
              v82 = v95;
            }
            v93 = 0LL;
            goto LABEL_42;
          }
          v71 = (CAudioMediaType *)v86;
          if ( !v86 )
          {
LABEL_240:
            if ( v85 )
            {
              v73 = (void (*)(void))v85->lpVtbl->Release;
              if ( (char *)v73 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v85);
              else
                v73();
            }
            goto LABEL_127;
          }
          v72 = v86->lpVtbl->Release;
          if ( (char *)v72 == (char *)CAudioMediaType::Release )
          {
LABEL_238:
            CAudioMediaType::Release(v71);
            goto LABEL_240;
          }
        }
        ((void (*)(void))v72)();
        goto LABEL_240;
      }
      v63 = (CAudioMediaType *)v86;
      if ( !v86 )
        goto LABEL_164;
      v64 = v86->lpVtbl->Release;
      if ( (char *)v64 != (char *)CAudioMediaType::Release )
        goto LABEL_163;
      goto LABEL_220;
    }
    v22 = *(_QWORD *)(v20 + 32);
    v23 = (struct IAudioProcessingObject **)(v22 + 40);
    if ( *(_QWORD *)(v22 + 40) )
      goto LABEL_27;
    v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v82 + 29) + 24LL))(
            *((_QWORD *)v82 + 29),
            v22 + 8,
            *(unsigned int *)(v22 + 4),
            *((_QWORD *)v82 + 23),
            v22 + 40);
    Converter = v24;
    if ( v24 >= 0 )
      break;
    if ( v24 == -2147024882 )
    {
      v63 = (CAudioMediaType *)v86;
      if ( v86 )
      {
        v64 = v86->lpVtbl->Release;
        if ( (char *)v64 == (char *)CAudioMediaType::Release )
          goto LABEL_220;
        goto LABEL_163;
      }
      goto LABEL_164;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        22LL,
        &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
        v22 + 8);
    }
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v82 + 16, v92);
    v66 = *(_DWORD *)(v22 + 4);
    if ( v66 )
    {
      v83 = 1;
      v90 = v66;
    }
LABEL_42:
    v30 = (CAudioMediaType *)v86;
    if ( v86 )
    {
      v86 = 0LL;
      v34 = *(void (**)(void))(*(_QWORD *)v30 + 16LL);
      if ( (char *)v34 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release(v30);
      else
        v34();
    }
    v31 = v85;
    if ( v85 )
    {
      v85 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v31->lpVtbl->Release)(v31);
    }
    if ( v86 )
      ((void (__fastcall *)(struct IAudioMediaType *))v86->lpVtbl->Release)(v86);
    v17 = v87;
    v1 = v82;
    if ( v85 )
      ((void (__fastcall *)(struct IUnknown *, __int64 (__fastcall *)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *), int (*)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *)))v85->lpVtbl->Release)(
        v85,
        CAPOProcessNode::IsRightFormatSupported,
        CProcessNode::IsRightFormatSupported);
  }
  if ( !*(_DWORD *)(v22 + 4) )
    goto LABEL_27;
  Converter = CoCreateInstance(
                &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                0LL,
                0x17u,
                &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                &v97);
  if ( Converter < 0 )
  {
    v63 = (CAudioMediaType *)v86;
    if ( v86 )
    {
      v64 = v86->lpVtbl->Release;
      if ( (char *)v64 == (char *)CAudioMediaType::Release )
        goto LABEL_220;
      goto LABEL_163;
    }
    goto LABEL_164;
  }
  Converter = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)v97 + 40LL))(
                v97,
                *((_QWORD *)v82 + 23),
                &v96);
  if ( Converter < 0 )
  {
    v63 = (CAudioMediaType *)v86;
    if ( v86 )
    {
      v64 = v86->lpVtbl->Release;
      if ( (char *)v64 == (char *)CAudioMediaType::Release )
        goto LABEL_220;
      goto LABEL_163;
    }
    goto LABEL_164;
  }
  v98 = *(struct _GUID *)(v22 + 24);
  v35 = InitializeSystemEffectsInterface(
          v96,
          *v23,
          (struct _GUID *)(v22 + 8),
          &v98,
          ppv,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v79,
          v80);
  Converter = v35;
  if ( v35 >= 0 )
  {
LABEL_27:
    v25 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v20 + 48LL);
    if ( *(_DWORD *)(v22 + 4) )
    {
      v84 = 1;
      if ( v25 == CAPOProcessNode::IsRightFormatSupported )
        v36 = CAPOProcessNode::IsRightFormatSupported(
                (CAPOProcessNode *)v20,
                (struct IAudioMediaType *)v81,
                (struct IAudioMediaType **)&v85,
                (struct IAudioMediaType *)v89);
      else
        v36 = v25(
                (CAPOProcessNode *)v20,
                (struct IAudioMediaType *)v81,
                (struct IAudioMediaType **)&v85,
                (struct IAudioMediaType *)v89);
      Converter = v36;
      if ( v36 >= 0 )
        goto LABEL_31;
      if ( v36 == -2147024882 )
      {
        v63 = (CAudioMediaType *)v86;
        if ( !v86 )
          goto LABEL_164;
        v64 = v86->lpVtbl->Release;
        if ( (char *)v64 != (char *)CAudioMediaType::Release )
          goto LABEL_163;
      }
      else
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            24LL,
            &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
            v22 + 8);
        }
        v68 = v82;
        if ( (*(int (__fastcall **)(_QWORD, struct IAudioProcessingObject *))(**((_QWORD **)v82 + 29) + 32LL))(
               *((_QWORD *)v82 + 29),
               *v23) >= 0 )
        {
          if ( Converter != -2005073917 )
          {
            v83 = 1;
            v90 = *(_DWORD *)(v22 + 4);
          }
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v68 + 16, v92);
          goto LABEL_42;
        }
        v63 = (CAudioMediaType *)v86;
        if ( !v86 )
          goto LABEL_164;
        v64 = v86->lpVtbl->Release;
        if ( (char *)v64 != (char *)CAudioMediaType::Release )
          goto LABEL_163;
      }
    }
    else
    {
      if ( v25 == CAPOProcessNode::IsRightFormatSupported )
        v26 = CAPOProcessNode::IsRightFormatSupported(
                (CAPOProcessNode *)v20,
                (struct IAudioMediaType *)v81,
                (struct IAudioMediaType **)&v85,
                0LL);
      else
        v26 = v25((CAPOProcessNode *)v20, (struct IAudioMediaType *)v81, (struct IAudioMediaType **)&v85, 0LL);
      Converter = v26;
      if ( v26 >= 0 )
      {
LABEL_31:
        v17 = v87;
        v21 = v84;
        goto LABEL_32;
      }
      v63 = (CAudioMediaType *)v86;
      if ( !v86 )
        goto LABEL_164;
      v64 = v86->lpVtbl->Release;
      if ( (char *)v64 != (char *)CAudioMediaType::Release )
        goto LABEL_163;
    }
LABEL_220:
    CAudioMediaType::Release(v63);
    goto LABEL_164;
  }
  if ( v35 == -2147024882 )
  {
    v63 = (CAudioMediaType *)v86;
    if ( v86 )
    {
      v64 = v86->lpVtbl->Release;
      if ( (char *)v64 == (char *)CAudioMediaType::Release )
        goto LABEL_220;
      goto LABEL_163;
    }
    goto LABEL_164;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids, v22 + 8);
  }
  v67 = v82;
  if ( (*(int (__fastcall **)(_QWORD, struct IAudioProcessingObject *))(**((_QWORD **)v82 + 29) + 32LL))(
         *((_QWORD *)v82 + 29),
         *v23) >= 0 )
  {
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v67 + 16, v92);
    v83 = 1;
    v90 = *(_DWORD *)(v22 + 4);
    goto LABEL_42;
  }
  v63 = (CAudioMediaType *)v86;
  if ( v86 )
  {
    v64 = v86->lpVtbl->Release;
    if ( (char *)v64 == (char *)CAudioMediaType::Release )
      goto LABEL_220;
LABEL_163:
    ((void (*)(void))v64)();
  }
LABEL_164:
  if ( v85 )
  {
    v65 = (void (*)(void))v85->lpVtbl->Release;
    if ( (char *)v65 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v85);
    else
      v65();
  }
  v1 = v82;
LABEL_127:
  if ( !v83 )
    goto LABEL_128;
  v76 = TrackSystemEffectBehavior(*((_QWORD *)v1 + 23), v90, 0LL, 0LL);
  if ( v76 >= 0 )
    goto LABEL_128;
  v57 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        25LL,
        &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
        (unsigned int)v76);
      goto LABEL_128;
    }
LABEL_129:
    if ( v57 != &WPP_GLOBAL_Control && (*((_DWORD *)v57 + 7) & 0x20000) != 0 && *((_BYTE *)v57 + 25) >= 4u )
    {
      v77 = "SUCCEEDED";
      if ( Converter < 0 )
        v77 = "FAILED";
      WPP_SF_qs(v57[2], 26, v7, (_DWORD)v1, (__int64)v77);
      v57 = WPP_GLOBAL_Control;
    }
  }
  if ( Converter < 0 )
  {
    if ( v57 != &WPP_GLOBAL_Control && (*((_DWORD *)v57 + 7) & 0x20000) != 0 && *((_BYTE *)v57 + 25) >= 2u )
      WPP_SF_D(v57[2], 27LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids, (unsigned int)Converter);
    AudDGTraceLoggingErrorHelper("CPipeInstance::ResolveFormatConflictsRightLeft", 0x5DAu, Converter);
  }
  if ( v2 )
  {
    v58 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v2 + 16LL);
    if ( v58 == CAudioMediaType::Release )
      CAudioMediaType::Release(v2);
    else
      v58(v2);
  }
  if ( v89 )
  {
    v59 = (void (*)(void))v89->lpVtbl->Release;
    if ( (char *)v59 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v89);
    else
      v59();
  }
  if ( v96 )
    ((void (__fastcall *)(struct IMMDevice *))v96->lpVtbl->Release)(v96);
  if ( v97 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v97 + 16LL))(v97);
  if ( v81 )
  {
    v60 = (void (*)(void))v81->lpVtbl->Release;
    if ( (char *)v60 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v81);
    else
      v60();
  }
  return (unsigned int)Converter;
}
