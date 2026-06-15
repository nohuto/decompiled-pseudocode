/*
 * XREFs of ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140012AD0
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140007C50 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000DCB0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000E2F0 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000E380 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000E610 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400112E0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x1400116C0 (-InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140015220 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x1400152C0 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14001B070 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x14001B990 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D508 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _wcsicmp @ 0x14001DC14 (_wcsicmp.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     _CxxThrowException_0 @ 0x14001E752 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x14003045C (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140030F84 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?FreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140031040 (-FreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXPEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140034E94 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     WPP_SF_ @ 0x140036454 (WPP_SF_.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140036954 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     WPP_SF__guid_ @ 0x14003FBC8 (WPP_SF__guid_.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CPipeInstance::CreateSubmixPipeInstance(
        struct IDeviceGraphObjectCache *a1,
        struct SUBMIX_DESCRIPTOR *a2,
        struct CPipeInstance **a3)
{
  struct SUBMIX_DESCRIPTOR *v4; // r12
  BOOL v5; // r13d
  ATL::CAtlPlex *v6; // r15
  const struct tWAVEFORMATEX *v7; // r14
  CAudioMediaType *v8; // rbx
  ATL::CAtlPlex *v9; // rsi
  int v10; // r14d
  ULONG (__stdcall *AddRef)(IAudioMediaType *); // rax
  __int64 v12; // rcx
  unsigned int (__fastcall *v13)(CAudioMediaType *__hidden); // rax
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(CAudioMediaType *); // rax
  __int64 v16; // rbx
  ATL::CAtlPlex *v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  ATL::CAtlPlex *v20; // rax
  __int64 v21; // r9
  ATL::CAtlPlex *v22; // r8
  ATL::CAtlPlex *v23; // rcx
  unsigned int i; // ebx
  int v25; // eax
  CAPOProcessNode *v26; // r13
  ATL::CAtlPlex *v27; // rsi
  int Common; // ebx
  int v29; // r12d
  LSTATUS v30; // eax
  DWORD v31; // r14d
  HKEY v32; // r15
  LSTATUS v33; // eax
  ATL::CAtlPlex *v34; // rax
  char *v35; // rax
  __int128 v36; // xmm0
  void (__fastcall *v37)(CAPOProcessNode *, struct IAudioMediaType *); // rax
  CAudioMediaType *v38; // rbx
  void (__fastcall *v39)(CAPOProcessNode *, struct IAudioMediaType *); // rax
  __int64 v40; // rsi
  ATL::CAtlPlex *v41; // rax
  ATL::CAtlPlex *v42; // rcx
  HKEY v43; // r15
  unsigned int v44; // eax
  _WORD *v45; // r14
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // r12
  _WORD *v48; // rax
  _WORD *v49; // r9
  int v50; // r13d
  int v51; // ecx
  unsigned __int64 v52; // rax
  _WORD *v53; // rcx
  int v54; // r10d
  __int64 v55; // r8
  unsigned __int64 v56; // r12
  struct SUBMIX_DESCRIPTOR *v57; // rdx
  struct IDeviceGraphObjectCache *v58; // rsi
  __int64 v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // r14
  __int64 v62; // r12
  struct IDeviceGraphObjectCache *v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rax
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // rax
  int v70; // r9d
  _QWORD *v71; // r8
  ATL::CAtlPlex *v72; // rcx
  LSTATUS v73; // eax
  LSTATUS v74; // eax
  CLSID *v75; // rcx
  struct APO_REG_PROPERTIES *v76; // rax
  __int64 v77; // rdx
  struct SUBMIX_DESCRIPTOR *v78; // rdx
  __int64 (__fastcall *v79)(CAudioMediaType *); // rax
  int v81; // eax
  GUID *v82; // rax
  int v83; // r9d
  int v84; // eax
  __int64 v85; // rsi
  ATL::CAtlPlex *v86; // rcx
  ATL::CAtlPlex *v87; // rdx
  struct ATL::CAtlPlex *v88; // rax
  __int64 v89; // r8
  ATL::CAtlPlex *v90; // r9
  __int64 v91; // rax
  int v92; // eax
  __int128 v93; // [rsp+48h] [rbp-EA0h] BYREF
  __int64 v94; // [rsp+58h] [rbp-E90h]
  ATL::CAtlPlex *v95[2]; // [rsp+60h] [rbp-E88h] BYREF
  unsigned __int64 v96; // [rsp+70h] [rbp-E78h]
  int v97; // [rsp+78h] [rbp-E70h]
  int v98; // [rsp+7Ch] [rbp-E6Ch]
  DWORD cchName; // [rsp+80h] [rbp-E68h] BYREF
  int v100; // [rsp+84h] [rbp-E64h]
  int v101; // [rsp+88h] [rbp-E60h]
  BOOL v102; // [rsp+8Ch] [rbp-E5Ch]
  ATL::CAtlPlex *v103; // [rsp+90h] [rbp-E58h]
  int v104; // [rsp+98h] [rbp-E50h]
  struct IAudioMediaType *v105; // [rsp+A0h] [rbp-E48h] BYREF
  HKEY hKey; // [rsp+A8h] [rbp-E40h] BYREF
  __int64 v107; // [rsp+B0h] [rbp-E38h] BYREF
  LPOLESTR lpsz; // [rsp+B8h] [rbp-E30h] BYREF
  ATL::CAtlPlex *v109; // [rsp+C0h] [rbp-E28h] BYREF
  int v110; // [rsp+C8h] [rbp-E20h]
  _DWORD v111[2]; // [rsp+CCh] [rbp-E1Ch] BYREF
  int v112; // [rsp+D4h] [rbp-E14h] BYREF
  DWORD j; // [rsp+D8h] [rbp-E10h]
  int v114; // [rsp+DCh] [rbp-E0Ch] BYREF
  int v115; // [rsp+E0h] [rbp-E08h]
  int v116; // [rsp+E4h] [rbp-E04h] BYREF
  int v117; // [rsp+E8h] [rbp-E00h] BYREF
  int v118; // [rsp+ECh] [rbp-DFCh]
  int v119; // [rsp+F0h] [rbp-DF8h]
  int v120; // [rsp+F4h] [rbp-DF4h] BYREF
  struct IAudioMediaType *v121; // [rsp+F8h] [rbp-DF0h] BYREF
  HKEY phkResult; // [rsp+100h] [rbp-DE8h] BYREF
  ATL::CAtlPlex *v123; // [rsp+108h] [rbp-DE0h]
  struct SUBMIX_DESCRIPTOR *v124; // [rsp+110h] [rbp-DD8h]
  ATL::CAtlPlex *v125; // [rsp+118h] [rbp-DD0h]
  ATL::CAtlPlex *v126; // [rsp+120h] [rbp-DC8h] BYREF
  int v127; // [rsp+128h] [rbp-DC0h]
  struct _FILETIME ftLastWriteTime; // [rsp+130h] [rbp-DB8h] BYREF
  int pExceptionObject; // [rsp+138h] [rbp-DB0h] BYREF
  _WORD *v130; // [rsp+140h] [rbp-DA8h]
  __int64 v131; // [rsp+148h] [rbp-DA0h]
  __int64 v132; // [rsp+150h] [rbp-D98h]
  _QWORD *v133; // [rsp+158h] [rbp-D90h]
  ATL::CAtlPlex *v134; // [rsp+160h] [rbp-D88h]
  struct IDeviceGraphObjectCache *v135; // [rsp+168h] [rbp-D80h]
  ATL::CAtlPlex *v136; // [rsp+170h] [rbp-D78h]
  ATL::CAtlPlex *v137; // [rsp+178h] [rbp-D70h]
  void *v138; // [rsp+180h] [rbp-D68h]
  DWORD Type; // [rsp+188h] [rbp-D60h] BYREF
  _WORD *v140; // [rsp+190h] [rbp-D58h]
  unsigned __int64 v141; // [rsp+198h] [rbp-D50h]
  unsigned __int64 v142; // [rsp+1A0h] [rbp-D48h]
  struct CPipeInstance **v143; // [rsp+1A8h] [rbp-D40h]
  __int64 v144; // [rsp+1B0h] [rbp-D38h]
  long *v145; // [rsp+1B8h] [rbp-D30h] BYREF
  ATL::CAtlException *v146; // [rsp+1C0h] [rbp-D28h] BYREF
  GUID v147; // [rsp+1D0h] [rbp-D18h] BYREF
  __int128 v148; // [rsp+1E0h] [rbp-D08h] BYREF
  int v149; // [rsp+1F0h] [rbp-CF8h]
  int v150; // [rsp+600h] [rbp-8E8h]
  int v151; // [rsp+608h] [rbp-8E0h]
  GUID pclsid; // [rsp+630h] [rbp-8B8h] BYREF
  struct APO_REG_PROPERTIES v153; // [rsp+640h] [rbp-8A8h] BYREF
  WCHAR Name[512]; // [rsp+A90h] [rbp-458h] BYREF

  v144 = -2LL;
  v143 = a3;
  v4 = a2;
  v124 = a2;
  v135 = a1;
  v93 = 0LL;
  v94 = 0LL;
  *(_OWORD *)v95 = 0LL;
  LODWORD(v96) = 10;
  v5 = *(_DWORD *)a2 != 0;
  v102 = v5;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids);
  }
  *a3 = 0LL;
  try
  {
    v6 = 0LL;
    v125 = 0LL;
    v7 = (const struct tWAVEFORMATEX *)*((_QWORD *)v4 + 3);
    v8 = 0LL;
    v121 = 0LL;
    v9 = (ATL::CAtlPlex *)operator new(0x30uLL);
    v103 = v9;
    if ( v9 )
    {
      *(_QWORD *)v9 = &CProcessNode::`vftable';
      *((_QWORD *)v9 + 1) = 0LL;
      *((_QWORD *)v9 + 2) = 0LL;
      *((_DWORD *)v9 + 6) = v5;
      *((_QWORD *)v9 + 4) = 0LL;
      *((_DWORD *)v9 + 10) = 4;
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
    {
      v10 = CAudioMediaType::Create(v7, (unsigned int)v7->cbSize + 18, &v121, 0.0, 0);
      v127 = v10;
      if ( v10 < 0 )
      {
        v8 = (CAudioMediaType *)v121;
      }
      else
      {
        v8 = (CAudioMediaType *)v121;
        if ( *((struct IAudioMediaType **)v9 + 1) != v121 )
        {
          if ( v121 )
          {
            AddRef = v121->lpVtbl->AddRef;
            if ( (char *)AddRef == (char *)CAudioMediaType::AddRef )
              CAudioMediaType::AddRef((CAudioMediaType *)v121);
            else
              ((void (__fastcall *)(struct IAudioMediaType *))AddRef)(v121);
          }
          v12 = *((_QWORD *)v9 + 1);
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          *((_QWORD *)v9 + 1) = v8;
        }
        if ( *((CAudioMediaType **)v9 + 2) != v8 )
        {
          if ( v8 )
          {
            v13 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v8 + 8LL);
            if ( v13 == CAudioMediaType::AddRef )
              CAudioMediaType::AddRef(v8);
            else
              v13(v8);
          }
          v14 = *((_QWORD *)v9 + 2);
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          *((_QWORD *)v9 + 2) = v8;
        }
        v6 = v9;
        v125 = v9;
      }
      if ( v10 >= 0 )
      {
LABEL_26:
        if ( v8 )
        {
          v15 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v8 + 16LL);
          if ( v15 == CAudioMediaType::Release )
            CAudioMediaType::Release(v8);
          else
            v15(v8);
        }
        if ( v10 < 0 )
        {
          pExceptionObject = v10;
          throw (long *)&pExceptionObject;
        }
        v16 = *((_QWORD *)&v93 + 1);
        v17 = v95[1];
        if ( v95[1] )
        {
LABEL_41:
          v103 = v17;
          v23 = *(ATL::CAtlPlex **)v17;
          v126 = v17;
          if ( v17 )
            *((_QWORD *)v17 + 2) = v6;
          v95[1] = v23;
          *((_QWORD *)v17 + 1) = v16;
          *(_QWORD *)v17 = 0LL;
          ++v94;
          if ( *((_QWORD *)&v93 + 1) )
            **((_QWORD **)&v93 + 1) = v17;
          else
            *(_QWORD *)&v93 = v17;
          *((_QWORD *)&v93 + 1) = v17;
          v125 = 0LL;
          for ( i = 0; ; ++i )
          {
            v111[1] = i;
            if ( i >= *((_DWORD *)v4 + 22) )
              break;
            v107 = 0LL;
            v81 = *((_DWORD *)v4 + 16);
            if ( _bittest(&v81, i) )
            {
              v82 = (GUID *)((char *)v4 + 68);
              v83 = 2;
            }
            else
            {
              v82 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
              v83 = 0;
            }
            v147 = *v82;
            v84 = CAPOProcessNode::CreateAPOProcessNode(
                    (const struct _GUID *)((char *)v4 + 16 * i + 92),
                    v5,
                    0,
                    v83,
                    (__int128 *)&v147,
                    &v107);
            if ( v84 < 0 )
            {
              v111[0] = v84;
              throw (long *)v111;
            }
            v85 = *((_QWORD *)&v93 + 1);
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v93);
            v86 = v95[1];
            v103 = v95[1];
            v87 = *(ATL::CAtlPlex **)v95[1];
            v126 = v95[1];
            if ( v95[1] )
              *((_QWORD *)v95[1] + 2) = v107;
            v95[1] = v87;
            *((_QWORD *)v86 + 1) = v85;
            *(_QWORD *)v86 = 0LL;
            ++v94;
            if ( *((_QWORD *)&v93 + 1) )
              **((_QWORD **)&v93 + 1) = v86;
            else
              *(_QWORD *)&v93 = v86;
            *((_QWORD *)&v93 + 1) = v86;
            v107 = 0LL;
          }
          v105 = 0LL;
          v25 = CAudioMediaType::Create(*((const struct tWAVEFORMATEX **)v4 + 6), *((_DWORD *)v4 + 10), &v105, 0.0, 0);
          if ( v25 < 0 )
          {
            v112 = v25;
            throw (long *)&v112;
          }
          if ( *(_DWORD *)v4 )
          {
            if ( *(_DWORD *)v4 == 1 )
            {
              v109 = 0LL;
              v38 = (CAudioMediaType *)v105;
              v91 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v105->lpVtbl->GetAudioFormat)(v105);
              v92 = CProcessNode::CreateDummyProcessNode(v5, v91, &v109);
              if ( v92 < 0 )
              {
                v116 = v92;
                throw (long *)&v116;
              }
              v126 = v109;
              ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v93, &v126);
              v109 = 0LL;
            }
            else
            {
              v38 = (CAudioMediaType *)v105;
            }
LABEL_89:
            v43 = (HKEY)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
            ftLastWriteTime = (struct _FILETIME)v43;
            if ( v43 )
            {
              v44 = *((_DWORD *)v4 + 2);
              *((_QWORD *)v43 + 2) = 0LL;
              *((_QWORD *)v43 + 3) = 0LL;
              *((_QWORD *)v43 + 4) = 0LL;
              *((_QWORD *)v43 + 5) = 0LL;
              *((_QWORD *)v43 + 6) = 0LL;
              *((_DWORD *)v43 + 14) = 10;
              *((_QWORD *)v43 + 8) = 0LL;
              *((_QWORD *)v43 + 9) = 0LL;
              *((_QWORD *)v43 + 10) = 0LL;
              *((_QWORD *)v43 + 11) = 0LL;
              *((_QWORD *)v43 + 12) = 0LL;
              *((_DWORD *)v43 + 26) = 10;
              *((_QWORD *)v43 + 18) = 0LL;
              *((_QWORD *)v43 + 21) = 0LL;
              *((_QWORD *)v43 + 22) = 0LL;
              *((_QWORD *)v43 + 23) = 0LL;
              *((_QWORD *)v43 + 29) = 0LL;
              *((_QWORD *)v43 + 30) = 0LL;
              *((_QWORD *)v43 + 31) = 0LL;
              *((_QWORD *)v43 + 32) = 0LL;
              *((_QWORD *)v43 + 33) = 0LL;
              *((_QWORD *)v43 + 34) = 0LL;
              *((_DWORD *)v43 + 70) = 10;
              *((_DWORD *)v43 + 56) = 0;
              *(_QWORD *)v43 = 0LL;
              *((_QWORD *)v43 + 14) = v44;
              *((_DWORD *)v43 + 30) = 0;
              *((_DWORD *)v43 + 31) = 0;
              *((_DWORD *)v43 + 33) = 1;
              *((_DWORD *)v43 + 34) = 0;
              *((_DWORD *)v43 + 35) = 0;
              if ( *((_QWORD *)v43 + 21) )
                ATL::AtlComPtrAssign((struct IUnknown **)v43 + 21, 0LL);
              if ( *((_QWORD *)v43 + 22) )
                ATL::AtlComPtrAssign((struct IUnknown **)v43 + 22, 0LL);
              *((_DWORD *)v43 + 48) = 0;
              *((_DWORD *)v43 + 49) = 0;
              *((_DWORD *)v43 + 50) = 1;
              *((GUID *)v43 + 13) = GUID_00000000_0000_0000_0000_000000000000;
              *((_DWORD *)v43 + 2) = 0;
              *((GUID *)v43 + 18) = GUID_00000000_0000_0000_0000_000000000000;
            }
            else
            {
              v43 = 0LL;
            }
            hKey = v43;
            if ( !v43 )
            {
              v117 = -2147024882;
              throw (long *)&v117;
            }
            v45 = (_WORD *)*((_QWORD *)v4 + 4);
            v46 = -1LL;
            do
              ++v46;
            while ( v45[v46] );
            *((_QWORD *)v43 + 23) = 0LL;
            v47 = v46 + 1;
            if ( v46 + 1 < v46 )
            {
              v50 = -2147024362;
            }
            else
            {
              v98 = 0;
              *((_QWORD *)v43 + 23) = 0LL;
              if ( !is_mul_ok(v47, 2uLL) )
              {
                v50 = -2147024362;
                v98 = -2147024362;
                goto LABEL_115;
              }
              v48 = CoTaskMemAlloc(2 * v47);
              v49 = v48;
              *((_QWORD *)v43 + 23) = v48;
              if ( v48 )
              {
                v50 = 0;
                v98 = 0;
                v103 = (ATL::CAtlPlex *)v46;
                v138 = v45;
                v51 = 0;
                if ( v47 > 0x7FFFFFFF )
                  v51 = -2147024809;
                v97 = v51;
                if ( v51 < 0 )
                {
                  if ( v46 == -1LL )
                    goto LABEL_115;
                }
                else
                {
                  v118 = 0;
                  if ( v46 < 0x7FFFFFFF )
                  {
                    if ( !v45 )
                    {
                      v45 = &unk_14006B308;
                      v138 = &unk_14006B308;
                      v46 = 0LL;
                      v103 = 0LL;
                    }
                    v97 = 0;
                    if ( v47 )
                    {
                      v132 = 0LL;
                      v142 = v46;
                      v140 = v45;
                      v52 = v47;
                      v141 = v47;
                      v53 = v49;
                      v130 = v49;
                      v54 = 0;
                      v55 = 0LL;
                      v131 = 0LL;
                      while ( v52 )
                      {
                        if ( !v46 || !*v45 )
                          goto LABEL_113;
                        *v53++ = *v45;
                        v130 = v53;
                        v140 = ++v45;
                        v141 = --v52;
                        v142 = --v46;
                        v131 = ++v55;
                      }
                      v130 = --v53;
                      v131 = --v55;
                      v54 = -2147024774;
LABEL_113:
                      *v53 = 0;
                      v132 = v55;
                      v97 = v54;
                      v56 = v47 - v55;
                      if ( v54 >= 0 && v56 > 1 && 2 * v56 > 2 )
                        memset(&v49[v132 + 1], 0, 2 * v56 - 2);
                    }
                    else if ( v46 && *v45 )
                    {
                      v97 = -2147024774;
                    }
LABEL_115:
                    if ( v50 >= 0 )
                    {
                      v57 = v124;
                      *((_DWORD *)v43 + 30) = *(_DWORD *)v124 == 2;
                      *((_DWORD *)v43 + 3) = v102;
                      *((_DWORD *)v43 + 32) = *((_DWORD *)v57 + 16) != 0;
                      if ( *((_QWORD *)v43 + 18) )
                        ATL::AtlComPtrAssign((struct IUnknown **)v43 + 18, 0LL);
                      v58 = v135;
                      if ( *((struct IDeviceGraphObjectCache **)v43 + 29) != v135 )
                      {
                        if ( v135 )
                          (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)v135 + 8LL))(v135);
                        v59 = *((_QWORD *)v43 + 29);
                        if ( v59 )
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
                        *((_QWORD *)v43 + 29) = v58;
                      }
                      *(_QWORD *)v43 = 0LL;
                      *((_DWORD *)v43 + 2) = 1;
                      v60 = *((_QWORD *)&v93 + 1);
                      while ( v60 )
                      {
                        v61 = v60;
                        v60 = *(_QWORD *)(v60 + 8);
                        v62 = *((_QWORD *)v43 + 2);
                        if ( !*((_QWORD *)v43 + 6) )
                        {
                          v66 = *((unsigned int *)v43 + 14);
                          if ( *((_DWORD *)v43 + 14) )
                          {
                            if ( v66 == 10 )
                              v67 = 0x1999999999999999LL;
                            else
                              v67 = 0xFFFFFFFFFFFFFFFFuLL / v66;
                            if ( v67 < 0x18 )
LABEL_247:
                              ATL::AtlThrowImpl(-2147024882);
                            v68 = 24 * v66;
                          }
                          else
                          {
                            v68 = 0LL;
                          }
                          if ( (unsigned __int64)~v68 < 8 )
                            goto LABEL_247;
                          v69 = malloc(v68 + 8);
                          if ( !v69 )
                            goto LABEL_247;
                          *v69 = *((_QWORD *)v43 + 5);
                          *((_QWORD *)v43 + 5) = v69;
                          v133 = v69 + 1;
                          v70 = *((_DWORD *)v43 + 14) - 1;
                          v71 = &v69[3 * (unsigned int)v70 + 1];
                          v133 = v71;
                          while ( 1 )
                          {
                            v119 = v70;
                            if ( v70 < 0 )
                              break;
                            *v71 = *((_QWORD *)v43 + 6);
                            *((_QWORD *)v43 + 6) = v71;
                            v71 -= 3;
                            v133 = v71;
                            --v70;
                          }
                        }
                        v63 = (struct IDeviceGraphObjectCache *)*((_QWORD *)v43 + 6);
                        ftLastWriteTime = (struct _FILETIME)v63;
                        v64 = *(_QWORD *)v63;
                        v135 = v63;
                        if ( v63 )
                          *((_QWORD *)v63 + 2) = *(_QWORD *)(v61 + 16);
                        *((_QWORD *)v43 + 6) = v64;
                        *((_QWORD *)v63 + 1) = 0LL;
                        *(_QWORD *)v63 = v62;
                        ++*((_QWORD *)v43 + 4);
                        v65 = *((_QWORD *)v43 + 2);
                        if ( v65 )
                          *(_QWORD *)(v65 + 8) = v63;
                        else
                          *((_QWORD *)v43 + 3) = v63;
                        *((_QWORD *)v43 + 2) = v63;
                      }
                      while ( v94 )
                      {
                        v72 = (ATL::CAtlPlex *)v93;
                        if ( !(_QWORD)v93 )
                          ATL::AtlThrowImpl(-2147467259);
                        *(_QWORD *)&v93 = *(_QWORD *)v93;
                        *(ATL::CAtlPlex **)v72 = v95[1];
                        v95[1] = v72;
                        if ( !--v94 )
                          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v93);
                      }
                      v93 = 0LL;
                      v95[1] = 0LL;
                      if ( v95[0] )
                      {
                        ATL::CAtlPlex::FreeDataChain(v95[0]);
                        v95[0] = 0LL;
                      }
                      v78 = v124;
                      *((_DWORD *)v43 + 35) = (int)(float)((float)(int)((float)((float)*(int *)(*((_QWORD *)v124 + 6)
                                                                                              + 8LL)
                                                                              / (float)*(unsigned __int16 *)(*((_QWORD *)v124 + 6) + 12LL))
                                                                      * (double)(int)*((_QWORD *)v124 + 7)
                                                                      / 10000000.0
                                                                      + 0.5)
                                                         * 1.1);
                      *((_DWORD *)v43 + 33) = 0;
                      *((_DWORD *)v43 + 51) = 0;
                      *((_OWORD *)v43 + 13) = *(_OWORD *)((char *)v78 + 68);
                      *v143 = (struct CPipeInstance *)v43;
                      hKey = 0LL;
                      if ( v38 )
                      {
                        v79 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v38 + 16LL);
                        if ( v79 == CAudioMediaType::Release )
                          CAudioMediaType::Release(v38);
                        else
                          v79(v38);
                      }
                      v125 = 0LL;
                      goto LABEL_265;
                    }
LABEL_253:
                    v120 = v50;
                    throw (long *)&v120;
                  }
                  v118 = -2147024809;
                  v97 = -2147024809;
                  if ( v46 == -1LL )
                    goto LABEL_115;
                }
                *v48 = 0;
                goto LABEL_115;
              }
              v50 = -2147024882;
            }
            v98 = v50;
            goto LABEL_253;
          }
          v26 = 0LL;
          v123 = 0LL;
          v27 = 0LL;
          v136 = 0LL;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              18LL,
              &WPP_a00fb4be71793c9c12457d7c93fa59d1_Traceguids,
              &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a);
          }
          Common = -2005139397;
          v100 = -2005139397;
          v29 = 0;
          v104 = 0;
          v30 = RegOpenKeyExW(HKEY_CLASSES_ROOT, L"AudioEngine\\AudioProcessingObjects", 0, 0x20019u, &hKey);
          if ( v30 )
          {
            if ( v30 > 0 )
              Common = (unsigned __int16)v30 | 0x80070000;
            else
              Common = v30;
            v100 = Common;
          }
          else
          {
            v31 = 0;
            for ( j = 0; !v29; j = v31 )
            {
              v32 = hKey;
              lpsz = 0LL;
              v29 = 0;
              v104 = 0;
              cchName = 512;
              v33 = RegEnumKeyExW(hKey, v31, Name, &cchName, 0LL, 0LL, 0LL, &ftLastWriteTime);
              if ( !v33 || v33 == 234 )
              {
                Common = StringFromCLSID(&GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a, &lpsz);
                if ( Common >= 0 && !wcsicmp(Name, lpsz) )
                {
                  v73 = RegOpenKeyExW(v32, Name, 0, 0x20019u, &phkResult);
                  Common = v73;
                  if ( v73 )
                  {
                    if ( v73 > 0 )
                      Common = (unsigned __int16)v73 | 0x80070000;
                  }
                  else
                  {
                    Common = InnerGetCommon(phkResult, &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a, &v153);
                    if ( Common >= 0 )
                    {
                      v153.u32NumAPOInterfaces = 1;
                      cchName = 1024;
                      v74 = RegQueryValueExW(phkResult, L"APOInterface0", 0LL, &Type, (LPBYTE)Name, &cchName);
                      Common = v74;
                      if ( v74 )
                      {
                        if ( v74 > 0 )
                          Common = (unsigned __int16)v74 | 0x80070000;
                      }
                      else
                      {
                        Common = CLSIDFromString(Name, &pclsid);
                        if ( Common >= 0 )
                        {
                          v153.iidAPOInterfaceList[0] = pclsid;
                          v75 = (CLSID *)&v148;
                          v76 = &v153;
                          v77 = 8LL;
                          do
                          {
                            *v75 = v76->clsid;
                            v75[1] = *(CLSID *)&v76->Flags;
                            v75[2] = *(CLSID *)&v76->szFriendlyName[6];
                            v75[3] = *(CLSID *)&v76->szFriendlyName[14];
                            v75[4] = *(CLSID *)&v76->szFriendlyName[22];
                            v75[5] = *(CLSID *)&v76->szFriendlyName[30];
                            v75[6] = *(CLSID *)&v76->szFriendlyName[38];
                            v75 += 8;
                            v75[-1] = *(CLSID *)&v76->szFriendlyName[46];
                            v76 = (struct APO_REG_PROPERTIES *)((char *)v76 + 128);
                            --v77;
                          }
                          while ( v77 );
                          *v75 = v76->clsid;
                          v75[1] = *(CLSID *)&v76->Flags;
                          v75[2] = *(CLSID *)&v76->szFriendlyName[6];
                          v75[3] = *(CLSID *)&v76->szFriendlyName[14];
                          v75[4].Data1 = *(_DWORD *)&v76->szFriendlyName[22];
                          v29 = 1;
                          v104 = 1;
                        }
                      }
                    }
                    RegCloseKey(phkResult);
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
              v100 = Common;
              if ( Common < 0 )
                break;
              ++v31;
            }
            RegCloseKey(hKey);
          }
          if ( Common >= 0 && !v29 )
          {
            Common = -2005139430;
            v100 = -2005139430;
          }
          v101 = Common;
          if ( Common >= 0 )
          {
            if ( v151 == 1 && v150 == 1 )
            {
              v34 = (ATL::CAtlPlex *)operator new(0x38uLL);
              v27 = v34;
              v103 = v34;
              if ( v34 )
              {
                *(_QWORD *)v34 = &CProcessNode::`vftable';
                *((_QWORD *)v34 + 1) = 0LL;
                *((_QWORD *)v34 + 2) = 0LL;
                *((_DWORD *)v34 + 6) = v102;
                *((_QWORD *)v34 + 4) = 0LL;
                *((_DWORD *)v34 + 10) = 2;
                *(_QWORD *)v34 = &CAPOProcessNode::`vftable';
                *((_DWORD *)v34 + 12) = v149;
              }
              else
              {
                v27 = 0LL;
              }
              v136 = v27;
              if ( !v27 )
              {
                Common = -2147024882;
                v101 = -2147024882;
                goto LABEL_212;
              }
              v35 = (char *)operator new(0x38uLL);
              v103 = (ATL::CAtlPlex *)v35;
              if ( v35 )
              {
                v36 = v148;
                *((_QWORD *)v35 + 5) = 0LL;
                *((_DWORD *)v35 + 12) = 1;
                *(_DWORD *)v35 = 1;
                *((_DWORD *)v35 + 1) = 0;
                *(_OWORD *)(v35 + 8) = v36;
                *(GUID *)(v35 + 24) = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
              }
              else
              {
                v35 = 0LL;
              }
              if ( !v35 )
              {
                Common = -2147024882;
                v101 = -2147024882;
                goto LABEL_212;
              }
              v26 = v27;
              v123 = v27;
              *((_QWORD *)v27 + 4) = v35;
            }
            else
            {
              Common = -2005139401;
              v101 = -2005139401;
            }
          }
          if ( Common >= 0 )
          {
LABEL_78:
            if ( Common < 0 )
            {
              v114 = Common;
              throw (long *)&v114;
            }
            v37 = *(void (__fastcall **)(CAPOProcessNode *, struct IAudioMediaType *))(*(_QWORD *)v26 + 24LL);
            v38 = (CAudioMediaType *)v105;
            if ( v37 == CAPOProcessNode::SetLeftFormat )
              CAPOProcessNode::SetLeftFormat(v26, v105);
            else
              v37(v26, v105);
            v39 = *(void (__fastcall **)(CAPOProcessNode *, struct IAudioMediaType *))(*(_QWORD *)v26 + 32LL);
            if ( v39 == CAPOProcessNode::SetRightFormat )
              CAPOProcessNode::SetRightFormat(v26, (struct IAudioMediaType *)v38);
            else
              v39(v26, (struct IAudioMediaType *)v38);
            v40 = *((_QWORD *)&v93 + 1);
            v41 = v95[1];
            if ( !v95[1] )
            {
              v88 = ATL::CAtlPlex::Create(v95, (unsigned int)v96, 0x18uLL);
              if ( !v88 )
                ATL::AtlThrowImpl(-2147024882);
              v89 = (unsigned int)(v96 - 1);
              v90 = (struct ATL::CAtlPlex *)((char *)v88 + 24 * v89 + 8);
              v137 = v90;
              v115 = v96 - 1;
              v41 = v95[1];
              while ( (int)v89 >= 0 )
              {
                *(_QWORD *)v90 = v41;
                v41 = v90;
                v95[1] = v90;
                v90 = (ATL::CAtlPlex *)((char *)v90 - 24);
                v137 = v90;
                LODWORD(v89) = v89 - 1;
                v115 = v89;
              }
            }
            ftLastWriteTime = (struct _FILETIME)v41;
            v42 = *(ATL::CAtlPlex **)v41;
            v103 = v41;
            if ( v41 )
              *((_QWORD *)v41 + 2) = v26;
            v95[1] = v42;
            *((_QWORD *)v41 + 1) = v40;
            *(_QWORD *)v41 = 0LL;
            ++v94;
            if ( *((_QWORD *)&v93 + 1) )
              **((_QWORD **)&v93 + 1) = v41;
            else
              *(_QWORD *)&v93 = v41;
            *((_QWORD *)&v93 + 1) = v41;
            v123 = 0LL;
            v4 = v124;
            goto LABEL_89;
          }
LABEL_212:
          if ( v27 )
            (**(void (__fastcall ***)(ATL::CAtlPlex *, __int64))v27)(v27, 1LL);
          v136 = 0LL;
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
          goto LABEL_78;
        }
        if ( (_DWORD)v96 )
        {
          if ( (unsigned int)v96 == 10LL )
            v18 = 0x1999999999999999LL;
          else
            v18 = 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v96;
          if ( v18 < 0x18 )
            goto LABEL_192;
          v19 = 24LL * (unsigned int)v96;
        }
        else
        {
          v19 = 0LL;
        }
        if ( (unsigned __int64)~v19 >= 8 )
        {
          v20 = (ATL::CAtlPlex *)malloc(v19 + 8);
          if ( v20 )
          {
            *(ATL::CAtlPlex **)v20 = v95[0];
            v95[0] = v20;
            v21 = (unsigned int)(v96 - 1);
            v22 = (ATL::CAtlPlex *)((char *)v20 + 24 * v21 + 8);
            v134 = v22;
            v110 = v96 - 1;
            v17 = v95[1];
            while ( (int)v21 >= 0 )
            {
              *(_QWORD *)v22 = v17;
              v17 = v22;
              v95[1] = v22;
              v22 = (ATL::CAtlPlex *)((char *)v22 - 24);
              v134 = v22;
              LODWORD(v21) = v21 - 1;
              v110 = v21;
            }
            goto LABEL_41;
          }
        }
LABEL_192:
        ATL::AtlThrowImpl(-2147024882);
      }
      (**(void (__fastcall ***)(void *, __int64))v9)(v9, 1LL);
    }
    else
    {
      v10 = -2147024882;
      v127 = -2147024882;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10LL,
        &WPP_a00fb4be71793c9c12457d7c93fa59d1_Traceguids,
        (unsigned int)v10);
    }
    AudDGTraceLoggingErrorHelper("CProcessNode::CreateDummyProcessNode", 0x47u, v10);
    goto LABEL_26;
  }
  catch ( long *v145 )
  {
    v50 = *(_DWORD *)v145;
  }
  catch ( ATL::CAtlException *v146 )
  {
    v50 = *(_DWORD *)v146;
  }
LABEL_265:
  if ( v50 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
        (unsigned int)v50);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateSubmixPipeInstance", 0x1A7u, v50);
  }
  while ( v94 )
  {
    if ( !(_QWORD)v93 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)&v93 = *(_QWORD *)v93;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::FreeNode(&v93);
  }
  v93 = 0LL;
  v95[1] = 0LL;
  if ( v95[0] )
  {
    ATL::CAtlPlex::FreeDataChain(v95[0]);
    v95[0] = 0LL;
  }
  return (unsigned int)v50;
}
