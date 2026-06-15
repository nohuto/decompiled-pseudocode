/*
 * XREFs of ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000E870
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000A9B0 (AudioServerIsFormatSupported.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18009A1B4 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x18009B6BC (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180001440 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180001540 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180001F90 (-IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000C8C0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000DF80 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     _lambda_2cdbfdbf6a906d093ee55c9100591272_::operator() @ 0x18000FC80 (_lambda_2cdbfdbf6a906d093ee55c9100591272_--operator().c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800108F0 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800109B0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180010A30 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180010A50 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??1?$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ @ 0x18007B524 (--1-$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x18007B53C (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18008263C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800BD430 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=206
__int64 __fastcall IsStreamFormatSupportedForMixFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4,
        const struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  __int64 v7; // rsi
  struct IAudioProcessingObject *v8; // r13
  __int64 cbSize; // rbx
  struct tWAVEFORMATEX *v10; // rax
  struct tWAVEFORMATEX *v11; // r14
  __int64 v12; // rbx
  struct tWAVEFORMATEX *v13; // rax
  struct tWAVEFORMATEX *v14; // rdi
  WORD wFormatTag; // ax
  __int64 v16; // rcx
  WORD v17; // cx
  __int64 v18; // rax
  __int64 v19; // r15
  char *v20; // rbx
  __int64 (__fastcall *v21)(); // r12
  char *v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r14
  int v25; // eax
  __int64 v26; // rax
  struct IAudioProcessingObject **v27; // rbx
  std::_Ref_count_base *v28; // rcx
  __int64 v29; // rcx
  char v30; // al
  __int64 v31; // rcx
  __int64 (__fastcall *v32)(); // rax
  int v33; // eax
  unsigned int v34; // r12d
  unsigned __int64 v35; // rbx
  char *v36; // rdx
  char *v37; // r9
  __int64 v38; // rdi
  int v39; // r12d
  int *v40; // rdx
  __int64 v41; // r14
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // r15
  std::_Ref_count_base *v46; // rcx
  char *v47; // rsi
  volatile signed __int32 *v48; // r14
  __int64 v49; // rdi
  unsigned int v50; // esi
  unsigned int v51; // esi
  __int64 v52; // rdx
  struct _GUID v53; // xmm6
  char *v54; // r12
  char *v55; // rdi
  signed int v56; // r14d
  __int64 v57; // rsi
  signed int v58; // eax
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // r12
  std::_Ref_count_base *v62; // rcx
  __int64 v63; // rcx
  char v64; // al
  __int64 v65; // rcx
  __int64 (__fastcall *v66)(); // rax
  int v67; // eax
  unsigned int v68; // r12d
  char *v69; // r9
  __int64 v70; // rdi
  int v71; // r12d
  int *v72; // rax
  __int64 v73; // r14
  __int64 v74; // r15
  __int64 v75; // rax
  char *v76; // rbx
  __int64 v77; // rsi
  __int64 v78; // r15
  std::_Ref_count_base *v79; // rcx
  volatile signed __int32 *v80; // rbx
  char *v81; // rsi
  unsigned int v82; // r14d
  struct SystemEffectDescriptor *v83; // r14
  std::_Ref_count_base **v84; // rbx
  __int64 v85; // rdi
  unsigned int v86; // esi
  unsigned int v87; // esi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v88; // edi
  struct CEndpointCharacteristics *v89; // r14
  int v90; // ebx
  __int64 v91; // rcx
  int v92; // eax
  __int64 v93; // r15
  int v94; // ebx
  __int64 *v95; // rcx
  int v96; // r8d
  int v97; // r10d
  __int64 v98; // r9
  __int64 v99; // rax
  unsigned int v100; // edx
  __int64 *v101; // rax
  volatile signed __int32 *v102; // rdi
  __int64 v103; // rbx
  volatile signed __int32 *v104; // r14
  __int64 v105; // rcx
  volatile signed __int32 *v106; // rsi
  __int64 v107; // rcx
  __int64 (__fastcall *v108)(); // rax
  int v109; // eax
  int v110; // ecx
  __int64 v111; // r9
  int v112; // r8d
  int v113; // r11d
  __int64 v114; // r10
  __int64 v115; // rax
  struct IAudioProcessingObject *v116; // rcx
  int Lfx; // r14d
  struct tWAVEFORMATEX *v118; // r15
  WORD nChannels; // r10
  DWORD nSamplesPerSec; // r8d
  DWORD nAvgBytesPerSec; // edx
  WORD nBlockAlign; // bx
  WORD v123; // cx
  WORD v124; // r9
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  WORD wBitsPerSample; // cx
  WORD v129; // ax
  __int64 v130; // rax
  __int64 v131; // r11
  __int64 v132; // rbx
  struct tWAVEFORMATEX *v133; // rax
  int v135; // ecx
  __int64 v136; // rax
  std::_Ref_count_base **v137; // rsi
  __int64 v138; // rax
  std::_Ref_count_base **v139; // rsi
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  CAudioMediaType *v141; // rbx
  CAudioMediaType *v142; // rdi
  __int64 (__fastcall *IsOutputFormatSupported)(CAPOWrapperClient *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **); // rax
  struct IAudioMediaType *v144; // rdx
  int IsInputFormatSupported; // eax
  void (*v146)(void); // rax
  __int64 (__fastcall *v147)(CAudioMediaType *); // rax
  __int64 (__fastcall *v148)(CAudioMediaType *); // rax
  int v149; // ecx
  SystemEffectChainDescriptor *v150; // rcx
  int v151; // eax
  SystemEffectChainDescriptor *v152; // rcx
  int v153; // eax
  SystemEffectChainDescriptor *v154; // rcx
  int v155; // eax
  SystemEffectChainDescriptor *v156; // rcx
  int v157; // eax
  __int64 v158; // rbx
  void (*v159)(void); // rax
  void (*v160)(void); // rax
  void (*Release)(void); // rax
  void (*v162)(void); // rax
  CAudioMediaType *v163; // rcx
  ULONG (__stdcall *v164)(IAudioMediaType *); // rax
  void (*v165)(void); // rax
  __int64 (__fastcall *v166)(CAudioMediaType *); // rax
  struct IAudioSystemEffects2 **v167; // [rsp+28h] [rbp-E0h]
  int v168; // [rsp+28h] [rbp-E0h]
  int v169; // [rsp+28h] [rbp-E0h]
  bool v170; // [rsp+68h] [rbp-A0h]
  int v171; // [rsp+6Ch] [rbp-9Ch]
  signed int v172; // [rsp+6Ch] [rbp-9Ch]
  __int64 v173; // [rsp+70h] [rbp-98h]
  char *v174; // [rsp+70h] [rbp-98h]
  int v175; // [rsp+78h] [rbp-90h]
  char *v176; // [rsp+78h] [rbp-90h]
  int v177; // [rsp+78h] [rbp-90h]
  int *v178; // [rsp+80h] [rbp-88h]
  struct tWAVEFORMATEX *v179; // [rsp+88h] [rbp-80h]
  char *v180; // [rsp+90h] [rbp-78h] BYREF
  __int64 v181; // [rsp+98h] [rbp-70h]
  char *v182; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v183; // [rsp+A8h] [rbp-60h]
  char *v184; // [rsp+B0h] [rbp-58h]
  struct IAudioMediaType *v185; // [rsp+B8h] [rbp-50h] BYREF
  struct IAudioProcessingObject *v186; // [rsp+C0h] [rbp-48h] BYREF
  char *v187; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v188; // [rsp+D0h] [rbp-38h]
  char *v189; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v190; // [rsp+E0h] [rbp-28h]
  struct IAudioMediaType *v191; // [rsp+E8h] [rbp-20h] BYREF
  struct IAudioProcessingObject *v192; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v193; // [rsp+F8h] [rbp-10h]
  struct IAudioProcessingObject *v194; // [rsp+100h] [rbp-8h] BYREF
  __int64 v195; // [rsp+108h] [rbp+0h]
  struct IAudioMediaType *v196; // [rsp+110h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+118h] [rbp+10h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+120h] [rbp+18h] BYREF
  LPCRITICAL_SECTION v199; // [rsp+128h] [rbp+20h] BYREF
  LPCRITICAL_SECTION v200; // [rsp+130h] [rbp+28h] BYREF
  LPCRITICAL_SECTION v201; // [rsp+138h] [rbp+30h] BYREF
  LPCRITICAL_SECTION v202; // [rsp+140h] [rbp+38h] BYREF
  LPCRITICAL_SECTION v203; // [rsp+148h] [rbp+40h] BYREF
  struct IAudioProcessingObject *v204; // [rsp+150h] [rbp+48h]
  __int128 v205; // [rsp+158h] [rbp+50h] BYREF
  __int128 v206; // [rsp+168h] [rbp+60h] BYREF
  __int128 v207; // [rsp+178h] [rbp+70h] BYREF
  char *v208; // [rsp+188h] [rbp+80h] BYREF
  __int64 v209; // [rsp+190h] [rbp+88h] BYREF
  char *v210; // [rsp+198h] [rbp+90h] BYREF
  __int64 v211; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v212; // [rsp+1A8h] [rbp+A0h] BYREF
  LPCRITICAL_SECTION v213; // [rsp+1B0h] [rbp+A8h] BYREF
  struct tWAVEFORMATEX *v214; // [rsp+1B8h] [rbp+B0h]
  char *v215; // [rsp+1C0h] [rbp+B8h] BYREF
  struct _GUID v216; // [rsp+1C8h] [rbp+C0h]
  PROPVARIANT pvar; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v218; // [rsp+1E0h] [rbp+D8h]
  __int64 v219; // [rsp+1E8h] [rbp+E0h]
  struct SystemEffectDescriptor *v220; // [rsp+1F0h] [rbp+E8h]
  __int128 v221; // [rsp+1F8h] [rbp+F0h]
  struct _GUID v222; // [rsp+208h] [rbp+100h] BYREF
  __int64 v223; // [rsp+218h] [rbp+110h]
  struct _GUID v224; // [rsp+228h] [rbp+120h] BYREF
  struct _GUID v225; // [rsp+238h] [rbp+130h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A0h] [rbp+198h]

  v223 = -2LL;
  v7 = a3;
  v8 = 0LL;
  v186 = 0LL;
  v170 = 1;
  v204 = 0LL;
  pv = 0LL;
  cbSize = Src->cbSize;
  v10 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v11 = v10;
  v179 = v10;
  if ( !v10 )
  {
    v204 = 0LL;
    Lfx = -2147024882;
    v118 = 0LL;
    goto LABEL_282;
  }
  memcpy_0(v10, Src, cbSize + 18);
  v204 = (struct IAudioProcessingObject *)v11;
  v12 = a4->cbSize;
  v13 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v12 + 18);
  v14 = v13;
  v214 = v13;
  if ( !v13 )
  {
    pv = 0LL;
    Lfx = -2147024882;
    goto LABEL_491;
  }
  memcpy_0(v13, a4, v12 + 18);
  pv = v14;
  if ( (v11->wBitsPerSample & 0xFFF8u) > 0x100 )
  {
    Lfx = -2004287480;
    goto LABEL_491;
  }
  wFormatTag = v11->wFormatTag;
  if ( v11->wFormatTag == 0xFFFE )
    v170 = (v11[1].wFormatTag & 7) == 0;
  if ( wFormatTag == 1 )
    goto LABEL_354;
  if ( wFormatTag == 0xFFFE )
  {
    v16 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&v11[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v11[1].nSamplesPerSec + 2) )
      v16 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v11[1].wBitsPerSample;
    if ( !v16 )
    {
LABEL_354:
      if ( wFormatTag != 0xFFFE || (v11[1].wFormatTag & 7) == 0 )
      {
        if ( v11->wFormatTag == 1 )
        {
          v11->wFormatTag = 3;
        }
        else
        {
          *(GUID *)((char *)&v11[1].nSamplesPerSec + 2) = GUID_00000003_0000_0010_8000_00aa00389b71;
          v11[1].wFormatTag = 32;
        }
        v11->wBitsPerSample = 32;
        v135 = (unsigned __int16)(4 * v11->nChannels);
        v11->nBlockAlign = v135;
        v11->nAvgBytesPerSec = v135 * v11->nSamplesPerSec;
      }
    }
  }
  v17 = v14->wFormatTag;
  if ( v14->wFormatTag == 1 )
    goto LABEL_358;
  if ( v17 == 0xFFFE )
  {
    v18 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&v14[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v14[1].nSamplesPerSec + 2) )
      v18 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v14[1].wBitsPerSample;
    if ( !v18 )
    {
LABEL_358:
      if ( v17 != 0xFFFE || (v14[1].wFormatTag & 7) == 0 )
      {
        if ( v17 == 1 )
        {
          v14->wFormatTag = 3;
        }
        else
        {
          *(GUID *)((char *)&v14[1].nSamplesPerSec + 2) = GUID_00000003_0000_0010_8000_00aa00389b71;
          v14[1].wFormatTag = 32;
        }
        v14->wBitsPerSample = 32;
        v149 = (unsigned __int16)(4 * v14->nChannels);
        v14->nBlockAlign = v149;
        v14->nAvgBytesPerSec = v149 * v14->nSamplesPerSec;
      }
    }
  }
  v19 = 96 * v7;
  v173 = 96 * v7;
  v20 = (char *)a1 + 96 * v7 + 224;
  v184 = v20;
  v21 = std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call;
  if ( !v20[52] )
    goto LABEL_64;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)(v20 + 56), (__int64)&lpCriticalSection);
  v22 = 0LL;
  v180 = 0LL;
  v23 = 0LL;
  v181 = 0LL;
  v24 = 0LL;
  v25 = 0;
  v171 = 0;
  if ( *((int *)v20 + 10) > 0 )
  {
    v21 = 0LL;
    do
    {
      if ( (__int64)v21 < 0 || v25 >= *((_DWORD *)v20 + 10) )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        goto LABEL_367;
      }
      v8 = (struct IAudioProcessingObject *)*((_QWORD *)v20 + 4);
      if ( (_DWORD)v23 == (_DWORD)v24 )
      {
        if ( (_DWORD)v24 )
        {
          v24 = (unsigned int)(2 * v23);
          if ( (v23 & 0x40000000) != 0 || (unsigned int)v24 > 0x7FFFFFF )
          {
LABEL_363:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1E8,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              (int)v167);
            goto LABEL_365;
          }
        }
        else
        {
          v24 = 1LL;
        }
        v26 = _o__recalloc(v22, (int)v24, 16LL);
        v22 = (char *)v26;
        if ( !v26 )
          goto LABEL_363;
        HIDWORD(v181) = v24;
        v180 = (char *)v26;
        v25 = v171;
      }
      v27 = (struct IAudioProcessingObject **)&v22[16 * (int)v23];
      if ( v27 )
      {
        *v27 = 0LL;
        v27[1] = 0LL;
        v19 = *(__int64 *)((char *)&v8[1].lpVtbl + (_QWORD)v21);
        v8 = *(struct IAudioProcessingObject **)((char *)&v8->lpVtbl + (_QWORD)v21);
        if ( v19 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
          v24 = HIDWORD(v181);
          LODWORD(v23) = v181;
          v22 = v180;
        }
        v28 = (std::_Ref_count_base *)v27[1];
        if ( v28 )
        {
          std::_Ref_count_base::_Decref(v28);
          v25 = v171;
        }
        v27[1] = (struct IAudioProcessingObject *)v19;
        *v27 = v8;
      }
      v23 = (unsigned int)(v23 + 1);
      LODWORD(v181) = v23;
      v171 = ++v25;
      v21 = (__int64 (__fastcall *)())((char *)v21 + 16);
      v20 = v184;
    }
    while ( v25 < *((_DWORD *)v184 + 10) );
    v8 = 0LL;
    v21 = std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call;
  }
  v175 = 0;
  if ( (int)v23 <= 0 )
  {
LABEL_53:
    if ( v22 )
    {
      if ( (int)v23 > 0 )
      {
        v22 += 8;
        LODWORD(v24) = -1;
        do
        {
          v20 = *(char **)v22;
          if ( *(_QWORD *)v22 && _InterlockedExchangeAdd((volatile signed __int32 *)v20 + 2, v24) == 1 )
          {
LABEL_376:
            (**(void (__fastcall ***)(char *))v20)(v20);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v20 + 3, v24) == 1 )
              (*(void (__fastcall **)(char *))(*(_QWORD *)v20 + 8LL))(v20);
          }
          v22 += 16;
          --v23;
        }
        while ( v23 );
        v22 = v180;
      }
      free(v22);
      v180 = (char *)v8;
    }
    v181 = 0LL;
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_63;
  }
  while ( 1 )
  {
    if ( (__int64)v8 < 0 )
      goto LABEL_375;
    if ( *(_BYTE *)(*(_QWORD *)v22 + 16LL) )
      break;
LABEL_50:
    ++v175;
    v8 = (struct IAudioProcessingObject *)((char *)v8 + 1);
    v22 += 16;
    if ( v175 >= (int)v23 )
    {
      v22 = v180;
      v8 = 0LL;
      goto LABEL_53;
    }
    v21 = std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call;
  }
  v20 = *(char **)v22;
  v205 = 0LL;
  v19 = *((_QWORD *)v20 + 4);
  v29 = *((_QWORD *)v20 + 3);
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v23 = (unsigned int)v181;
  }
  v24 = v19;
  *((_QWORD *)&v205 + 1) = v19;
  *(_QWORD *)&v205 = v29;
  v20[16] = 0;
  v215 = v20;
  v208 = v184;
  if ( *(_QWORD *)(v29 + 56) )
    v30 = 0;
  else
LABEL_367:
    v30 = 1;
  if ( v30 )
  {
    std::_Xbad_function_call();
LABEL_375:
    RaiseException(0xC000008C, 1u, 0, 0LL);
    goto LABEL_376;
  }
  v31 = *(_QWORD *)(v29 + 56);
  v32 = *(__int64 (__fastcall **)())(*(_QWORD *)v31 + 16LL);
  if ( v32 == v21 )
    v33 = lambda_2cdbfdbf6a906d093ee55c9100591272_::operator()(v31 + 8, v208, v215);
  else
    v33 = ((__int64 (__fastcall *)(__int64, char **, char **))v32)(v31, &v208, &v215);
  v34 = v33;
  if ( v33 >= 0 )
  {
    if ( !v20[16] )
    {
      v24 = 0LL;
      v205 = 0uLL;
      if ( v19 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v19);
    }
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 8), 0xFFFFFFFF) == 1 )
      {
        v20 = (char *)*((_QWORD *)&v205 + 1);
        (***((void (__fastcall ****)(_QWORD))&v205 + 1))(*((_QWORD *)&v205 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v205 + 1) + 8LL))(*((_QWORD *)&v205 + 1));
      }
      v23 = (unsigned int)v181;
    }
    goto LABEL_50;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x63,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v33,
    (int)v167);
  std::shared_ptr<SaDeviceReevaluationContext>::~shared_ptr<SaDeviceReevaluationContext>(&v205);
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1EE,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)v34,
    v168);
LABEL_365:
  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v180);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&lpCriticalSection);
  v8 = 0LL;
LABEL_63:
  v19 = v173;
LABEL_64:
  v35 = (unsigned __int64)a1;
  v36 = (char *)a1 + v19 + 608;
  v178 = (int *)v36;
  if ( !v36[52] )
    goto LABEL_99;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)(v36 + 56), (__int64)&v199);
  v37 = (char *)v8;
  v176 = (char *)v8;
  v187 = (char *)v8;
  v38 = (unsigned int)v8;
  LODWORD(v188) = (_DWORD)v8;
  HIDWORD(v188) = (_DWORD)v8;
  v39 = 0;
  v40 = v178;
  if ( v178[10] > 0 )
  {
    v41 = 0LL;
    while ( 1 )
    {
      if ( v41 < 0 || v39 >= v40[10] )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x1800659ACLL);
      }
      v42 = *((_QWORD *)v40 + 4);
      if ( (_DWORD)v38 == (_DWORD)v8 )
      {
        if ( (_DWORD)v8 )
        {
          LODWORD(v8) = 2 * v38;
          if ( (v38 & 0x40000000) != 0 || (unsigned int)v8 > 0x7FFFFFF )
          {
LABEL_378:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1E8,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              (int)v167);
            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v187);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v199);
            v19 = v173;
            v8 = 0LL;
            goto LABEL_99;
          }
        }
        else
        {
          LODWORD(v8) = 1;
        }
        v43 = _o__recalloc(v37, (int)v8, 16LL);
        v37 = (char *)v43;
        v176 = (char *)v43;
        if ( !v43 )
          goto LABEL_378;
        HIDWORD(v188) = (_DWORD)v8;
        v187 = (char *)v43;
        v40 = v178;
      }
      v35 = (unsigned __int64)&v37[16 * (int)v38];
      if ( v35 )
      {
        *(_QWORD *)v35 = 0LL;
        *(_QWORD *)(v35 + 8) = 0LL;
        v44 = *(_QWORD *)(v41 + v42 + 8);
        v45 = *(_QWORD *)(v41 + v42);
        if ( v44 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v44 + 8));
          LODWORD(v8) = HIDWORD(v188);
          LODWORD(v38) = v188;
          v37 = v187;
          v176 = v187;
        }
        v46 = *(std::_Ref_count_base **)(v35 + 8);
        if ( v46 )
        {
          std::_Ref_count_base::_Decref(v46);
          v37 = v176;
          v40 = v178;
        }
        *(_QWORD *)(v35 + 8) = v44;
        *(_QWORD *)v35 = v45;
      }
      v38 = (unsigned int)(v38 + 1);
      LODWORD(v188) = v38;
      ++v39;
      v41 += 16LL;
      if ( v39 >= v40[10] )
      {
        v19 = v173;
        break;
      }
    }
  }
  v8 = 0LL;
  v35 = 0LL;
  if ( (int)v38 <= 0 )
  {
LABEL_89:
    if ( v37 )
    {
      if ( (int)v38 > 0 )
      {
        v47 = v37 + 8;
        LODWORD(v19) = -1;
        do
        {
          v35 = *(_QWORD *)v47;
          if ( *(_QWORD *)v47 && _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 8), v19) == 1 )
          {
LABEL_383:
            (**(void (__fastcall ***)(volatile signed __int32 *))v35)((volatile signed __int32 *)v35);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 12), v19) == 1 )
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v35 + 8LL))(v35);
          }
          v47 += 16;
          --v38;
        }
        while ( v38 );
        v37 = v187;
        v19 = v173;
      }
      free(v37);
      v187 = 0LL;
    }
    v188 = 0LL;
    if ( v199 )
      LeaveCriticalSection(v199);
  }
  else
  {
    v47 = v37;
    while ( 1 )
    {
      if ( (v35 & 0x80000000) != 0LL )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        goto LABEL_383;
      }
      if ( *(_BYTE *)(*(_QWORD *)v47 + 16LL) )
      {
        v150 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                  &v187,
                                                  (unsigned int)v35);
        v151 = SystemEffectChainDescriptor::Resolve(v150, (struct SystemEffectDescriptor *)v178);
        if ( v151 < 0 )
          break;
      }
      v35 = (unsigned int)(v35 + 1);
      v47 += 16;
      if ( (int)v35 >= (int)v38 )
      {
        v37 = v176;
        goto LABEL_89;
      }
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1EE,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v151,
      (int)v167);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v187);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v199);
  }
LABEL_99:
  v48 = (volatile signed __int32 *)((char *)a1 + v19 + 992);
  v220 = (struct SystemEffectDescriptor *)v48;
  if ( *((_BYTE *)v48 + 52) )
  {
    Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)(v48 + 14), (__int64)&v200);
    v35 = (unsigned __int64)v8;
    v192 = v8;
    v49 = (unsigned int)v8;
    LODWORD(v193) = (_DWORD)v8;
    HIDWORD(v193) = (_DWORD)v8;
    v50 = (unsigned int)v8;
    if ( *((int *)v48 + 10) > 0 )
    {
      v35 = (unsigned __int64)(v48 + 8);
      while ( 1 )
      {
        v136 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v48 + 8, v50);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v192,
                              v136) )
          break;
        if ( (signed int)++v50 >= *((_DWORD *)v48 + 10) )
        {
          v49 = (unsigned int)v193;
          v35 = (unsigned __int64)v192;
          goto LABEL_101;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E8,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL,
        (int)v167);
    }
    else
    {
LABEL_101:
      v51 = (unsigned int)v8;
      if ( (int)v49 <= 0 )
      {
LABEL_102:
        if ( v35 )
        {
          if ( (int)v49 > 0 )
          {
            v137 = (std::_Ref_count_base **)(v35 + 8);
            do
            {
              if ( *v137 )
                std::_Ref_count_base::_Decref(*v137);
              v137 += 2;
              --v49;
            }
            while ( v49 );
          }
          free((void *)v35);
          v192 = v8;
        }
        v193 = 0LL;
        if ( v200 )
          LeaveCriticalSection(v200);
        goto LABEL_105;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v192, v51)
                      + 16LL) )
        {
          v152 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                    &v192,
                                                    v51);
          v153 = SystemEffectChainDescriptor::Resolve(v152, (struct SystemEffectDescriptor *)v48);
          if ( v153 < 0 )
            break;
        }
        if ( (int)++v51 >= (int)v49 )
          goto LABEL_102;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1EE,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v153,
        (int)v167);
    }
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v192);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v200);
  }
LABEL_105:
  LODWORD(v52) = a3;
  if ( !*((_DWORD *)a1 + a3 + 10) )
  {
    Lfx = CEndpointCharacteristics::GetLfx(a1, a3, 0LL, &v186, v167);
    goto LABEL_243;
  }
  v53 = *a2;
  v177 = (int)v8;
  v186 = v8;
  v54 = v184;
  if ( !v184[52] )
    goto LABEL_152;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)(v184 + 56), (__int64)&v201);
  v55 = (char *)v8;
  v182 = (char *)v8;
  v56 = (int)v8;
  v183 = 0LL;
  v57 = (unsigned int)v8;
  v58 = (int)v8;
  v172 = (int)v8;
  if ( *((int *)v54 + 10) > 0 )
  {
    do
    {
      if ( (__int64)v8 < 0 || v58 >= *((_DWORD *)v54 + 10) )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        goto LABEL_395;
      }
      v59 = *((_QWORD *)v54 + 4);
      if ( v56 == (_DWORD)v57 )
      {
        if ( (_DWORD)v57 )
        {
          v57 = (unsigned int)(2 * v56);
          if ( (v56 & 0x40000000) != 0 || (unsigned int)v57 > 0x7FFFFFF )
          {
LABEL_391:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1E8,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              (int)v167);
            goto LABEL_393;
          }
        }
        else
        {
          v57 = 1LL;
        }
        v60 = _o__recalloc(v55, (int)v57, 16LL);
        v55 = (char *)v60;
        if ( !v60 )
          goto LABEL_391;
        HIDWORD(v183) = v57;
        v182 = (char *)v60;
        v58 = v172;
      }
      v35 = (unsigned __int64)&v55[16 * v56];
      if ( v35 )
      {
        *(_QWORD *)v35 = 0LL;
        *(_QWORD *)(v35 + 8) = 0LL;
        v19 = *(__int64 *)((char *)&v8[1].lpVtbl + v59);
        v61 = *(__int64 *)((char *)&v8->lpVtbl + v59);
        if ( v19 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
          v57 = HIDWORD(v183);
          v56 = v183;
          v55 = v182;
        }
        v62 = *(std::_Ref_count_base **)(v35 + 8);
        if ( v62 )
        {
          std::_Ref_count_base::_Decref(v62);
          v58 = v172;
        }
        *(_QWORD *)(v35 + 8) = v19;
        *(_QWORD *)v35 = v61;
      }
      LODWORD(v183) = ++v56;
      v172 = ++v58;
      v8 += 2;
      v54 = v184;
    }
    while ( v58 < *((_DWORD *)v184 + 10) );
    v8 = 0LL;
  }
  v172 = (int)v8;
  if ( v56 <= 0 )
  {
LABEL_142:
    if ( v55 )
    {
      if ( v56 > 0 )
      {
        v55 += 8;
        v57 = (unsigned int)v56;
        do
        {
          v35 = *(_QWORD *)v55;
          if ( *(_QWORD *)v55 )
          {
            v56 = -1;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 8), 0xFFFFFFFF) == 1 )
            {
LABEL_404:
              (**(void (__fastcall ***)(volatile signed __int32 *))v35)((volatile signed __int32 *)v35);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 12), v56) == 1 )
                (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v35 + 8LL))(v35);
            }
          }
          v55 += 16;
          --v57;
        }
        while ( v57 );
        v55 = v182;
      }
      free(v55);
      v182 = (char *)v8;
    }
    v183 = 0LL;
    if ( v201 )
      LeaveCriticalSection(v201);
    goto LABEL_152;
  }
  while ( 2 )
  {
    if ( (__int64)v8 < 0 )
      goto LABEL_403;
    if ( !*(_BYTE *)(*(_QWORD *)v55 + 16LL) )
    {
LABEL_139:
      ++v172;
      v8 = (struct IAudioProcessingObject *)((char *)v8 + 1);
      v55 += 16;
      if ( v172 >= v56 )
      {
        v55 = v182;
        v8 = 0LL;
        goto LABEL_142;
      }
      v54 = v184;
      continue;
    }
    break;
  }
  v57 = *(_QWORD *)v55;
  v206 = 0LL;
  v19 = *(_QWORD *)(v57 + 32);
  v63 = *(_QWORD *)(v57 + 24);
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v56 = v183;
  }
  v35 = v19;
  *((_QWORD *)&v206 + 1) = v19;
  *(_QWORD *)&v206 = v63;
  *(_BYTE *)(v57 + 16) = 0;
  v209 = v57;
  v210 = v54;
  if ( *(_QWORD *)(v63 + 56) )
    v64 = 0;
  else
LABEL_395:
    v64 = 1;
  if ( v64 )
  {
    std::_Xbad_function_call();
LABEL_403:
    RaiseException(0xC000008C, 1u, 0, 0LL);
    goto LABEL_404;
  }
  v65 = *(_QWORD *)(v63 + 56);
  v66 = *(__int64 (__fastcall **)())(*(_QWORD *)v65 + 16LL);
  if ( v66 == std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call )
    v67 = lambda_2cdbfdbf6a906d093ee55c9100591272_::operator()(v65 + 8, v210, v209);
  else
    v67 = ((__int64 (__fastcall *)(__int64, char **, __int64 *))v66)(v65, &v210, &v209);
  v68 = v67;
  if ( v67 >= 0 )
  {
    if ( !*(_BYTE *)(v57 + 16) )
    {
      v35 = 0LL;
      v206 = 0uLL;
      if ( v19 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v19);
    }
    if ( v35 )
    {
      v57 = 0xFFFFFFFFLL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 8), 0xFFFFFFFF) == 1 )
      {
        v35 = *((_QWORD *)&v206 + 1);
        (***((void (__fastcall ****)(_QWORD))&v206 + 1))(*((_QWORD *)&v206 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v206 + 1) + 8LL))(*((_QWORD *)&v206 + 1));
      }
      v56 = v183;
    }
    goto LABEL_139;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x63,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v67,
    (int)v167);
  std::shared_ptr<SaDeviceReevaluationContext>::~shared_ptr<SaDeviceReevaluationContext>(&v206);
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1EE,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)v68,
    v169);
LABEL_393:
  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v182);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v201);
  v8 = 0LL;
LABEL_152:
  if ( !*((_BYTE *)v178 + 52) )
    goto LABEL_186;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)(v178 + 14), (__int64)&v202);
  v69 = (char *)v8;
  v174 = (char *)v8;
  v189 = (char *)v8;
  v70 = (unsigned int)v8;
  LODWORD(v190) = (_DWORD)v8;
  HIDWORD(v190) = (_DWORD)v8;
  v71 = 0;
  v72 = v178;
  if ( v178[10] > 0 )
  {
    v73 = 0LL;
    do
    {
      if ( v73 < 0 || v71 >= v72[10] )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x180065CA7LL);
      }
      v74 = *((_QWORD *)v72 + 4);
      if ( (_DWORD)v70 == (_DWORD)v8 )
      {
        if ( (_DWORD)v8 )
        {
          LODWORD(v8) = 2 * v70;
          if ( (v70 & 0x40000000) != 0 || (unsigned int)v8 > 0x7FFFFFF )
          {
LABEL_406:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1E8,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              (int)v167);
            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v189);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v202);
            v8 = 0LL;
            goto LABEL_186;
          }
        }
        else
        {
          LODWORD(v8) = 1;
        }
        v75 = _o__recalloc(v69, (int)v8, 16LL);
        v69 = (char *)v75;
        v174 = (char *)v75;
        if ( !v75 )
          goto LABEL_406;
        HIDWORD(v190) = (_DWORD)v8;
        v189 = (char *)v75;
        v72 = v178;
      }
      v76 = &v69[16 * (int)v70];
      if ( v76 )
      {
        *(_QWORD *)v76 = 0LL;
        *((_QWORD *)v76 + 1) = 0LL;
        v77 = *(_QWORD *)(v73 + v74 + 8);
        v78 = *(_QWORD *)(v73 + v74);
        if ( v77 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v77 + 8));
          LODWORD(v8) = HIDWORD(v190);
          LODWORD(v70) = v190;
          v69 = v189;
          v174 = v189;
        }
        v79 = (std::_Ref_count_base *)*((_QWORD *)v76 + 1);
        if ( v79 )
        {
          std::_Ref_count_base::_Decref(v79);
          v69 = v174;
          v72 = v178;
        }
        *((_QWORD *)v76 + 1) = v77;
        *(_QWORD *)v76 = v78;
      }
      v70 = (unsigned int)(v70 + 1);
      LODWORD(v190) = v70;
      ++v71;
      v73 += 16LL;
    }
    while ( v71 < v72[10] );
  }
  v8 = 0LL;
  v80 = 0LL;
  if ( (int)v70 <= 0 )
  {
LABEL_176:
    if ( v69 )
    {
      if ( (int)v70 > 0 )
      {
        v81 = v69 + 8;
        do
        {
          v80 = *(volatile signed __int32 **)v81;
          if ( *(_QWORD *)v81 )
          {
            v82 = -1;
            if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_411:
              (**(void (__fastcall ***)(volatile signed __int32 *))v80)(v80);
              if ( _InterlockedExchangeAdd(v80 + 3, v82) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 8LL))(v80);
            }
          }
          v81 += 16;
          --v70;
        }
        while ( v70 );
        v69 = v189;
      }
      free(v69);
      v189 = 0LL;
    }
    v190 = 0LL;
    if ( v202 )
      LeaveCriticalSection(v202);
  }
  else
  {
    v81 = v69;
    v82 = (unsigned int)v178;
    while ( 1 )
    {
      if ( (int)v80 < 0 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        goto LABEL_411;
      }
      if ( *(_BYTE *)(*(_QWORD *)v81 + 16LL) )
      {
        v154 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                  &v189,
                                                  (unsigned int)v80);
        v155 = SystemEffectChainDescriptor::Resolve(v154, (struct SystemEffectDescriptor *)v178);
        if ( v155 < 0 )
          break;
      }
      v80 = (volatile signed __int32 *)(unsigned int)((_DWORD)v80 + 1);
      v81 += 16;
      if ( (int)v80 >= (int)v70 )
      {
        v69 = v174;
        goto LABEL_176;
      }
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1EE,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v155,
      (int)v167);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v189);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v202);
  }
LABEL_186:
  v83 = v220;
  if ( *((_BYTE *)v220 + 52) )
  {
    Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)v220 + 56, (__int64)&v203);
    v84 = (std::_Ref_count_base **)v8;
    v194 = v8;
    v85 = (unsigned int)v8;
    LODWORD(v195) = (_DWORD)v8;
    HIDWORD(v195) = (_DWORD)v8;
    v86 = (unsigned int)v8;
    if ( *((int *)v83 + 10) > 0 )
    {
      while ( 1 )
      {
        v138 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)v83 + 32, v86);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v194,
                              v138) )
          break;
        if ( (signed int)++v86 >= *((_DWORD *)v83 + 10) )
        {
          v85 = (unsigned int)v195;
          v84 = (std::_Ref_count_base **)v194;
          goto LABEL_188;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E8,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL,
        (int)v167);
    }
    else
    {
LABEL_188:
      v87 = (unsigned int)v8;
      if ( (int)v85 <= 0 )
      {
LABEL_189:
        if ( v84 )
        {
          if ( (int)v85 > 0 )
          {
            v139 = v84 + 1;
            do
            {
              if ( *v139 )
                std::_Ref_count_base::_Decref(*v139);
              v139 += 2;
              --v85;
            }
            while ( v85 );
          }
          free(v84);
          v194 = v8;
        }
        v195 = 0LL;
        if ( v203 )
          LeaveCriticalSection(v203);
        goto LABEL_192;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v194, v87)
                      + 16LL) )
        {
          v156 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                    &v194,
                                                    v87);
          v157 = SystemEffectChainDescriptor::Resolve(v156, v83);
          if ( v157 < 0 )
            break;
        }
        if ( (int)++v87 >= (int)v85 )
          goto LABEL_189;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1EE,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v157,
        (int)v167);
    }
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v194);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v203);
  }
LABEL_192:
  v88 = a3;
  v89 = a1;
  if ( *((_DWORD *)a1 + a3 + 10) )
  {
    v90 = 1;
    v91 = *((_QWORD *)a1 + 7);
    if ( !v91 )
      goto LABEL_194;
    pvar = 0LL;
    v218 = 0LL;
    v219 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v91 + 40LL))(
           v91,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v90 = (int)v8;
      LOBYTE(v90) = (_DWORD)v218 == 0;
    }
    PropVariantClear(&pvar);
    if ( v90 || (v92 = (int)v8, a3 == eKeywordDetectorConnector) )
LABEL_194:
      v92 = 1;
    v224 = v53;
    v93 = (__int64)v184;
    if ( v92 )
    {
      v222 = v53;
      v216 = v53;
      if ( v184[52] && (v94 = (int)v8, *((int *)v184 + 10) > 0) )
      {
        v52 = (__int64)v8;
        while ( 1 )
        {
          if ( v52 < 0 || v94 >= *((_DWORD *)v184 + 10) )
          {
            ATL::_AtlRaiseException(0xC000008C, v52);
            __debugbreak();
          }
          if ( *(_BYTE *)(*(_QWORD *)(v52 + *((_QWORD *)v184 + 4)) + 16LL) )
          {
            if ( v94 >= *((_DWORD *)v184 + 10) )
              goto LABEL_439;
            v95 = *(__int64 **)(v52 + *((_QWORD *)v184 + 4));
            v96 = (int)v8;
            v97 = *((_DWORD *)v95 + 2);
            if ( v97 > 0 )
            {
              v98 = *v95;
              while ( 1 )
              {
                v99 = *(_QWORD *)(v98 + 16LL * v96) - *(_QWORD *)&v216.Data1;
                if ( !v99 )
                  v99 = *(_QWORD *)(v98 + 16LL * v96 + 8) - *(_QWORD *)v216.Data4;
                if ( !v99 )
                  break;
                if ( ++v96 >= v97 )
                  goto LABEL_423;
              }
              if ( v96 != -1 )
                break;
            }
          }
LABEL_423:
          ++v94;
          v52 += 16LL;
          if ( v94 >= *((_DWORD *)v184 + 10) )
            goto LABEL_227;
        }
        Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)(v184 + 56), (__int64)&v213);
        if ( v94 < 0 || v94 >= *(_DWORD *)(v93 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, v100);
LABEL_439:
          ATL::_AtlRaiseException(0xC000008C, v52);
          __debugbreak();
        }
        v101 = (__int64 *)(*(_QWORD *)(v93 + 32) + 16LL * v94);
        v221 = 0LL;
        v102 = (volatile signed __int32 *)v101[1];
        v103 = *v101;
        if ( v102 )
          _InterlockedIncrement(v102 + 2);
        *((_QWORD *)&v221 + 1) = v102;
        *(_QWORD *)&v221 = v103;
        v207 = 0LL;
        v104 = *(volatile signed __int32 **)(v103 + 32);
        v105 = *(_QWORD *)(v103 + 24);
        if ( v104 )
          _InterlockedIncrement(v104 + 2);
        v106 = v104;
        *((_QWORD *)&v207 + 1) = v104;
        *(_QWORD *)&v207 = v105;
        *(_BYTE *)(v103 + 16) = 0;
        v211 = v103;
        v212 = v93;
        if ( !*(_QWORD *)(v105 + 56) )
        {
          std::_Xbad_function_call();
          JUMPOUT(0x180065E30LL);
        }
        v107 = *(_QWORD *)(v105 + 56);
        v108 = *(__int64 (__fastcall **)())(*(_QWORD *)v107 + 16LL);
        if ( v108 == std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call )
          v109 = lambda_2cdbfdbf6a906d093ee55c9100591272_::operator()(v107 + 8, v212, v211);
        else
          v109 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64 *))v108)(v107, &v212, &v211);
        if ( v109 >= 0 )
        {
          if ( !*(_BYTE *)(v103 + 16) )
          {
            v106 = (volatile signed __int32 *)v8;
            *((_QWORD *)&v207 + 1) = v8;
            *(_QWORD *)&v207 = v8;
            if ( v104 )
              std::_Ref_count_base::_Decref((std::_Ref_count_base *)v104);
          }
          if ( v106 )
          {
            if ( _InterlockedExchangeAdd(v106 + 2, 0xFFFFFFFF) == 1 )
            {
              v158 = *((_QWORD *)&v207 + 1);
              (***((void (__fastcall ****)(_QWORD))&v207 + 1))(*((_QWORD *)&v207 + 1));
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v158 + 12), 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v207 + 1) + 8LL))(*((_QWORD *)&v207 + 1));
            }
          }
          if ( v102 )
          {
            if ( _InterlockedExchangeAdd(v102 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v102)(v102);
              if ( _InterlockedExchangeAdd(v102 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v102 + 8LL))(v102);
            }
          }
          if ( v213 )
            LeaveCriticalSection(v213);
          v88 = a3;
          v89 = a1;
          goto LABEL_227;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x63,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v109,
          (int)v167);
        std::shared_ptr<SaDeviceReevaluationContext>::~shared_ptr<SaDeviceReevaluationContext>(&v207);
        if ( v102 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v102);
        if ( v213 )
          LeaveCriticalSection(v213);
        v88 = a3;
        v89 = a1;
LABEL_447:
        if ( !*(_QWORD *)(v93 + 16)
          || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             *(_QWORD *)(v93 + 16),
                             &v222) == -1 )
        {
          v116 = v8;
        }
        else
        {
          v116 = *(struct IAudioProcessingObject **)(v93 + 16);
        }
      }
      else
      {
LABEL_227:
        v110 = (int)v8;
        if ( *(int *)(v93 + 40) <= 0 )
          goto LABEL_447;
        v111 = (__int64)v8;
        while ( 1 )
        {
          if ( v111 < 0 || v110 >= *(_DWORD *)(v93 + 40) )
          {
            ATL::_AtlRaiseException(0xC000008C, v52);
            __debugbreak();
          }
          v52 = *(_QWORD *)(v111 + *(_QWORD *)(v93 + 32));
          v112 = (int)v8;
          v113 = *(_DWORD *)(v52 + 8);
          if ( v113 > 0 )
          {
            v114 = *(_QWORD *)v52;
            while ( 1 )
            {
              LODWORD(v52) = 2 * v112;
              v115 = *(_QWORD *)(v114 + 16LL * v112) - *(_QWORD *)&v216.Data1;
              if ( !v115 )
                v115 = *(_QWORD *)(v114 + 16LL * v112 + 8) - *(_QWORD *)v216.Data4;
              if ( !v115 )
                break;
              if ( ++v112 >= v113 )
                goto LABEL_442;
            }
            if ( v112 != -1 )
              break;
          }
LABEL_442:
          ++v110;
          v111 += 16LL;
          if ( v110 >= *(_DWORD *)(v93 + 40) )
            goto LABEL_447;
        }
        if ( v110 == -1 )
          goto LABEL_447;
        if ( v110 < 0 || v110 >= *(_DWORD *)(v93 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, v52);
          __debugbreak();
        }
        v116 = *(struct IAudioProcessingObject **)(*(_QWORD *)(v93 + 32) + 16LL * v110);
      }
      if ( v116 )
      {
LABEL_242:
        v225 = v53;
        Lfx = CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                (__int64)v89,
                v93,
                1u,
                0,
                &v225,
                (int)v8,
                (int)v8,
                v88,
                (CCompositeSystemEffect **)v8,
                &v186,
                (struct IAudioSystemEffects2 **)v8);
        goto LABEL_243;
      }
    }
    else if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v184, &v224) != -1 )
    {
      goto LABEL_242;
    }
  }
  Lfx = v177;
LABEL_243:
  if ( Lfx < 0 )
  {
LABEL_491:
    v118 = v179;
    goto LABEL_282;
  }
  if ( v186 )
  {
    v191 = (struct IAudioMediaType *)v8;
    v196 = (struct IAudioMediaType *)v8;
    v185 = (struct IAudioMediaType *)v8;
    Lfx = CAudioMediaType::Create(v214, (unsigned int)v214->cbSize + 18, &v191, 0.0, (int)v8);
    if ( Lfx >= 0 )
    {
      v118 = v179;
      Lfx = CAudioMediaType::Create(v179, (unsigned int)v179->cbSize + 18, &v196, 0.0, (int)v8);
      if ( Lfx < 0 )
      {
        if ( v185 )
        {
          Release = (void (*)(void))v185->lpVtbl->Release;
          if ( (char *)Release == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v185);
          else
            Release();
        }
        if ( v196 )
        {
          v162 = (void (*)(void))v196->lpVtbl->Release;
          if ( (char *)v162 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v196);
          else
            v162();
        }
        v163 = (CAudioMediaType *)v191;
        if ( !v191 )
          goto LABEL_282;
        v164 = v191->lpVtbl->Release;
        if ( (char *)v164 == (char *)CAudioMediaType::Release )
          goto LABEL_472;
        goto LABEL_473;
      }
      lpVtbl = v186->lpVtbl;
      v141 = (CAudioMediaType *)v196;
      v142 = (CAudioMediaType *)v191;
      if ( *((_DWORD *)a1 + 37) )
      {
        v144 = v191;
        IsOutputFormatSupported = (__int64 (__fastcall *)(CAPOWrapperClient *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))lpVtbl->IsOutputFormatSupported;
      }
      else
      {
        IsOutputFormatSupported = (__int64 (__fastcall *)(CAPOWrapperClient *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))lpVtbl->IsInputFormatSupported;
        v144 = v191;
        if ( IsOutputFormatSupported == CAPOWrapperClient::IsInputFormatSupported )
        {
          IsInputFormatSupported = CAPOWrapperClient::IsInputFormatSupported(
                                     (CAPOWrapperClient *)v186,
                                     v191,
                                     v196,
                                     &v185);
          goto LABEL_337;
        }
      }
      IsInputFormatSupported = IsOutputFormatSupported((CAPOWrapperClient *)v186, v144, v196, &v185);
LABEL_337:
      Lfx = IsInputFormatSupported;
      if ( IsInputFormatSupported >= 0 )
      {
        if ( IsInputFormatSupported == 1 || (unsigned int)ValidateWaveFormatEx(Src) )
          Lfx = 1;
        if ( v185 )
        {
          v146 = (void (*)(void))v185->lpVtbl->Release;
          if ( (char *)v146 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v185);
          else
            v146();
        }
        if ( v141 )
        {
          v147 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v141 + 16LL);
          if ( v147 == CAudioMediaType::Release )
            CAudioMediaType::Release(v141);
          else
            v147(v141);
        }
        if ( v142 )
        {
          v148 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v142 + 16LL);
          if ( v148 == CAudioMediaType::Release )
            CAudioMediaType::Release(v142);
          else
            v148(v142);
        }
LABEL_278:
        if ( a6 && Lfx )
        {
          v132 = a4->cbSize;
          v133 = (struct tWAVEFORMATEX *)operator new[](v132 + 18, (const struct std::nothrow_t *)&std::nothrow);
          *a6 = v133;
          if ( v133 )
          {
            memcpy_0(v133, a4, v132 + 18);
            Lfx = 1;
          }
          else
          {
            Lfx = -2147024882;
          }
        }
        goto LABEL_282;
      }
      if ( v185 )
      {
        v165 = (void (*)(void))v185->lpVtbl->Release;
        if ( (char *)v165 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)v185);
        else
          v165();
      }
      if ( v141 )
      {
        v166 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v141 + 16LL);
        if ( v166 == CAudioMediaType::Release )
          CAudioMediaType::Release(v141);
        else
          v166(v141);
      }
      if ( !v142 )
        goto LABEL_282;
      v164 = *(ULONG (__stdcall **)(IAudioMediaType *))(*(_QWORD *)v142 + 16LL);
      v163 = v142;
      if ( (char *)v164 == (char *)CAudioMediaType::Release )
      {
LABEL_472:
        CAudioMediaType::Release(v163);
        goto LABEL_282;
      }
LABEL_473:
      ((void (*)(void))v164)();
      goto LABEL_282;
    }
    if ( v185 )
    {
      v159 = (void (*)(void))v185->lpVtbl->Release;
      if ( (char *)v159 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v185);
      else
        v159();
    }
    if ( v191 )
    {
      v160 = (void (*)(void))v191->lpVtbl->Release;
      if ( (char *)v160 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v191);
      else
        v160();
    }
    goto LABEL_491;
  }
  v118 = v179;
  nChannels = v179->nChannels;
  if ( (_WORD)v8 == nChannels )
    goto LABEL_301;
  nSamplesPerSec = v179->nSamplesPerSec;
  if ( !nSamplesPerSec )
    goto LABEL_301;
  nAvgBytesPerSec = v179->nAvgBytesPerSec;
  if ( !nAvgBytesPerSec )
    goto LABEL_301;
  nBlockAlign = v179->nBlockAlign;
  if ( (_WORD)v8 == nBlockAlign )
    goto LABEL_301;
  v123 = v179->cbSize;
  if ( v123 > 0x400u )
    goto LABEL_301;
  v124 = v179->wFormatTag;
  if ( ((v179->wFormatTag - 1) & 0xFFFD) == 0 )
  {
    if ( (_WORD)v8 == v123
      && (v179->wBitsPerSample & 7) == 0
      && nChannels <= 2u
      && nAvgBytesPerSec == (nSamplesPerSec * v179->wBitsPerSample * nChannels) >> 3 )
    {
      goto LABEL_267;
    }
    goto LABEL_301;
  }
  if ( v124 != 0xFFFE )
    goto LABEL_267;
  if ( v123 < 0x16u )
    goto LABEL_301;
  v125 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&v179[1].nSamplesPerSec + 2);
  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v179[1].nSamplesPerSec + 2) )
    v125 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v179[1].wBitsPerSample;
  if ( v125 )
  {
    v126 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
         - *(_QWORD *)((char *)&v179[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v179[1].nSamplesPerSec + 2) )
      v126 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v179[1].wBitsPerSample;
    if ( v126 )
    {
LABEL_267:
      if ( ((v124 - 1) & 0xFFFD) != 0 )
      {
        if ( v124 != 0xFFFE )
          goto LABEL_301;
        v130 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
             - *(_QWORD *)((char *)&v179[1].nSamplesPerSec + 2);
        if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v179[1].nSamplesPerSec
                                                                                      + 2) )
          v130 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v179[1].wBitsPerSample;
        if ( v130 )
        {
          v131 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
               - *(_QWORD *)((char *)&v179[1].nSamplesPerSec + 2);
          if ( !v131 )
            v131 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v179[1].wBitsPerSample;
          if ( v131 )
            goto LABEL_301;
        }
      }
      if ( nSamplesPerSec == v214->nSamplesPerSec
        && nChannels == v214->nChannels
        && v170
        && !(unsigned int)ValidateWaveFormatEx(Src) )
      {
        Lfx = (int)v8;
        goto LABEL_282;
      }
      Lfx = 1;
      goto LABEL_278;
    }
  }
  v127 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&v179[1].nSamplesPerSec + 2);
  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v179[1].nSamplesPerSec + 2) )
    v127 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v179[1].wBitsPerSample;
  wBitsPerSample = v179->wBitsPerSample;
  if ( v127 )
  {
    if ( ((wBitsPerSample - 32) & 0xFFDF) == 0 )
    {
LABEL_263:
      v129 = v179[1].wFormatTag;
      if ( (_WORD)v8 != v129
        && wBitsPerSample >= v129
        && nAvgBytesPerSec == (nSamplesPerSec * nChannels * wBitsPerSample) >> 3
        && nBlockAlign == nChannels * wBitsPerSample / 8 )
      {
        goto LABEL_267;
      }
    }
  }
  else if ( ((wBitsPerSample - 8) & 0xFFE7) == 0 )
  {
    goto LABEL_263;
  }
LABEL_301:
  Lfx = -2004287480;
LABEL_282:
  CoTaskMemFree(pv);
  pv = v8;
  CoTaskMemFree(v118);
  v204 = v8;
  if ( v186 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v186->lpVtbl->Release)(v186);
  return (unsigned int)Lfx;
}
