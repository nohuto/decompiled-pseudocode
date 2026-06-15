/*
 * XREFs of ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BC70
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140007C50 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B9C0 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x14000BB78 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000DCB0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14000DD10 (-GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
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
 *     ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x1400116C0 (-InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1400143E0 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140015384 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14001B070 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x14001B990 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x14001B9A0 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x14001CB20 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _wcsicmp @ 0x14001DC14 (_wcsicmp.c)
 *     _CxxThrowException_0 @ 0x14001E752 (_CxxThrowException_0.c)
 *     memcpy_0 @ 0x14001E75E (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x14003077C (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     ?AddHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140030E14 (-AddHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?InsertAfter@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140030E44 (-InsertAfter@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPE.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140030E94 (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140030EE8 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140034E94 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     WPP_SF_q @ 0x14003651C (WPP_SF_q.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140036954 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14003ECB8 (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14003ED34 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     WPP_SF__guid_ @ 0x14003FBC8 (WPP_SF__guid_.c)
 *     WPP_SF_qs @ 0x14003FBF4 (WPP_SF_qs.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140046F74 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CPipeInstance::ResolveFormatConflictsLeftRight(CPipeInstance *this)
{
  CPipeInstance *v1; // r13
  __int64 v2; // rcx
  __int64 v3; // rax
  CProcessNode *v4; // rcx
  __int64 (__fastcall *v5)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int RightFormat; // eax
  int v7; // r8d
  int Common; // edi
  __int64 (*Release)(void); // rax
  const struct tWAVEFORMATEX *AudioFormat; // rax
  const struct tWAVEFORMATEX *v11; // r15
  __int64 cbSize; // rdi
  char *v13; // rax
  char *v14; // rbx
  __int16 v15; // cx
  __int64 v16; // rax
  __int64 v17; // rcx
  CProcessNode *v18; // r12
  __int64 (__fastcall *v19)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int v20; // eax
  struct IUnknownVtbl *v21; // rdx
  CAudioMediaType **v22; // r15
  int v23; // r13d
  CAudioMediaType *v24; // r14
  unsigned int v25; // ebx
  struct IAudioProcessingObject **v26; // r12
  int v27; // eax
  __int64 (__fastcall *v28)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int v29; // eax
  struct IUnknown *v30; // rdx
  struct IAudioMediaType *v31; // rdx
  volatile signed __int32 *v32; // rbx
  void (__fastcall *v33)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  CAudioMediaType *v34; // rcx
  unsigned int (__fastcall *v35)(CAudioMediaType *__hidden); // rax
  CAudioMediaType *v36; // rcx
  void (*v37)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  struct IUnknown *v38; // r14
  int v39; // r12d
  CProcessNode *v40; // rbx
  volatile signed __int32 *v41; // rbx
  unsigned int (__fastcall *v42)(CAudioMediaType *__hidden); // rax
  CAudioMediaType *v43; // rcx
  int (*v44)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int IsRightFormatSupported; // eax
  void (*v46)(void); // rax
  void (__fastcall *v47)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  _QWORD *v48; // rcx
  ULONG (__stdcall *v49)(IAudioMediaType *); // rax
  void (*v50)(void); // rax
  void (*v51)(void); // rax
  __int64 result; // rax
  int v53; // eax
  __int64 (__fastcall *v54)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int v55; // eax
  int (*v56)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int IsLeftFormatSupported; // eax
  struct IUnknown *v58; // rdx
  ULONG (__stdcall *v59)(IUnknown *); // rax
  struct IUnknown *v60; // rbx
  unsigned int (__fastcall *v61)(CAudioMediaType *__hidden); // rax
  void (*v62)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  void (__fastcall *v63)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  ULONG (__stdcall *v64)(IUnknown *); // rax
  struct IAudioMediaType *v65; // rbx
  ULONG (__stdcall *v66)(IAudioMediaType *); // rax
  int v67; // r13d
  __int64 (__fastcall *v68)(CAudioMediaType *__hidden, struct _UNCOMPRESSEDAUDIOFORMAT *); // rax
  CAudioMediaType *v69; // rax
  ULONG (__stdcall *v70)(IUnknown *); // rax
  struct IUnknown *v71; // r12
  ULONG (__stdcall *AddRef)(IUnknown *); // rax
  void (*v73)(void); // rax
  __int64 (__fastcall *QueryInterface)(CAudioMediaType *__hidden, struct _UNCOMPRESSEDAUDIOFORMAT *); // rax
  int v75; // eax
  int v76; // ecx
  int v77; // r12d
  int v78; // r15d
  LSTATUS v79; // eax
  DWORD v80; // ebx
  HKEY v81; // r14
  LSTATUS v82; // eax
  ULONG (__stdcall *v83)(IUnknown *); // rax
  ULONG (__stdcall *v84)(IUnknown *); // rbx
  char *v85; // rax
  ULONG (__stdcall *v86)(IUnknown *); // r14
  char *v87; // rbx
  ULONG (__stdcall *lpVtbl)(IUnknown *); // r15
  struct IUnknownVtbl *v89; // rax
  HRESULT (__stdcall *v90)(IUnknown *, const IID *const, void **); // rcx
  struct IUnknownVtbl *v91; // rcx
  LSTATUS v92; // eax
  LSTATUS v93; // eax
  CLSID *v94; // rcx
  APO_REG_PROPERTIES *v95; // rax
  __int64 v96; // rdx
  __int64 Head; // rax
  CProcessNode *v98; // rcx
  __int64 (__fastcall *v99)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int LeftFormat; // eax
  int UncompressedAudioFormat; // eax
  int v102; // eax
  ATL::CAtlException *v103; // rbx
  ATL::CAtlException *v104; // rbx
  ATL::CAtlException *v105; // rbx
  ATL::CAtlException *v106; // rbx
  ATL::CAtlException *v107; // rbx
  int v108; // ecx
  void (*v109)(void); // rax
  CAudioMediaType *v110; // rcx
  void (*v111)(void); // rax
  void (*v112)(void); // rax
  CAudioMediaType *v113; // rcx
  unsigned int (__fastcall *v114)(CAudioMediaType *__hidden); // rax
  ULONG (__stdcall *v115)(IAudioMediaType *); // rax
  void (__fastcall ***v116)(_QWORD, __int64); // rbx
  unsigned int v117; // ebx
  __int64 v118; // rax
  void (*v119)(void); // rax
  void (*v120)(void); // rax
  CAudioMediaType *v121; // rcx
  unsigned int (__fastcall *v122)(CAudioMediaType *__hidden); // rax
  void (*v123)(void); // rax
  unsigned int v124; // ebx
  __int64 v125; // rax
  struct IUnknown *v126; // rax
  void (*v127)(void); // rax
  void (*v128)(void); // rax
  void (*v129)(void); // rax
  CAudioMediaType *v130; // rax
  void (*v131)(void); // rax
  void (*v132)(void); // rax
  const struct tWAVEFORMATEX *v133; // rbx
  const struct tWAVEFORMATEX *v134; // rax
  void (*v135)(void); // rax
  void (*v136)(void); // rax
  CAudioMediaType *v137; // rcx
  struct IUnknown *v138; // rcx
  ULONG (__stdcall *v139)(IUnknown *); // rax
  void (*v140)(void); // rax
  void (*v141)(void); // rax
  struct ATL::CAtlPlex *v142; // rax
  char *v143; // r9
  void (*v144)(void); // rax
  void (*v145)(void); // rax
  unsigned int v146; // ebx
  __int64 v147; // rax
  int v148; // eax
  int v149; // eax
  const char *v150; // rax
  _BYTE v151[32]; // [rsp+0h] [rbp-F78h] BYREF
  LPVOID *ppv; // [rsp+20h] [rbp-F58h]
  LPWSTR lpClass; // [rsp+28h] [rbp-F50h]
  LPDWORD lpcchClass; // [rsp+30h] [rbp-F48h]
  int v155; // [rsp+40h] [rbp-F38h]
  CPipeInstance *v156; // [rsp+48h] [rbp-F30h]
  struct IUnknown *v157; // [rsp+50h] [rbp-F28h] BYREF
  char v158; // [rsp+58h] [rbp-F20h]
  void *Block; // [rsp+60h] [rbp-F18h] BYREF
  char v160; // [rsp+68h] [rbp-F10h]
  struct IAudioMediaType *v161; // [rsp+70h] [rbp-F08h] BYREF
  CProcessNode *v162; // [rsp+78h] [rbp-F00h]
  CPipeInstance *v163; // [rsp+80h] [rbp-EF8h]
  int v164; // [rsp+88h] [rbp-EF0h]
  struct IUnknown *v165; // [rsp+90h] [rbp-EE8h] BYREF
  void (__fastcall ***v166)(_QWORD, __int64); // [rsp+98h] [rbp-EE0h] BYREF
  struct IUnknownVtbl *v167; // [rsp+A0h] [rbp-ED8h]
  struct IUnknown *v168; // [rsp+A8h] [rbp-ED0h]
  struct IUnknown *v169; // [rsp+B0h] [rbp-EC8h] BYREF
  DWORD cchName; // [rsp+B8h] [rbp-EC0h] BYREF
  unsigned int v171; // [rsp+BCh] [rbp-EBCh]
  ULONG (__stdcall *v172)(IUnknown *); // [rsp+C0h] [rbp-EB8h] BYREF
  CAudioMediaType *v173; // [rsp+C8h] [rbp-EB0h] BYREF
  int v174; // [rsp+D0h] [rbp-EA8h] BYREF
  int v175; // [rsp+D4h] [rbp-EA4h]
  __int64 v176; // [rsp+D8h] [rbp-EA0h] BYREF
  LPOLESTR lpsz; // [rsp+E0h] [rbp-E98h] BYREF
  __int64 v178; // [rsp+E8h] [rbp-E90h] BYREF
  struct IAudioMediaType *v179; // [rsp+F0h] [rbp-E88h] BYREF
  int v180; // [rsp+F8h] [rbp-E80h]
  int v181; // [rsp+FCh] [rbp-E7Ch] BYREF
  int v182; // [rsp+100h] [rbp-E78h]
  int pExceptionObject; // [rsp+104h] [rbp-E74h] BYREF
  LPVOID v184; // [rsp+108h] [rbp-E70h] BYREF
  HKEY hKey; // [rsp+110h] [rbp-E68h] BYREF
  struct IMMDevice *v186; // [rsp+118h] [rbp-E60h] BYREF
  char *v187; // [rsp+120h] [rbp-E58h]
  struct IUnknown *v188; // [rsp+128h] [rbp-E50h]
  CAudioMediaType *v189; // [rsp+130h] [rbp-E48h]
  HKEY phkResult; // [rsp+138h] [rbp-E40h] BYREF
  DWORD Type; // [rsp+140h] [rbp-E38h] BYREF
  void (__fastcall ***v192)(_QWORD, __int64); // [rsp+148h] [rbp-E30h] BYREF
  CAudioMediaType **v193; // [rsp+150h] [rbp-E28h]
  void (__fastcall ***v194)(_QWORD, __int64); // [rsp+158h] [rbp-E20h] BYREF
  ULONG (__stdcall *v195)(IUnknown *); // [rsp+160h] [rbp-E18h] BYREF
  ULONG (__stdcall *v196)(IUnknown *); // [rsp+168h] [rbp-E10h] BYREF
  struct IUnknownVtbl *v197; // [rsp+170h] [rbp-E08h]
  __int64 v198; // [rsp+178h] [rbp-E00h]
  ATL::CAtlException *v199; // [rsp+180h] [rbp-DF8h] BYREF
  ATL::CAtlException *v200; // [rsp+188h] [rbp-DF0h] BYREF
  ATL::CAtlException *v201; // [rsp+190h] [rbp-DE8h] BYREF
  struct _FILETIME ftLastWriteTime; // [rsp+198h] [rbp-DE0h] BYREF
  ULONG (__stdcall *v203)(IUnknown *); // [rsp+1A0h] [rbp-DD8h]
  char *v204; // [rsp+1A8h] [rbp-DD0h]
  char *v205; // [rsp+1B0h] [rbp-DC8h]
  struct IUnknown *v206; // [rsp+1B8h] [rbp-DC0h]
  ULONG (__stdcall *v207)(IUnknown *); // [rsp+1C0h] [rbp-DB8h]
  struct ATL::CAtlPlex *v208; // [rsp+1C8h] [rbp-DB0h]
  struct IUnknownVtbl *v209; // [rsp+1D0h] [rbp-DA8h]
  HRESULT (__stdcall *v210)(IUnknown *, const IID *const, void **); // [rsp+1D8h] [rbp-DA0h]
  struct IUnknownVtbl *v211; // [rsp+1E0h] [rbp-D98h]
  ATL::CAtlException *v212; // [rsp+1E8h] [rbp-D90h] BYREF
  ATL::CAtlException *v213; // [rsp+1F0h] [rbp-D88h] BYREF
  struct _GUID v214; // [rsp+200h] [rbp-D78h] BYREF
  GUID v215; // [rsp+210h] [rbp-D68h] BYREF
  __int128 v216; // [rsp+220h] [rbp-D58h] BYREF
  int v217; // [rsp+230h] [rbp-D48h]
  int v218; // [rsp+640h] [rbp-938h]
  int v219; // [rsp+648h] [rbp-930h]
  IID rclsid; // [rsp+670h] [rbp-908h] BYREF
  GUID pclsid; // [rsp+680h] [rbp-8F8h] BYREF
  struct _UNCOMPRESSEDAUDIOFORMAT v222; // [rsp+690h] [rbp-8E8h] BYREF
  struct _UNCOMPRESSEDAUDIOFORMAT v223; // [rsp+6B8h] [rbp-8C0h] BYREF
  APO_REG_PROPERTIES v224; // [rsp+6E0h] [rbp-898h] BYREF
  WCHAR Name[512]; // [rsp+B30h] [rbp-448h] BYREF

  v198 = -2LL;
  v1 = this;
  v156 = this;
  v163 = this;
  v172 = 0LL;
  v178 = 0LL;
  v160 = 0;
  v158 = 0;
  v157 = 0LL;
  v165 = 0LL;
  v179 = 0LL;
  v184 = 0LL;
  v186 = 0LL;
  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    Head = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(v2 + 16);
    v98 = *(CProcessNode **)Head;
    v99 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(**(_QWORD **)Head + 8LL);
    if ( v99 == CProcessNode::GetLeftFormat )
      LeftFormat = CProcessNode::GetLeftFormat(v98, (struct IAudioMediaType **)&v165);
    else
      LeftFormat = v99(v98, (struct IAudioMediaType **)&v165);
    Common = LeftFormat;
    if ( LeftFormat < 0 )
      goto LABEL_75;
  }
  else
  {
    v3 = *((_QWORD *)v1 + 3);
    if ( !v3 )
      ATL::AtlThrowImpl(-2147467259);
    v4 = *(CProcessNode **)(v3 + 16);
    v5 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v4 + 16LL);
    if ( v5 == CProcessNode::GetRightFormat )
      RightFormat = CProcessNode::GetRightFormat(v4, (struct IAudioMediaType **)&v165);
    else
      RightFormat = v5(v4, (struct IAudioMediaType **)&v165);
    Common = RightFormat;
    if ( RightFormat < 0 )
      goto LABEL_75;
  }
  Release = (__int64 (*)(void))v165->lpVtbl[1].Release;
  if ( (char *)Release == (char *)CAudioMediaType::GetAudioFormat )
    AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v165);
  else
    AudioFormat = (const struct tWAVEFORMATEX *)Release();
  v11 = AudioFormat;
  cbSize = AudioFormat->cbSize;
  v13 = (char *)CoTaskMemAlloc(cbSize + 18);
  v14 = v13;
  if ( !v13 )
  {
    Common = -2147024882;
LABEL_75:
    v48 = WPP_GLOBAL_Control;
    goto LABEL_76;
  }
  memcpy_0(v13, v11, cbSize + 18);
  v15 = *(_WORD *)v14;
  if ( *(_WORD *)v14 == 1 )
    goto LABEL_241;
  if ( v15 == -2 )
  {
    v16 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v14 + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v14 + 3) )
      v16 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v14 + 4);
    if ( !v16 )
    {
LABEL_241:
      if ( v15 != -2 || (v14[18] & 7) == 0 )
      {
        if ( v15 == 1 )
        {
          *(_WORD *)v14 = 3;
        }
        else
        {
          *(GUID *)(v14 + 24) = GUID_00000003_0000_0010_8000_00aa00389b71;
          *((_WORD *)v14 + 9) = 32;
        }
        *((_WORD *)v14 + 7) = 32;
        v108 = (unsigned __int16)(4 * *((_WORD *)v14 + 1));
        *((_WORD *)v14 + 6) = v108;
        *((_DWORD *)v14 + 2) = v108 * *((_DWORD *)v14 + 1);
      }
    }
  }
  Common = CAudioMediaType::Create(
             (const struct tWAVEFORMATEX *)v14,
             (unsigned int)*((unsigned __int16 *)v14 + 8) + 18,
             &v179,
             0.0,
             0);
  CoTaskMemFree(v14);
  if ( Common < 0 )
    goto LABEL_75;
  v17 = *((_QWORD *)v1 + 2);
  v167 = (struct IUnknownVtbl *)v17;
  if ( !v17 )
    ATL::AtlThrowImpl(-2147467259);
  v167 = *(struct IUnknownVtbl **)v17;
  v18 = *(CProcessNode **)(v17 + 16);
  v162 = v18;
  v19 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v18 + 16LL);
  v20 = v19 == CProcessNode::GetRightFormat
      ? CProcessNode::GetRightFormat(v18, (struct IAudioMediaType **)&v157)
      : v19(v18, (struct IAudioMediaType **)&v157);
  Common = v20;
  if ( v20 < 0 )
    goto LABEL_75;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids, v1);
  }
  while ( 1 )
  {
    v21 = v167;
    v168 = (struct IUnknown *)v167;
    if ( !v167 )
    {
      v47 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v18 + 32LL);
      if ( v47 == CAPOProcessNode::SetRightFormat )
        CAPOProcessNode::SetRightFormat(v18, (struct IAudioMediaType *)v157);
      else
        ((void (__fastcall *)(CProcessNode *, struct IUnknown *, __int64 (__fastcall *)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *), int (*)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *)))v47)(
          v18,
          v157,
          CAPOProcessNode::IsLeftFormatSupported,
          CProcessNode::IsLeftFormatSupported);
      goto LABEL_74;
    }
    v161 = 0LL;
    Block = 0LL;
    v188 = (struct IUnknown *)v167;
    v167 = (struct IUnknownVtbl *)v167->QueryInterface;
    v22 = (CAudioMediaType **)v21->Release;
    v193 = v22;
    v23 = 0;
    v155 = 0;
    v164 = 0;
    if ( *((_DWORD *)v22 + 10) == 2 )
      break;
    v56 = (int (*)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))*((_QWORD *)*v22 + 5);
    if ( v56 == CProcessNode::IsLeftFormatSupported )
      IsLeftFormatSupported = CProcessNode::IsLeftFormatSupported(
                                (CProcessNode *)v22,
                                (struct IAudioMediaType *)v157,
                                (struct IAudioMediaType **)&Block,
                                0LL);
    else
      IsLeftFormatSupported = ((__int64 (__fastcall *)(CAudioMediaType **, struct IUnknown *, void **, _QWORD))v56)(
                                v22,
                                v157,
                                &Block,
                                0LL);
    Common = IsLeftFormatSupported;
    if ( IsLeftFormatSupported < 0 )
    {
LABEL_266:
      if ( Block )
      {
        v112 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
        if ( (char *)v112 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)Block);
        else
          v112();
      }
      v110 = (CAudioMediaType *)v161;
      if ( !v161 )
        goto LABEL_487;
      v111 = (void (*)(void))v161->lpVtbl->Release;
      if ( (char *)v111 != (char *)CAudioMediaType::Release )
      {
LABEL_272:
        v111();
        goto LABEL_487;
      }
LABEL_255:
      CAudioMediaType::Release(v110);
LABEL_487:
      v1 = v156;
      goto LABEL_74;
    }
LABEL_33:
    if ( Common != 1 )
    {
      if ( Common )
      {
        if ( Common < 0 )
        {
          if ( Block )
          {
            v131 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
            if ( (char *)v131 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)Block);
            else
              v131();
          }
          if ( v161 )
          {
            v132 = (void (*)(void))v161->lpVtbl->Release;
            if ( (char *)v132 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v161);
            else
              v132();
          }
          v1 = v156;
          goto LABEL_482;
        }
        goto LABEL_48;
      }
      v31 = (struct IAudioMediaType *)v157;
      v32 = (volatile signed __int32 *)v157;
      v33 = (void (__fastcall *)(CAPOProcessNode *__hidden, struct IAudioMediaType *))*((_QWORD *)*v22 + 3);
      if ( v33 == CAPOProcessNode::SetLeftFormat )
      {
        v34 = v22[1];
        if ( v34 )
        {
          v22[1] = 0LL;
          v73 = *(void (**)(void))(*(_QWORD *)v34 + 16LL);
          if ( (char *)v73 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release(v34);
          else
            v73();
          v31 = (struct IAudioMediaType *)v157;
        }
        if ( v22[1] == (CAudioMediaType *)v32 )
          goto LABEL_45;
        if ( v32 )
        {
          v35 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v32 + 8LL);
          if ( v35 == CAudioMediaType::AddRef )
            _InterlockedIncrement(v32 + 2);
          else
            v35((CAudioMediaType *)v32);
        }
        v36 = v22[1];
        if ( v36 )
          (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v36 + 16LL))(v36);
        v22[1] = (CAudioMediaType *)v32;
      }
      else
      {
        ((void (__fastcall *)(CAudioMediaType **))v33)(v22);
      }
      v31 = (struct IAudioMediaType *)v157;
LABEL_45:
      v37 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v18 + 32LL);
      if ( (char *)v37 == (char *)CAPOProcessNode::SetRightFormat )
      {
        CAPOProcessNode::SetRightFormat(v18, v31);
      }
      else if ( v37 == CProcessNode::SetRightFormat )
      {
        CProcessNode::SetRightFormat(v18, v31);
      }
      else
      {
        ((void (__fastcall *)(CProcessNode *))v37)(v18);
      }
      if ( !v23 )
        goto LABEL_48;
      v69 = v22[4];
      if ( !*((_DWORD *)v69 + 1) || !*((_DWORD *)v69 + 12) )
        goto LABEL_48;
      v38 = v157;
      if ( v157 )
      {
        v157 = 0LL;
        v70 = v38->lpVtbl->Release;
        if ( (char *)v70 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)v38);
        else
          ((void (__fastcall *)(struct IUnknown *))v70)(v38);
        v38 = v157;
      }
      v71 = v165;
      if ( v38 != v165 )
      {
        if ( v165 )
        {
          AddRef = v165->lpVtbl->AddRef;
          if ( (char *)AddRef == (char *)CAudioMediaType::AddRef )
            CAudioMediaType::AddRef((CAudioMediaType *)v165);
          else
            ((void (__fastcall *)(struct IUnknown *))AddRef)(v165);
          v38 = v157;
        }
        if ( v38 )
          ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
        v38 = v71;
        v157 = v71;
      }
      goto LABEL_49;
    }
    v44 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v18 + 48LL);
    if ( (char *)v44 == (char *)CAPOProcessNode::IsRightFormatSupported )
    {
      IsRightFormatSupported = CAPOProcessNode::IsRightFormatSupported(v18, (struct IAudioMediaType *)Block, &v161, 0LL);
    }
    else if ( v44 == CProcessNode::IsRightFormatSupported )
    {
      IsRightFormatSupported = CProcessNode::IsRightFormatSupported(v18, (struct IAudioMediaType *)Block, &v161, 0LL);
    }
    else
    {
      IsRightFormatSupported = ((__int64 (__fastcall *)(CProcessNode *, void *, struct IAudioMediaType **, _QWORD))v44)(
                                 v18,
                                 Block,
                                 &v161,
                                 0LL);
    }
    Common = IsRightFormatSupported;
    if ( IsRightFormatSupported < 0 )
      goto LABEL_266;
    if ( IsRightFormatSupported )
    {
      if ( IsRightFormatSupported == 1 )
      {
        v38 = v157;
        if ( v157 )
        {
          v157 = 0LL;
          v64 = v38->lpVtbl->Release;
          if ( (char *)v64 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v38);
          else
            ((void (__fastcall *)(struct IUnknown *))v64)(v38);
          v38 = v157;
        }
        v65 = v161;
        if ( v38 != (struct IUnknown *)v161 )
        {
          if ( v161 )
          {
            v66 = v161->lpVtbl->AddRef;
            if ( (char *)v66 == (char *)CAudioMediaType::AddRef )
              CAudioMediaType::AddRef((CAudioMediaType *)v161);
            else
              ((void (__fastcall *)(struct IAudioMediaType *))v66)(v161);
            v38 = v157;
          }
          if ( v38 )
            ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
          v38 = (struct IUnknown *)v65;
          v157 = (struct IUnknown *)v65;
        }
LABEL_144:
        v67 = 1;
        v68 = *(__int64 (__fastcall **)(CAudioMediaType *__hidden, struct _UNCOMPRESSEDAUDIOFORMAT *))(*(_QWORD *)Block + 48LL);
        if ( v68 == CAudioMediaType::GetUncompressedAudioFormat )
          UncompressedAudioFormat = CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)Block, &v223);
        else
          UncompressedAudioFormat = v68((CAudioMediaType *)Block, &v223);
        Common = UncompressedAudioFormat;
        if ( UncompressedAudioFormat >= 0 )
        {
          QueryInterface = (__int64 (__fastcall *)(CAudioMediaType *__hidden, struct _UNCOMPRESSEDAUDIOFORMAT *))v38->lpVtbl[2].QueryInterface;
          v75 = QueryInterface == CAudioMediaType::GetUncompressedAudioFormat
              ? CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)v38, &v222)
              : QueryInterface((CAudioMediaType *)v38, &v222);
          Common = v75;
          if ( v75 >= 0 )
          {
            if ( v223.fFramesPerSecond != v222.fFramesPerSecond || (v76 = *((_DWORD *)v156 + 33), (v76 & 8) != 0) )
            {
              v102 = *((_DWORD *)v156 + 33);
              if ( (v102 & 2) != 0 )
              {
                rclsid = GUID_27c98999_2895_4829_b080_5a8b65bd3db0;
                if ( (v102 & 8) != 0 )
                  v67 = 0;
                *((_DWORD *)v156 + 33) = v102 & 0xFFFFFFF5;
LABEL_173:
                if ( Common < 0 )
                  goto LABEL_266;
                v77 = *((_DWORD *)v18 + 6);
                if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                  && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF__guid_(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    18LL,
                    &WPP_a00fb4be71793c9c12457d7c93fa59d1_Traceguids,
                    &rclsid);
                }
                v78 = 0;
                v79 = RegOpenKeyExW(HKEY_CLASSES_ROOT, L"AudioEngine\\AudioProcessingObjects", 0, 0x20019u, &phkResult);
                Common = v79;
                if ( v79 )
                {
                  if ( v79 > 0 )
                    Common = (unsigned __int16)v79 | 0x80070000;
                }
                else
                {
                  v80 = 0;
                  do
                  {
                    v81 = phkResult;
                    lpsz = 0LL;
                    v78 = 0;
                    cchName = 512;
                    v82 = RegEnumKeyExW(phkResult, v80, Name, &cchName, 0LL, 0LL, 0LL, &ftLastWriteTime);
                    if ( !v82 || v82 == 234 )
                    {
                      Common = StringFromCLSID(&rclsid, &lpsz);
                      if ( Common >= 0 && !wcsicmp(Name, lpsz) )
                      {
                        v92 = RegOpenKeyExW(v81, Name, 0, 0x20019u, &hKey);
                        Common = v92;
                        if ( v92 )
                        {
                          if ( v92 > 0 )
                            Common = (unsigned __int16)v92 | 0x80070000;
                        }
                        else
                        {
                          Common = InnerGetCommon(hKey, &rclsid, &v224);
                          if ( Common >= 0 )
                          {
                            v224.u32NumAPOInterfaces = 1;
                            cchName = 1024;
                            v93 = RegQueryValueExW(hKey, L"APOInterface0", 0LL, &Type, (LPBYTE)Name, &cchName);
                            Common = v93;
                            if ( v93 )
                            {
                              if ( v93 > 0 )
                                Common = (unsigned __int16)v93 | 0x80070000;
                            }
                            else
                            {
                              Common = CLSIDFromString(Name, &pclsid);
                              if ( Common >= 0 )
                              {
                                v224.iidAPOInterfaceList[0] = pclsid;
                                v94 = (CLSID *)&v216;
                                v95 = &v224;
                                v96 = 8LL;
                                do
                                {
                                  *v94 = v95->clsid;
                                  v94[1] = *(CLSID *)&v95->Flags;
                                  v94[2] = *(CLSID *)&v95->szFriendlyName[6];
                                  v94[3] = *(CLSID *)&v95->szFriendlyName[14];
                                  v94[4] = *(CLSID *)&v95->szFriendlyName[22];
                                  v94[5] = *(CLSID *)&v95->szFriendlyName[30];
                                  v94[6] = *(CLSID *)&v95->szFriendlyName[38];
                                  v94 += 8;
                                  v94[-1] = *(CLSID *)&v95->szFriendlyName[46];
                                  v95 = (APO_REG_PROPERTIES *)((char *)v95 + 128);
                                  --v96;
                                }
                                while ( v96 );
                                *v94 = v95->clsid;
                                v94[1] = *(CLSID *)&v95->Flags;
                                v94[2] = *(CLSID *)&v95->szFriendlyName[6];
                                v94[3] = *(CLSID *)&v95->szFriendlyName[14];
                                v94[4].Data1 = *(_DWORD *)&v95->szFriendlyName[22];
                                v78 = 1;
                              }
                            }
                          }
                          RegCloseKey(hKey);
                        }
                      }
                    }
                    else
                    {
                      Common = -2005139398;
                    }
                    if ( lpsz )
                    {
                      CoTaskMemFree(lpsz);
                      lpsz = 0LL;
                    }
                    if ( Common < 0 )
                      break;
                    ++v80;
                  }
                  while ( !v78 );
                  RegCloseKey(phkResult);
                }
                if ( Common >= 0 )
                {
                  if ( !v78 )
                    Common = -2005139430;
                  if ( Common >= 0 )
                  {
                    if ( v219 == 1 && v218 == 1 )
                    {
                      v83 = (ULONG (__stdcall *)(IUnknown *))operator new(0x38uLL);
                      v84 = v83;
                      v203 = v83;
                      if ( v83 )
                      {
                        *((_QWORD *)v83 + 1) = 0LL;
                        *((_QWORD *)v83 + 2) = 0LL;
                        *((_DWORD *)v83 + 6) = v77;
                        *((_QWORD *)v83 + 4) = 0LL;
                        *((_DWORD *)v83 + 10) = 2;
                        *(_QWORD *)v83 = &CAPOProcessNode::`vftable';
                        *((_DWORD *)v83 + 12) = v217;
                      }
                      else
                      {
                        v84 = 0LL;
                      }
                      if ( v84 )
                      {
                        v85 = (char *)operator new(0x38uLL);
                        v204 = v85;
                        if ( v85 )
                        {
                          *((_QWORD *)v85 + 5) = 0LL;
                          *((_DWORD *)v85 + 12) = 1;
                          *(_DWORD *)v85 = v67;
                          *((_DWORD *)v85 + 1) = 0;
                          *(_OWORD *)(v85 + 8) = v216;
                          *(GUID *)(v85 + 24) = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
                        }
                        else
                        {
                          v85 = 0LL;
                        }
                        if ( v85 )
                        {
                          v172 = v84;
                          *((_QWORD *)v84 + 4) = v85;
LABEL_201:
                          if ( Common < 0 )
                            goto LABEL_266;
                          Common = 0;
                          try
                          {
                            v86 = v172;
                            v196 = v172;
                            v1 = v156;
                            v87 = (char *)v156 + 16;
                            v205 = (char *)v156 + 16;
                            v30 = v168;
                            if ( v168 )
                            {
                              v206 = v168;
                              lpVtbl = (ULONG (__stdcall *)(IUnknown *))v168[1].lpVtbl;
                              v207 = lpVtbl;
                              if ( !*((_QWORD *)v156 + 6) )
                              {
                                v142 = ATL::CAtlPlex::Create(
                                         (struct ATL::CAtlPlex **)v156 + 5,
                                         *((unsigned int *)v156 + 14),
                                         0x18uLL);
                                v208 = v142;
                                if ( !v142 )
                                  ATL::AtlThrowImpl(-2147024882);
                                v187 = (char *)v142 + 8;
                                v7 = *((_DWORD *)v87 + 10) - 1;
                                v143 = (char *)v142 + 24 * (unsigned int)v7 + 8;
                                v187 = v143;
                                v182 = v7;
                                while ( v7 >= 0 )
                                {
                                  *(_QWORD *)v143 = *((_QWORD *)v87 + 4);
                                  *((_QWORD *)v87 + 4) = v143;
                                  v143 -= 24;
                                  v187 = v143;
                                  v182 = --v7;
                                }
                                v30 = v168;
                              }
                              v89 = (struct IUnknownVtbl *)*((_QWORD *)v87 + 4);
                              v209 = v89;
                              v90 = v89->QueryInterface;
                              v210 = v89->QueryInterface;
                              v211 = v89;
                              if ( v89 )
                                v89->Release = v86;
                              *((_QWORD *)v87 + 4) = v90;
                              v89->AddRef = lpVtbl;
                              v89->QueryInterface = (HRESULT (__stdcall *)(IUnknown *, const IID *const, void **))v30;
                              ++*((_QWORD *)v87 + 2);
                              v91 = v30[1].lpVtbl;
                              if ( v91 )
                                v91->QueryInterface = (HRESULT (__stdcall *)(IUnknown *, const IID *const, void **))v89;
                              else
                                *(_QWORD *)v87 = v89;
                              v30[1].lpVtbl = v89;
                              v197 = v89;
                            }
                            else
                            {
                              v89 = (struct IUnknownVtbl *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHead(
                                                             (char *)v156 + 16,
                                                             &v196);
                              v197 = v89;
                            }
                            v167 = v89;
                          }
                          catch ( ATL::CAtlException *v212 )
                          {
                            v30 = (struct IUnknown *)v151;
                            v106 = v212;
                            if ( *(_DWORD *)v212 == -1073741571 )
                              _o__resetstkoflw();
                            v155 = *(_DWORD *)v106;
                            Common = v155;
                            v39 = v164;
                            v1 = v163;
                            v156 = v163;
                            goto LABEL_212;
                          }
                          v39 = v155;
LABEL_212:
                          if ( Common < 0 )
                          {
                            if ( Block )
                            {
                              v144 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
                              if ( (char *)v144 == (char *)CAudioMediaType::Release )
                                CAudioMediaType::Release((CAudioMediaType *)Block);
                              else
                                v144();
                            }
                            if ( v161 )
                            {
                              v145 = (void (*)(void))v161->lpVtbl->Release;
                              if ( (char *)v145 == (char *)CAudioMediaType::Release )
                                CAudioMediaType::Release((CAudioMediaType *)v161);
                              else
                                v145();
                            }
                            goto LABEL_482;
                          }
                          v172 = 0LL;
                          v160 = 0;
                          goto LABEL_214;
                        }
                      }
                      Common = -2147024882;
                      if ( v84 )
                        (**(void (__fastcall ***)(ULONG (__stdcall *)(IUnknown *), __int64))v84)(v84, 1LL);
                    }
                    else
                    {
                      Common = -2005139401;
                    }
                  }
                }
                if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                  && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
                {
                  WPP_SF_D(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    19LL,
                    &WPP_a00fb4be71793c9c12457d7c93fa59d1_Traceguids,
                    (unsigned int)Common);
                }
                AudDGTraceLoggingErrorHelper("CAPOProcessNode::CreateAPOProcessNode", 0x222u, Common);
                goto LABEL_201;
              }
            }
            else if ( v223.dwSamplesPerFrame == v222.dwSamplesPerFrame )
            {
              if ( (v76 & 1) != 0 )
              {
                rclsid = GUID_3fd7f233_a716_472e_8f2f_c25954f34e96;
                goto LABEL_173;
              }
            }
            else if ( (v76 & 4) != 0 )
            {
              rclsid = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
              *((_DWORD *)v156 + 33) = v76 & 0xFFFFFFFB;
              goto LABEL_173;
            }
            Common = -2005139408;
          }
        }
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            35LL,
            &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
            (unsigned int)Common);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::FindConverter", 0x84Au, Common);
        goto LABEL_173;
      }
      goto LABEL_48;
    }
    v58 = v157;
    if ( v157 )
    {
      v157 = 0LL;
      v59 = v58->lpVtbl->Release;
      if ( (char *)v59 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v58);
      else
        ((void (__fastcall *)(struct IUnknown *))v59)(v58);
      v58 = v157;
    }
    v60 = (struct IUnknown *)Block;
    if ( v58 != Block )
    {
      if ( Block )
      {
        v61 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 8LL);
        if ( v61 == CAudioMediaType::AddRef )
          CAudioMediaType::AddRef((CAudioMediaType *)Block);
        else
          v61((CAudioMediaType *)Block);
        v58 = v157;
      }
      if ( v58 )
        ((void (__fastcall *)(struct IUnknown *))v58->lpVtbl->Release)(v58);
      v58 = v60;
      v157 = v60;
    }
    v62 = (void (*)(CProcessNode *__hidden, struct IAudioMediaType *))*((_QWORD *)*v22 + 3);
    if ( (char *)v62 == (char *)CAPOProcessNode::SetLeftFormat )
    {
      CAPOProcessNode::SetLeftFormat((CAPOProcessNode *)v22, (struct IAudioMediaType *)v58);
    }
    else if ( v62 == CProcessNode::SetRightFormat )
    {
      CProcessNode::SetRightFormat((CProcessNode *)v22, (struct IAudioMediaType *)v58);
    }
    else
    {
      ((void (__fastcall *)(CAudioMediaType **, struct IUnknown *))v62)(v22, v58);
    }
    v63 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v18 + 32LL);
    if ( v63 == CAPOProcessNode::SetRightFormat )
      CAPOProcessNode::SetRightFormat(v18, (struct IAudioMediaType *)v157);
    else
      v63(v18, (struct IAudioMediaType *)v157);
    if ( !v23 )
      goto LABEL_48;
    v130 = v22[4];
    if ( !*((_DWORD *)v130 + 1) || !*((_DWORD *)v130 + 12) )
      goto LABEL_48;
    ATL::CComPtrBase<IAudioProcessingObject>::Release(&v157);
    v38 = v157;
    if ( v157 != v165 )
    {
      ATL::AtlComPtrAssign(&v157, v165);
LABEL_48:
      v38 = v157;
    }
LABEL_49:
    if ( v160 )
    {
      v18 = v162;
      goto LABEL_144;
    }
    v1 = v156;
    if ( (*((_BYTE *)v156 + 132) & 8) == 0
      || (v133 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v179->lpVtbl->GetAudioFormat)(v179),
          v134 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))v38->lpVtbl[1].Release)(v38),
          !(unsigned int)CompareWaveFormat(v134, v133)) )
    {
      v162 = (CProcessNode *)v22;
      v39 = v155;
      v40 = (CProcessNode *)v22;
      goto LABEL_52;
    }
    v169 = 0LL;
    Common = (*((__int64 (__fastcall **)(CAudioMediaType **, struct IUnknown **))*v22 + 1))(v22, &v169);
    if ( Common < 0 )
    {
      if ( v169 )
      {
        v135 = (void (*)(void))v169->lpVtbl->Release;
        if ( (char *)v135 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)v169);
        else
          v135();
      }
      if ( Block )
      {
        v136 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
        if ( (char *)v136 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)Block);
        else
          v136();
      }
      v137 = (CAudioMediaType *)v161;
      if ( !v161 )
        goto LABEL_74;
      goto LABEL_401;
    }
    Common = CPipeInstance::FindConverter(
               v1,
               (struct IAudioMediaType *)v169,
               (struct IAudioMediaType *)v169,
               &v181,
               &rclsid);
    if ( Common < 0 )
    {
      v138 = v169;
      if ( v169 )
      {
        v139 = v169->lpVtbl->Release;
        if ( (char *)v139 == (char *)CAudioMediaType::Release )
          goto LABEL_406;
        goto LABEL_407;
      }
LABEL_408:
      if ( Block )
      {
        v140 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
        if ( (char *)v140 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)Block);
        else
          v140();
      }
      v137 = (CAudioMediaType *)v161;
      if ( !v161 )
        goto LABEL_74;
LABEL_401:
      v115 = *(ULONG (__stdcall **)(IAudioMediaType *))(*(_QWORD *)v137 + 16LL);
      if ( (char *)v115 == (char *)CAudioMediaType::Release )
      {
        CAudioMediaType::Release(v137);
        goto LABEL_74;
      }
LABEL_286:
      ((void (*)(void))v115)();
      goto LABEL_74;
    }
    v215 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    lpClass = (LPWSTR)&v172;
    ppv = (LPVOID *)&v215;
    v40 = v162;
    Common = CAPOProcessNode::CreateAPOProcessNode(&rclsid, *((unsigned int *)v162 + 6), (unsigned int)v181);
    if ( Common < 0 )
    {
      v138 = v169;
      if ( !v169 )
        goto LABEL_408;
      v139 = v169->lpVtbl->Release;
      if ( (char *)v139 == (char *)CAudioMediaType::Release )
      {
LABEL_406:
        CAudioMediaType::Release((CAudioMediaType *)v138);
        goto LABEL_408;
      }
LABEL_407:
      ((void (*)(void))v139)();
      goto LABEL_408;
    }
    Common = 0;
    try
    {
      v195 = v172;
      v167 = (struct IUnknownVtbl *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                                      (char *)v1 + 16,
                                      v168,
                                      &v195);
    }
    catch ( ATL::CAtlException *v201 )
    {
      v105 = v201;
      if ( *(_DWORD *)v201 == -1073741571 )
        _o__resetstkoflw();
      v155 = *(_DWORD *)v105;
      Common = v155;
      if ( v155 < 0 )
      {
        if ( v169 )
        {
          v120 = (void (*)(void))v169->lpVtbl->Release;
          if ( (char *)v120 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v169);
          else
LABEL_305:
            v120();
        }
        goto LABEL_306;
      }
      v39 = v164;
      v1 = v163;
      v156 = v163;
      v40 = v162;
      goto LABEL_425;
    }
    v39 = v155;
LABEL_425:
    v172 = 0LL;
    v160 = 0;
    v30 = v169;
    if ( v157 != v169 )
      ATL::AtlComPtrAssign(&v157, v169);
    if ( v169 )
    {
      v141 = (void (*)(void))v169->lpVtbl->Release;
      if ( (char *)v141 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v169);
      else
        v141();
    }
LABEL_52:
    if ( Common < 0 && v39 )
    {
      v146 = *((_DWORD *)v40 + 6);
      v147 = ((__int64 (__fastcall *)(struct IUnknown *))v165->lpVtbl[1].Release)(v165);
      v148 = CProcessNode::CreateDummyProcessNode(v146, v147, &v178);
      if ( v148 < 0 )
      {
        pExceptionObject = v148;
        throw (long *)&pExceptionObject;
      }
      (*(void (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v178 + 24LL))(v178, v165);
      Common = 0;
      try
      {
        v167 = (struct IUnknownVtbl *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                                        (char *)v1 + 16,
                                        v167,
                                        &v178);
      }
      catch ( ATL::CAtlException *v213 )
      {
        v30 = (struct IUnknown *)v151;
        v107 = v213;
        if ( *(_DWORD *)v213 == -1073741571 )
          _o__resetstkoflw();
        v155 = *(_DWORD *)v107;
        Common = v155;
        if ( v155 < 0 )
          goto LABEL_306;
        v1 = v163;
        v156 = v163;
      }
      v178 = 0LL;
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
    v43 = (CAudioMediaType *)v161;
    if ( v161 )
    {
      v161 = 0LL;
      v46 = *(void (**)(void))(*(_QWORD *)v43 + 16LL);
      if ( (char *)v46 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release(v43);
      else
        v46();
    }
    if ( Block )
      (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
    v18 = v162;
    if ( v161 )
      ((void (__fastcall *)(struct IAudioMediaType *, struct IUnknown *, __int64 (__fastcall *)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *), int (*)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *)))v161->lpVtbl->Release)(
        v161,
        v30,
        CAPOProcessNode::IsLeftFormatSupported,
        CProcessNode::IsLeftFormatSupported);
  }
  v24 = v22[4];
  v189 = v24;
  v25 = *((_DWORD *)v24 + 1);
  v155 = v25 != 0;
  v180 = v155;
  v175 = v155;
  v23 = v155;
  v26 = (struct IAudioProcessingObject **)((char *)v24 + 40);
  if ( !*((_QWORD *)v24 + 5) )
  {
    v27 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v156 + 29) + 24LL))(
            *((_QWORD *)v156 + 29),
            (__int64)v24 + 8,
            v25,
            *((_QWORD *)v156 + 23),
            (__int64)v24 + 40);
    Common = v27;
    if ( v27 < 0 )
    {
      if ( v27 != -2147024882 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            29LL,
            &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
            (char *)v24 + 8);
        }
        v1 = v156;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v156 + 16, v168);
        if ( v25 )
          goto LABEL_263;
        goto LABEL_264;
      }
      if ( Block )
      {
        v109 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
        if ( (char *)v109 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)Block);
        else
          v109();
      }
      v110 = (CAudioMediaType *)v161;
      if ( v161 )
      {
        v111 = (void (*)(void))v161->lpVtbl->Release;
        if ( (char *)v111 != (char *)CAudioMediaType::Release )
          goto LABEL_272;
        goto LABEL_255;
      }
      goto LABEL_487;
    }
    if ( v25 )
    {
      Common = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 &v184);
      if ( Common < 0 )
        goto LABEL_266;
      Common = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)v184 + 40LL))(
                 v184,
                 *((_QWORD *)v156 + 23),
                 &v186);
      if ( Common < 0 )
        goto LABEL_266;
      v214 = *(struct _GUID *)((char *)v24 + 24);
      v53 = InitializeSystemEffectsInterface(
              v186,
              *v26,
              (struct _GUID *)((char *)v24 + 8),
              &v214,
              (int)ppv,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)lpClass,
              (struct IAudioSystemEffects2 **)lpcchClass);
      Common = v53;
      if ( v53 < 0 )
      {
        if ( v53 == -2147024882 )
          goto LABEL_266;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            30LL,
            &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
            (char *)v24 + 8);
        }
        v1 = v156;
        if ( (*(int (__fastcall **)(_QWORD, struct IAudioProcessingObject *))(**((_QWORD **)v156 + 29) + 32LL))(
               *((_QWORD *)v156 + 29),
               *v26) < 0 )
        {
          v113 = (CAudioMediaType *)Block;
          if ( Block )
          {
            v114 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
            if ( v114 == CAudioMediaType::Release )
              goto LABEL_281;
LABEL_282:
            ((void (*)(void))v114)();
          }
          goto LABEL_283;
        }
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v1 + 16, v168);
LABEL_263:
        v158 = 1;
        v171 = *((_DWORD *)v24 + 1);
LABEL_264:
        v39 = v155;
LABEL_214:
        v40 = v162;
        goto LABEL_52;
      }
    }
  }
  if ( !v25 || !*((_DWORD *)v24 + 1) || !*((_DWORD *)v24 + 12) )
  {
    v28 = (__int64 (__fastcall *)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))*((_QWORD *)*v22 + 5);
    if ( v28 == CAPOProcessNode::IsLeftFormatSupported )
      v29 = CAPOProcessNode::IsLeftFormatSupported(
              (CAPOProcessNode *)v22,
              (struct IAudioMediaType *)v157,
              (struct IAudioMediaType **)&Block,
              0LL);
    else
      v29 = v28((CAPOProcessNode *)v22, (struct IAudioMediaType *)v157, (struct IAudioMediaType **)&Block, 0LL);
    Common = v29;
    if ( v29 < 0 )
      goto LABEL_266;
LABEL_32:
    v155 = v23;
    v164 = v23;
    v18 = v162;
    goto LABEL_33;
  }
  v54 = (__int64 (__fastcall *)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))*((_QWORD *)*v22 + 5);
  if ( v54 == CAPOProcessNode::IsLeftFormatSupported )
    v55 = CAPOProcessNode::IsLeftFormatSupported(
            (CAPOProcessNode *)v22,
            (struct IAudioMediaType *)v157,
            (struct IAudioMediaType **)&Block,
            (struct IAudioMediaType *)v165);
  else
    v55 = v54(
            (CAPOProcessNode *)v22,
            (struct IAudioMediaType *)v157,
            (struct IAudioMediaType **)&Block,
            (struct IAudioMediaType *)v165);
  Common = v55;
  if ( v55 != -2005073917 )
  {
    v39 = v155;
    goto LABEL_105;
  }
  if ( *((_DWORD *)v22 + 6) != 1 )
  {
    v39 = v155;
LABEL_355:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        31LL,
        &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
        (char *)v24 + 8);
    }
    v1 = v156;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v156 + 29) + 32LL))(
           *((_QWORD *)v156 + 29),
           *((_QWORD *)v24 + 5)) >= 0 )
    {
      if ( Common != -2005073917 )
      {
        v158 = 1;
        v171 = *((_DWORD *)v24 + 1);
      }
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v1 + 16, v168);
      goto LABEL_214;
    }
    v113 = (CAudioMediaType *)Block;
    if ( Block )
    {
      v114 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
      if ( v114 != CAudioMediaType::Release )
        goto LABEL_282;
LABEL_281:
      CAudioMediaType::Release(v113);
    }
LABEL_283:
    if ( !v161 )
      goto LABEL_74;
    v115 = v161->lpVtbl->Release;
    if ( (char *)v115 == (char *)CAudioMediaType::Release )
    {
      CAudioMediaType::Release((CAudioMediaType *)v161);
      goto LABEL_74;
    }
    goto LABEL_286;
  }
  ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
    &v176,
    *v26);
  v174 = 0;
  if ( !v176 || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v176 + 24LL))(v176, &v174) < 0 || (v174 & 1) == 0 )
  {
    v39 = v155;
LABEL_350:
    if ( v176 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v176 + 16LL))(v176);
LABEL_105:
    if ( Common < 0 )
    {
      if ( Common == -2147024882 )
        goto LABEL_266;
      goto LABEL_355;
    }
    goto LABEL_32;
  }
  v116 = 0LL;
  v166 = 0LL;
  v173 = 0LL;
  Common = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IUnknown *, CAudioMediaType **))(*v26)->lpVtbl->IsInputFormatSupported)(
             *v26,
             0LL,
             v157,
             &v173);
  if ( Common < 0 )
  {
    v39 = v155;
    goto LABEL_342;
  }
  v117 = *((_DWORD *)v22 + 6);
  v118 = (*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v173 + 40LL))(v173);
  Common = CProcessNode::CreateDummyProcessNode(v117, v118, &v166);
  if ( Common < 0 )
  {
    v39 = v155;
    goto LABEL_340;
  }
  try
  {
    v192 = v166;
    v167 = (struct IUnknownVtbl *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                                    (char *)v156 + 16,
                                    v168,
                                    &v192);
  }
  catch ( ATL::CAtlException *v199 )
  {
    v103 = v199;
    if ( *(_DWORD *)v199 == -1073741571 )
      _o__resetstkoflw();
    v155 = *(_DWORD *)v103;
    Common = v155;
    if ( v155 < 0 )
    {
      if ( v173 )
      {
        v119 = *(void (**)(void))(*(_QWORD *)v173 + 16LL);
        if ( (char *)v119 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release(v173);
        else
          v119();
      }
      if ( v166 )
        (**v166)(v166, 1LL);
      v166 = 0LL;
      if ( v176 )
      {
        v120 = *(void (**)(void))(*(_QWORD *)v176 + 16LL);
        goto LABEL_305;
      }
LABEL_306:
      v121 = (CAudioMediaType *)Block;
      if ( Block )
      {
        v122 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
        if ( v122 == CAudioMediaType::Release )
          goto LABEL_308;
LABEL_309:
        ((void (*)(void))v122)();
      }
      goto LABEL_310;
    }
    v22 = v193;
    v168 = v188;
    v24 = v189;
    v156 = v163;
    v39 = v180;
    v23 = v180;
LABEL_316:
    v166 = 0LL;
    v124 = *((_DWORD *)v22 + 6);
    v125 = ((__int64 (__fastcall *)(struct IUnknown *))v165->lpVtbl[1].Release)(v165);
    Common = CProcessNode::CreateDummyProcessNode(v124, v125, &v166);
    if ( Common < 0 )
    {
LABEL_340:
      v116 = v166;
LABEL_342:
      if ( v173 )
      {
        v129 = *(void (**)(void))(*(_QWORD *)v173 + 16LL);
        if ( (char *)v129 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release(v173);
        else
          v129();
      }
      if ( v116 )
        (**v116)(v116, 1LL);
      v166 = 0LL;
      goto LABEL_350;
    }
    Common = 0;
    try
    {
      v194 = v166;
      v1 = v156;
      v167 = (struct IUnknownVtbl *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                                      (char *)v156 + 16,
                                      v167,
                                      &v194);
    }
    catch ( ATL::CAtlException *v200 )
    {
      v30 = (struct IUnknown *)v151;
      v104 = v200;
      if ( *(_DWORD *)v200 == -1073741571 )
        _o__resetstkoflw();
      v155 = *(_DWORD *)v104;
      Common = v155;
      if ( v155 >= 0 )
      {
        v126 = v188;
        v24 = v189;
        v1 = v163;
        v156 = v163;
        goto LABEL_332;
      }
      if ( v173 )
      {
        v127 = *(void (**)(void))(*(_QWORD *)v173 + 16LL);
        if ( (char *)v127 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release(v173);
        else
          v127();
      }
      if ( v166 )
        (**v166)(v166, 1LL);
      v166 = 0LL;
      if ( v176 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v176 + 16LL))(v176);
      v121 = (CAudioMediaType *)Block;
      if ( Block )
      {
        v122 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
        if ( v122 != CAudioMediaType::Release )
          goto LABEL_309;
LABEL_308:
        CAudioMediaType::Release(v121);
      }
LABEL_310:
      if ( v161 )
      {
        v123 = (void (*)(void))v161->lpVtbl->Release;
        if ( (char *)v123 != (char *)CAudioMediaType::Release )
        {
          v123();
          v1 = v163;
          goto LABEL_482;
        }
        CAudioMediaType::Release((CAudioMediaType *)v161);
      }
      v1 = v163;
LABEL_482:
      if ( v172 )
        (**(void (__fastcall ***)(ULONG (__stdcall *)(IUnknown *), __int64))v172)(v172, 1LL);
LABEL_74:
      if ( !v158 )
        goto LABEL_75;
      v149 = TrackSystemEffectBehavior(*((_QWORD *)v1 + 23), v171, 0LL, 0LL);
      if ( v149 >= 0 )
        goto LABEL_75;
      v48 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
      {
        if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            32LL,
            &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
            (unsigned int)v149);
          goto LABEL_75;
        }
LABEL_76:
        if ( v48 != &WPP_GLOBAL_Control && (*((_DWORD *)v48 + 7) & 0x20000) != 0 && *((_BYTE *)v48 + 25) >= 4u )
        {
          v150 = "SUCCEEDED";
          if ( Common < 0 )
            v150 = "FAILED";
          WPP_SF_qs(v48[2], 33, v7, (_DWORD)v1, (__int64)v150);
          v48 = WPP_GLOBAL_Control;
        }
      }
      if ( Common < 0 )
      {
        if ( v48 != &WPP_GLOBAL_Control && (*((_DWORD *)v48 + 7) & 0x20000) != 0 && *((_BYTE *)v48 + 25) >= 2u )
          WPP_SF_D(v48[2], 34LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids, (unsigned int)Common);
        AudDGTraceLoggingErrorHelper("CPipeInstance::ResolveFormatConflictsLeftRight", 0x7CEu, Common);
      }
      if ( v186 )
        ((void (__fastcall *)(struct IMMDevice *))v186->lpVtbl->Release)(v186);
      if ( v184 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v184 + 16LL))(v184);
      if ( v179 )
      {
        v49 = v179->lpVtbl->Release;
        if ( (char *)v49 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)v179);
        else
          ((void (__fastcall *)(struct IAudioMediaType *))v49)(v179);
      }
      if ( v165 )
      {
        v50 = (void (*)(void))v165->lpVtbl->Release;
        if ( (char *)v50 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)v165);
        else
          v50();
      }
      if ( v157 )
      {
        v51 = (void (*)(void))v157->lpVtbl->Release;
        if ( (char *)v51 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)v157);
        else
          v51();
      }
      result = (unsigned int)Common;
    }
    v126 = v168;
LABEL_332:
    v166 = 0LL;
    *((_DWORD *)v1 + 33) |= 6u;
    *((_DWORD *)v24 + 12) = 0;
    v167 = (struct IUnknownVtbl *)v126;
    if ( v173 )
    {
      v128 = *(void (**)(void))(*(_QWORD *)v173 + 16LL);
      if ( (char *)v128 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release(v173);
      else
        v128();
    }
    v166 = 0LL;
    if ( v176 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v176 + 16LL))(v176);
    v39 = v175;
    goto LABEL_214;
  }
  v39 = v155;
  goto LABEL_316;
}
