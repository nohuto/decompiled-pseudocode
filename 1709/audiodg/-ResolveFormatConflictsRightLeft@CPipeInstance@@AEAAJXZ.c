/*
 * XREFs of ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140009E90
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140008F40 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x140005880 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x14000598C (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400059AC (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x1400059CC (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140005A18 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x1400090F0 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000AA90 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x14000AE60 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x14000AF40 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000AF50 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000AFD0 (-GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000B020 (-IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000B180 (-IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000B2E0 (-SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000B3F0 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000B730 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000B7C0 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000B850 (-IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000B8A0 (-IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000E120 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000E410 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x14000E560 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x14000E8B0 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140012250 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14001AD00 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x14001B4CC (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14001E51D (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x1400302D0 (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x1400304DC (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     ?InsertAfter@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x14003085C (-InsertAfter@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPE.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x1400308AC (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140030900 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140031214 (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x14003BD5C (WPP_SF_q.c)
 *     WPP_SF__guid_ @ 0x140040574 (WPP_SF__guid_.c)
 *     WPP_SF_qs @ 0x1400405A0 (WPP_SF_qs.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CPipeInstance::ResolveFormatConflictsRightLeft(__int64 **this)
{
  CPipeInstance *v1; // rdi
  CProcessNode **Next; // rax
  CProcessNode *v3; // rcx
  __int64 (__fastcall *v4)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int RightFormat; // eax
  int v6; // r8d
  int Converter; // r15d
  __int64 (*GetAudioFormat)(void); // rax
  const struct tWAVEFORMATEX *AudioFormat; // rax
  const struct tWAVEFORMATEX *v10; // r14
  __int64 cbSize; // rsi
  struct tWAVEFORMATEX *v12; // rax
  struct tWAVEFORMATEX *v13; // rdi
  __int64 *v14; // rsi
  CPipeInstance *v15; // rcx
  CProcessNode *v16; // rcx
  __int64 (__fastcall *v17)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int LeftFormat; // eax
  char v19; // r12
  __int64 *v20; // r13
  CProcessNode *v21; // r14
  char v22; // di
  __int64 v23; // r13
  struct IAudioProcessingObject **v24; // rdi
  int v25; // eax
  __int64 (__fastcall *v26)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int v27; // eax
  void (*v28)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  void (*v29)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  CAudioMediaType *v30; // rdi
  CAudioMediaType *v31; // rcx
  struct IAudioMediaType *v32; // rcx
  CProcessNode *v33; // rcx
  int (*v34)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int IsLeftFormatSupported; // eax
  void (*v36)(void); // rax
  int v37; // eax
  __int64 (__fastcall *v38)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int v39; // eax
  __int64 *v40; // rdi
  int (*v41)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int IsRightFormatSupported; // eax
  CAudioMediaType *v43; // rdx
  unsigned int (__fastcall *v44)(CAudioMediaType *__hidden); // rax
  struct IAudioMediaType *v45; // rdi
  void (*v46)(void); // rax
  void (__fastcall *v47)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  unsigned int (__fastcall *v48)(CAudioMediaType *__hidden); // rax
  struct IAudioMediaType *v49; // rsi
  ULONG (__stdcall *AddRef)(IAudioMediaType *); // rax
  struct IAudioMediaType *v51; // rdx
  void (__fastcall ***v52)(_QWORD, __int64); // r14
  __int64 **v53; // rcx
  __int64 v54; // r12
  __int64 v55; // rax
  __int64 v56; // rax
  struct IAudioMediaType *v57; // rcx
  void (*v58)(void); // rax
  void (*v59)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  _QWORD *v60; // rcx
  ULONG (__stdcall *Release)(IAudioMediaType *); // rax
  void (*v62)(void); // rax
  void (*v63)(void); // rax
  __int64 result; // rax
  int *v65; // rbx
  int *v66; // rbx
  int *v67; // rbx
  int *v68; // rbx
  struct IAudioMediaType *v69; // rcx
  unsigned int v70; // eax
  struct IAudioMediaType *v71; // rcx
  void *v72; // rcx
  unsigned int v73; // ebx
  __int64 v74; // rax
  struct IAudioMediaType *v75; // rcx
  unsigned int v76; // ebx
  __int64 v77; // rax
  CPipeInstance *v78; // rax
  unsigned int v79; // ebx
  __int64 v80; // rax
  CPipeInstance *v81; // rax
  struct IAudioMediaType *v82; // rdi
  __int64 v83; // rbx
  struct IAudioMediaType *v84; // rdi
  __int64 v85; // rbx
  __int64 v86; // rax
  const struct tWAVEFORMATEX *v87; // rbx
  const struct tWAVEFORMATEX *v88; // rax
  struct IAudioMediaType *v89; // rcx
  int v90; // eax
  const char *v91; // rax
  int ppv; // [rsp+20h] [rbp-198h]
  void (__fastcall ****v93)(_QWORD, __int64); // [rsp+28h] [rbp-190h]
  struct IAudioSystemEffects2 **v94; // [rsp+30h] [rbp-188h]
  CPipeInstance *v95; // [rsp+40h] [rbp-178h]
  char v96; // [rsp+48h] [rbp-170h]
  struct IAudioMediaType *v97; // [rsp+50h] [rbp-168h] BYREF
  char v98; // [rsp+58h] [rbp-160h]
  struct IAudioMediaType *v99; // [rsp+60h] [rbp-158h] BYREF
  struct IAudioMediaType *v100; // [rsp+68h] [rbp-150h] BYREF
  struct IAudioMediaType *v101; // [rsp+70h] [rbp-148h]
  CProcessNode *v102; // [rsp+78h] [rbp-140h]
  char v103; // [rsp+80h] [rbp-138h]
  char v104; // [rsp+81h] [rbp-137h]
  __int64 *v105; // [rsp+88h] [rbp-130h] BYREF
  void (__fastcall ***v106)(_QWORD, __int64); // [rsp+90h] [rbp-128h] BYREF
  struct IAudioMediaType *v107; // [rsp+98h] [rbp-120h] BYREF
  struct CProcessNode *v108; // [rsp+A0h] [rbp-118h] BYREF
  void (__fastcall ***v109)(_QWORD, __int64); // [rsp+A8h] [rbp-110h] BYREF
  struct IMMDevice *v110; // [rsp+B0h] [rbp-108h] BYREF
  unsigned int v111; // [rsp+B8h] [rbp-100h]
  CPipeInstance *v112; // [rsp+C0h] [rbp-F8h]
  void *v113; // [rsp+C8h] [rbp-F0h] BYREF
  int v114; // [rsp+D0h] [rbp-E8h] BYREF
  void (__fastcall ***v115)(_QWORD, __int64); // [rsp+D8h] [rbp-E0h] BYREF
  struct IAudioMediaType *v116; // [rsp+E0h] [rbp-D8h] BYREF
  int v117; // [rsp+E8h] [rbp-D0h] BYREF
  LPVOID v118; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v119; // [rsp+F8h] [rbp-C0h]
  __int64 *v120; // [rsp+100h] [rbp-B8h]
  void (__fastcall ***v121)(_QWORD, __int64); // [rsp+108h] [rbp-B0h] BYREF
  void (__fastcall ***v122)(_QWORD, __int64); // [rsp+110h] [rbp-A8h] BYREF
  void (__fastcall ***v123)(_QWORD, __int64); // [rsp+118h] [rbp-A0h] BYREF
  void (__fastcall ***v124)(_QWORD, __int64); // [rsp+120h] [rbp-98h] BYREF
  struct _GUID v125; // [rsp+130h] [rbp-88h] BYREF
  __int64 v126; // [rsp+140h] [rbp-78h]
  ATL::CAtlException *v127; // [rsp+148h] [rbp-70h] BYREF
  ATL::CAtlException *v128; // [rsp+150h] [rbp-68h] BYREF
  ATL::CAtlException *v129[2]; // [rsp+158h] [rbp-60h] BYREF
  ATL::CAtlException *v130; // [rsp+168h] [rbp-50h] BYREF
  struct _GUID v131; // [rsp+170h] [rbp-48h] BYREF

  v126 = -2LL;
  LODWORD(v1) = (_DWORD)this;
  v95 = (CPipeInstance *)this;
  v112 = (CPipeInstance *)this;
  v115 = 0LL;
  v98 = 0;
  v97 = 0LL;
  v118 = 0LL;
  v107 = 0LL;
  v116 = 0LL;
  v105 = this[2];
  Next = (CProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                            (__int64)this,
                            &v105);
  v3 = *Next;
  v4 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)*Next + 16LL);
  if ( v4 == CProcessNode::GetRightFormat )
    RightFormat = CProcessNode::GetRightFormat(v3, &v107);
  else
    RightFormat = v4(v3, &v107);
  Converter = RightFormat;
  if ( RightFormat < 0 )
    goto LABEL_130;
  GetAudioFormat = (__int64 (*)(void))v107->lpVtbl->GetAudioFormat;
  if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
    AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v107);
  else
    AudioFormat = (const struct tWAVEFORMATEX *)GetAudioFormat();
  v10 = AudioFormat;
  cbSize = AudioFormat->cbSize;
  v12 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v13 = v12;
  if ( !v12 )
  {
    Converter = -2147024882;
    LODWORD(v1) = (_DWORD)v95;
LABEL_130:
    v60 = WPP_GLOBAL_Control;
    goto LABEL_131;
  }
  memcpy_0(v12, v10, cbSize + 18);
  ConvertPCMWfxToIEEEFloat(v13);
  Converter = CAudioMediaType::Create(v13, (unsigned int)v13->cbSize + 18, &v116, 0.0, 0);
  CoTaskMemFree(v13);
  v1 = v95;
  if ( Converter < 0 )
    goto LABEL_130;
  v14 = (__int64 *)*((_QWORD *)v95 + 3);
  v105 = v14;
  v15 = *(CPipeInstance **)v95;
  if ( *(_QWORD *)v95 )
  {
    if ( *((_DWORD *)v95 + 30) && !*((_DWORD *)v15 + 51) )
    {
      v108 = 0LL;
      CPipeInstance::GetAPONodeAndConnection(v15, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, &v108, 0LL, 0LL);
      v16 = v108;
      v102 = v108;
      if ( v108 )
        goto LABEL_10;
      v108 = 0LL;
      CPipeInstance::GetAPONodeAndConnection(
        *(CPipeInstance **)v95,
        &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693,
        &v108,
        0LL,
        0LL);
      v16 = v108;
      v102 = v108;
      if ( v108 )
        goto LABEL_10;
      v15 = *(CPipeInstance **)v95;
    }
    v16 = *(CProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)v15 + 2);
    v102 = v16;
  }
  else
  {
    v102 = *(CProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(
                               0LL,
                               (__int64 *)&v105);
    v16 = v102;
    v14 = v105;
  }
LABEL_10:
  v17 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v16 + 8LL);
  if ( v17 == CProcessNode::GetLeftFormat )
    LeftFormat = CProcessNode::GetLeftFormat(v16, &v97);
  else
    LeftFormat = v17(v16, &v97);
  Converter = LeftFormat;
  if ( LeftFormat < 0 )
    goto LABEL_130;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids, v95);
  }
  while ( 1 )
  {
    v19 = 0;
    v104 = 0;
    if ( !v14 )
    {
      v59 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v102 + 24LL);
      if ( v59 == CProcessNode::SetRightFormat )
        CProcessNode::SetRightFormat(v102, v97);
      else
        ((void (__fastcall *)(CProcessNode *, struct IAudioMediaType *, int (*)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *)))v59)(
          v102,
          v97,
          CProcessNode::IsRightFormatSupported);
      goto LABEL_129;
    }
    v99 = 0LL;
    v100 = 0LL;
    v20 = v14;
    v101 = (struct IAudioMediaType *)v14;
    v21 = (CProcessNode *)v14[2];
    v14 = (__int64 *)v14[1];
    v105 = v14;
    v120 = (__int64 *)v21;
    v22 = 0;
    v96 = 0;
    if ( *((_DWORD *)v21 + 10) == 2 )
      break;
    v41 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v21 + 48LL);
    if ( v41 == CProcessNode::IsRightFormatSupported )
      IsRightFormatSupported = CProcessNode::IsRightFormatSupported(v21, v97, &v99, 0LL);
    else
      IsRightFormatSupported = ((__int64 (__fastcall *)(CProcessNode *, struct IAudioMediaType *, struct IAudioMediaType **, _QWORD))v41)(
                                 v21,
                                 v97,
                                 &v99,
                                 0LL);
    Converter = IsRightFormatSupported;
    if ( IsRightFormatSupported < 0 )
    {
      if ( v100 )
        ((void (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->Release)(v100);
      v69 = v99;
      if ( !v99 )
        goto LABEL_336;
      goto LABEL_161;
    }
LABEL_25:
    if ( Converter == 1 )
    {
      v33 = v102;
LABEL_44:
      v34 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v33 + 40LL);
      if ( (char *)v34 == (char *)CAPOProcessNode::IsLeftFormatSupported )
      {
        IsLeftFormatSupported = CAPOProcessNode::IsLeftFormatSupported(v33, v99, &v100, 0LL);
      }
      else if ( v34 == CProcessNode::IsLeftFormatSupported )
      {
        IsLeftFormatSupported = CProcessNode::IsLeftFormatSupported(v33, v99, &v100, 0LL);
      }
      else
      {
        IsLeftFormatSupported = ((__int64 (__fastcall *)(CProcessNode *, struct IAudioMediaType *, struct IAudioMediaType **, _QWORD))v34)(
                                  v33,
                                  v99,
                                  &v100,
                                  0LL);
      }
      Converter = IsLeftFormatSupported;
      if ( IsLeftFormatSupported >= 0 )
      {
        if ( IsLeftFormatSupported )
        {
          if ( IsLeftFormatSupported == 1 )
          {
            v30 = (CAudioMediaType *)v97;
            if ( v97 )
            {
              v97 = 0LL;
              v48 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v30 + 16LL);
              if ( v48 == CAudioMediaType::Release )
                CAudioMediaType::Release(v30);
              else
                v48(v30);
              v30 = (CAudioMediaType *)v97;
            }
            v49 = v100;
            if ( v30 != (CAudioMediaType *)v100 )
            {
              if ( v100 )
              {
                AddRef = v100->lpVtbl->AddRef;
                if ( (char *)AddRef == (char *)CAudioMediaType::AddRef )
                  CAudioMediaType::AddRef((CAudioMediaType *)v100);
                else
                  ((void (__fastcall *)(struct IAudioMediaType *))AddRef)(v100);
                v30 = (CAudioMediaType *)v97;
              }
              if ( v30 )
                (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v30 + 16LL))(v30);
              v30 = (CAudioMediaType *)v49;
              v97 = v49;
            }
            goto LABEL_99;
          }
        }
        else
        {
          v43 = (CAudioMediaType *)v97;
          if ( v97 )
          {
            v97 = 0LL;
            v44 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v43 + 16LL);
            if ( v44 == CAudioMediaType::Release )
              CAudioMediaType::Release(v43);
            else
              v44(v43);
            v43 = (CAudioMediaType *)v97;
          }
          v45 = v99;
          if ( v43 != (CAudioMediaType *)v99 )
          {
            if ( v99 )
            {
              ((void (__fastcall *)(struct IAudioMediaType *))v99->lpVtbl->AddRef)(v99);
              v43 = (CAudioMediaType *)v97;
            }
            if ( v43 )
              (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v43 + 16LL))(v43);
            v43 = (CAudioMediaType *)v45;
            v97 = v45;
          }
          v46 = *(void (**)(void))(*(_QWORD *)v102 + 24LL);
          if ( (char *)v46 == (char *)CAPOProcessNode::SetLeftFormat )
            CAPOProcessNode::SetLeftFormat(v102, (struct IAudioMediaType *)v43);
          else
            v46();
          v47 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v21 + 32LL);
          if ( v47 == CAPOProcessNode::SetRightFormat )
            CAPOProcessNode::SetRightFormat(v21, v97);
          else
            v47(v21, v97);
          if ( v96 )
          {
            v86 = *((_QWORD *)v21 + 4);
            if ( *(_DWORD *)(v86 + 4) )
            {
              if ( *(_DWORD *)(v86 + 52) )
              {
                ATL::CComPtrBase<IAudioProcessingObject>::Release(&v97);
                ATL::CComPtr<IAudioMediaType>::operator=(&v97, &v107);
              }
            }
          }
        }
LABEL_32:
        v30 = (CAudioMediaType *)v97;
        goto LABEL_33;
      }
      if ( v100 )
        ((void (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->Release)(v100);
      v69 = v99;
      if ( !v99 )
        goto LABEL_336;
LABEL_161:
      ((void (__fastcall *)(struct IAudioMediaType *))v69->lpVtbl->Release)(v69);
LABEL_336:
      v1 = v95;
      goto LABEL_129;
    }
    if ( Converter )
      goto LABEL_32;
    v28 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v102 + 24LL);
    if ( (char *)v28 == (char *)CAPOProcessNode::SetLeftFormat )
    {
      CAPOProcessNode::SetLeftFormat(v102, v97);
    }
    else if ( v28 == CProcessNode::SetRightFormat )
    {
      CProcessNode::SetRightFormat(v102, v97);
    }
    else
    {
      ((void (__fastcall *)(CProcessNode *, struct IAudioMediaType *))v28)(v102, v97);
    }
    v29 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v21 + 32LL);
    if ( (char *)v29 == (char *)CAPOProcessNode::SetRightFormat )
    {
      CAPOProcessNode::SetRightFormat(v21, v97);
    }
    else if ( v29 == CProcessNode::SetRightFormat )
    {
      CProcessNode::SetRightFormat(v21, v97);
    }
    else
    {
      ((void (__fastcall *)(CProcessNode *, struct IAudioMediaType *))v29)(v21, v97);
    }
    if ( !v22 )
      goto LABEL_32;
    v56 = *((_QWORD *)v21 + 4);
    if ( !*(_DWORD *)(v56 + 4) || !*(_DWORD *)(v56 + 52) )
      goto LABEL_32;
    v30 = (CAudioMediaType *)v97;
    if ( v97 )
    {
      v97 = 0LL;
      (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v30 + 16LL))(v30);
      v30 = (CAudioMediaType *)v97;
    }
    v57 = v107;
    v101 = v107;
    if ( v30 != (CAudioMediaType *)v107 )
    {
      if ( v107 )
      {
        v58 = (void (*)(void))v107->lpVtbl->AddRef;
        if ( (char *)v58 == (char *)CAudioMediaType::AddRef )
          CAudioMediaType::AddRef((CAudioMediaType *)v107);
        else
          v58();
        v57 = v101;
        v30 = (CAudioMediaType *)v97;
      }
      if ( v30 )
      {
        (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v30 + 16LL))(v30);
        v57 = v101;
      }
      v30 = (CAudioMediaType *)v57;
      v97 = v57;
    }
LABEL_33:
    if ( !v19 )
    {
      if ( (*((_BYTE *)v95 + 132) & 8) == 0
        || (v87 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v116->lpVtbl->GetAudioFormat)(v116),
            v88 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v30 + 40LL))(v30),
            !(unsigned int)CompareWaveFormat(v88, v87)) )
      {
        v102 = v21;
        goto LABEL_36;
      }
      if ( !v99 )
        ATL::CComPtr<IAudioMediaType>::operator=(&v99, &v107);
      v30 = (CAudioMediaType *)v97;
    }
LABEL_99:
    v51 = (struct IAudioMediaType *)v30;
    v1 = v95;
    Converter = CPipeInstance::FindConverter(v95, v51, v99, &v117, &v131);
    if ( Converter < 0 )
    {
      if ( v100 )
        ((void (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->Release)(v100);
      v89 = v99;
      if ( !v99 )
        goto LABEL_129;
LABEL_319:
      ((void (__fastcall *)(struct IAudioMediaType *))v99->lpVtbl->Release)(v89);
      goto LABEL_129;
    }
    v125 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v93 = &v115;
    Converter = CAPOProcessNode::CreateAPOProcessNode(&v131, *((unsigned int *)v21 + 6), (unsigned int)v117);
    if ( Converter < 0 )
    {
      if ( v100 )
        ((void (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->Release)(v100);
      v89 = v99;
      if ( !v99 )
        goto LABEL_129;
      goto LABEL_319;
    }
    Converter = 0;
    try
    {
      v52 = v115;
      v124 = v115;
      v53 = (__int64 **)((char *)v95 + 16);
      if ( v20 )
      {
        v54 = *v20;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)v53);
        v14 = (__int64 *)*((_QWORD *)v95 + 6);
        v129[1] = (ATL::CAtlException *)v14;
        v55 = *v14;
        v120 = v14;
        if ( v14 )
          v14[2] = (__int64)v52;
        *((_QWORD *)v95 + 6) = v55;
        v14[1] = (__int64)v20;
        *v14 = v54;
        ++*((_QWORD *)v95 + 4);
        if ( *v20 )
          *(_QWORD *)(*v20 + 8) = v14;
        else
          *((_QWORD *)v95 + 3) = v14;
        *v20 = (__int64)v14;
      }
      else
      {
        v14 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(v53, (__int64 *)&v124);
      }
      v105 = v14;
    }
    catch ( ATL::CAtlException *v130 )
    {
      v68 = (int *)v130;
      if ( *(_DWORD *)v130 == -1073741571 )
        _o__resetstkoflw();
      Converter = *v68;
      if ( *v68 < 0 )
      {
        if ( v100 )
          ((void (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->Release)(v100);
        v75 = v99;
        if ( !v99 )
          goto LABEL_331;
        goto LABEL_330;
      }
      v14 = v105;
      v95 = v112;
    }
    v115 = 0LL;
LABEL_36:
    v31 = (CAudioMediaType *)v100;
    if ( v100 )
    {
      v100 = 0LL;
      v36 = *(void (**)(void))(*(_QWORD *)v31 + 16LL);
      if ( (char *)v36 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release(v31);
      else
        v36();
    }
    v32 = v99;
    if ( v99 )
    {
      v99 = 0LL;
      ((void (__fastcall *)(struct IAudioMediaType *))v32->lpVtbl->Release)(v32);
    }
    if ( v100 )
      ((void (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->Release)(v100);
    v1 = v95;
    if ( v99 )
      ((void (__fastcall *)(struct IAudioMediaType *, __int64 (__fastcall *)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *), int (*)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *)))v99->lpVtbl->Release)(
        v99,
        CAPOProcessNode::IsRightFormatSupported,
        CProcessNode::IsRightFormatSupported);
  }
  v23 = *((_QWORD *)v21 + 4);
  v119 = v23;
  v24 = (struct IAudioProcessingObject **)(v23 + 40);
  if ( !*(_QWORD *)(v23 + 40) )
  {
    v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v95 + 29) + 24LL))(
            *((_QWORD *)v95 + 29),
            v23 + 8,
            *(unsigned int *)(v23 + 4),
            *((_QWORD *)v95 + 23),
            v23 + 40);
    Converter = v25;
    if ( v25 < 0 )
    {
      if ( v25 != -2147024882 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            22LL,
            &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
            v23 + 8);
        }
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v95 + 16, v101);
        v70 = *(_DWORD *)(v23 + 4);
        if ( v70 )
        {
          v98 = 1;
          v111 = v70;
        }
        goto LABEL_36;
      }
      if ( v100 )
        ((void (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->Release)(v100);
      v69 = v99;
      if ( !v99 )
        goto LABEL_336;
      goto LABEL_161;
    }
    if ( *(_DWORD *)(v23 + 4) )
    {
      v110 = 0LL;
      Converter = CoCreateInstance(
                    &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                    0LL,
                    0x17u,
                    &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                    &v118);
      if ( Converter < 0 )
      {
        if ( v110 )
          ((void (__fastcall *)(struct IMMDevice *))v110->lpVtbl->Release)(v110);
        if ( v100 )
          ((void (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->Release)(v100);
        v69 = v99;
        if ( !v99 )
          goto LABEL_336;
        goto LABEL_161;
      }
      Converter = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)v118 + 40LL))(
                    v118,
                    *((_QWORD *)v95 + 23),
                    &v110);
      if ( Converter < 0 )
      {
        if ( v110 )
          ((void (__fastcall *)(struct IMMDevice *))v110->lpVtbl->Release)(v110);
        if ( v100 )
          ((void (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->Release)(v100);
        v69 = v99;
        if ( !v99 )
          goto LABEL_336;
        goto LABEL_161;
      }
      v125 = *(struct _GUID *)(v23 + 24);
      v37 = InitializeSystemEffectsInterface(
              v110,
              *v24,
              (struct _GUID *)(v23 + 8),
              &v125,
              ppv,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v93,
              v94);
      Converter = v37;
      if ( v37 < 0 )
      {
        if ( v37 == -2147024882 )
        {
          if ( v110 )
            ((void (__fastcall *)(struct IMMDevice *))v110->lpVtbl->Release)(v110);
          if ( v100 )
            ((void (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->Release)(v100);
          v69 = v99;
          if ( !v99 )
            goto LABEL_336;
          goto LABEL_161;
        }
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            23LL,
            &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
            v23 + 8);
        }
        if ( (*(int (__fastcall **)(_QWORD, struct IAudioProcessingObject *))(**((_QWORD **)v95 + 29) + 32LL))(
               *((_QWORD *)v95 + 29),
               *v24) < 0 )
        {
          if ( v110 )
            ((void (__fastcall *)(struct IMMDevice *))v110->lpVtbl->Release)(v110);
          if ( v100 )
            ((void (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->Release)(v100);
          v71 = v99;
          if ( v99 )
LABEL_197:
            ((void (__fastcall *)(struct IAudioMediaType *))v71->lpVtbl->Release)(v71);
LABEL_198:
          v1 = v95;
          goto LABEL_129;
        }
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v95 + 16, v101);
        v98 = 1;
        v111 = *(_DWORD *)(v23 + 4);
        v72 = v110;
LABEL_201:
        if ( v72 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v72 + 16LL))(v72);
        goto LABEL_36;
      }
      if ( v110 )
        ((void (__fastcall *)(struct IMMDevice *))v110->lpVtbl->Release)(v110);
    }
  }
  if ( !*(_DWORD *)(v23 + 4) || !*(_DWORD *)(v23 + 52) )
  {
    v26 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v21 + 48LL);
    if ( v26 == CAPOProcessNode::IsRightFormatSupported )
      v27 = CAPOProcessNode::IsRightFormatSupported(v21, v97, &v99, 0LL);
    else
      v27 = v26(v21, v97, &v99, 0LL);
    Converter = v27;
    if ( v27 < 0 )
    {
      if ( v100 )
        ((void (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->Release)(v100);
      v69 = v99;
      if ( !v99 )
        goto LABEL_336;
      goto LABEL_161;
    }
    goto LABEL_24;
  }
  v96 = 1;
  v103 = 1;
  v38 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v21 + 48LL);
  if ( v38 == CAPOProcessNode::IsRightFormatSupported )
    v39 = CAPOProcessNode::IsRightFormatSupported(v21, v97, &v99, v107);
  else
    v39 = v38(v21, v97, &v99, v107);
  Converter = v39;
  if ( v39 != -2005073917 )
  {
    if ( v39 != 1 )
    {
LABEL_61:
      v40 = (__int64 *)v101;
      goto LABEL_62;
    }
    v33 = v102;
    if ( *((_DWORD *)v102 + 6) != 1 || !*((_DWORD *)v95 + 76) )
    {
      v20 = (__int64 *)v101;
      goto LABEL_44;
    }
    ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
      &v108,
      *v24);
    v114 = 0;
    if ( !v108
      || (*(int (__fastcall **)(struct CProcessNode *, int *))(*(_QWORD *)v108 + 24LL))(v108, &v114) < 0
      || (v114 & 1) == 0 )
    {
      v82 = v97;
      v83 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v107->lpVtbl->GetAudioFormat)(v107);
      if ( *(_WORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v82->lpVtbl->GetAudioFormat)(v82) + 2) != *(_WORD *)(v83 + 2)
        || (v84 = v97,
            v85 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v107->lpVtbl->GetAudioFormat)(v107),
            *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v84->lpVtbl->GetAudioFormat)(v84) + 4) != *(_DWORD *)(v85 + 4)) )
      {
        if ( (*((_BYTE *)v95 + 132) & 6) == 0 )
        {
          *(_DWORD *)(v23 + 52) = 0;
          v14 = (__int64 *)v101;
          v72 = v108;
          goto LABEL_201;
        }
      }
      goto LABEL_265;
    }
    v109 = 0LL;
    v79 = *((_DWORD *)v21 + 6);
    v80 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v99->lpVtbl->GetAudioFormat)(v99);
    Converter = CProcessNode::CreateDummyProcessNode(v79, v80, &v109);
    if ( Converter < 0 )
    {
      if ( v109 )
        (**v109)(v109, 1LL);
      v109 = 0LL;
LABEL_265:
      if ( v108 )
        (*(void (__fastcall **)(struct CProcessNode *))(*(_QWORD *)v108 + 16LL))(v108);
      goto LABEL_61;
    }
    Converter = 0;
    try
    {
      v123 = v109;
      v14 = (__int64 *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                         (char *)v95 + 16,
                         v101,
                         &v123);
      v105 = v14;
    }
    catch ( ATL::CAtlException *v129 )
    {
      v67 = (int *)v129[0];
      if ( *(_DWORD *)v129[0] == -1073741571 )
        _o__resetstkoflw();
      Converter = *v67;
      if ( *v67 < 0 )
      {
        if ( v109 )
          (**v109)(v109, 1LL);
        v109 = 0LL;
        if ( v108 )
          (*(void (__fastcall **)(struct CProcessNode *))(*(_QWORD *)v108 + 16LL))(v108);
        if ( v100 )
          ((void (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->Release)(v100);
        v75 = v99;
        if ( !v99 )
          goto LABEL_331;
        goto LABEL_330;
      }
      v14 = v105;
      v81 = v112;
      v95 = v112;
      goto LABEL_261;
    }
    v81 = v95;
LABEL_261:
    v109 = 0LL;
    *((_DWORD *)v81 + 33) |= 6u;
    v109 = 0LL;
    v72 = v108;
    goto LABEL_201;
  }
  if ( *((_DWORD *)v102 + 6) != 1 || !*((_DWORD *)v95 + 76) )
  {
    v40 = (__int64 *)v101;
LABEL_273:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        24LL,
        &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
        v23 + 8);
    }
    if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v95 + 29) + 32LL))(
           *((_QWORD *)v95 + 29),
           *(_QWORD *)(v23 + 40)) < 0 )
    {
      if ( v100 )
        ((void (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->Release)(v100);
      v71 = v99;
      if ( v99 )
        goto LABEL_197;
      goto LABEL_198;
    }
    if ( Converter != -2005073917 )
    {
      v98 = 1;
      v111 = *(_DWORD *)(v23 + 4);
    }
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v95 + 16, v40);
    goto LABEL_36;
  }
  v113 = 0LL;
  Converter = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IAudioMediaType *, void **))(*v24)->lpVtbl->IsOutputFormatSupported)(
                *v24,
                0LL,
                v97,
                &v113);
  if ( Converter )
  {
    v40 = (__int64 *)v101;
LABEL_238:
    if ( v113 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v113 + 16LL))(v113);
LABEL_62:
    if ( Converter < 0 )
    {
      if ( Converter == -2147024882 )
      {
        if ( v100 )
          ((void (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->Release)(v100);
        v69 = v99;
        if ( !v99 )
          goto LABEL_336;
        goto LABEL_161;
      }
      goto LABEL_273;
    }
LABEL_24:
    v22 = v96;
    v20 = (__int64 *)v101;
    goto LABEL_25;
  }
  v106 = 0LL;
  v73 = *((_DWORD *)v102 + 6);
  v74 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v113 + 40LL))(v113);
  Converter = CProcessNode::CreateDummyProcessNode(v73, v74, &v106);
  if ( Converter < 0 )
  {
    v40 = (__int64 *)v101;
LABEL_234:
    if ( v106 )
      (**v106)(v106, 1LL);
    v106 = 0LL;
    goto LABEL_238;
  }
  try
  {
    v121 = v106;
    v40 = (__int64 *)v101;
    v14 = (__int64 *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                       (char *)v95 + 16,
                       v101,
                       &v121);
    v105 = v14;
  }
  catch ( ATL::CAtlException *v127 )
  {
    v65 = (int *)v127;
    if ( *(_DWORD *)v127 == -1073741571 )
      _o__resetstkoflw();
    Converter = *v65;
    if ( *v65 < 0 )
    {
      if ( v106 )
        (**v106)(v106, 1LL);
      v106 = 0LL;
      if ( v113 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v113 + 16LL))(v113);
      if ( v100 )
        ((void (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->Release)(v100);
      v75 = v99;
      if ( !v99 )
        goto LABEL_331;
LABEL_330:
      ((void (__fastcall *)(struct IAudioMediaType *))v75->lpVtbl->Release)(v75);
      goto LABEL_331;
    }
    v96 = v103;
    v14 = v105;
    v21 = (CProcessNode *)v120;
    v23 = v119;
    v19 = v104;
    v95 = v112;
    v40 = (__int64 *)v101;
  }
  v106 = 0LL;
  v76 = *((_DWORD *)v102 + 6);
  v77 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v107->lpVtbl->GetAudioFormat)(v107);
  Converter = CProcessNode::CreateDummyProcessNode(v76, v77, &v106);
  if ( Converter < 0 )
    goto LABEL_234;
  Converter = 0;
  try
  {
    v122 = v106;
    v105 = (__int64 *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                        (char *)v95 + 16,
                        v14,
                        &v122);
  }
  catch ( ATL::CAtlException *v128 )
  {
    v66 = (int *)v128;
    if ( *(_DWORD *)v128 == -1073741571 )
      _o__resetstkoflw();
    Converter = *v66;
    if ( *v66 >= 0 )
    {
      v23 = v119;
      v78 = v112;
      v95 = v112;
      v40 = (__int64 *)v101;
      goto LABEL_232;
    }
    if ( v106 )
      (**v106)(v106, 1LL);
    v106 = 0LL;
    if ( v113 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v113 + 16LL))(v113);
    if ( v100 )
      ((void (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->Release)(v100);
    v75 = v99;
    if ( v99 )
      goto LABEL_330;
LABEL_331:
    if ( v115 )
      (**v115)(v115, 1LL);
    v1 = v112;
LABEL_129:
    if ( !v98 )
      goto LABEL_130;
    v90 = TrackSystemEffectBehavior(*((_QWORD *)v1 + 23), v111, 0LL, 0LL);
    if ( v90 >= 0 )
      goto LABEL_130;
    v60 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          25LL,
          &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
          (unsigned int)v90);
        goto LABEL_130;
      }
LABEL_131:
      if ( v60 != &WPP_GLOBAL_Control && (*((_DWORD *)v60 + 7) & 0x20000) != 0 && *((_BYTE *)v60 + 25) >= 4u )
      {
        v91 = "SUCCEEDED";
        if ( Converter < 0 )
          v91 = "FAILED";
        WPP_SF_qs(v60[2], 26, v6, (_DWORD)v1, (__int64)v91);
        v60 = WPP_GLOBAL_Control;
      }
    }
    if ( Converter < 0 )
    {
      if ( v60 != &WPP_GLOBAL_Control && (*((_DWORD *)v60 + 7) & 0x20000) != 0 && *((_BYTE *)v60 + 25) >= 2u )
        WPP_SF_D(v60[2], 27LL, &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids, (unsigned int)Converter);
      AudDGTraceLoggingErrorHelper("CPipeInstance::ResolveFormatConflictsRightLeft", 0x643u, Converter);
    }
    if ( v116 )
    {
      Release = v116->lpVtbl->Release;
      if ( (char *)Release == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v116);
      else
        ((void (__fastcall *)(struct IAudioMediaType *))Release)(v116);
    }
    if ( v107 )
    {
      v62 = (void (*)(void))v107->lpVtbl->Release;
      if ( (char *)v62 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v107);
      else
        v62();
    }
    if ( v118 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v118 + 16LL))(v118);
    if ( v97 )
    {
      v63 = (void (*)(void))v97->lpVtbl->Release;
      if ( (char *)v63 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v97);
      else
        v63();
    }
    result = (unsigned int)Converter;
  }
  v78 = v95;
LABEL_232:
  v106 = 0LL;
  *((_DWORD *)v78 + 33) |= 6u;
  *(_DWORD *)(v23 + 52) = 0;
  v14 = v40;
  v106 = 0LL;
  v72 = v113;
  goto LABEL_201;
}
