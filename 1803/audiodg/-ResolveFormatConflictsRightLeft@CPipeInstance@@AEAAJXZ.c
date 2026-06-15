/*
 * XREFs of ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000C180
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B290 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140001E70 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002F38 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140003800 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x140003B40 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x1400066A0 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x140007DC0 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140007EC4 (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140007EE4 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x14000B448 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x14000CD20 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x14000CD30 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000CE10 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000CEC0 (-GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000CF10 (-IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000D070 (-IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000D1D0 (-SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000D2E0 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000D630 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000D6C0 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000D750 (-IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000D7B0 (-IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000FBD0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140010370 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140010660 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1400107B0 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x14001AAF4 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14001D6ED (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x14002F2FC (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14002F510 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     ?InsertAfter@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x14002F88C (-InsertAfter@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPE.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x14002F8DC (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14002F930 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1400301E4 (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     WPP_SF_q @ 0x140034C70 (WPP_SF_q.c)
 *     WPP_SF__guid_ @ 0x14003E518 (WPP_SF__guid_.c)
 *     WPP_SF_qs @ 0x14003E544 (WPP_SF_qs.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=68
__int64 __fastcall CPipeInstance::ResolveFormatConflictsRightLeft(__int64 **this)
{
  CPipeInstance *v1; // r13
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
  struct tWAVEFORMATEX *v13; // rbx
  __int64 *v14; // rsi
  CPipeInstance *v15; // rcx
  CProcessNode **Prev; // rax
  CProcessNode *v17; // rbx
  __int64 (__fastcall *v18)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int LeftFormat; // eax
  __int64 *v20; // r12
  __int64 *v21; // r14
  char v22; // r13
  __int64 v23; // r13
  struct IAudioProcessingObject **v24; // rbx
  int v25; // eax
  __int64 (__fastcall *v26)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int IsRightFormatSupported; // eax
  void (*v28)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  void (*v29)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  struct IAudioMediaType *v30; // r13
  CAudioMediaType *v31; // rcx
  struct IAudioMediaType *v32; // rcx
  int (*v33)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int IsLeftFormatSupported; // eax
  CAudioMediaType *v35; // rcx
  void (*v36)(void); // rax
  struct IAudioMediaType *v37; // rbx
  ULONG (__stdcall *v38)(IAudioMediaType *); // rax
  void (__fastcall ***v39)(_QWORD, __int64); // r14
  _QWORD *v40; // rbx
  __int64 **v41; // rcx
  __int64 v42; // r13
  __int64 v43; // rax
  void (*v44)(void); // rax
  int v45; // eax
  __int64 (__fastcall *v46)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int v47; // eax
  CPipeInstance *v48; // rbx
  int (*v49)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int v50; // eax
  CAudioMediaType *v51; // rdx
  unsigned int (__fastcall *v52)(CAudioMediaType *__hidden); // rax
  struct IAudioMediaType *v53; // rbx
  void (__fastcall *v54)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  void (__fastcall *v55)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  __int64 v56; // rax
  struct IAudioMediaType *v57; // rbx
  ULONG (__stdcall *AddRef)(IAudioMediaType *); // rax
  void (*v59)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  _QWORD *v60; // rcx
  ULONG (__stdcall *v61)(IAudioMediaType *); // rax
  void (*v62)(void); // rax
  void (*v63)(void); // rax
  ATL::CAtlException *v65; // rbx
  ATL::CAtlException *v66; // rbx
  ATL::CAtlException *v67; // rbx
  ATL::CAtlException *v68; // rbx
  void (*v69)(void); // rax
  void (*v70)(void); // rax
  unsigned int v71; // ecx
  char v72; // al
  void (*Release)(void); // rax
  void (*v74)(void); // rax
  void (*v75)(void); // rax
  void (*v76)(void); // rax
  void (*v77)(void); // rax
  void (*v78)(void); // rax
  CPipeInstance *v79; // r14
  void (*v80)(void); // rax
  void (*v81)(void); // rax
  unsigned int v82; // ebx
  __int64 v83; // rax
  void (*v84)(void); // rax
  void (*v85)(void); // rax
  CAudioMediaType *v86; // rcx
  ULONG (__stdcall *v87)(IAudioMediaType *); // rax
  unsigned int v88; // ebx
  __int64 v89; // rax
  CPipeInstance *v90; // rax
  void (*v91)(void); // rax
  void (*v92)(void); // rax
  unsigned int (__fastcall *v93)(CAudioMediaType *__hidden); // rax
  void (*v94)(void); // rax
  unsigned int v95; // ebx
  __int64 v96; // rax
  CPipeInstance *v97; // rax
  void (*v98)(void); // rax
  struct IAudioMediaType *v99; // rdi
  __int64 v100; // rbx
  struct IAudioMediaType *v101; // rdi
  __int64 v102; // rbx
  void (*v103)(void); // rax
  void (*v104)(void); // rax
  void (*v105)(void); // rax
  void (*v106)(void); // rax
  void (*v107)(void); // rax
  void (*v108)(void); // rax
  void (*v109)(void); // rax
  void (*v110)(void); // rax
  void (*v111)(void); // rax
  void (*v112)(void); // rax
  __int64 v113; // rax
  const struct tWAVEFORMATEX *v114; // rbx
  const struct tWAVEFORMATEX *v115; // rax
  void (*v116)(void); // rax
  CAudioMediaType *v117; // rcx
  ULONG (__stdcall *v118)(IAudioMediaType *); // rax
  void (*v119)(void); // rax
  void (*v120)(void); // rax
  int v121; // eax
  const char *v122; // rax
  struct _GUID *ppv; // [rsp+20h] [rbp-188h]
  void (__fastcall ****v124)(_QWORD, __int64); // [rsp+28h] [rbp-180h]
  struct IAudioSystemEffects2 **v125; // [rsp+30h] [rbp-178h]
  char v126; // [rsp+40h] [rbp-168h]
  char v127; // [rsp+41h] [rbp-167h]
  struct IAudioMediaType *v128; // [rsp+48h] [rbp-160h] BYREF
  CPipeInstance *v129; // [rsp+50h] [rbp-158h]
  struct IAudioMediaType *v130; // [rsp+58h] [rbp-150h] BYREF
  CProcessNode *v131; // [rsp+60h] [rbp-148h]
  struct IAudioMediaType *v132; // [rsp+68h] [rbp-140h] BYREF
  char v133; // [rsp+70h] [rbp-138h]
  __int64 *v134; // [rsp+78h] [rbp-130h] BYREF
  void (__fastcall ***v135)(_QWORD, __int64); // [rsp+80h] [rbp-128h] BYREF
  struct IAudioMediaType *v136; // [rsp+88h] [rbp-120h] BYREF
  struct CProcessNode *v137; // [rsp+90h] [rbp-118h] BYREF
  unsigned int v138; // [rsp+98h] [rbp-110h]
  struct IMMDevice *v139; // [rsp+A0h] [rbp-108h] BYREF
  void (__fastcall ***v140)(_QWORD, __int64); // [rsp+A8h] [rbp-100h] BYREF
  CAudioMediaType *v141; // [rsp+B0h] [rbp-F8h] BYREF
  CPipeInstance *v142; // [rsp+B8h] [rbp-F0h]
  int v143; // [rsp+C0h] [rbp-E8h] BYREF
  void (__fastcall ***v144)(_QWORD, __int64); // [rsp+C8h] [rbp-E0h] BYREF
  struct IAudioMediaType *v145; // [rsp+D0h] [rbp-D8h] BYREF
  int v146; // [rsp+D8h] [rbp-D0h] BYREF
  LPVOID v147; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 *v148; // [rsp+E8h] [rbp-C0h]
  __int64 v149; // [rsp+F0h] [rbp-B8h]
  __int64 *v150; // [rsp+F8h] [rbp-B0h]
  void (__fastcall ***v151)(_QWORD, __int64); // [rsp+100h] [rbp-A8h] BYREF
  void (__fastcall ***v152)(_QWORD, __int64); // [rsp+108h] [rbp-A0h] BYREF
  void (__fastcall ***v153)(_QWORD, __int64); // [rsp+110h] [rbp-98h] BYREF
  void (__fastcall ***v154)(_QWORD, __int64); // [rsp+118h] [rbp-90h] BYREF
  struct _GUID v155; // [rsp+120h] [rbp-88h] BYREF
  __int64 v156; // [rsp+130h] [rbp-78h]
  ATL::CAtlException *v157; // [rsp+138h] [rbp-70h] BYREF
  ATL::CAtlException *v158; // [rsp+140h] [rbp-68h] BYREF
  ATL::CAtlException *v159[2]; // [rsp+148h] [rbp-60h] BYREF
  ATL::CAtlException *v160; // [rsp+158h] [rbp-50h] BYREF
  struct _GUID v161; // [rsp+160h] [rbp-48h] BYREF

  v156 = -2LL;
  v1 = (CPipeInstance *)this;
  v129 = (CPipeInstance *)this;
  v142 = (CPipeInstance *)this;
  v144 = 0LL;
  v127 = 0;
  v128 = 0LL;
  v147 = 0LL;
  v136 = 0LL;
  v145 = 0LL;
  v134 = this[2];
  Next = (CProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                            (__int64)this,
                            &v134);
  v3 = *Next;
  v4 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)*Next + 16LL);
  if ( v4 == CProcessNode::GetRightFormat )
    RightFormat = CProcessNode::GetRightFormat(v3, &v136);
  else
    RightFormat = v4(v3, &v136);
  Converter = RightFormat;
  if ( RightFormat < 0 )
    goto LABEL_125;
  GetAudioFormat = (__int64 (*)(void))v136->lpVtbl->GetAudioFormat;
  if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
    AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v136);
  else
    AudioFormat = (const struct tWAVEFORMATEX *)GetAudioFormat();
  v10 = AudioFormat;
  cbSize = AudioFormat->cbSize;
  v12 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v13 = v12;
  if ( !v12 )
  {
    Converter = -2147024882;
    goto LABEL_125;
  }
  memcpy_0(v12, v10, cbSize + 18);
  ConvertPCMWfxToIEEEFloat(v13);
  Converter = CAudioMediaType::Create(v13, (unsigned int)v13->cbSize + 18, &v145, 0.0, 0);
  CoTaskMemFree(v13);
  if ( Converter < 0 )
    goto LABEL_125;
  v14 = (__int64 *)*((_QWORD *)v1 + 3);
  v134 = v14;
  v15 = *(CPipeInstance **)v1;
  if ( !*(_QWORD *)v1 )
  {
    Prev = (CProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(
                              0LL,
                              (__int64 *)&v134);
    v14 = v134;
LABEL_10:
    v17 = *Prev;
    v131 = *Prev;
    goto LABEL_11;
  }
  if ( !*((_DWORD *)v1 + 30) || *((_DWORD *)v15 + 51) )
  {
LABEL_148:
    Prev = (CProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)v15 + 2);
    goto LABEL_10;
  }
  v137 = 0LL;
  CPipeInstance::GetAPONodeAndConnection(v15, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, &v137, 0LL, 0LL);
  v17 = v137;
  v131 = v137;
  if ( !v137 )
  {
    v137 = 0LL;
    CPipeInstance::GetAPONodeAndConnection(
      *(CPipeInstance **)v1,
      &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693,
      &v137,
      0LL,
      0LL);
    v17 = v137;
    v131 = v137;
    if ( !v137 )
    {
      v15 = *(CPipeInstance **)v1;
      goto LABEL_148;
    }
  }
LABEL_11:
  v18 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v17 + 8LL);
  if ( v18 == CProcessNode::GetLeftFormat )
    LeftFormat = CProcessNode::GetLeftFormat(v17, &v128);
  else
    LeftFormat = v18(v17, &v128);
  Converter = LeftFormat;
  if ( LeftFormat < 0 )
    goto LABEL_125;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_0100469152753b0964101f667eb0634c_Traceguids, v1);
  }
  while ( 1 )
  {
    if ( !v14 )
    {
      v59 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v17 + 24LL);
      if ( v59 == CProcessNode::SetRightFormat )
        CProcessNode::SetRightFormat(v17, v128);
      else
        ((void (__fastcall *)(CProcessNode *, struct IAudioMediaType *))v59)(v17, v128);
      goto LABEL_124;
    }
    v130 = 0LL;
    v132 = 0LL;
    v20 = v14;
    v148 = v14;
    v14 = (__int64 *)v14[1];
    v134 = v14;
    v21 = (__int64 *)v20[2];
    v150 = v21;
    v22 = 0;
    v126 = 0;
    if ( *((_DWORD *)v21 + 10) != 2 )
      break;
    v23 = v21[4];
    v149 = v23;
    v24 = (struct IAudioProcessingObject **)(v23 + 40);
    if ( *(_QWORD *)(v23 + 40) )
      goto LABEL_21;
    ppv = (struct _GUID *)(v23 + 40);
    v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)v129 + 29) + 24LL))(
            *((_QWORD *)v129 + 29),
            v23 + 8,
            *(unsigned int *)(v23 + 4),
            *((_QWORD *)v129 + 23));
    Converter = v25;
    if ( v25 >= 0 )
    {
      if ( *(_DWORD *)(v23 + 4) )
      {
        v139 = 0LL;
        Converter = CoCreateInstance(
                      &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                      0LL,
                      0x17u,
                      &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                      &v147);
        if ( Converter < 0 )
        {
          if ( v139 )
            ((void (__fastcall *)(struct IMMDevice *))v139->lpVtbl->Release)(v139);
          if ( v132 )
          {
            Release = (void (*)(void))v132->lpVtbl->Release;
            if ( (char *)Release == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v132);
            else
              Release();
          }
          if ( v130 )
          {
            v74 = (void (*)(void))v130->lpVtbl->Release;
            if ( (char *)v74 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v130);
            else
              v74();
          }
          v1 = v129;
          goto LABEL_124;
        }
        Converter = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)v147 + 40LL))(
                      v147,
                      *((_QWORD *)v129 + 23),
                      &v139);
        if ( Converter < 0 )
        {
          if ( v139 )
            ((void (__fastcall *)(struct IMMDevice *))v139->lpVtbl->Release)(v139);
          if ( v132 )
          {
            v75 = (void (*)(void))v132->lpVtbl->Release;
            if ( (char *)v75 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v132);
            else
              v75();
          }
          if ( v130 )
          {
            v76 = (void (*)(void))v130->lpVtbl->Release;
            if ( (char *)v76 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v130);
            else
              v76();
          }
          v1 = v129;
          goto LABEL_124;
        }
        v155 = *(struct _GUID *)(v23 + 24);
        v45 = InitializeSystemEffectsInterface(
                v139,
                *v24,
                (struct _GUID *)(v23 + 8),
                &v155,
                (int)ppv,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v124,
                v125);
        Converter = v45;
        if ( v45 < 0 )
        {
          if ( v45 == -2147024882 )
          {
            if ( v139 )
              ((void (__fastcall *)(struct IMMDevice *))v139->lpVtbl->Release)(v139);
            if ( v132 )
            {
              v77 = (void (*)(void))v132->lpVtbl->Release;
              if ( (char *)v77 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v132);
              else
                v77();
            }
            if ( v130 )
            {
              v78 = (void (*)(void))v130->lpVtbl->Release;
              if ( (char *)v78 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v130);
              else
                v78();
            }
            v1 = v129;
            goto LABEL_124;
          }
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              23LL,
              &WPP_0100469152753b0964101f667eb0634c_Traceguids,
              v23 + 8);
          }
          v79 = v129;
          if ( (*(int (__fastcall **)(_QWORD, struct IAudioProcessingObject *))(**((_QWORD **)v129 + 29) + 32LL))(
                 *((_QWORD *)v129 + 29),
                 *v24) < 0 )
          {
            if ( v139 )
              ((void (__fastcall *)(struct IMMDevice *))v139->lpVtbl->Release)(v139);
            if ( v132 )
            {
              v80 = (void (*)(void))v132->lpVtbl->Release;
              if ( (char *)v80 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v132);
              else
                v80();
            }
            if ( v130 )
            {
              v81 = (void (*)(void))v130->lpVtbl->Release;
              if ( (char *)v81 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v130);
              else
                v81();
            }
            v1 = v129;
            goto LABEL_124;
          }
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v79 + 16, v20);
          v127 = 1;
          v138 = *(_DWORD *)(v23 + 4);
          if ( v139 )
            ((void (__fastcall *)(struct IMMDevice *))v139->lpVtbl->Release)(v139);
          v17 = v131;
          goto LABEL_36;
        }
        if ( v139 )
          ((void (__fastcall *)(struct IMMDevice *))v139->lpVtbl->Release)(v139);
      }
LABEL_21:
      if ( !*(_DWORD *)(v23 + 4) || !*(_DWORD *)(v23 + 52) )
      {
        v26 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*v21 + 48);
        if ( v26 == CAPOProcessNode::IsRightFormatSupported )
          IsRightFormatSupported = CAPOProcessNode::IsRightFormatSupported((CAPOProcessNode *)v21, v128, &v130, 0LL);
        else
          IsRightFormatSupported = v26((CAPOProcessNode *)v21, v128, &v130, 0LL);
        Converter = IsRightFormatSupported;
        if ( IsRightFormatSupported < 0 )
        {
          if ( v132 )
          {
            v107 = (void (*)(void))v132->lpVtbl->Release;
            if ( (char *)v107 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v132);
            else
              v107();
          }
          if ( v130 )
          {
            v108 = (void (*)(void))v130->lpVtbl->Release;
            if ( (char *)v108 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v130);
            else
              v108();
          }
          v1 = v129;
          goto LABEL_124;
        }
        goto LABEL_25;
      }
      v126 = 1;
      v133 = 1;
      v46 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*v21 + 48);
      if ( v46 == CAPOProcessNode::IsRightFormatSupported )
        v47 = CAPOProcessNode::IsRightFormatSupported((CAPOProcessNode *)v21, v128, &v130, v136);
      else
        v47 = v46((CAPOProcessNode *)v21, v128, &v130, v136);
      Converter = v47;
      if ( v47 == -2005073917 )
      {
        if ( *((_DWORD *)v131 + 6) == 1 )
        {
          if ( *((_DWORD *)v129 + 76) )
          {
            v141 = 0LL;
            Converter = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IAudioMediaType *, CAudioMediaType **))(*v24)->lpVtbl->IsOutputFormatSupported)(
                          *v24,
                          0LL,
                          v128,
                          &v141);
            if ( !Converter )
            {
              v135 = 0LL;
              v82 = *((_DWORD *)v131 + 6);
              v83 = (*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v141 + 40LL))(v141);
              Converter = CProcessNode::CreateDummyProcessNode(v82, v83, &v135);
              if ( Converter >= 0 )
              {
                try
                {
                  v151 = v135;
                  v14 = (__int64 *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                                     (char *)v129 + 16,
                                     v20,
                                     &v151);
                  v134 = v14;
                }
                catch ( ATL::CAtlException *v157 )
                {
                  v65 = v157;
                  if ( *(_DWORD *)v157 == -1073741571 )
                    _o__resetstkoflw();
                  LODWORD(v129) = *(_DWORD *)v65;
                  Converter = (int)v129;
                  if ( (int)v129 < 0 )
                  {
                    if ( v135 )
                      (**v135)(v135, 1LL);
                    v135 = 0LL;
                    if ( v141 )
                    {
                      v84 = *(void (**)(void))(*(_QWORD *)v141 + 16LL);
                      if ( (char *)v84 == (char *)CAudioMediaType::Release )
                        CAudioMediaType::Release(v141);
                      else
                        v84();
                    }
                    if ( v132 )
                    {
                      v85 = (void (*)(void))v132->lpVtbl->Release;
                      if ( (char *)v85 == (char *)CAudioMediaType::Release )
                        CAudioMediaType::Release((CAudioMediaType *)v132);
                      else
                        v85();
                    }
                    v86 = (CAudioMediaType *)v130;
                    if ( v130 )
                    {
                      v87 = v130->lpVtbl->Release;
                      if ( (char *)v87 != (char *)CAudioMediaType::Release )
                        goto LABEL_409;
LABEL_299:
                      CAudioMediaType::Release(v86);
                    }
LABEL_410:
                    if ( v144 )
                      (**v144)(v144, 1LL);
                    v1 = v142;
                    goto LABEL_124;
                  }
                  v126 = v133;
                  v14 = v134;
                  v21 = v150;
                  v20 = v148;
                  v23 = v149;
                  v129 = v142;
                }
                v135 = 0LL;
                v88 = *((_DWORD *)v131 + 6);
                v89 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v136->lpVtbl->GetAudioFormat)(v136);
                Converter = CProcessNode::CreateDummyProcessNode(v88, v89, &v135);
                if ( Converter >= 0 )
                {
                  Converter = 0;
                  try
                  {
                    v152 = v135;
                    v134 = (__int64 *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                                        (char *)v129 + 16,
                                        v14,
                                        &v152);
                  }
                  catch ( ATL::CAtlException *v158 )
                  {
                    v66 = v158;
                    if ( *(_DWORD *)v158 == -1073741571 )
                      _o__resetstkoflw();
                    LODWORD(v129) = *(_DWORD *)v66;
                    Converter = (int)v129;
                    if ( (int)v129 < 0 )
                    {
                      if ( v135 )
                        (**v135)(v135, 1LL);
                      v135 = 0LL;
                      if ( v141 )
                      {
                        v91 = *(void (**)(void))(*(_QWORD *)v141 + 16LL);
                        if ( (char *)v91 == (char *)CAudioMediaType::Release )
                          CAudioMediaType::Release(v141);
                        else
                          v91();
                      }
                      if ( v132 )
                      {
                        v92 = (void (*)(void))v132->lpVtbl->Release;
                        if ( (char *)v92 == (char *)CAudioMediaType::Release )
                          CAudioMediaType::Release((CAudioMediaType *)v132);
                        else
                          v92();
                      }
                      v86 = (CAudioMediaType *)v130;
                      if ( v130 )
                      {
                        v87 = v130->lpVtbl->Release;
                        if ( (char *)v87 == (char *)CAudioMediaType::Release )
                          goto LABEL_299;
LABEL_409:
                        ((void (*)(void))v87)();
                      }
                      goto LABEL_410;
                    }
                    v20 = v148;
                    v23 = v149;
                    v90 = v142;
                    v129 = v142;
                    goto LABEL_263;
                  }
                  v90 = v129;
LABEL_263:
                  v17 = v131;
                  v135 = 0LL;
                  *((_DWORD *)v90 + 33) |= 6u;
                  *(_DWORD *)(v23 + 52) = 0;
                  v14 = v20;
                  v135 = 0LL;
                  if ( v141 )
                  {
                    v93 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v141 + 16LL);
                    if ( v93 == CAudioMediaType::Release )
                      CAudioMediaType::Release(v141);
                    else
                      ((void (__fastcall *)(CAudioMediaType *, unsigned int (__fastcall *)(CAudioMediaType *__hidden)))v93)(
                        v141,
                        CAudioMediaType::Release);
                  }
                  goto LABEL_36;
                }
              }
              if ( v135 )
                (**v135)(v135, 1LL);
              v135 = 0LL;
            }
            if ( v141 )
            {
              v94 = *(void (**)(void))(*(_QWORD *)v141 + 16LL);
              if ( (char *)v94 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release(v141);
              else
                v94();
            }
LABEL_80:
            v48 = v129;
            goto LABEL_81;
          }
          v48 = v129;
        }
        else
        {
          v48 = v129;
        }
LABEL_321:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            24LL,
            &WPP_0100469152753b0964101f667eb0634c_Traceguids,
            v23 + 8);
        }
        if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v48 + 29) + 32LL))(
               *((_QWORD *)v48 + 29),
               *(_QWORD *)(v23 + 40)) < 0 )
        {
          if ( v132 )
          {
            v105 = (void (*)(void))v132->lpVtbl->Release;
            if ( (char *)v105 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v132);
            else
              v105();
          }
          if ( v130 )
          {
            v106 = (void (*)(void))v130->lpVtbl->Release;
            if ( (char *)v106 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v130);
            else
              v106();
          }
          v1 = v129;
          goto LABEL_124;
        }
        if ( Converter != -2005073917 )
        {
          v127 = 1;
          v138 = *(_DWORD *)(v23 + 4);
        }
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v48 + 16, v20);
        v17 = v131;
        goto LABEL_36;
      }
      if ( v47 != 1 )
        goto LABEL_80;
      if ( *((_DWORD *)v131 + 6) == 1 )
      {
        if ( *((_DWORD *)v129 + 76) )
        {
          ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
            &v137,
            *v24);
          v143 = 0;
          if ( v137
            && (*(int (__fastcall **)(struct CProcessNode *, int *))(*(_QWORD *)v137 + 24LL))(v137, &v143) >= 0
            && (v143 & 1) != 0 )
          {
            v140 = 0LL;
            v95 = *((_DWORD *)v21 + 6);
            v96 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v130->lpVtbl->GetAudioFormat)(v130);
            Converter = CProcessNode::CreateDummyProcessNode(v95, v96, &v140);
            if ( Converter < 0 )
            {
              if ( v140 )
                (**v140)(v140, 1LL);
              v140 = 0LL;
LABEL_283:
              v48 = v129;
              goto LABEL_284;
            }
            Converter = 0;
            try
            {
              v153 = v140;
              v14 = (__int64 *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                                 (char *)v129 + 16,
                                 v20,
                                 &v153);
              v134 = v14;
            }
            catch ( ATL::CAtlException *v159 )
            {
              v67 = v159[0];
              if ( *(_DWORD *)v159[0] == -1073741571 )
                _o__resetstkoflw();
              LODWORD(v129) = *(_DWORD *)v67;
              Converter = (int)v129;
              if ( (int)v129 < 0 )
              {
                if ( v140 )
                  (**v140)(v140, 1LL);
                v140 = 0LL;
                if ( v137 )
                  (*(void (__fastcall **)(struct CProcessNode *))(*(_QWORD *)v137 + 16LL))(v137);
                if ( v132 )
                {
                  v98 = (void (*)(void))v132->lpVtbl->Release;
                  if ( (char *)v98 == (char *)CAudioMediaType::Release )
                    CAudioMediaType::Release((CAudioMediaType *)v132);
                  else
                    v98();
                }
                v86 = (CAudioMediaType *)v130;
                if ( v130 )
                {
                  v87 = v130->lpVtbl->Release;
                  if ( (char *)v87 != (char *)CAudioMediaType::Release )
                    goto LABEL_409;
                  goto LABEL_299;
                }
                goto LABEL_410;
              }
              v14 = v134;
              v97 = v142;
              v129 = v142;
              goto LABEL_301;
            }
            v97 = v129;
LABEL_301:
            v17 = v131;
            v140 = 0LL;
            *((_DWORD *)v97 + 33) |= 6u;
            v140 = 0LL;
            if ( v137 )
              (*(void (__fastcall **)(struct CProcessNode *))(*(_QWORD *)v137 + 16LL))(v137);
            goto LABEL_36;
          }
          v99 = v128;
          v100 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v136->lpVtbl->GetAudioFormat)(v136);
          if ( *(_WORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v99->lpVtbl->GetAudioFormat)(v99) + 2) == *(_WORD *)(v100 + 2) )
          {
            v101 = v128;
            v102 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v136->lpVtbl->GetAudioFormat)(v136);
            if ( *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v101->lpVtbl->GetAudioFormat)(v101) + 4) == *(_DWORD *)(v102 + 4) )
              goto LABEL_283;
          }
          v48 = v129;
          if ( (*((_BYTE *)v129 + 132) & 6) == 0 )
          {
            *(_DWORD *)(v23 + 52) = 0;
            v14 = v20;
            if ( v137 )
              (*(void (__fastcall **)(struct CProcessNode *))(*(_QWORD *)v137 + 16LL))(v137);
            v17 = v131;
            goto LABEL_36;
          }
LABEL_284:
          if ( v137 )
            (*(void (__fastcall **)(struct CProcessNode *))(*(_QWORD *)v137 + 16LL))(v137);
LABEL_81:
          if ( Converter < 0 )
          {
            if ( Converter == -2147024882 )
            {
              if ( v132 )
              {
                v103 = (void (*)(void))v132->lpVtbl->Release;
                if ( (char *)v103 == (char *)CAudioMediaType::Release )
                  CAudioMediaType::Release((CAudioMediaType *)v132);
                else
                  v103();
              }
              if ( v130 )
              {
                v104 = (void (*)(void))v130->lpVtbl->Release;
                if ( (char *)v104 == (char *)CAudioMediaType::Release )
                  CAudioMediaType::Release((CAudioMediaType *)v130);
                else
                  v104();
              }
              v1 = v129;
              goto LABEL_124;
            }
            goto LABEL_321;
          }
LABEL_25:
          v17 = v131;
          v22 = v126;
LABEL_26:
          if ( Converter != 1 )
          {
            if ( !Converter )
            {
              v28 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v17 + 24LL);
              if ( (char *)v28 == (char *)CAPOProcessNode::SetLeftFormat )
              {
                CAPOProcessNode::SetLeftFormat(v17, v128);
              }
              else if ( v28 == CProcessNode::SetRightFormat )
              {
                CProcessNode::SetRightFormat(v17, v128);
              }
              else
              {
                ((void (__fastcall *)(CProcessNode *, struct IAudioMediaType *))v28)(v17, v128);
              }
              v29 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*v21 + 32);
              if ( (char *)v29 == (char *)CAPOProcessNode::SetRightFormat )
              {
                CAPOProcessNode::SetRightFormat((CAPOProcessNode *)v21, v128);
              }
              else if ( v29 == CProcessNode::SetRightFormat )
              {
                CProcessNode::SetRightFormat((CProcessNode *)v21, v128);
              }
              else
              {
                ((void (__fastcall *)(__int64 *, struct IAudioMediaType *))v29)(v21, v128);
              }
              if ( v22 )
              {
                v56 = v21[4];
                if ( *(_DWORD *)(v56 + 4) )
                {
                  if ( *(_DWORD *)(v56 + 52) )
                  {
                    v30 = v128;
                    if ( v128 )
                    {
                      v128 = 0LL;
                      ((void (__fastcall *)(struct IAudioMediaType *))v30->lpVtbl->Release)(v30);
                      v30 = v128;
                    }
                    v57 = v136;
                    if ( v30 != v136 )
                    {
                      if ( v136 )
                      {
                        AddRef = v136->lpVtbl->AddRef;
                        if ( (char *)AddRef == (char *)CAudioMediaType::AddRef )
                          CAudioMediaType::AddRef((CAudioMediaType *)v136);
                        else
                          ((void (__fastcall *)(struct IAudioMediaType *))AddRef)(v136);
                        v30 = v128;
                      }
                      if ( v30 )
                        ((void (__fastcall *)(struct IAudioMediaType *))v30->lpVtbl->Release)(v30);
                      v30 = v57;
                      v128 = v57;
                    }
LABEL_34:
                    if ( (*((_BYTE *)v129 + 132) & 8) == 0
                      || (v114 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v145->lpVtbl->GetAudioFormat)(v145),
                          v115 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v30->lpVtbl->GetAudioFormat)(v30),
                          !(unsigned int)CompareWaveFormat(v115, v114)) )
                    {
                      v17 = (CProcessNode *)v21;
                      v131 = (CProcessNode *)v21;
                      goto LABEL_36;
                    }
                    if ( !v130 )
                      ATL::CComPtr<IAudioMediaType>::operator=((CAudioMediaType **)&v130, (CAudioMediaType **)&v136);
LABEL_59:
                    v1 = v129;
                    Converter = CPipeInstance::FindConverter(v129, v128, v130, &v146, &v161);
                    if ( Converter < 0 )
                    {
                      if ( v132 )
                      {
                        v116 = (void (*)(void))v132->lpVtbl->Release;
                        if ( (char *)v116 == (char *)CAudioMediaType::Release )
                          CAudioMediaType::Release((CAudioMediaType *)v132);
                        else
                          v116();
                      }
                      v117 = (CAudioMediaType *)v130;
                      if ( !v130 )
                        goto LABEL_124;
                      v118 = v130->lpVtbl->Release;
                      if ( (char *)v118 != (char *)CAudioMediaType::Release )
                        goto LABEL_398;
                    }
                    else
                    {
                      v155 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
                      v124 = &v144;
                      ppv = &v155;
                      Converter = CAPOProcessNode::CreateAPOProcessNode(
                                    &v161,
                                    *((unsigned int *)v21 + 6),
                                    (unsigned int)v146);
                      if ( Converter >= 0 )
                      {
                        Converter = 0;
                        try
                        {
                          v39 = v144;
                          v154 = v144;
                          v40 = (_QWORD *)((char *)v1 + 16);
                          v41 = (__int64 **)((char *)v1 + 16);
                          if ( v20 )
                          {
                            v42 = *v20;
                            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)v41);
                            v14 = (__int64 *)v40[4];
                            v159[1] = (ATL::CAtlException *)v14;
                            v43 = *v14;
                            v150 = v14;
                            v14[2] = (__int64)v39;
                            v40[4] = v43;
                            v14[1] = (__int64)v20;
                            *v14 = v42;
                            ++v40[2];
                            if ( *v20 )
                              *(_QWORD *)(*v20 + 8) = v14;
                            else
                              v40[1] = v14;
                            *v20 = (__int64)v14;
                          }
                          else
                          {
                            v14 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(
                                    v41,
                                    (__int64 *)&v154);
                          }
                          v134 = v14;
                        }
                        catch ( ATL::CAtlException *v160 )
                        {
                          v68 = v160;
                          if ( *(_DWORD *)v160 == -1073741571 )
                            _o__resetstkoflw();
                          LODWORD(v129) = *(_DWORD *)v68;
                          Converter = (int)v129;
                          if ( (int)v129 < 0 )
                          {
                            if ( v132 )
                            {
                              v120 = (void (*)(void))v132->lpVtbl->Release;
                              if ( (char *)v120 == (char *)CAudioMediaType::Release )
                                CAudioMediaType::Release((CAudioMediaType *)v132);
                              else
                                v120();
                            }
                            if ( v130 )
                            {
                              v87 = v130->lpVtbl->Release;
                              if ( (char *)v87 != (char *)CAudioMediaType::Release )
                                goto LABEL_409;
                              CAudioMediaType::Release((CAudioMediaType *)v130);
                            }
                            goto LABEL_410;
                          }
                          v14 = v134;
                          v129 = v142;
                        }
                        v17 = v131;
                        v144 = 0LL;
                        goto LABEL_36;
                      }
                      if ( v132 )
                      {
                        v119 = (void (*)(void))v132->lpVtbl->Release;
                        if ( (char *)v119 == (char *)CAudioMediaType::Release )
                          CAudioMediaType::Release((CAudioMediaType *)v132);
                        else
                          v119();
                      }
                      v117 = (CAudioMediaType *)v130;
                      if ( !v130 )
                        goto LABEL_124;
                      v118 = v130->lpVtbl->Release;
                      if ( (char *)v118 != (char *)CAudioMediaType::Release )
                      {
LABEL_398:
                        ((void (*)(void))v118)();
                        goto LABEL_124;
                      }
                    }
                    CAudioMediaType::Release(v117);
                    goto LABEL_124;
                  }
                }
              }
            }
LABEL_33:
            v30 = v128;
            goto LABEL_34;
          }
LABEL_44:
          v33 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v17 + 40LL);
          if ( (char *)v33 == (char *)CAPOProcessNode::IsLeftFormatSupported )
          {
            IsLeftFormatSupported = CAPOProcessNode::IsLeftFormatSupported(v17, v130, &v132, 0LL);
          }
          else if ( v33 == CProcessNode::IsLeftFormatSupported )
          {
            IsLeftFormatSupported = CProcessNode::IsLeftFormatSupported(v17, v130, &v132, 0LL);
          }
          else
          {
            IsLeftFormatSupported = ((__int64 (__fastcall *)(CProcessNode *, struct IAudioMediaType *, struct IAudioMediaType **, _QWORD))v33)(
                                      v17,
                                      v130,
                                      &v132,
                                      0LL);
          }
          Converter = IsLeftFormatSupported;
          if ( IsLeftFormatSupported < 0 )
          {
            if ( v132 )
            {
              v111 = (void (*)(void))v132->lpVtbl->Release;
              if ( (char *)v111 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v132);
              else
                v111();
            }
            if ( v130 )
            {
              v112 = (void (*)(void))v130->lpVtbl->Release;
              if ( (char *)v112 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v130);
              else
                v112();
            }
            v1 = v129;
            goto LABEL_124;
          }
          if ( IsLeftFormatSupported )
          {
            if ( IsLeftFormatSupported == 1 )
            {
              v35 = (CAudioMediaType *)v128;
              if ( v128 )
              {
                v128 = 0LL;
                v36 = *(void (**)(void))(*(_QWORD *)v35 + 16LL);
                if ( (char *)v36 == (char *)CAudioMediaType::Release )
                  CAudioMediaType::Release(v35);
                else
                  v36();
              }
              v37 = v132;
              if ( v128 != v132 )
              {
                if ( v132 )
                {
                  v38 = v132->lpVtbl->AddRef;
                  if ( (char *)v38 == (char *)CAudioMediaType::AddRef )
                    CAudioMediaType::AddRef((CAudioMediaType *)v132);
                  else
                    ((void (__fastcall *)(struct IAudioMediaType *))v38)(v132);
                }
                if ( v128 )
                  ((void (__fastcall *)(struct IAudioMediaType *))v128->lpVtbl->Release)(v128);
                v128 = v37;
              }
              goto LABEL_59;
            }
          }
          else
          {
            v51 = (CAudioMediaType *)v128;
            if ( v128 )
            {
              v128 = 0LL;
              v52 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v51 + 16LL);
              if ( v52 == CAudioMediaType::Release )
                CAudioMediaType::Release(v51);
              else
                v52(v51);
              v51 = (CAudioMediaType *)v128;
            }
            v53 = v130;
            if ( v51 != (CAudioMediaType *)v130 )
            {
              if ( v130 )
              {
                ((void (__fastcall *)(struct IAudioMediaType *))v130->lpVtbl->AddRef)(v130);
                v51 = (CAudioMediaType *)v128;
              }
              if ( v51 )
                (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v51 + 16LL))(v51);
              v51 = (CAudioMediaType *)v53;
              v128 = v53;
            }
            v54 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v131 + 24LL);
            if ( v54 == CAPOProcessNode::SetLeftFormat )
              CAPOProcessNode::SetLeftFormat(v131, (struct IAudioMediaType *)v51);
            else
              v54(v131, (struct IAudioMediaType *)v51);
            v55 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*v21 + 32);
            if ( v55 == CAPOProcessNode::SetRightFormat )
              CAPOProcessNode::SetRightFormat((CAPOProcessNode *)v21, v128);
            else
              v55((CAPOProcessNode *)v21, v128);
            if ( v22 )
            {
              v113 = v21[4];
              if ( *(_DWORD *)(v113 + 4) )
              {
                if ( *(_DWORD *)(v113 + 52) )
                {
                  ATL::CComPtrBase<IAudioProcessingObject>::Release(&v128);
                  ATL::CComPtr<IAudioMediaType>::operator=((CAudioMediaType **)&v128, (CAudioMediaType **)&v136);
                }
              }
            }
          }
          goto LABEL_33;
        }
        v17 = v131;
      }
      else
      {
        v17 = v131;
      }
      v22 = 1;
      goto LABEL_44;
    }
    if ( v25 == -2147024882 )
    {
      if ( v132 )
      {
        v69 = (void (*)(void))v132->lpVtbl->Release;
        if ( (char *)v69 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)v132);
        else
          v69();
      }
      if ( v130 )
      {
        v70 = (void (*)(void))v130->lpVtbl->Release;
        if ( (char *)v70 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)v130);
        else
          v70();
      }
      v1 = v129;
      goto LABEL_124;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        22LL,
        &WPP_0100469152753b0964101f667eb0634c_Traceguids,
        v23 + 8);
    }
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v129 + 16, v20);
    v71 = *(_DWORD *)(v23 + 4);
    v72 = v127;
    if ( v71 )
      v72 = 1;
    v127 = v72;
    if ( !v71 )
      v71 = v138;
    v138 = v71;
    v17 = v131;
LABEL_36:
    v31 = (CAudioMediaType *)v132;
    if ( v132 )
    {
      v132 = 0LL;
      v44 = *(void (**)(void))(*(_QWORD *)v31 + 16LL);
      if ( (char *)v44 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release(v31);
      else
        v44();
    }
    v32 = v130;
    if ( v130 )
    {
      v130 = 0LL;
      ((void (__fastcall *)(struct IAudioMediaType *))v32->lpVtbl->Release)(v32);
    }
    if ( v132 )
      ((void (__fastcall *)(struct IAudioMediaType *))v132->lpVtbl->Release)(v132);
    if ( v130 )
      ((void (__fastcall *)(struct IAudioMediaType *))v130->lpVtbl->Release)(v130);
    v1 = v129;
  }
  v49 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*v21 + 48);
  if ( v49 == CProcessNode::IsRightFormatSupported )
    v50 = CProcessNode::IsRightFormatSupported((CProcessNode *)v21, v128, &v130, 0LL);
  else
    v50 = ((__int64 (__fastcall *)(__int64 *, struct IAudioMediaType *, struct IAudioMediaType **, _QWORD))v49)(
            v21,
            v128,
            &v130,
            0LL);
  Converter = v50;
  if ( v50 >= 0 )
    goto LABEL_26;
  if ( v132 )
  {
    v109 = (void (*)(void))v132->lpVtbl->Release;
    if ( (char *)v109 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v132);
    else
      v109();
  }
  if ( v130 )
  {
    v110 = (void (*)(void))v130->lpVtbl->Release;
    if ( (char *)v110 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v130);
    else
      v110();
  }
  v1 = v129;
LABEL_124:
  if ( !v127 || (v121 = TrackSystemEffectBehavior(*((_QWORD *)v1 + 23), v138, 0, 0, (__int64)ppv), v121 >= 0) )
  {
LABEL_125:
    v60 = WPP_GLOBAL_Control;
    goto LABEL_126;
  }
  v60 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        25LL,
        &WPP_0100469152753b0964101f667eb0634c_Traceguids,
        (unsigned int)v121);
      goto LABEL_125;
    }
LABEL_126:
    if ( v60 != &WPP_GLOBAL_Control && (*((_DWORD *)v60 + 7) & 0x20000) != 0 && *((_BYTE *)v60 + 25) >= 4u )
    {
      v122 = "SUCCEEDED";
      if ( Converter < 0 )
        v122 = "FAILED";
      WPP_SF_qs(v60[2], 26, v6, (_DWORD)v1, (__int64)v122);
      v60 = WPP_GLOBAL_Control;
    }
  }
  if ( Converter < 0 )
  {
    if ( v60 != &WPP_GLOBAL_Control && (*((_DWORD *)v60 + 7) & 0x20000) != 0 && *((_BYTE *)v60 + 25) >= 2u )
      WPP_SF_D(v60[2], 27LL, &WPP_0100469152753b0964101f667eb0634c_Traceguids, (unsigned int)Converter);
    AudDGTraceLoggingErrorHelper("CPipeInstance::ResolveFormatConflictsRightLeft", 0x643u, Converter);
  }
  if ( v145 )
  {
    v61 = v145->lpVtbl->Release;
    if ( (char *)v61 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v145);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v61)(v145);
  }
  if ( v136 )
  {
    v62 = (void (*)(void))v136->lpVtbl->Release;
    if ( (char *)v62 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v136);
    else
      v62();
  }
  if ( v147 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v147 + 16LL))(v147);
  if ( v128 )
  {
    v63 = (void (*)(void))v128->lpVtbl->Release;
    if ( (char *)v63 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v128);
    else
      v63();
  }
  return (unsigned int)Converter;
}
