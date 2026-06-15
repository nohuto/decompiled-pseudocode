/*
 * XREFs of ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x1400091F0
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140008F40 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x140005880 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140005A18 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x1400090F0 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000AA90 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x14000AE60 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14000AE70 (-GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
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
 *     ??3@YAXPEAX@Z @ 0x14001C890 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x14001E511 (_CxxThrowException_0.c)
 *     memcpy_0 @ 0x14001E51D (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x1400302D0 (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     ?AddHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14003082C (-AddHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?InsertAfter@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x14003085C (-InsertAfter@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPE.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x1400308AC (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140030900 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140031214 (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x14003BD5C (WPP_SF_q.c)
 *     WPP_SF__guid_ @ 0x140040574 (WPP_SF__guid_.c)
 *     WPP_SF_qs @ 0x1400405A0 (WPP_SF_qs.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CPipeInstance::ResolveFormatConflictsLeftRight(CPipeInstance *this)
{
  CPipeInstance *v1; // r14
  __int64 v2; // rcx
  __int64 v3; // rax
  CProcessNode *v4; // rcx
  __int64 (__fastcall *v5)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int RightFormat; // eax
  int v7; // r8d
  int Converter; // edi
  __int64 (*GetAudioFormat)(void); // rax
  const struct tWAVEFORMATEX *AudioFormat; // rax
  const struct tWAVEFORMATEX *v11; // r14
  __int64 cbSize; // rdi
  char *v13; // rax
  char *v14; // rbx
  __int16 v15; // cx
  __int64 v16; // rax
  __int64 v17; // rcx
  CProcessNode *v18; // rbx
  __int64 (__fastcall *v19)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int v20; // eax
  char v21; // r12
  _QWORD *v22; // r15
  __int64 v23; // rsi
  int v24; // r14d
  __int64 v25; // r14
  unsigned int v26; // ebx
  struct IAudioProcessingObject **v27; // r13
  int v28; // eax
  __int64 (__fastcall *v29)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int v30; // eax
  struct IAudioMediaType *v31; // rdx
  volatile signed __int32 *v32; // rbx
  void (*v33)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  CAudioMediaType *v34; // rcx
  unsigned int (__fastcall *v35)(CAudioMediaType *__hidden); // rax
  __int64 v36; // rcx
  void (*v37)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  CAudioMediaType *v38; // r14
  CProcessNode *v39; // r12
  int v40; // ebx
  volatile signed __int32 *v41; // rbx
  unsigned int (__fastcall *v42)(CAudioMediaType *__hidden); // rax
  CAudioMediaType *v43; // rcx
  int (*v44)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int IsRightFormatSupported; // eax
  void (*v46)(void); // rax
  void (__fastcall *v47)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  _QWORD *v48; // rcx
  ULONG (__stdcall *Release)(IAudioMediaType *); // rax
  void (*v50)(void); // rax
  void (*v51)(void); // rax
  int v53; // eax
  __int64 (__fastcall *v54)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int v55; // eax
  CPipeInstance *v56; // r13
  __int64 v57; // rax
  unsigned int (__fastcall *v58)(CAudioMediaType *__hidden); // rax
  struct IAudioMediaType *v59; // r13
  ULONG (__stdcall *v60)(IAudioMediaType *); // rax
  int (*v61)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int IsLeftFormatSupported; // eax
  CAudioMediaType *v63; // rdx
  unsigned int (__fastcall *v64)(CAudioMediaType *__hidden); // rax
  struct IAudioMediaType *v65; // rbx
  unsigned int (__fastcall *v66)(CAudioMediaType *__hidden); // rax
  void (*v67)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  void (__fastcall *v68)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  unsigned int (__fastcall *v69)(CAudioMediaType *__hidden); // rax
  struct IAudioMediaType *v70; // rbx
  ULONG (__stdcall *AddRef)(IAudioMediaType *); // rax
  unsigned int v72; // ebx
  __int64 (__fastcall *v73)(CAudioMediaType *__hidden, struct _UNCOMPRESSEDAUDIOFORMAT *); // rax
  int UncompressedAudioFormat; // eax
  __int64 (__fastcall *v75)(CAudioMediaType *__hidden, struct _UNCOMPRESSEDAUDIOFORMAT *); // rax
  int v76; // eax
  int v77; // eax
  void (__fastcall ***v78)(_QWORD, __int64); // rsi
  __int64 *v79; // rbx
  __int64 v80; // rcx
  ATL::CAtlException *v81; // r14
  __int64 v82; // rax
  ATL::CAtlException *v83; // rcx
  __int64 *v84; // rcx
  void (*v85)(void); // rax
  __int64 Head; // rax
  CProcessNode *v87; // rcx
  __int64 (__fastcall *v88)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int LeftFormat; // eax
  int v90; // ecx
  ATL::CAtlException *v91; // rbx
  ATL::CAtlException *v92; // rbx
  ATL::CAtlException *v93; // rbx
  ATL::CAtlException *v94; // rbx
  ATL::CAtlException *v95; // rbx
  int v96; // ecx
  struct IAudioMediaType *v97; // rcx
  void (__fastcall ***v98)(_QWORD, __int64); // rbx
  unsigned int v99; // ebx
  __int64 v100; // rax
  struct IAudioMediaType *v101; // rcx
  unsigned int v102; // ebx
  __int64 v103; // rax
  __int64 v104; // rax
  const struct tWAVEFORMATEX *v105; // rbx
  const struct tWAVEFORMATEX *v106; // rax
  struct IAudioMediaType *v107; // rcx
  unsigned int v108; // ebx
  __int64 v109; // rax
  int v110; // eax
  int v111; // eax
  const char *v112; // rax
  int ppv; // [rsp+20h] [rbp-248h]
  void (__fastcall ****v114)(_QWORD, __int64); // [rsp+28h] [rbp-240h]
  struct IAudioSystemEffects2 **v115; // [rsp+30h] [rbp-238h]
  CPipeInstance *v116; // [rsp+40h] [rbp-228h]
  struct IAudioMediaType *v117; // [rsp+48h] [rbp-220h] BYREF
  char v118; // [rsp+50h] [rbp-218h]
  int v119; // [rsp+54h] [rbp-214h]
  void *Block; // [rsp+58h] [rbp-210h] BYREF
  struct IAudioMediaType *v121; // [rsp+60h] [rbp-208h] BYREF
  CProcessNode *v122; // [rsp+68h] [rbp-200h]
  char v123; // [rsp+70h] [rbp-1F8h]
  struct IAudioMediaType *v124; // [rsp+78h] [rbp-1F0h] BYREF
  void (__fastcall ***v125)(_QWORD, __int64); // [rsp+80h] [rbp-1E8h] BYREF
  CPipeInstance *v126; // [rsp+88h] [rbp-1E0h]
  _QWORD *v127; // [rsp+90h] [rbp-1D8h]
  int v128; // [rsp+98h] [rbp-1D0h]
  struct IMMDevice *v129; // [rsp+A0h] [rbp-1C8h] BYREF
  struct IAudioMediaType *v130; // [rsp+A8h] [rbp-1C0h] BYREF
  unsigned int v131; // [rsp+B0h] [rbp-1B8h]
  void (__fastcall ***v132)(_QWORD, __int64); // [rsp+B8h] [rbp-1B0h] BYREF
  __int64 v133; // [rsp+C0h] [rbp-1A8h] BYREF
  int v134; // [rsp+C8h] [rbp-1A0h] BYREF
  int v135; // [rsp+CCh] [rbp-19Ch]
  __int64 v136; // [rsp+D0h] [rbp-198h] BYREF
  __int64 v137; // [rsp+D8h] [rbp-190h] BYREF
  struct IAudioMediaType *v138; // [rsp+E0h] [rbp-188h] BYREF
  int v139; // [rsp+E8h] [rbp-180h] BYREF
  int pExceptionObject; // [rsp+ECh] [rbp-17Ch] BYREF
  int v141; // [rsp+F0h] [rbp-178h]
  LPVOID v142; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v143; // [rsp+100h] [rbp-168h]
  __int64 v144; // [rsp+108h] [rbp-160h]
  void (__fastcall ***v145)(_QWORD, __int64); // [rsp+110h] [rbp-158h] BYREF
  __int64 v146; // [rsp+118h] [rbp-150h]
  void (__fastcall ***v147)(_QWORD, __int64); // [rsp+120h] [rbp-148h] BYREF
  void (__fastcall ***v148)(_QWORD, __int64); // [rsp+128h] [rbp-140h] BYREF
  void (__fastcall ***v149)(_QWORD, __int64); // [rsp+130h] [rbp-138h] BYREF
  __int64 v150; // [rsp+138h] [rbp-130h]
  __int64 v151; // [rsp+140h] [rbp-128h]
  ATL::CAtlException *v152; // [rsp+148h] [rbp-120h] BYREF
  ATL::CAtlException *v153; // [rsp+150h] [rbp-118h] BYREF
  ATL::CAtlException *v154[6]; // [rsp+158h] [rbp-110h] BYREF
  ATL::CAtlException *v155; // [rsp+188h] [rbp-E0h] BYREF
  ATL::CAtlException *v156; // [rsp+190h] [rbp-D8h] BYREF
  struct _GUID v157; // [rsp+1A0h] [rbp-C8h] BYREF
  GUID v158; // [rsp+1B0h] [rbp-B8h]
  GUID v159; // [rsp+1C0h] [rbp-A8h]
  struct _GUID v160; // [rsp+1D0h] [rbp-98h] BYREF
  struct _UNCOMPRESSEDAUDIOFORMAT v161; // [rsp+1E0h] [rbp-88h] BYREF
  struct _UNCOMPRESSEDAUDIOFORMAT v162; // [rsp+208h] [rbp-60h] BYREF

  v151 = -2LL;
  v1 = this;
  v116 = this;
  v126 = this;
  v132 = 0LL;
  v137 = 0LL;
  v118 = 0;
  v117 = 0LL;
  v124 = 0LL;
  v138 = 0LL;
  v142 = 0LL;
  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    Head = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(v2 + 16));
    v87 = *(CProcessNode **)Head;
    v88 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(**(_QWORD **)Head + 8LL);
    if ( v88 == CProcessNode::GetLeftFormat )
      LeftFormat = CProcessNode::GetLeftFormat(v87, &v124);
    else
      LeftFormat = v88(v87, &v124);
    Converter = LeftFormat;
    if ( LeftFormat < 0 )
      goto LABEL_72;
  }
  else
  {
    v3 = *((_QWORD *)v1 + 3);
    if ( !v3 )
      ATL::AtlThrowImpl(-2147467259);
    v4 = *(CProcessNode **)(v3 + 16);
    v5 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v4 + 16LL);
    if ( v5 == CProcessNode::GetRightFormat )
      RightFormat = CProcessNode::GetRightFormat(v4, &v124);
    else
      RightFormat = v5(v4, &v124);
    Converter = RightFormat;
    if ( RightFormat < 0 )
      goto LABEL_72;
  }
  GetAudioFormat = (__int64 (*)(void))v124->lpVtbl->GetAudioFormat;
  if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
    AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v124);
  else
    AudioFormat = (const struct tWAVEFORMATEX *)GetAudioFormat();
  v11 = AudioFormat;
  cbSize = AudioFormat->cbSize;
  v13 = (char *)CoTaskMemAlloc(cbSize + 18);
  v14 = v13;
  if ( !v13 )
  {
    Converter = -2147024882;
    LODWORD(v1) = (_DWORD)v116;
    goto LABEL_72;
  }
  memcpy_0(v13, v11, cbSize + 18);
  v15 = *(_WORD *)v14;
  if ( *(_WORD *)v14 != 1 )
  {
    if ( v15 != -2 )
      goto LABEL_14;
    v16 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v14 + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v14 + 3) )
      v16 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v14 + 4);
    if ( v16 )
      goto LABEL_14;
  }
  if ( v15 != -2 )
  {
    if ( v15 == 1 )
    {
      *(_WORD *)v14 = 3;
LABEL_206:
      *((_WORD *)v14 + 7) = 32;
      v96 = (unsigned __int16)(4 * *((_WORD *)v14 + 1));
      *((_WORD *)v14 + 6) = v96;
      *((_DWORD *)v14 + 2) = v96 * *((_DWORD *)v14 + 1);
      goto LABEL_14;
    }
LABEL_205:
    *(GUID *)(v14 + 24) = GUID_00000003_0000_0010_8000_00aa00389b71;
    *((_WORD *)v14 + 9) = 32;
    goto LABEL_206;
  }
  if ( (v14[18] & 7) == 0 )
    goto LABEL_205;
LABEL_14:
  Converter = CAudioMediaType::Create(
                (const struct tWAVEFORMATEX *)v14,
                (unsigned int)*((unsigned __int16 *)v14 + 8) + 18,
                &v138,
                0.0,
                0);
  CoTaskMemFree(v14);
  v1 = v116;
  if ( Converter < 0 )
    goto LABEL_72;
  v17 = *((_QWORD *)v116 + 2);
  v127 = (_QWORD *)v17;
  if ( !v17 )
    ATL::AtlThrowImpl(-2147467259);
  v127 = *(_QWORD **)v17;
  v18 = *(CProcessNode **)(v17 + 16);
  v122 = v18;
  v19 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v18 + 16LL);
  v20 = v19 == CProcessNode::GetRightFormat ? CProcessNode::GetRightFormat(v18, &v117) : v19(v18, &v117);
  Converter = v20;
  if ( v20 < 0 )
    goto LABEL_72;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids, v116);
  }
  while ( 1 )
  {
    v21 = 0;
    v123 = 0;
    v22 = v127;
    if ( !v127 )
    {
      v47 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v18 + 32LL);
      if ( v47 == CAPOProcessNode::SetRightFormat )
        CAPOProcessNode::SetRightFormat(v18, v117);
      else
        ((void (__fastcall *)(CProcessNode *, struct IAudioMediaType *, int (*)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *)))v47)(
          v18,
          v117,
          CProcessNode::IsLeftFormatSupported);
      goto LABEL_71;
    }
    v121 = 0LL;
    Block = 0LL;
    v143 = v127;
    v127 = (_QWORD *)*v127;
    v23 = v22[2];
    v146 = v23;
    v24 = 0;
    v119 = 0;
    v128 = 0;
    if ( *(_DWORD *)(v23 + 40) != 2 )
    {
      v61 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v23 + 40LL);
      if ( v61 == CProcessNode::IsLeftFormatSupported )
        IsLeftFormatSupported = CProcessNode::IsLeftFormatSupported(
                                  (CProcessNode *)v23,
                                  v117,
                                  (struct IAudioMediaType **)&Block,
                                  0LL);
      else
        IsLeftFormatSupported = ((__int64 (__fastcall *)(__int64, struct IAudioMediaType *, void **, _QWORD))v61)(
                                  v23,
                                  v117,
                                  &Block,
                                  0LL);
      Converter = IsLeftFormatSupported;
      if ( IsLeftFormatSupported >= 0 )
        goto LABEL_31;
      if ( Block )
        (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
      v97 = v121;
      if ( !v121 )
        goto LABEL_216;
      goto LABEL_215;
    }
    v25 = *(_QWORD *)(v23 + 32);
    v144 = v25;
    v26 = *(_DWORD *)(v25 + 4);
    v119 = v26 != 0;
    v128 = v119;
    v141 = v119;
    v135 = v119;
    v27 = (struct IAudioProcessingObject **)(v25 + 40);
    if ( *(_QWORD *)(v25 + 40) )
      goto LABEL_26;
    v28 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v116 + 29) + 24LL))(
            *((_QWORD *)v116 + 29),
            v25 + 8,
            v26,
            *((_QWORD *)v116 + 23),
            v25 + 40);
    Converter = v28;
    if ( v28 < 0 )
    {
      if ( v28 != -2147024882 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            29LL,
            &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
            v25 + 8);
        }
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v116 + 16, v22);
        if ( v26 )
        {
          v118 = 1;
          v131 = *(_DWORD *)(v25 + 4);
        }
        v40 = v119;
        v39 = v122;
        goto LABEL_50;
      }
      if ( Block )
        (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
      v97 = v121;
      if ( !v121 )
        goto LABEL_216;
LABEL_215:
      ((void (__fastcall *)(struct IAudioMediaType *))v97->lpVtbl->Release)(v97);
      goto LABEL_216;
    }
    if ( !v26 )
      goto LABEL_26;
    v129 = 0LL;
    Converter = CoCreateInstance(
                  &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                  0LL,
                  0x17u,
                  &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                  &v142);
    if ( Converter < 0 )
    {
      if ( v129 )
        ((void (__fastcall *)(struct IMMDevice *))v129->lpVtbl->Release)(v129);
      if ( Block )
        (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
      v97 = v121;
      if ( !v121 )
        goto LABEL_216;
      goto LABEL_215;
    }
    Converter = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)v142 + 40LL))(
                  v142,
                  *((_QWORD *)v116 + 23),
                  &v129);
    if ( Converter < 0 )
    {
      if ( v129 )
        ((void (__fastcall *)(struct IMMDevice *))v129->lpVtbl->Release)(v129);
      if ( Block )
        (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
      v97 = v121;
      if ( !v121 )
        goto LABEL_216;
      goto LABEL_215;
    }
    v157 = *(struct _GUID *)(v25 + 24);
    v53 = InitializeSystemEffectsInterface(
            v129,
            *v27,
            (struct _GUID *)(v25 + 8),
            &v157,
            ppv,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v114,
            v115);
    Converter = v53;
    if ( v53 < 0 )
    {
      if ( v53 == -2147024882 )
      {
        if ( v129 )
          ((void (__fastcall *)(struct IMMDevice *))v129->lpVtbl->Release)(v129);
        if ( Block )
          (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
        v97 = v121;
        if ( v121 )
          goto LABEL_215;
        goto LABEL_216;
      }
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          30LL,
          &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
          v25 + 8);
      }
      if ( (*(int (__fastcall **)(_QWORD, struct IAudioProcessingObject *))(**((_QWORD **)v116 + 29) + 32LL))(
             *((_QWORD *)v116 + 29),
             *v27) < 0 )
      {
        if ( v129 )
          ((void (__fastcall *)(struct IMMDevice *))v129->lpVtbl->Release)(v129);
        if ( Block )
          (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
        v97 = v121;
        if ( v121 )
          goto LABEL_215;
LABEL_216:
        v1 = v116;
        goto LABEL_71;
      }
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v116 + 16, v22);
      v118 = 1;
      v131 = *(_DWORD *)(v25 + 4);
      if ( v129 )
        ((void (__fastcall *)(struct IMMDevice *))v129->lpVtbl->Release)(v129);
      v40 = v119;
      v39 = v122;
      goto LABEL_50;
    }
    if ( v129 )
      ((void (__fastcall *)(struct IMMDevice *))v129->lpVtbl->Release)(v129);
LABEL_26:
    if ( !v26 || !*(_DWORD *)(v25 + 4) || !*(_DWORD *)(v25 + 48) )
      break;
    v54 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v23 + 40LL);
    if ( v54 == CAPOProcessNode::IsLeftFormatSupported )
      v55 = CAPOProcessNode::IsLeftFormatSupported(
              (CAPOProcessNode *)v23,
              v117,
              (struct IAudioMediaType **)&Block,
              v124);
    else
      v55 = v54((CAPOProcessNode *)v23, v117, (struct IAudioMediaType **)&Block, v124);
    Converter = v55;
    if ( v55 != -2005073917 )
    {
      v56 = v116;
      goto LABEL_101;
    }
    if ( *(_DWORD *)(v23 + 24) != 1 )
    {
      v56 = v116;
      goto LABEL_314;
    }
    ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
      &v136,
      *v27);
    v134 = 0;
    if ( !v136 || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v136 + 24LL))(v136, &v134) < 0 || (v134 & 1) == 0 )
    {
      v56 = v116;
      goto LABEL_306;
    }
    v98 = 0LL;
    v125 = 0LL;
    v133 = 0LL;
    Converter = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IAudioMediaType *, __int64 *))(*v27)->lpVtbl->IsInputFormatSupported)(
                  *v27,
                  0LL,
                  v117,
                  &v133);
    if ( Converter < 0 )
    {
      v56 = v116;
LABEL_300:
      if ( v133 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v133 + 16LL))(v133);
      if ( v98 )
        (**v98)(v98, 1LL);
      v125 = 0LL;
LABEL_306:
      if ( v136 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v136 + 16LL))(v136);
LABEL_101:
      if ( Converter >= 0 )
        goto LABEL_30;
      if ( Converter == -2147024882 )
      {
        if ( Block )
          (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
        v97 = v121;
        if ( v121 )
          goto LABEL_215;
        goto LABEL_216;
      }
LABEL_314:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          31LL,
          &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
          v25 + 8);
      }
      if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v56 + 29) + 32LL))(
             *((_QWORD *)v56 + 29),
             *(_QWORD *)(v25 + 40)) < 0 )
      {
        if ( Block )
          (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
        if ( v121 )
          ((void (__fastcall *)(struct IAudioMediaType *))v121->lpVtbl->Release)(v121);
        v1 = v116;
        goto LABEL_71;
      }
      if ( Converter != -2005073917 )
      {
        v118 = 1;
        v131 = *(_DWORD *)(v25 + 4);
      }
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v56 + 16, v22);
      v40 = v119;
      v39 = v122;
      goto LABEL_50;
    }
    v99 = *(_DWORD *)(v23 + 24);
    v100 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v133 + 40LL))(v133);
    Converter = CProcessNode::CreateDummyProcessNode(v99, v100, &v125);
    if ( Converter < 0 )
    {
      v56 = v116;
LABEL_298:
      v98 = v125;
      goto LABEL_300;
    }
    try
    {
      v145 = v125;
      v56 = v116;
      v127 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                         (char *)v116 + 16,
                         v22,
                         &v145);
    }
    catch ( ATL::CAtlException *v152 )
    {
      v91 = v152;
      if ( *(_DWORD *)v152 == -1073741571 )
        _o__resetstkoflw();
      v119 = *(_DWORD *)v91;
      Converter = v119;
      if ( v119 < 0 )
      {
        if ( v133 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v133 + 16LL))(v133);
        if ( v125 )
          (**v125)(v125, 1LL);
        v125 = 0LL;
        if ( v136 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v136 + 16LL))(v136);
        if ( Block )
          (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
        v101 = v121;
        if ( !v121 )
          goto LABEL_276;
LABEL_275:
        ((void (__fastcall *)(struct IAudioMediaType *))v101->lpVtbl->Release)(v101);
        goto LABEL_276;
      }
      v23 = v146;
      v22 = v143;
      v25 = v144;
      v21 = v123;
      v56 = v126;
      v116 = v126;
      v119 = v128;
    }
    v125 = 0LL;
    v102 = *(_DWORD *)(v23 + 24);
    v103 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v124->lpVtbl->GetAudioFormat)(v124);
    Converter = CProcessNode::CreateDummyProcessNode(v102, v103, &v125);
    if ( Converter < 0 )
      goto LABEL_298;
    Converter = 0;
    try
    {
      v147 = v125;
      v127 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                         (char *)v56 + 16,
                         v127,
                         &v147);
    }
    catch ( ATL::CAtlException *v153 )
    {
      v92 = v153;
      if ( *(_DWORD *)v153 == -1073741571 )
        _o__resetstkoflw();
      v119 = *(_DWORD *)v92;
      Converter = v119;
      if ( v119 < 0 )
      {
        if ( v133 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v133 + 16LL))(v133);
        if ( v125 )
          (**v125)(v125, 1LL);
        v125 = 0LL;
        if ( v136 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v136 + 16LL))(v136);
        if ( Block )
          (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
        if ( v121 )
        {
          ((void (__fastcall *)(struct IAudioMediaType *))v121->lpVtbl->Release)(v121);
          v1 = v126;
LABEL_417:
          if ( v132 )
            (**v132)(v132, 1LL);
          goto LABEL_71;
        }
LABEL_276:
        v1 = v126;
        goto LABEL_417;
      }
      v22 = v143;
      v25 = v144;
      v56 = v126;
      v116 = v126;
    }
    v39 = v122;
    v125 = 0LL;
    *((_DWORD *)v56 + 33) |= 6u;
    *(_DWORD *)(v25 + 48) = 0;
    v127 = v22;
    if ( v133 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v133 + 16LL))(v133);
    v125 = 0LL;
    if ( v136 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v136 + 16LL))(v136);
    v40 = v141;
LABEL_50:
    if ( Converter < 0 && v40 )
    {
      v108 = *((_DWORD *)v39 + 6);
      v109 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v124->lpVtbl->GetAudioFormat)(v124);
      v110 = CProcessNode::CreateDummyProcessNode(v108, v109, &v137);
      if ( v110 < 0 )
      {
        pExceptionObject = v110;
        throw (long *)&pExceptionObject;
      }
      (*(void (__fastcall **)(__int64, struct IAudioMediaType *))(*(_QWORD *)v137 + 24LL))(v137, v124);
      Converter = 0;
      try
      {
        v127 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                           (char *)v116 + 16,
                           v127,
                           &v137);
      }
      catch ( ATL::CAtlException *v156 )
      {
        v95 = v156;
        if ( *(_DWORD *)v156 == -1073741571 )
          _o__resetstkoflw();
        v119 = *(_DWORD *)v95;
        Converter = v119;
        if ( v119 < 0 )
        {
          if ( Block )
            (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
          v101 = v121;
          if ( !v121 )
            goto LABEL_276;
          goto LABEL_275;
        }
        v116 = v126;
      }
      v137 = 0LL;
    }
    v41 = (volatile signed __int32 *)Block;
    if ( Block )
    {
      Block = 0LL;
      v42 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v41 + 16LL);
      if ( v42 == CAudioMediaType::Release )
      {
        if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
        {
          *(_QWORD *)v41 = &CAudioMediaType::`vftable';
          operator delete(*((void **)v41 + 2));
          *((_QWORD *)v41 + 2) = 0LL;
          operator delete((void *)v41);
        }
      }
      else
      {
        v42((CAudioMediaType *)v41);
      }
    }
    v43 = (CAudioMediaType *)v121;
    if ( v121 )
    {
      v121 = 0LL;
      v46 = *(void (**)(void))(*(_QWORD *)v43 + 16LL);
      if ( (char *)v46 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release(v43);
      else
        v46();
    }
    if ( Block )
      (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
    v18 = v122;
    v1 = v116;
    if ( v121 )
      ((void (__fastcall *)(struct IAudioMediaType *, __int64 (__fastcall *)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *), int (*)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *)))v121->lpVtbl->Release)(
        v121,
        CAPOProcessNode::IsLeftFormatSupported,
        CProcessNode::IsLeftFormatSupported);
  }
  v29 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v23 + 40LL);
  if ( v29 == CAPOProcessNode::IsLeftFormatSupported )
    v30 = CAPOProcessNode::IsLeftFormatSupported((CAPOProcessNode *)v23, v117, (struct IAudioMediaType **)&Block, 0LL);
  else
    v30 = v29((CAPOProcessNode *)v23, v117, (struct IAudioMediaType **)&Block, 0LL);
  Converter = v30;
  if ( v30 < 0 )
  {
    if ( Block )
      (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
    v97 = v121;
    if ( v121 )
      goto LABEL_215;
    goto LABEL_216;
  }
LABEL_30:
  v24 = v135;
  v119 = v135;
  v128 = v135;
  v18 = v122;
LABEL_31:
  if ( Converter == 1 )
  {
    v44 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v18 + 48LL);
    if ( (char *)v44 == (char *)CAPOProcessNode::IsRightFormatSupported )
    {
      IsRightFormatSupported = CAPOProcessNode::IsRightFormatSupported(v18, (struct IAudioMediaType *)Block, &v121, 0LL);
    }
    else if ( v44 == CProcessNode::IsRightFormatSupported )
    {
      IsRightFormatSupported = CProcessNode::IsRightFormatSupported(v18, (struct IAudioMediaType *)Block, &v121, 0LL);
    }
    else
    {
      IsRightFormatSupported = ((__int64 (__fastcall *)(CProcessNode *, void *, struct IAudioMediaType **, _QWORD))v44)(
                                 v18,
                                 Block,
                                 &v121,
                                 0LL);
    }
    Converter = IsRightFormatSupported;
    if ( IsRightFormatSupported < 0 )
    {
      if ( Block )
        (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
      v97 = v121;
      if ( v121 )
        goto LABEL_215;
      goto LABEL_216;
    }
    if ( IsRightFormatSupported )
    {
      if ( IsRightFormatSupported == 1 )
      {
        v38 = (CAudioMediaType *)v117;
        if ( v117 )
        {
          v117 = 0LL;
          v69 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v38 + 16LL);
          if ( v69 == CAudioMediaType::Release )
            CAudioMediaType::Release(v38);
          else
            v69(v38);
          v38 = (CAudioMediaType *)v117;
        }
        v70 = v121;
        if ( v38 != (CAudioMediaType *)v121 )
        {
          if ( v121 )
          {
            AddRef = v121->lpVtbl->AddRef;
            if ( (char *)AddRef == (char *)CAudioMediaType::AddRef )
              CAudioMediaType::AddRef((CAudioMediaType *)v121);
            else
              ((void (__fastcall *)(struct IAudioMediaType *))AddRef)(v121);
            v38 = (CAudioMediaType *)v117;
          }
          if ( v38 )
            (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v38 + 16LL))(v38);
          v38 = (CAudioMediaType *)v70;
          v117 = v70;
        }
LABEL_154:
        v72 = 1;
        v73 = *(__int64 (__fastcall **)(CAudioMediaType *__hidden, struct _UNCOMPRESSEDAUDIOFORMAT *))(*(_QWORD *)Block + 48LL);
        if ( v73 == CAudioMediaType::GetUncompressedAudioFormat )
          UncompressedAudioFormat = CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)Block, &v162);
        else
          UncompressedAudioFormat = v73((CAudioMediaType *)Block, &v162);
        Converter = UncompressedAudioFormat;
        if ( UncompressedAudioFormat < 0 )
        {
          v1 = v116;
        }
        else
        {
          v75 = *(__int64 (__fastcall **)(CAudioMediaType *__hidden, struct _UNCOMPRESSEDAUDIOFORMAT *))(*(_QWORD *)v38 + 48LL);
          if ( v75 == CAudioMediaType::GetUncompressedAudioFormat )
            v76 = CAudioMediaType::GetUncompressedAudioFormat(v38, &v161);
          else
            v76 = v75(v38, &v161);
          Converter = v76;
          v1 = v116;
          if ( v76 >= 0 )
          {
            if ( v162.fFramesPerSecond != v161.fFramesPerSecond || (v90 = *((_DWORD *)v116 + 33), (v90 & 8) != 0) )
            {
              v77 = *((_DWORD *)v116 + 33);
              if ( (v77 & 2) != 0 )
              {
                v160 = GUID_27c98999_2895_4829_b080_5a8b65bd3db0;
                if ( (v77 & 8) != 0 )
                  v72 = 0;
                *((_DWORD *)v116 + 33) = v77 & 0xFFFFFFF5;
LABEL_165:
                if ( Converter < 0 )
                {
                  if ( Block )
                    (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
                  v107 = v121;
                  if ( !v121 )
                    goto LABEL_71;
                }
                else
                {
                  v159 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
                  v114 = &v132;
                  v39 = v122;
                  Converter = CAPOProcessNode::CreateAPOProcessNode(&v160, *((unsigned int *)v122 + 6), v72);
                  if ( Converter >= 0 )
                  {
                    Converter = 0;
                    try
                    {
                      v78 = v132;
                      v149 = v132;
                      v79 = (__int64 *)((char *)v1 + 16);
                      v154[1] = (CPipeInstance *)((char *)v1 + 16);
                      v80 = (__int64)v1 + 16;
                      if ( v22 )
                      {
                        v81 = (ATL::CAtlException *)v22[1];
                        v154[2] = v81;
                        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(v80);
                        v82 = v79[4];
                        v154[3] = (ATL::CAtlException *)v82;
                        v83 = *(ATL::CAtlException **)v82;
                        v154[4] = *(ATL::CAtlException **)v82;
                        v154[5] = (ATL::CAtlException *)v82;
                        if ( v82 )
                          *(_QWORD *)(v82 + 16) = v78;
                        v79[4] = (__int64)v83;
                        *(_QWORD *)(v82 + 8) = v81;
                        *(_QWORD *)v82 = v22;
                        ++v79[2];
                        v84 = (__int64 *)v22[1];
                        if ( v84 )
                          *v84 = v82;
                        else
                          *v79 = v82;
                        v22[1] = v82;
                        v150 = v82;
                      }
                      else
                      {
                        v82 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHead(v80, &v149);
                        v150 = v82;
                      }
                      v127 = (_QWORD *)v82;
                    }
                    catch ( ATL::CAtlException *v155 )
                    {
                      v94 = v155;
                      if ( *(_DWORD *)v155 == -1073741571 )
                        _o__resetstkoflw();
                      v119 = *(_DWORD *)v94;
                      Converter = v119;
                      if ( v119 < 0 )
                      {
                        if ( Block )
                          (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
                        v101 = v121;
                        if ( !v121 )
                          goto LABEL_276;
                        goto LABEL_275;
                      }
                      v40 = v128;
                      v39 = v122;
                      v116 = v126;
LABEL_176:
                      v132 = 0LL;
                      goto LABEL_50;
                    }
                    v40 = v119;
                    goto LABEL_176;
                  }
                  if ( Block )
                    (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
                  v107 = v121;
                  if ( !v121 )
                    goto LABEL_71;
                }
LABEL_427:
                ((void (__fastcall *)(struct IAudioMediaType *))v107->lpVtbl->Release)(v107);
                goto LABEL_71;
              }
            }
            else if ( v162.dwSamplesPerFrame == v161.dwSamplesPerFrame )
            {
              if ( (v90 & 1) != 0 )
              {
                v160 = GUID_3fd7f233_a716_472e_8f2f_c25954f34e96;
                goto LABEL_165;
              }
            }
            else if ( (v90 & 4) != 0 )
            {
              v160 = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
              *((_DWORD *)v116 + 33) = v90 & 0xFFFFFFFB;
              goto LABEL_165;
            }
            Converter = -2005139408;
          }
        }
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            35LL,
            &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
            (unsigned int)Converter);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::FindConverter", 0x8B4u, Converter);
        goto LABEL_165;
      }
    }
    else
    {
      v63 = (CAudioMediaType *)v117;
      if ( v117 )
      {
        v117 = 0LL;
        v64 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v63 + 16LL);
        if ( v64 == CAudioMediaType::Release )
          CAudioMediaType::Release(v63);
        else
          v64(v63);
        v63 = (CAudioMediaType *)v117;
      }
      v65 = (struct IAudioMediaType *)Block;
      if ( v63 != Block )
      {
        if ( Block )
        {
          v66 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 8LL);
          if ( v66 == CAudioMediaType::AddRef )
            CAudioMediaType::AddRef((CAudioMediaType *)Block);
          else
            v66((CAudioMediaType *)Block);
          v63 = (CAudioMediaType *)v117;
        }
        if ( v63 )
          (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v63 + 16LL))(v63);
        v63 = (CAudioMediaType *)v65;
        v117 = v65;
      }
      v67 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v23 + 24LL);
      if ( (char *)v67 == (char *)CAPOProcessNode::SetLeftFormat )
      {
        CAPOProcessNode::SetLeftFormat((CAPOProcessNode *)v23, (struct IAudioMediaType *)v63);
      }
      else if ( v67 == CProcessNode::SetRightFormat )
      {
        CProcessNode::SetRightFormat((CProcessNode *)v23, (struct IAudioMediaType *)v63);
      }
      else
      {
        ((void (__fastcall *)(__int64, CAudioMediaType *))v67)(v23, v63);
      }
      v68 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v122 + 32LL);
      if ( v68 == CAPOProcessNode::SetRightFormat )
        CAPOProcessNode::SetRightFormat(v122, v117);
      else
        v68(v122, v117);
      if ( v24 )
      {
        v104 = *(_QWORD *)(v23 + 32);
        if ( *(_DWORD *)(v104 + 4) )
        {
          if ( *(_DWORD *)(v104 + 48) )
          {
            ATL::CComPtrBase<IAudioProcessingObject>::Release(&v117);
            ATL::CComPtr<IAudioMediaType>::operator=(&v117, &v124);
          }
        }
      }
    }
LABEL_46:
    v38 = (CAudioMediaType *)v117;
    goto LABEL_47;
  }
  if ( Converter )
  {
    if ( Converter < 0 )
    {
      if ( Block )
        (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
      if ( v121 )
        ((void (__fastcall *)(struct IAudioMediaType *))v121->lpVtbl->Release)(v121);
      v1 = v116;
      goto LABEL_417;
    }
    goto LABEL_46;
  }
  v31 = v117;
  v32 = (volatile signed __int32 *)v117;
  v33 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v23 + 24LL);
  if ( (char *)v33 != (char *)CAPOProcessNode::SetLeftFormat )
  {
    if ( v33 == CProcessNode::SetRightFormat )
      CProcessNode::SetRightFormat((CProcessNode *)v23, v117);
    else
      ((void (__fastcall *)(__int64))v33)(v23);
    goto LABEL_42;
  }
  v34 = *(CAudioMediaType **)(v23 + 8);
  if ( v34 )
  {
    *(_QWORD *)(v23 + 8) = 0LL;
    v85 = *(void (**)(void))(*(_QWORD *)v34 + 16LL);
    if ( (char *)v85 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v34);
    else
      v85();
    v31 = v117;
  }
  if ( *(volatile signed __int32 **)(v23 + 8) != v32 )
  {
    if ( v32 )
    {
      v35 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v32 + 8LL);
      if ( v35 == CAudioMediaType::AddRef )
        _InterlockedIncrement(v32 + 2);
      else
        v35((CAudioMediaType *)v32);
    }
    v36 = *(_QWORD *)(v23 + 8);
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    *(_QWORD *)(v23 + 8) = v32;
LABEL_42:
    v31 = v117;
  }
  v37 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v122 + 32LL);
  if ( (char *)v37 == (char *)CAPOProcessNode::SetRightFormat )
  {
    CAPOProcessNode::SetRightFormat(v122, v31);
  }
  else if ( v37 == CProcessNode::SetRightFormat )
  {
    CProcessNode::SetRightFormat(v122, v31);
  }
  else
  {
    ((void (__fastcall *)(CProcessNode *))v37)(v122);
  }
  if ( !v24 )
    goto LABEL_46;
  v57 = *(_QWORD *)(v23 + 32);
  if ( !*(_DWORD *)(v57 + 4) || !*(_DWORD *)(v57 + 48) )
    goto LABEL_46;
  v38 = (CAudioMediaType *)v117;
  if ( v117 )
  {
    v117 = 0LL;
    v58 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v38 + 16LL);
    if ( v58 == CAudioMediaType::Release )
      CAudioMediaType::Release(v38);
    else
      v58(v38);
    v38 = (CAudioMediaType *)v117;
  }
  v59 = v124;
  if ( v38 != (CAudioMediaType *)v124 )
  {
    if ( v124 )
    {
      v60 = v124->lpVtbl->AddRef;
      if ( (char *)v60 == (char *)CAudioMediaType::AddRef )
        CAudioMediaType::AddRef((CAudioMediaType *)v124);
      else
        ((void (__fastcall *)(struct IAudioMediaType *))v60)(v124);
      v38 = (CAudioMediaType *)v117;
    }
    if ( v38 )
      (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v38 + 16LL))(v38);
    v38 = (CAudioMediaType *)v59;
    v117 = v59;
  }
LABEL_47:
  if ( v21 )
    goto LABEL_154;
  if ( (*((_BYTE *)v116 + 132) & 8) == 0
    || (v105 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v138->lpVtbl->GetAudioFormat)(v138),
        v106 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v38 + 40LL))(v38),
        !(unsigned int)CompareWaveFormat(v106, v105)) )
  {
    v39 = (CProcessNode *)v23;
    v122 = (CProcessNode *)v23;
    v40 = v119;
    goto LABEL_50;
  }
  v130 = 0LL;
  Converter = (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType **))(*(_QWORD *)v23 + 8LL))(v23, &v130);
  if ( Converter < 0 )
  {
    if ( v130 )
      ((void (__fastcall *)(struct IAudioMediaType *))v130->lpVtbl->Release)(v130);
    if ( Block )
      (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
    v97 = v121;
    if ( v121 )
      goto LABEL_215;
    goto LABEL_216;
  }
  v1 = v116;
  Converter = CPipeInstance::FindConverter(v116, v130, v130, &v139, &v160);
  if ( Converter >= 0 )
  {
    v158 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v114 = &v132;
    v39 = v122;
    Converter = CAPOProcessNode::CreateAPOProcessNode(&v160, *((unsigned int *)v122 + 6), (unsigned int)v139);
    if ( Converter >= 0 )
    {
      Converter = 0;
      try
      {
        v148 = v132;
        v127 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                           (char *)v116 + 16,
                           v22,
                           &v148);
      }
      catch ( ATL::CAtlException *v154 )
      {
        v93 = v154[0];
        if ( *(_DWORD *)v154[0] == -1073741571 )
          _o__resetstkoflw();
        v119 = *(_DWORD *)v93;
        Converter = v119;
        if ( v119 < 0 )
        {
          if ( v130 )
            ((void (__fastcall *)(struct IAudioMediaType *))v130->lpVtbl->Release)(v130);
          if ( Block )
            (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
          v101 = v121;
          if ( !v121 )
            goto LABEL_276;
          goto LABEL_275;
        }
        v40 = v128;
        v39 = v122;
        v116 = v126;
LABEL_379:
        v132 = 0LL;
        ATL::CComPtr<IAudioMediaType>::operator=(&v117, &v130);
        if ( v130 )
          ((void (__fastcall *)(struct IAudioMediaType *))v130->lpVtbl->Release)(v130);
        goto LABEL_50;
      }
      v40 = v119;
      goto LABEL_379;
    }
  }
  if ( v130 )
    ((void (__fastcall *)(struct IAudioMediaType *))v130->lpVtbl->Release)(v130);
  if ( Block )
    (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
  v107 = v121;
  if ( v121 )
    goto LABEL_427;
LABEL_71:
  if ( !v118 || (v111 = TrackSystemEffectBehavior(*((_QWORD *)v1 + 23), v131, 0LL, 0LL), v111 >= 0) )
  {
LABEL_72:
    v48 = WPP_GLOBAL_Control;
    goto LABEL_73;
  }
  v48 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        32LL,
        &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
        (unsigned int)v111);
      goto LABEL_72;
    }
LABEL_73:
    if ( v48 != &WPP_GLOBAL_Control && (*((_DWORD *)v48 + 7) & 0x20000) != 0 && *((_BYTE *)v48 + 25) >= 4u )
    {
      v112 = "SUCCEEDED";
      if ( Converter < 0 )
        v112 = "FAILED";
      WPP_SF_qs(v48[2], 33, v7, (_DWORD)v1, (__int64)v112);
      v48 = WPP_GLOBAL_Control;
    }
  }
  if ( Converter < 0 )
  {
    if ( v48 != &WPP_GLOBAL_Control && (*((_DWORD *)v48 + 7) & 0x20000) != 0 && *((_BYTE *)v48 + 25) >= 2u )
      WPP_SF_D(v48[2], 34LL, &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids, (unsigned int)Converter);
    AudDGTraceLoggingErrorHelper("CPipeInstance::ResolveFormatConflictsLeftRight", 0x838u, Converter);
  }
  if ( v142 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v142 + 16LL))(v142);
  if ( v138 )
  {
    Release = v138->lpVtbl->Release;
    if ( (char *)Release == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v138);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))Release)(v138);
  }
  if ( v124 )
  {
    v50 = (void (*)(void))v124->lpVtbl->Release;
    if ( (char *)v50 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v124);
    else
      v50();
  }
  if ( v117 )
  {
    v51 = (void (*)(void))v117->lpVtbl->Release;
    if ( (char *)v51 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v117);
    else
      v51();
  }
  return (unsigned int)Converter;
}
