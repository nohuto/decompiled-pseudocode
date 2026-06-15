/*
 * XREFs of ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B540
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B290 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140001E70 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140003800 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x140003B40 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x1400066A0 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x140007DC0 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x14000B448 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x14000CD20 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x14000CD30 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14000CD40 (-GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
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
 *     ??3@YAXPEAX@Z @ 0x14001B954 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x14001D6E1 (_CxxThrowException_0.c)
 *     memcpy_0 @ 0x14001D6ED (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x14002F2FC (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     ?AddHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14002F85C (-AddHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?InsertAfter@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x14002F88C (-InsertAfter@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPE.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x14002F8DC (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14002F930 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1400301E4 (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     WPP_SF_q @ 0x140034C70 (WPP_SF_q.c)
 *     WPP_SF__guid_ @ 0x14003E518 (WPP_SF__guid_.c)
 *     WPP_SF_qs @ 0x14003E544 (WPP_SF_qs.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=83
__int64 __fastcall CPipeInstance::ResolveFormatConflictsLeftRight(CPipeInstance *this)
{
  CPipeInstance *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rax
  CProcessNode *v4; // rcx
  __int64 (__fastcall *v5)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int RightFormat; // eax
  _UNKNOWN **v7; // r8
  int Converter; // esi
  __int64 (*GetAudioFormat)(void); // rax
  const struct tWAVEFORMATEX *AudioFormat; // rax
  const struct tWAVEFORMATEX *v11; // rsi
  __int64 cbSize; // rdi
  char *v13; // rax
  char *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  CProcessNode *v17; // rdi
  __int64 (__fastcall *v18)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int v19; // eax
  _QWORD *v20; // r13
  CAPOProcessNode *v21; // r14
  BOOL v22; // r15d
  __int64 v23; // rdi
  unsigned int v24; // ebx
  struct IAudioProcessingObject **v25; // r15
  int v26; // eax
  __int64 (__fastcall *v27)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int IsLeftFormatSupported; // eax
  struct IAudioMediaType *v29; // rdx
  volatile signed __int32 *v30; // rbx
  void (*v31)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  CAudioMediaType *v32; // rcx
  unsigned int (__fastcall *v33)(CAudioMediaType *__hidden); // rax
  __int64 v34; // rcx
  void (*v35)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  volatile signed __int32 *v36; // rbx
  unsigned int (__fastcall *v37)(CAudioMediaType *__hidden); // rax
  CAudioMediaType *v38; // rcx
  int (*v39)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int IsRightFormatSupported; // eax
  CAudioMediaType *v41; // rbx
  unsigned int (__fastcall *v42)(CAudioMediaType *__hidden); // rax
  struct IAudioMediaType *v43; // rdi
  ULONG (__stdcall *AddRef)(IAudioMediaType *); // rax
  unsigned int v45; // edi
  __int64 (__fastcall *v46)(CAudioMediaType *__hidden, struct _UNCOMPRESSEDAUDIOFORMAT *); // rax
  int UncompressedAudioFormat; // eax
  __int64 (__fastcall *v48)(CAudioMediaType *__hidden, struct _UNCOMPRESSEDAUDIOFORMAT *); // rax
  int v49; // eax
  int v50; // eax
  void (__fastcall ***v51)(_QWORD, __int64); // rdi
  __int64 v52; // rbx
  __int64 v53; // r14
  _QWORD *v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rcx
  void (*v57)(void); // rax
  void (__fastcall *v58)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  _QWORD *v59; // rcx
  ULONG (__stdcall *v60)(IAudioMediaType *); // rax
  void (*v61)(void); // rax
  void (*v62)(void); // rax
  int v64; // eax
  __int64 (__fastcall *v65)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int v66; // eax
  __int64 v67; // rax
  CAudioMediaType *v68; // rcx
  void (*v69)(void); // rax
  struct IAudioMediaType *v70; // rdi
  ULONG (__stdcall *v71)(IAudioMediaType *); // rax
  int (*v72)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int v73; // eax
  CAudioMediaType *v74; // rdx
  unsigned int (__fastcall *v75)(CAudioMediaType *__hidden); // rax
  struct IAudioMediaType *v76; // rbx
  unsigned int (__fastcall *v77)(CAudioMediaType *__hidden); // rax
  void (*v78)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  void (__fastcall *v79)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  void (*v80)(void); // rax
  __int64 Head; // rax
  CProcessNode *v82; // rcx
  __int64 (__fastcall *v83)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int LeftFormat; // eax
  int v85; // ecx
  int *v86; // rbx
  int *v87; // rbx
  int *v88; // rbx
  int *v89; // rbx
  int *v90; // rbx
  int v91; // ecx
  void (*v92)(void); // rax
  void (*Release)(void); // rax
  void (*v94)(void); // rax
  void (*v95)(void); // rax
  void (*v96)(void); // rax
  void (*v97)(void); // rax
  void (*v98)(void); // rax
  void (*v99)(void); // rax
  void (*v100)(void); // rax
  ULONG (__stdcall *v101)(IAudioMediaType *); // rax
  void (__fastcall ***v102)(_QWORD, __int64); // rbx
  unsigned int v103; // ebx
  __int64 v104; // rax
  void (*v105)(void); // rax
  void (*v106)(void); // rax
  CAudioMediaType *v107; // rcx
  ULONG (__stdcall *v108)(IAudioMediaType *); // rax
  unsigned int v109; // ebx
  __int64 v110; // rax
  void (*v111)(void); // rax
  void (*v112)(void); // rax
  CPipeInstance *v113; // rbx
  unsigned int (__fastcall *v114)(CAudioMediaType *__hidden); // rdx
  unsigned int (__fastcall *v115)(CAudioMediaType *__hidden); // rax
  void (*v116)(void); // rax
  void (*v117)(void); // rax
  void (*v118)(void); // rax
  void (*v119)(void); // rax
  void (*v120)(void); // rax
  void (*v121)(void); // rax
  void (*v122)(void); // rax
  void (*v123)(void); // rax
  __int64 v124; // rax
  void (*v125)(void); // rax
  void (*v126)(void); // rax
  void (*v127)(void); // rax
  void (*v128)(void); // rax
  void (*v129)(void); // rax
  struct IAudioMediaType *v130; // rdi
  const struct tWAVEFORMATEX *v131; // rbx
  const struct tWAVEFORMATEX *v132; // rax
  void (*v133)(void); // rax
  void (*v134)(void); // rax
  void (*v135)(void); // rax
  void (*v136)(void); // rax
  void (*v137)(void); // rax
  void (*v138)(void); // rax
  void (*v139)(void); // rax
  void (*v140)(void); // rax
  void (*v141)(void); // rax
  void (*v142)(void); // rax
  unsigned int v143; // ebx
  __int64 v144; // rax
  int v145; // eax
  void (*v146)(void); // rax
  int v147; // eax
  const char *v148; // rax
  GUID *ppv; // [rsp+20h] [rbp-238h]
  void (__fastcall ****v150)(_QWORD, __int64); // [rsp+28h] [rbp-230h]
  struct IAudioSystemEffects2 **v151; // [rsp+30h] [rbp-228h]
  BOOL v152; // [rsp+40h] [rbp-218h]
  struct IAudioMediaType *v153; // [rsp+48h] [rbp-210h] BYREF
  CPipeInstance *v154; // [rsp+50h] [rbp-208h]
  char v155; // [rsp+58h] [rbp-200h]
  void *Block; // [rsp+60h] [rbp-1F8h] BYREF
  struct IAudioMediaType *v157; // [rsp+68h] [rbp-1F0h] BYREF
  BOOL v158; // [rsp+70h] [rbp-1E8h]
  CProcessNode *v159; // [rsp+78h] [rbp-1E0h]
  struct IAudioMediaType *v160; // [rsp+80h] [rbp-1D8h] BYREF
  void (__fastcall ***v161)(_QWORD, __int64); // [rsp+88h] [rbp-1D0h] BYREF
  _QWORD *v162; // [rsp+90h] [rbp-1C8h]
  CPipeInstance *v163; // [rsp+98h] [rbp-1C0h]
  struct IMMDevice *v164; // [rsp+A0h] [rbp-1B8h] BYREF
  struct IAudioMediaType *v165; // [rsp+A8h] [rbp-1B0h] BYREF
  unsigned int v166; // [rsp+B0h] [rbp-1A8h]
  void (__fastcall ***v167)(_QWORD, __int64); // [rsp+B8h] [rbp-1A0h] BYREF
  CAudioMediaType *v168; // [rsp+C0h] [rbp-198h] BYREF
  int v169; // [rsp+C8h] [rbp-190h] BYREF
  __int64 v170; // [rsp+D0h] [rbp-188h] BYREF
  __int64 v171; // [rsp+D8h] [rbp-180h] BYREF
  struct IAudioMediaType *v172; // [rsp+E0h] [rbp-178h] BYREF
  int v173; // [rsp+E8h] [rbp-170h] BYREF
  int pExceptionObject; // [rsp+ECh] [rbp-16Ch] BYREF
  LPVOID v175; // [rsp+F0h] [rbp-168h] BYREF
  _QWORD *v176; // [rsp+F8h] [rbp-160h]
  __int64 v177; // [rsp+100h] [rbp-158h]
  void (__fastcall ***v178)(_QWORD, __int64); // [rsp+108h] [rbp-150h] BYREF
  CAPOProcessNode *v179; // [rsp+110h] [rbp-148h]
  void (__fastcall ***v180)(_QWORD, __int64); // [rsp+118h] [rbp-140h] BYREF
  void (__fastcall ***v181)(_QWORD, __int64); // [rsp+120h] [rbp-138h] BYREF
  _QWORD *v182; // [rsp+128h] [rbp-130h]
  _QWORD v183[2]; // [rsp+130h] [rbp-128h] BYREF
  ATL::CAtlException *v184; // [rsp+140h] [rbp-118h] BYREF
  ATL::CAtlException *v185[2]; // [rsp+148h] [rbp-110h] BYREF
  __int64 v186; // [rsp+158h] [rbp-100h]
  _QWORD *v187; // [rsp+160h] [rbp-F8h]
  __int64 v188; // [rsp+168h] [rbp-F0h]
  _QWORD *v189; // [rsp+170h] [rbp-E8h]
  ATL::CAtlException *v190; // [rsp+178h] [rbp-E0h] BYREF
  ATL::CAtlException *v191; // [rsp+180h] [rbp-D8h] BYREF
  ATL::CAtlException *v192; // [rsp+188h] [rbp-D0h] BYREF
  struct _GUID v193; // [rsp+190h] [rbp-C8h] BYREF
  GUID v194; // [rsp+1A0h] [rbp-B8h] BYREF
  GUID v195; // [rsp+1B0h] [rbp-A8h] BYREF
  struct _GUID v196; // [rsp+1C0h] [rbp-98h] BYREF
  struct _UNCOMPRESSEDAUDIOFORMAT v197; // [rsp+1D0h] [rbp-88h] BYREF
  struct _UNCOMPRESSEDAUDIOFORMAT v198; // [rsp+1F8h] [rbp-60h] BYREF

  v183[1] = -2LL;
  v1 = this;
  v154 = this;
  v163 = this;
  v167 = 0LL;
  v171 = 0LL;
  v155 = 0;
  v153 = 0LL;
  v160 = 0LL;
  v172 = 0LL;
  v175 = 0LL;
  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    Head = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(v2 + 16));
    v82 = *(CProcessNode **)Head;
    v83 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(**(_QWORD **)Head + 8LL);
    if ( v83 == CProcessNode::GetLeftFormat )
      LeftFormat = CProcessNode::GetLeftFormat(v82, &v160);
    else
      LeftFormat = v83(v82, &v160);
    Converter = LeftFormat;
    if ( LeftFormat < 0 )
      goto LABEL_104;
  }
  else
  {
    v3 = *((_QWORD *)v1 + 3);
    if ( !v3 )
      ATL::AtlThrowImpl(-2147467259);
    v4 = *(CProcessNode **)(v3 + 16);
    v5 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v4 + 16LL);
    if ( v5 == CProcessNode::GetRightFormat )
      RightFormat = CProcessNode::GetRightFormat(v4, &v160);
    else
      RightFormat = v5(v4, &v160);
    Converter = RightFormat;
    if ( RightFormat < 0 )
      goto LABEL_104;
  }
  GetAudioFormat = (__int64 (*)(void))v160->lpVtbl->GetAudioFormat;
  if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
    AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v160);
  else
    AudioFormat = (const struct tWAVEFORMATEX *)GetAudioFormat();
  v11 = AudioFormat;
  cbSize = AudioFormat->cbSize;
  v13 = (char *)CoTaskMemAlloc(cbSize + 18);
  v14 = v13;
  if ( !v13 )
  {
    Converter = -2147024882;
    LODWORD(v1) = (_DWORD)v154;
LABEL_104:
    v59 = WPP_GLOBAL_Control;
    goto LABEL_105;
  }
  memcpy_0(v13, v11, cbSize + 18);
  if ( *(_WORD *)v14 == 1 )
  {
    *(_WORD *)v14 = 3;
LABEL_198:
    *((_WORD *)v14 + 7) = 32;
    v91 = (unsigned __int16)(4 * *((_WORD *)v14 + 1));
    *((_WORD *)v14 + 6) = v91;
    *((_DWORD *)v14 + 2) = v91 * *((_DWORD *)v14 + 1);
    goto LABEL_14;
  }
  if ( *(_WORD *)v14 == 0xFFFE )
  {
    v15 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v14 + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v14 + 3) )
      v15 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v14 + 4);
    if ( !v15 && (v14[18] & 7) == 0 )
    {
      *(GUID *)(v14 + 24) = GUID_00000003_0000_0010_8000_00aa00389b71;
      *((_WORD *)v14 + 9) = 32;
      goto LABEL_198;
    }
  }
LABEL_14:
  Converter = CAudioMediaType::Create(
                (const struct tWAVEFORMATEX *)v14,
                (unsigned int)*((unsigned __int16 *)v14 + 8) + 18,
                &v172,
                0.0,
                0);
  CoTaskMemFree(v14);
  v1 = v154;
  if ( Converter < 0 )
    goto LABEL_104;
  v16 = *((_QWORD *)v154 + 2);
  v162 = (_QWORD *)v16;
  if ( !v16 )
    ATL::AtlThrowImpl(-2147467259);
  v162 = *(_QWORD **)v16;
  v17 = *(CProcessNode **)(v16 + 16);
  v159 = v17;
  v18 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v17 + 16LL);
  v19 = v18 == CProcessNode::GetRightFormat ? CProcessNode::GetRightFormat(v17, &v153) : v18(v17, &v153);
  Converter = v19;
  if ( v19 < 0 )
    goto LABEL_104;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_0100469152753b0964101f667eb0634c_Traceguids, v1);
  }
  while ( 1 )
  {
    v20 = v162;
    if ( !v162 )
    {
      v58 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v17 + 32LL);
      if ( v58 == CAPOProcessNode::SetRightFormat )
        CAPOProcessNode::SetRightFormat(v17, v153);
      else
        ((void (__fastcall *)(CProcessNode *, struct IAudioMediaType *, int (*)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *)))v58)(
          v17,
          v153,
          CProcessNode::IsLeftFormatSupported);
      goto LABEL_103;
    }
    v157 = 0LL;
    Block = 0LL;
    v176 = v162;
    v162 = (_QWORD *)*v162;
    v21 = (CAPOProcessNode *)v20[2];
    v179 = v21;
    v22 = 0;
    v158 = 0;
    if ( *((_DWORD *)v21 + 10) == 2 )
    {
      v23 = *((_QWORD *)v21 + 4);
      v177 = v23;
      v24 = *(_DWORD *)(v23 + 4);
      v152 = v24 != 0;
      v158 = v152;
      v25 = (struct IAudioProcessingObject **)(v23 + 40);
      if ( !*(_QWORD *)(v23 + 40) )
      {
        ppv = (GUID *)(v23 + 40);
        v26 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)v154 + 29) + 24LL))(
                *((_QWORD *)v154 + 29),
                v23 + 8,
                v24,
                *((_QWORD *)v154 + 23));
        Converter = v26;
        if ( v26 < 0 )
        {
          if ( v26 == -2147024882 )
          {
            if ( Block )
            {
              v92 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
              if ( (char *)v92 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)Block);
              else
                v92();
            }
            if ( v157 )
            {
              Release = (void (*)(void))v157->lpVtbl->Release;
              if ( (char *)Release == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v157);
              else
                Release();
            }
            v1 = v154;
            goto LABEL_103;
          }
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              29LL,
              &WPP_0100469152753b0964101f667eb0634c_Traceguids,
              v23 + 8);
          }
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v154 + 16, v20);
          if ( v24 )
          {
            v155 = 1;
            v166 = *(_DWORD *)(v23 + 4);
          }
          v22 = v24 != 0;
          v17 = v159;
          goto LABEL_49;
        }
        if ( !v24 )
          goto LABEL_26;
        v164 = 0LL;
        Converter = CoCreateInstance(
                      &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                      0LL,
                      0x17u,
                      &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                      &v175);
        if ( Converter < 0 )
        {
          if ( v164 )
            ((void (__fastcall *)(struct IMMDevice *))v164->lpVtbl->Release)(v164);
          if ( Block )
          {
            v94 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
            if ( (char *)v94 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)Block);
            else
              v94();
          }
          if ( v157 )
          {
            v95 = (void (*)(void))v157->lpVtbl->Release;
            if ( (char *)v95 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v157);
            else
              v95();
          }
          v1 = v154;
          goto LABEL_103;
        }
        Converter = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)v175 + 40LL))(
                      v175,
                      *((_QWORD *)v154 + 23),
                      &v164);
        if ( Converter < 0 )
        {
          if ( v164 )
            ((void (__fastcall *)(struct IMMDevice *))v164->lpVtbl->Release)(v164);
          if ( Block )
          {
            v96 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
            if ( (char *)v96 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)Block);
            else
              v96();
          }
          if ( v157 )
          {
            v97 = (void (*)(void))v157->lpVtbl->Release;
            if ( (char *)v97 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v157);
            else
              v97();
          }
          v1 = v154;
          goto LABEL_103;
        }
        v193 = *(struct _GUID *)(v23 + 24);
        v64 = InitializeSystemEffectsInterface(
                v164,
                *v25,
                (struct _GUID *)(v23 + 8),
                &v193,
                (int)ppv,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v150,
                v151);
        Converter = v64;
        if ( v64 < 0 )
        {
          if ( v64 == -2147024882 )
          {
            if ( v164 )
              ((void (__fastcall *)(struct IMMDevice *))v164->lpVtbl->Release)(v164);
            if ( Block )
            {
              v98 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
              if ( (char *)v98 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)Block);
              else
                v98();
            }
            if ( v157 )
            {
              v99 = (void (*)(void))v157->lpVtbl->Release;
              if ( (char *)v99 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v157);
              else
                v99();
            }
            v1 = v154;
            goto LABEL_103;
          }
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              30LL,
              &WPP_0100469152753b0964101f667eb0634c_Traceguids,
              v23 + 8);
          }
          v1 = v154;
          if ( (*(int (__fastcall **)(_QWORD, struct IAudioProcessingObject *))(**((_QWORD **)v154 + 29) + 32LL))(
                 *((_QWORD *)v154 + 29),
                 *v25) < 0 )
          {
            if ( v164 )
              ((void (__fastcall *)(struct IMMDevice *))v164->lpVtbl->Release)(v164);
            if ( Block )
            {
              v100 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
              if ( (char *)v100 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)Block);
              else
                v100();
            }
            if ( v157 )
            {
              v101 = v157->lpVtbl->Release;
              if ( (char *)v101 != (char *)CAudioMediaType::Release )
                goto LABEL_470;
LABEL_482:
              CAudioMediaType::Release((CAudioMediaType *)v157);
            }
            goto LABEL_103;
          }
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v1 + 16, v20);
          v155 = 1;
          v166 = *(_DWORD *)(v23 + 4);
          if ( v164 )
            ((void (__fastcall *)(struct IMMDevice *))v164->lpVtbl->Release)(v164);
          v22 = v152;
          v17 = v159;
          goto LABEL_49;
        }
        if ( v164 )
          ((void (__fastcall *)(struct IMMDevice *))v164->lpVtbl->Release)(v164);
      }
      if ( !v24 || !*(_DWORD *)(v23 + 4) || !*(_DWORD *)(v23 + 48) )
      {
LABEL_26:
        v27 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v21 + 40LL);
        if ( v27 == CAPOProcessNode::IsLeftFormatSupported )
          IsLeftFormatSupported = CAPOProcessNode::IsLeftFormatSupported(
                                    v21,
                                    v153,
                                    (struct IAudioMediaType **)&Block,
                                    0LL);
        else
          IsLeftFormatSupported = v27(v21, v153, (struct IAudioMediaType **)&Block, 0LL);
        Converter = IsLeftFormatSupported;
        if ( IsLeftFormatSupported < 0 )
        {
          if ( Block )
          {
            v120 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
            if ( (char *)v120 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)Block);
            else
              v120();
          }
          if ( v157 )
          {
            v121 = (void (*)(void))v157->lpVtbl->Release;
            if ( (char *)v121 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v157);
            else
              v121();
          }
          v1 = v154;
          goto LABEL_103;
        }
        v22 = v24 != 0;
        goto LABEL_30;
      }
      v65 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v21 + 40LL);
      if ( v65 == CAPOProcessNode::IsLeftFormatSupported )
        v66 = CAPOProcessNode::IsLeftFormatSupported(v21, v153, (struct IAudioMediaType **)&Block, v160);
      else
        v66 = v65(v21, v153, (struct IAudioMediaType **)&Block, v160);
      Converter = v66;
      if ( v66 != -2005073917 )
      {
        v22 = v24 != 0;
LABEL_132:
        if ( Converter >= 0 )
        {
LABEL_30:
          v158 = v22;
          v17 = v159;
          v1 = v154;
          goto LABEL_31;
        }
        if ( Converter == -2147024882 )
        {
          if ( Block )
          {
            v117 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
            if ( (char *)v117 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)Block);
            else
              v117();
          }
          if ( v157 )
          {
            v118 = (void (*)(void))v157->lpVtbl->Release;
            if ( (char *)v118 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v157);
            else
              v118();
          }
          v1 = v154;
          goto LABEL_103;
        }
LABEL_347:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            31LL,
            &WPP_0100469152753b0964101f667eb0634c_Traceguids,
            v23 + 8);
        }
        v1 = v154;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v154 + 29) + 32LL))(
               *((_QWORD *)v154 + 29),
               *(_QWORD *)(v23 + 40)) < 0 )
        {
          if ( Block )
          {
            v119 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
            if ( (char *)v119 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)Block);
            else
              v119();
          }
          if ( v157 )
          {
            v101 = v157->lpVtbl->Release;
            if ( (char *)v101 != (char *)CAudioMediaType::Release )
              goto LABEL_470;
            goto LABEL_482;
          }
          goto LABEL_103;
        }
        if ( Converter != -2005073917 )
        {
          v155 = 1;
          v166 = *(_DWORD *)(v23 + 4);
        }
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v1 + 16, v20);
        v17 = v159;
        goto LABEL_49;
      }
      if ( *((_DWORD *)v21 + 6) != 1 )
      {
        v22 = v24 != 0;
        goto LABEL_347;
      }
      ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
        &v170,
        *v25);
      v169 = 0;
      if ( !v170 || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v170 + 24LL))(v170, &v169) < 0 || (v169 & 1) == 0 )
      {
        v22 = v24 != 0;
LABEL_334:
        if ( v170 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v170 + 16LL))(v170);
        goto LABEL_132;
      }
      v102 = 0LL;
      v161 = 0LL;
      v168 = 0LL;
      Converter = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IAudioMediaType *, CAudioMediaType **))(*v25)->lpVtbl->IsInputFormatSupported)(
                    *v25,
                    0LL,
                    v153,
                    &v168);
      if ( Converter < 0 )
      {
        v22 = v152;
        goto LABEL_326;
      }
      v103 = *((_DWORD *)v21 + 6);
      v104 = (*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v168 + 40LL))(v168);
      Converter = CProcessNode::CreateDummyProcessNode(v103, v104, &v161);
      if ( Converter < 0 )
      {
        v22 = v152;
LABEL_324:
        v102 = v161;
LABEL_326:
        if ( v168 )
        {
          v116 = *(void (**)(void))(*(_QWORD *)v168 + 16LL);
          if ( (char *)v116 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release(v168);
          else
            v116();
        }
        if ( v102 )
          (**v102)(v102, 1LL);
        v161 = 0LL;
        goto LABEL_334;
      }
      try
      {
        v178 = v161;
        v162 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                           (char *)v154 + 16,
                           v20,
                           &v178);
      }
      catch ( ATL::CAtlException *v184 )
      {
        v86 = (int *)v184;
        if ( *(_DWORD *)v184 == -1073741571 )
          _o__resetstkoflw();
        Converter = *v86;
        if ( *v86 < 0 )
        {
          if ( v168 )
          {
            v105 = *(void (**)(void))(*(_QWORD *)v168 + 16LL);
            if ( (char *)v105 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release(v168);
            else
              v105();
          }
          if ( v161 )
            (**v161)(v161, 1LL);
          v161 = 0LL;
          if ( v170 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v170 + 16LL))(v170);
          if ( Block )
          {
            v106 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
            if ( (char *)v106 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)Block);
            else
              v106();
          }
          v107 = (CAudioMediaType *)v157;
          if ( !v157 )
            goto LABEL_513;
          v108 = v157->lpVtbl->Release;
          if ( (char *)v108 != (char *)CAudioMediaType::Release )
            goto LABEL_512;
          goto LABEL_495;
        }
        v21 = v179;
        v20 = v176;
        v23 = v177;
        v22 = v158;
        v154 = v163;
        goto LABEL_297;
      }
      v22 = v152;
LABEL_297:
      v161 = 0LL;
      v109 = *((_DWORD *)v21 + 6);
      v110 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v160->lpVtbl->GetAudioFormat)(v160);
      Converter = CProcessNode::CreateDummyProcessNode(v109, v110, &v161);
      if ( Converter >= 0 )
      {
        Converter = 0;
        try
        {
          v180 = v161;
          v113 = v154;
          v162 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                             (char *)v154 + 16,
                             v162,
                             &v180);
        }
        catch ( ATL::CAtlException *v185 )
        {
          v87 = (int *)v185[0];
          if ( *(_DWORD *)v185[0] == -1073741571 )
            _o__resetstkoflw();
          Converter = *v87;
          if ( *v87 < 0 )
          {
            if ( v168 )
            {
              v111 = *(void (**)(void))(*(_QWORD *)v168 + 16LL);
              if ( (char *)v111 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release(v168);
              else
                v111();
            }
            if ( v161 )
              (**v161)(v161, 1LL);
            v161 = 0LL;
            if ( v170 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v170 + 16LL))(v170);
            if ( Block )
            {
              v112 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
              if ( (char *)v112 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)Block);
              else
                v112();
            }
            v107 = (CAudioMediaType *)v157;
            if ( !v157 )
              goto LABEL_513;
            v108 = v157->lpVtbl->Release;
            if ( (char *)v108 != (char *)CAudioMediaType::Release )
              goto LABEL_512;
LABEL_495:
            CAudioMediaType::Release(v107);
LABEL_513:
            v1 = v163;
LABEL_514:
            if ( v167 )
              (**v167)(v167, 1LL);
            goto LABEL_103;
          }
          v20 = v176;
          v23 = v177;
          v22 = v158;
          v113 = v163;
          v154 = v163;
        }
        v114 = CAudioMediaType::Release;
        v161 = 0LL;
        *((_DWORD *)v113 + 33) |= 6u;
        *(_DWORD *)(v23 + 48) = 0;
        v162 = v20;
        if ( v168 )
        {
          v115 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v168 + 16LL);
          if ( v115 == CAudioMediaType::Release )
            CAudioMediaType::Release(v168);
          else
            ((void (__fastcall *)(CAudioMediaType *, unsigned int (__fastcall *)(CAudioMediaType *__hidden)))v115)(
              v168,
              CAudioMediaType::Release);
        }
        v161 = 0LL;
        if ( v170 )
          (*(void (__fastcall **)(__int64, unsigned int (__fastcall *)(CAudioMediaType *__hidden)))(*(_QWORD *)v170
                                                                                                  + 16LL))(
            v170,
            v114);
        v17 = v159;
        goto LABEL_49;
      }
      goto LABEL_324;
    }
    v72 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v21 + 40LL);
    if ( v72 == CProcessNode::IsLeftFormatSupported )
      v73 = CProcessNode::IsLeftFormatSupported(v21, v153, (struct IAudioMediaType **)&Block, 0LL);
    else
      v73 = ((__int64 (__fastcall *)(CAPOProcessNode *, struct IAudioMediaType *, void **, _QWORD))v72)(
              v21,
              v153,
              &Block,
              0LL);
    Converter = v73;
    if ( v73 < 0 )
    {
      if ( Block )
      {
        v122 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
        if ( (char *)v122 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)Block);
        else
          v122();
      }
      if ( v157 )
      {
        v101 = v157->lpVtbl->Release;
        if ( (char *)v101 != (char *)CAudioMediaType::Release )
          goto LABEL_470;
        goto LABEL_482;
      }
      goto LABEL_103;
    }
LABEL_31:
    if ( Converter == 1 )
    {
      v39 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v17 + 48LL);
      if ( (char *)v39 == (char *)CAPOProcessNode::IsRightFormatSupported )
      {
        IsRightFormatSupported = CAPOProcessNode::IsRightFormatSupported(
                                   v17,
                                   (struct IAudioMediaType *)Block,
                                   &v157,
                                   0LL);
      }
      else if ( v39 == CProcessNode::IsRightFormatSupported )
      {
        IsRightFormatSupported = CProcessNode::IsRightFormatSupported(v17, (struct IAudioMediaType *)Block, &v157, 0LL);
      }
      else
      {
        IsRightFormatSupported = ((__int64 (__fastcall *)(CProcessNode *, void *, struct IAudioMediaType **, _QWORD))v39)(
                                   v17,
                                   Block,
                                   &v157,
                                   0LL);
      }
      Converter = IsRightFormatSupported;
      if ( IsRightFormatSupported < 0 )
      {
        if ( Block )
        {
          v123 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
          if ( (char *)v123 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)Block);
          else
            v123();
        }
        if ( v157 )
        {
          v101 = v157->lpVtbl->Release;
          if ( (char *)v101 != (char *)CAudioMediaType::Release )
            goto LABEL_470;
          goto LABEL_482;
        }
        goto LABEL_103;
      }
      if ( !IsRightFormatSupported )
      {
        v74 = (CAudioMediaType *)v153;
        if ( v153 )
        {
          v153 = 0LL;
          v75 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v74 + 16LL);
          if ( v75 == CAudioMediaType::Release )
            CAudioMediaType::Release(v74);
          else
            v75(v74);
          v74 = (CAudioMediaType *)v153;
        }
        v76 = (struct IAudioMediaType *)Block;
        if ( v74 != Block )
        {
          if ( Block )
          {
            v77 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 8LL);
            if ( v77 == CAudioMediaType::AddRef )
              CAudioMediaType::AddRef((CAudioMediaType *)Block);
            else
              v77((CAudioMediaType *)Block);
            v74 = (CAudioMediaType *)v153;
          }
          if ( v74 )
            (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v74 + 16LL))(v74);
          v74 = (CAudioMediaType *)v76;
          v153 = v76;
        }
        v78 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v21 + 24LL);
        if ( (char *)v78 == (char *)CAPOProcessNode::SetLeftFormat )
        {
          CAPOProcessNode::SetLeftFormat(v21, (struct IAudioMediaType *)v74);
        }
        else if ( v78 == CProcessNode::SetRightFormat )
        {
          CProcessNode::SetRightFormat(v21, (struct IAudioMediaType *)v74);
        }
        else
        {
          ((void (__fastcall *)(CAPOProcessNode *, CAudioMediaType *))v78)(v21, v74);
        }
        v79 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v17 + 32LL);
        if ( v79 == CAPOProcessNode::SetRightFormat )
          CAPOProcessNode::SetRightFormat(v17, v153);
        else
          v79(v17, v153);
        if ( v22 )
        {
          v124 = *((_QWORD *)v21 + 4);
          if ( *(_DWORD *)(v124 + 4) )
          {
            if ( *(_DWORD *)(v124 + 48) )
            {
              ATL::CComPtrBase<IAudioProcessingObject>::Release(&v153);
              ATL::CComPtr<IAudioMediaType>::operator=((CAudioMediaType **)&v153, (CAudioMediaType **)&v160);
            }
          }
        }
        goto LABEL_46;
      }
      if ( IsRightFormatSupported != 1 )
        goto LABEL_47;
      v41 = (CAudioMediaType *)v153;
      if ( v153 )
      {
        v153 = 0LL;
        v42 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v41 + 16LL);
        if ( v42 == CAudioMediaType::Release )
          CAudioMediaType::Release(v41);
        else
          v42(v41);
        v41 = (CAudioMediaType *)v153;
      }
      v43 = v157;
      if ( v41 != (CAudioMediaType *)v157 )
      {
        if ( v157 )
        {
          AddRef = v157->lpVtbl->AddRef;
          if ( (char *)AddRef == (char *)CAudioMediaType::AddRef )
            CAudioMediaType::AddRef((CAudioMediaType *)v157);
          else
            ((void (__fastcall *)(struct IAudioMediaType *))AddRef)(v157);
          v41 = (CAudioMediaType *)v153;
        }
        if ( v41 )
          (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v41 + 16LL))(v41);
        v41 = (CAudioMediaType *)v43;
        v153 = v43;
      }
      v45 = 1;
      v46 = *(__int64 (__fastcall **)(CAudioMediaType *__hidden, struct _UNCOMPRESSEDAUDIOFORMAT *))(*(_QWORD *)Block + 48LL);
      if ( v46 == CAudioMediaType::GetUncompressedAudioFormat )
        UncompressedAudioFormat = CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)Block, &v198);
      else
        UncompressedAudioFormat = v46((CAudioMediaType *)Block, &v198);
      Converter = UncompressedAudioFormat;
      if ( UncompressedAudioFormat < 0 )
      {
        v1 = v154;
      }
      else
      {
        v48 = *(__int64 (__fastcall **)(CAudioMediaType *__hidden, struct _UNCOMPRESSEDAUDIOFORMAT *))(*(_QWORD *)v41 + 48LL);
        if ( v48 == CAudioMediaType::GetUncompressedAudioFormat )
          v49 = CAudioMediaType::GetUncompressedAudioFormat(v41, &v197);
        else
          v49 = v48(v41, &v197);
        Converter = v49;
        v1 = v154;
        if ( v49 >= 0 )
        {
          if ( v198.fFramesPerSecond != v197.fFramesPerSecond || (v85 = *((_DWORD *)v154 + 33), (v85 & 8) != 0) )
          {
            v50 = *((_DWORD *)v154 + 33);
            if ( (v50 & 2) != 0 )
            {
              v196 = GUID_27c98999_2895_4829_b080_5a8b65bd3db0;
              if ( (v50 & 8) != 0 )
                v45 = 0;
              *((_DWORD *)v154 + 33) = v50 & 0xFFFFFFF5;
LABEL_90:
              if ( Converter < 0 )
              {
                if ( Block )
                {
                  v125 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
                  if ( (char *)v125 == (char *)CAudioMediaType::Release )
                    CAudioMediaType::Release((CAudioMediaType *)Block);
                  else
                    v125();
                }
                if ( v157 )
                {
                  v101 = v157->lpVtbl->Release;
                  if ( (char *)v101 != (char *)CAudioMediaType::Release )
                    goto LABEL_470;
                  goto LABEL_482;
                }
                goto LABEL_103;
              }
              v194 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
              v150 = &v167;
              ppv = &v194;
              Converter = CAPOProcessNode::CreateAPOProcessNode(&v196, *((unsigned int *)v159 + 6), v45);
              if ( Converter < 0 )
              {
                if ( Block )
                {
                  v126 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
                  if ( (char *)v126 == (char *)CAudioMediaType::Release )
                    CAudioMediaType::Release((CAudioMediaType *)Block);
                  else
                    v126();
                }
                if ( v157 )
                {
                  v101 = v157->lpVtbl->Release;
                  if ( (char *)v101 != (char *)CAudioMediaType::Release )
                    goto LABEL_470;
                  goto LABEL_482;
                }
                goto LABEL_103;
              }
              Converter = 0;
              try
              {
                v51 = v167;
                v181 = v167;
                v52 = (__int64)v1 + 16;
                v185[1] = (ATL::CAtlException *)v52;
                if ( v20 )
                {
                  v186 = v20[1];
                  v53 = v186;
                  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(v52);
                  v54 = *(_QWORD **)(v52 + 32);
                  v187 = v54;
                  v188 = *v54;
                  v55 = v188;
                  v189 = v54;
                  v54[2] = v51;
                  *(_QWORD *)(v52 + 32) = v55;
                  v54[1] = v53;
                  *v54 = v20;
                  ++*(_QWORD *)(v52 + 16);
                  v56 = (_QWORD *)v20[1];
                  if ( v56 )
                    *v56 = v54;
                  else
                    *(_QWORD *)v52 = v54;
                  v20[1] = v54;
                  v182 = v54;
                }
                else
                {
                  v54 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHead(v52, &v181);
                  v182 = v54;
                }
                v162 = v54;
              }
              catch ( ATL::CAtlException *v190 )
              {
                v89 = (int *)v190;
                if ( *(_DWORD *)v190 == -1073741571 )
                  _o__resetstkoflw();
                Converter = *v89;
                if ( *v89 < 0 )
                {
                  if ( Block )
                  {
                    v127 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
                    if ( (char *)v127 == (char *)CAudioMediaType::Release )
                      CAudioMediaType::Release((CAudioMediaType *)Block);
                    else
                      v127();
                  }
                  v107 = (CAudioMediaType *)v157;
                  if ( !v157 )
                    goto LABEL_513;
                  v108 = v157->lpVtbl->Release;
                  if ( (char *)v108 != (char *)CAudioMediaType::Release )
                    goto LABEL_512;
                  goto LABEL_495;
                }
                v22 = v158;
                v154 = v163;
              }
              v17 = v159;
              v167 = 0LL;
              goto LABEL_49;
            }
          }
          else if ( v198.dwSamplesPerFrame == v197.dwSamplesPerFrame )
          {
            if ( (v85 & 1) != 0 )
            {
              v196 = GUID_3fd7f233_a716_472e_8f2f_c25954f34e96;
              goto LABEL_90;
            }
          }
          else if ( (v85 & 4) != 0 )
          {
            v196 = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
            *((_DWORD *)v154 + 33) = v85 & 0xFFFFFFFB;
            goto LABEL_90;
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
          &WPP_0100469152753b0964101f667eb0634c_Traceguids,
          (unsigned int)Converter);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::FindConverter", 0x8B4u, Converter);
      goto LABEL_90;
    }
    if ( !Converter )
    {
      v29 = v153;
      v30 = (volatile signed __int32 *)v153;
      v31 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v21 + 24LL);
      if ( (char *)v31 == (char *)CAPOProcessNode::SetLeftFormat )
      {
        v32 = (CAudioMediaType *)*((_QWORD *)v21 + 1);
        if ( v32 )
        {
          *((_QWORD *)v21 + 1) = 0LL;
          v80 = *(void (**)(void))(*(_QWORD *)v32 + 16LL);
          if ( (char *)v80 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release(v32);
          else
            v80();
          v29 = v153;
        }
        if ( *((volatile signed __int32 **)v21 + 1) == v30 )
          goto LABEL_43;
        if ( v30 )
        {
          v33 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v30 + 8LL);
          if ( v33 == CAudioMediaType::AddRef )
            _InterlockedIncrement(v30 + 2);
          else
            v33((CAudioMediaType *)v30);
        }
        v34 = *((_QWORD *)v21 + 1);
        if ( v34 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        *((_QWORD *)v21 + 1) = v30;
      }
      else if ( v31 == CProcessNode::SetRightFormat )
      {
        CProcessNode::SetRightFormat(v21, v153);
      }
      else
      {
        ((void (__fastcall *)(CAPOProcessNode *))v31)(v21);
      }
      v29 = v153;
LABEL_43:
      v35 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v17 + 32LL);
      if ( (char *)v35 == (char *)CAPOProcessNode::SetRightFormat )
      {
        CAPOProcessNode::SetRightFormat(v17, v29);
      }
      else if ( v35 == CProcessNode::SetRightFormat )
      {
        CProcessNode::SetRightFormat(v17, v29);
      }
      else
      {
        ((void (__fastcall *)(CProcessNode *))v35)(v17);
      }
      if ( v22 )
      {
        v67 = *((_QWORD *)v21 + 4);
        if ( *(_DWORD *)(v67 + 4) )
        {
          if ( *(_DWORD *)(v67 + 48) )
          {
            v68 = (CAudioMediaType *)v153;
            if ( v153 )
            {
              v153 = 0LL;
              v69 = *(void (**)(void))(*(_QWORD *)v68 + 16LL);
              if ( (char *)v69 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release(v68);
              else
                v69();
            }
            v70 = v160;
            if ( v153 != v160 )
            {
              if ( v160 )
              {
                v71 = v160->lpVtbl->AddRef;
                if ( (char *)v71 == (char *)CAudioMediaType::AddRef )
                  CAudioMediaType::AddRef((CAudioMediaType *)v160);
                else
                  ((void (__fastcall *)(struct IAudioMediaType *))v71)(v160);
              }
              if ( v153 )
                ((void (__fastcall *)(struct IAudioMediaType *))v153->lpVtbl->Release)(v153);
              v153 = v70;
            }
          }
        }
      }
LABEL_46:
      v1 = v154;
      goto LABEL_47;
    }
    if ( Converter < 0 )
    {
      if ( Block )
      {
        v128 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
        if ( (char *)v128 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)Block);
        else
          v128();
      }
      if ( v157 )
      {
        v129 = (void (*)(void))v157->lpVtbl->Release;
        if ( (char *)v129 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)v157);
        else
          v129();
      }
      goto LABEL_514;
    }
LABEL_47:
    if ( (*((_BYTE *)v1 + 132) & 8) == 0
      || (v130 = v153,
          v131 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v172->lpVtbl->GetAudioFormat)(v172),
          v132 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v130->lpVtbl->GetAudioFormat)(v130),
          !(unsigned int)CompareWaveFormat(v132, v131)) )
    {
      v17 = v21;
      v159 = v21;
      goto LABEL_49;
    }
    v165 = 0LL;
    Converter = (*(__int64 (__fastcall **)(CAPOProcessNode *, struct IAudioMediaType **))(*(_QWORD *)v21 + 8LL))(
                  v21,
                  &v165);
    if ( Converter < 0 )
    {
      if ( v165 )
      {
        v133 = (void (*)(void))v165->lpVtbl->Release;
        if ( (char *)v133 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)v165);
        else
          v133();
      }
      if ( Block )
      {
        v134 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
        if ( (char *)v134 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)Block);
        else
          v134();
      }
      if ( v157 )
      {
        v135 = (void (*)(void))v157->lpVtbl->Release;
        if ( (char *)v135 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)v157);
        else
          v135();
      }
      v1 = v154;
      goto LABEL_103;
    }
    v1 = v154;
    Converter = CPipeInstance::FindConverter(v154, v165, v165, &v173, &v196);
    if ( Converter < 0 )
    {
      if ( v165 )
      {
        v136 = (void (*)(void))v165->lpVtbl->Release;
        if ( (char *)v136 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)v165);
        else
          v136();
      }
      if ( Block )
      {
        v137 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
        if ( (char *)v137 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)Block);
        else
          v137();
      }
      if ( v157 )
      {
        v101 = v157->lpVtbl->Release;
        if ( (char *)v101 == (char *)CAudioMediaType::Release )
          goto LABEL_482;
        goto LABEL_470;
      }
      goto LABEL_103;
    }
    v195 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v150 = &v167;
    ppv = &v195;
    v17 = v159;
    Converter = CAPOProcessNode::CreateAPOProcessNode(&v196, *((unsigned int *)v159 + 6), (unsigned int)v173);
    if ( Converter < 0 )
      break;
    Converter = 0;
    try
    {
      v183[0] = v167;
      v162 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                         (char *)v1 + 16,
                         v20,
                         v183);
    }
    catch ( ATL::CAtlException *v191 )
    {
      v88 = (int *)v191;
      if ( *(_DWORD *)v191 == -1073741571 )
        _o__resetstkoflw();
      Converter = *v88;
      if ( *v88 < 0 )
      {
        if ( v165 )
        {
          v140 = (void (*)(void))v165->lpVtbl->Release;
          if ( (char *)v140 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v165);
          else
            v140();
        }
        if ( Block )
        {
          v141 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
          if ( (char *)v141 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)Block);
          else
            v141();
        }
        v107 = (CAudioMediaType *)v157;
        if ( !v157 )
          goto LABEL_513;
        v108 = v157->lpVtbl->Release;
        if ( (char *)v108 == (char *)CAudioMediaType::Release )
          goto LABEL_495;
LABEL_512:
        ((void (*)(void))v108)();
        goto LABEL_513;
      }
      v22 = v158;
      v17 = v159;
      v154 = v163;
    }
    v167 = 0LL;
    ATL::CComPtr<IAudioMediaType>::operator=((CAudioMediaType **)&v153, (CAudioMediaType **)&v165);
    if ( v165 )
    {
      v142 = (void (*)(void))v165->lpVtbl->Release;
      if ( (char *)v142 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v165);
      else
        v142();
    }
LABEL_49:
    if ( Converter < 0 && v22 )
    {
      v143 = *((_DWORD *)v17 + 6);
      v144 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v160->lpVtbl->GetAudioFormat)(v160);
      v145 = CProcessNode::CreateDummyProcessNode(v143, v144, &v171);
      if ( v145 < 0 )
      {
        pExceptionObject = v145;
        throw (long *)&pExceptionObject;
      }
      (*(void (__fastcall **)(__int64, struct IAudioMediaType *))(*(_QWORD *)v171 + 24LL))(v171, v160);
      Converter = 0;
      try
      {
        v162 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                           (char *)v154 + 16,
                           v162,
                           &v171);
      }
      catch ( ATL::CAtlException *v192 )
      {
        v90 = (int *)v192;
        if ( *(_DWORD *)v192 == -1073741571 )
          _o__resetstkoflw();
        Converter = *v90;
        if ( *v90 < 0 )
        {
          if ( Block )
          {
            v146 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
            if ( (char *)v146 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)Block);
            else
              v146();
          }
          v107 = (CAudioMediaType *)v157;
          if ( !v157 )
            goto LABEL_513;
          v108 = v157->lpVtbl->Release;
          if ( (char *)v108 != (char *)CAudioMediaType::Release )
            goto LABEL_512;
          goto LABEL_495;
        }
        v154 = v163;
      }
      v17 = v159;
      v171 = 0LL;
    }
    v36 = (volatile signed __int32 *)Block;
    if ( Block )
    {
      Block = 0LL;
      v37 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v36 + 16LL);
      if ( v37 == CAudioMediaType::Release )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          *(_QWORD *)v36 = &CAudioMediaType::`vftable';
          operator delete(*((void **)v36 + 2));
          *((_QWORD *)v36 + 2) = 0LL;
          operator delete((void *)v36);
        }
      }
      else
      {
        v37((CAudioMediaType *)v36);
      }
    }
    v38 = (CAudioMediaType *)v157;
    if ( v157 )
    {
      v157 = 0LL;
      v57 = *(void (**)(void))(*(_QWORD *)v38 + 16LL);
      if ( (char *)v57 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release(v38);
      else
        v57();
    }
    if ( Block )
      (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
    if ( v157 )
      ((void (__fastcall *)(struct IAudioMediaType *))v157->lpVtbl->Release)(v157);
    v1 = v154;
  }
  if ( v165 )
  {
    v138 = (void (*)(void))v165->lpVtbl->Release;
    if ( (char *)v138 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v165);
    else
      v138();
  }
  if ( Block )
  {
    v139 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
    if ( (char *)v139 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)Block);
    else
      v139();
  }
  if ( v157 )
  {
    v101 = v157->lpVtbl->Release;
    if ( (char *)v101 == (char *)CAudioMediaType::Release )
      goto LABEL_482;
LABEL_470:
    ((void (*)(void))v101)();
  }
LABEL_103:
  if ( !v155 )
    goto LABEL_104;
  v147 = TrackSystemEffectBehavior(*((_QWORD *)v1 + 23), v166, 0, 0, (__int64)ppv);
  if ( v147 >= 0 )
    goto LABEL_104;
  v59 = WPP_GLOBAL_Control;
  v7 = &WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        32LL,
        &WPP_0100469152753b0964101f667eb0634c_Traceguids,
        (unsigned int)v147);
      goto LABEL_104;
    }
LABEL_105:
    if ( v59 != &WPP_GLOBAL_Control && (*((_DWORD *)v59 + 7) & 0x20000) != 0 && *((_BYTE *)v59 + 25) >= 4u )
    {
      v148 = "SUCCEEDED";
      if ( Converter < 0 )
        v148 = "FAILED";
      WPP_SF_qs(v59[2], 33, (_DWORD)v7, (_DWORD)v1, (__int64)v148);
      v59 = WPP_GLOBAL_Control;
    }
  }
  if ( Converter < 0 )
  {
    if ( v59 != &WPP_GLOBAL_Control && (*((_DWORD *)v59 + 7) & 0x20000) != 0 && *((_BYTE *)v59 + 25) >= 2u )
      WPP_SF_D(v59[2], 34LL, &WPP_0100469152753b0964101f667eb0634c_Traceguids, (unsigned int)Converter);
    AudDGTraceLoggingErrorHelper("CPipeInstance::ResolveFormatConflictsLeftRight", 0x838u, Converter);
  }
  if ( v175 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v175 + 16LL))(v175);
  if ( v172 )
  {
    v60 = v172->lpVtbl->Release;
    if ( (char *)v60 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v172);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v60)(v172);
  }
  if ( v160 )
  {
    v61 = (void (*)(void))v160->lpVtbl->Release;
    if ( (char *)v61 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v160);
    else
      v61();
  }
  if ( v153 )
  {
    v62 = (void (*)(void))v153->lpVtbl->Release;
    if ( (char *)v62 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v153);
    else
      v62();
  }
  return (unsigned int)Converter;
}
