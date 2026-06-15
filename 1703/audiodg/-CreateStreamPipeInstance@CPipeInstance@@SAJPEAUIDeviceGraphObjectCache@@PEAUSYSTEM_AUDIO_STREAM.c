/*
 * XREFs of ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140011CE0
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007580 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 * Callees:
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14000D6E0 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000DCB0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000E2F0 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000E380 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000E610 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400112E0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x1400116C0 (-InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140015220 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x1400152C0 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140019F00 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14001B070 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z @ 0x14001B3E8 (-CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14001DC14 (_wcsicmp.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     _CxxThrowException_0 @ 0x14001E752 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140030F84 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140034E94 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140036954 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     WPP_SF__guid_ @ 0x14003FBC8 (WPP_SF__guid_.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CPipeInstance::CreateStreamPipeInstance(
        struct IDeviceGraphObjectCache *a1,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct CPipeInstance *a3,
        struct tWAVEFORMATEX *a4,
        struct SYSTEM_AUDIO_STREAM *a5,
        struct CPipeInstance **a6)
{
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v7; // r13
  unsigned int v8; // r15d
  float v9; // xmm7_4
  int v10; // eax
  __int64 v11; // rbx
  struct ATL::CAtlPlex *v12; // rcx
  struct ATL::CAtlPlex *v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r14
  struct ATL::CAtlPlex *v20; // rcx
  struct ATL::CAtlPlex *v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // r14d
  struct ATL::CAtlPlex *v24; // rsi
  int v25; // eax
  GUID *v26; // rax
  GUID v27; // xmm6
  const struct _GUID *v28; // r12
  struct ATL::CAtlPlex *v29; // r13
  int Common; // ebx
  int v31; // r15d
  LSTATUS v32; // eax
  DWORD v33; // r14d
  HKEY v34; // rsi
  LSTATUS v35; // eax
  LSTATUS v36; // eax
  LSTATUS v37; // eax
  CLSID *v38; // rcx
  struct APO_REG_PROPERTIES *v39; // rax
  __int64 v40; // rdx
  struct ATL::CAtlPlex *v41; // rax
  char *v42; // rax
  __int128 v43; // xmm0
  __int64 v44; // rbx
  struct ATL::CAtlPlex *v45; // rax
  struct ATL::CAtlPlex *v46; // rcx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  CAPOProcessNode *v50; // rbx
  void (__fastcall *v51)(CAPOProcessNode *, struct IAudioMediaType *); // rax
  struct IAudioMediaType *v52; // rsi
  void (__fastcall *v53)(CAPOProcessNode *, struct IAudioMediaType *); // rax
  __int64 v54; // r14
  struct ATL::CAtlPlex *v55; // rax
  struct ATL::CAtlPlex *v56; // rcx
  CPipeInstance *v57; // rax
  HKEY v58; // r15
  _WORD *v59; // r14
  unsigned __int64 v60; // rbx
  unsigned __int64 v61; // r12
  _WORD *v62; // rax
  _WORD *v63; // r9
  int v64; // r13d
  int v65; // ecx
  unsigned __int64 v66; // rax
  _WORD *v67; // rcx
  int v68; // r10d
  __int64 v69; // r8
  unsigned __int64 v70; // r12
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v71; // rdx
  struct IDeviceGraphObjectCache *v72; // rbx
  __int64 v73; // rcx
  struct CPipeInstance *v74; // r14
  __int64 v75; // rbx
  unsigned __int64 v76; // rax
  __int64 v77; // r14
  __int64 v78; // r12
  struct IDeviceGraphObjectCache *v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rax
  unsigned __int64 v82; // rcx
  __int64 v83; // rcx
  _QWORD *v84; // rdx
  int v85; // r9d
  _QWORD *v86; // r8
  int v87; // eax
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v88; // rdx
  int v89; // eax
  ULONG (__stdcall *Release)(IAudioMediaType *); // rax
  int v92; // eax
  struct ATL::CAtlPlex *v93; // rax
  __int64 v94; // r8
  struct ATL::CAtlPlex *v95; // r9
  __int64 v96; // rax
  int v97; // eax
  __int64 v98; // rax
  int v99; // eax
  __int64 v100; // rax
  int v101; // eax
  int v102; // [rsp+48h] [rbp-F60h]
  struct IAudioMediaType *v103; // [rsp+58h] [rbp-F50h] BYREF
  __int128 v104; // [rsp+60h] [rbp-F48h] BYREF
  __int64 v105; // [rsp+70h] [rbp-F38h]
  struct ATL::CAtlPlex *v106[2]; // [rsp+78h] [rbp-F30h] BYREF
  unsigned __int64 v107; // [rsp+88h] [rbp-F20h]
  DWORD cchName; // [rsp+90h] [rbp-F18h] BYREF
  int v109; // [rsp+94h] [rbp-F14h]
  int v110; // [rsp+98h] [rbp-F10h]
  int v111; // [rsp+9Ch] [rbp-F0Ch]
  unsigned int v112; // [rsp+A0h] [rbp-F08h]
  HKEY hKey; // [rsp+A8h] [rbp-F00h] BYREF
  struct ATL::CAtlPlex *v114; // [rsp+B0h] [rbp-EF8h]
  __int64 v115; // [rsp+B8h] [rbp-EF0h] BYREF
  __int64 v116; // [rsp+C0h] [rbp-EE8h] BYREF
  LPOLESTR lpsz; // [rsp+C8h] [rbp-EE0h] BYREF
  struct ATL::CAtlPlex *v118; // [rsp+D0h] [rbp-ED8h]
  struct ATL::CAtlPlex *v119; // [rsp+D8h] [rbp-ED0h] BYREF
  CAPOProcessNode *v120; // [rsp+E0h] [rbp-EC8h] BYREF
  struct ATL::CAtlPlex *v121; // [rsp+E8h] [rbp-EC0h] BYREF
  struct ATL::CAtlPlex *v122; // [rsp+F0h] [rbp-EB8h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v123; // [rsp+F8h] [rbp-EB0h]
  struct CStreamProcessNode *v124; // [rsp+100h] [rbp-EA8h] BYREF
  struct ATL::CAtlPlex *v125; // [rsp+108h] [rbp-EA0h] BYREF
  DWORD i; // [rsp+110h] [rbp-E98h]
  int v127; // [rsp+114h] [rbp-E94h] BYREF
  int v128; // [rsp+118h] [rbp-E90h]
  int v129; // [rsp+11Ch] [rbp-E8Ch] BYREF
  int v130; // [rsp+120h] [rbp-E88h] BYREF
  int v131; // [rsp+124h] [rbp-E84h] BYREF
  int v132; // [rsp+128h] [rbp-E80h] BYREF
  int v133; // [rsp+12Ch] [rbp-E7Ch] BYREF
  int v134; // [rsp+130h] [rbp-E78h] BYREF
  int v135; // [rsp+134h] [rbp-E74h]
  int v136; // [rsp+138h] [rbp-E70h]
  int v137; // [rsp+13Ch] [rbp-E6Ch] BYREF
  int pExceptionObject; // [rsp+140h] [rbp-E68h] BYREF
  HKEY phkResult; // [rsp+148h] [rbp-E60h] BYREF
  struct CPipeInstance *v140; // [rsp+150h] [rbp-E58h]
  int v141; // [rsp+158h] [rbp-E50h] BYREF
  int v142; // [rsp+15Ch] [rbp-E4Ch] BYREF
  int v143; // [rsp+160h] [rbp-E48h] BYREF
  struct _FILETIME ftLastWriteTime; // [rsp+168h] [rbp-E40h] BYREF
  int v145; // [rsp+170h] [rbp-E38h] BYREF
  __int64 v146; // [rsp+178h] [rbp-E30h]
  __int64 v147; // [rsp+180h] [rbp-E28h]
  _QWORD *v148; // [rsp+188h] [rbp-E20h]
  struct tWAVEFORMATEX *v149; // [rsp+190h] [rbp-E18h]
  struct ATL::CAtlPlex *v150; // [rsp+198h] [rbp-E10h] BYREF
  struct ATL::CAtlPlex *v151; // [rsp+1A0h] [rbp-E08h] BYREF
  struct ATL::CAtlPlex *v152; // [rsp+1A8h] [rbp-E00h]
  struct IDeviceGraphObjectCache *v153; // [rsp+1B0h] [rbp-DF8h]
  struct ATL::CAtlPlex *v154; // [rsp+1B8h] [rbp-DF0h]
  _WORD *v155; // [rsp+1C0h] [rbp-DE8h]
  __int64 v156; // [rsp+1C8h] [rbp-DE0h] BYREF
  DWORD Type; // [rsp+1D0h] [rbp-DD8h] BYREF
  void *v158; // [rsp+1D8h] [rbp-DD0h]
  _WORD *v159; // [rsp+1E0h] [rbp-DC8h]
  unsigned __int64 v160; // [rsp+1E8h] [rbp-DC0h]
  unsigned __int64 v161; // [rsp+1F0h] [rbp-DB8h]
  struct CPipeInstance **v162; // [rsp+1F8h] [rbp-DB0h]
  __int64 v163; // [rsp+200h] [rbp-DA8h]
  long *v164; // [rsp+208h] [rbp-DA0h] BYREF
  ATL::CAtlException *v165; // [rsp+210h] [rbp-D98h] BYREF
  GUID v166; // [rsp+220h] [rbp-D88h] BYREF
  GUID v167; // [rsp+230h] [rbp-D78h] BYREF
  __int128 v168; // [rsp+240h] [rbp-D68h] BYREF
  int v169; // [rsp+250h] [rbp-D58h]
  int v170; // [rsp+660h] [rbp-948h]
  int v171; // [rsp+668h] [rbp-940h]
  struct WAVEFORMATEXTENSIBLE v172; // [rsp+690h] [rbp-918h] BYREF
  WAVEFORMATEXTENSIBLE v173; // [rsp+6B8h] [rbp-8F0h] BYREF
  GUID pclsid; // [rsp+6E0h] [rbp-8C8h] BYREF
  struct APO_REG_PROPERTIES v175; // [rsp+6F0h] [rbp-8B8h] BYREF
  WCHAR Name[512]; // [rsp+B40h] [rbp-468h] BYREF

  v163 = -2LL;
  v149 = a4;
  v140 = a3;
  v7 = a2;
  v123 = a2;
  v153 = a1;
  v162 = a6;
  if ( *(_DWORD *)a2 )
  {
    v8 = 1;
    v102 = 1;
  }
  else
  {
    v8 = 0;
    v102 = 0;
  }
  v104 = 0LL;
  v105 = 0LL;
  *(_OWORD *)v106 = 0LL;
  LODWORD(v107) = 10;
  if ( *((_DWORD *)a2 + 2) == 1 )
    v9 = FLOAT_1_0;
  else
    v9 = FLOAT_1_1;
  *a6 = 0LL;
  try
  {
    v124 = 0LL;
    v10 = CStreamProcessNode::CreateStreamProcessNode(a2, &v124);
    if ( v10 < 0 )
    {
      pExceptionObject = v10;
      throw (long *)&pExceptionObject;
    }
    v11 = *((_QWORD *)&v104 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v104);
    v12 = v106[1];
    v114 = v106[1];
    v13 = *(struct ATL::CAtlPlex **)v106[1];
    v125 = v106[1];
    if ( v106[1] )
      *((_QWORD *)v106[1] + 2) = v124;
    v106[1] = v13;
    *((_QWORD *)v12 + 1) = v11;
    *(_QWORD *)v12 = 0LL;
    ++v105;
    if ( *((_QWORD *)&v104 + 1) )
      **((_QWORD **)&v104 + 1) = v12;
    else
      *(_QWORD *)&v104 = v12;
    *((_QWORD *)&v104 + 1) = v12;
    v124 = 0LL;
    if ( !(unsigned int)CopyToWaveFormatExtensible(&v173, *((const struct tWAVEFORMATEX **)v7 + 10)) )
    {
      v141 = -2005139404;
      throw (long *)&v141;
    }
    v14 = *(_QWORD *)&v173.SubFormat.Data1;
    v15 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v173.SubFormat.Data1;
    v16 = *(_QWORD *)v173.SubFormat.Data4;
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v173.SubFormat.Data1 )
      v15 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)v173.SubFormat.Data4;
    if ( !v15 )
      goto LABEL_18;
    v17 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v173.SubFormat.Data1;
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v173.SubFormat.Data1 )
      v17 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)v173.SubFormat.Data4;
    if ( !v17 )
    {
LABEL_18:
      if ( !(unsigned int)CopyToWaveFormatExtensible(&v172, a4) )
      {
        v142 = -2005139404;
        throw (long *)&v142;
      }
      if ( *((_DWORD *)v7 + 28) && v172.Format.nChannels != v173.Format.nChannels )
      {
        v172.Format.nChannels = v173.Format.nChannels;
        v172.dwChannelMask = v173.dwChannelMask;
        v172.Format.nBlockAlign = v173.Format.nChannels * (v172.Format.wBitsPerSample >> 3);
        v172.Format.nAvgBytesPerSec = v172.Format.nSamplesPerSec * v172.Format.nBlockAlign;
      }
      v116 = 0LL;
      v18 = CProcessNode::CreateDummyProcessNode(v8, &v172, &v116);
      if ( v18 < 0 )
      {
        v143 = v18;
        throw (long *)&v143;
      }
      v19 = *((_QWORD *)&v104 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v104);
      v20 = v106[1];
      v114 = v106[1];
      v21 = *(struct ATL::CAtlPlex **)v106[1];
      v125 = v106[1];
      if ( v106[1] )
        *((_QWORD *)v106[1] + 2) = v116;
      v106[1] = v21;
      *((_QWORD *)v20 + 1) = v19;
      *(_QWORD *)v20 = 0LL;
      ++v105;
      if ( *((_QWORD *)&v104 + 1) )
        **((_QWORD **)&v104 + 1) = v20;
      else
        *(_QWORD *)&v104 = v20;
      *((_QWORD *)&v104 + 1) = v20;
      v116 = 0LL;
      v22 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - v14;
      if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == v14 )
        v22 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - v16;
      if ( !v22 && (*((_DWORD *)v7 + 22) & 0x800000) == 0 )
      {
        v115 = 0LL;
        v166 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v92 = CAPOProcessNode::CreateAPOProcessNode(
                &GUID_0f92ff8d_2f19_4b9a_b9dd_3efc2b3becec,
                v8,
                1,
                0,
                (__int128 *)&v166,
                &v115);
        if ( v92 < 0 )
        {
          v145 = v92;
          throw (long *)&v145;
        }
        v156 = v115;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v104, &v156);
        v115 = 0LL;
      }
      v116 = 0LL;
    }
    v23 = 0;
    v112 = 0;
    while ( v23 < *((_DWORD *)v7 + 33) )
    {
      v24 = 0LL;
      v118 = 0LL;
      v25 = *((_DWORD *)v7 + 28);
      if ( _bittest(&v25, v23) )
      {
        v26 = (GUID *)((char *)v7 + 116);
        LODWORD(v103) = 1;
      }
      else
      {
        v26 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        LODWORD(v103) = 0;
      }
      v27 = *v26;
      v28 = (const struct _GUID *)((char *)v7 + 16 * v23 + 192);
      v29 = 0LL;
      v152 = 0LL;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_a00fb4be71793c9c12457d7c93fa59d1_Traceguids, v28);
      }
      Common = -2005139397;
      v109 = -2005139397;
      v31 = 0;
      v111 = 0;
      v32 = RegOpenKeyExW(HKEY_CLASSES_ROOT, L"AudioEngine\\AudioProcessingObjects", 0, 0x20019u, &hKey);
      if ( v32 )
      {
        if ( v32 > 0 )
          Common = (unsigned __int16)v32 | 0x80070000;
        else
          Common = v32;
        v109 = Common;
      }
      else
      {
        v33 = 0;
        for ( i = 0; !v31; i = v33 )
        {
          v34 = hKey;
          lpsz = 0LL;
          v31 = 0;
          v111 = 0;
          cchName = 512;
          v35 = RegEnumKeyExW(hKey, v33, Name, &cchName, 0LL, 0LL, 0LL, &ftLastWriteTime);
          if ( !v35 || v35 == 234 )
          {
            Common = StringFromCLSID(v28, &lpsz);
            if ( Common >= 0 && !wcsicmp(Name, lpsz) )
            {
              v36 = RegOpenKeyExW(v34, Name, 0, 0x20019u, &phkResult);
              Common = v36;
              if ( v36 )
              {
                if ( v36 > 0 )
                  Common = (unsigned __int16)v36 | 0x80070000;
              }
              else
              {
                Common = InnerGetCommon(phkResult, v28, &v175);
                if ( Common >= 0 )
                {
                  v175.u32NumAPOInterfaces = 1;
                  cchName = 1024;
                  v37 = RegQueryValueExW(phkResult, L"APOInterface0", 0LL, &Type, (LPBYTE)Name, &cchName);
                  Common = v37;
                  if ( v37 )
                  {
                    if ( v37 > 0 )
                      Common = (unsigned __int16)v37 | 0x80070000;
                  }
                  else
                  {
                    Common = CLSIDFromString(Name, &pclsid);
                    if ( Common >= 0 )
                    {
                      v175.iidAPOInterfaceList[0] = pclsid;
                      v38 = (CLSID *)&v168;
                      v39 = &v175;
                      v40 = 8LL;
                      do
                      {
                        *v38 = v39->clsid;
                        v38[1] = *(CLSID *)&v39->Flags;
                        v38[2] = *(CLSID *)&v39->szFriendlyName[6];
                        v38[3] = *(CLSID *)&v39->szFriendlyName[14];
                        v38[4] = *(CLSID *)&v39->szFriendlyName[22];
                        v38[5] = *(CLSID *)&v39->szFriendlyName[30];
                        v38[6] = *(CLSID *)&v39->szFriendlyName[38];
                        v38 += 8;
                        v38[-1] = *(CLSID *)&v39->szFriendlyName[46];
                        v39 = (struct APO_REG_PROPERTIES *)((char *)v39 + 128);
                        --v40;
                      }
                      while ( v40 );
                      *v38 = v39->clsid;
                      v38[1] = *(CLSID *)&v39->Flags;
                      v38[2] = *(CLSID *)&v39->szFriendlyName[6];
                      v38[3] = *(CLSID *)&v39->szFriendlyName[14];
                      v38[4].Data1 = *(_DWORD *)&v39->szFriendlyName[22];
                      v31 = 1;
                      v111 = 1;
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
          v109 = Common;
          if ( Common < 0 )
            break;
          ++v33;
        }
        RegCloseKey(hKey);
        v24 = v118;
        v23 = v112;
      }
      if ( Common >= 0 && !v31 )
      {
        Common = -2005139430;
        v109 = -2005139430;
      }
      v110 = Common;
      if ( Common < 0 )
        goto LABEL_186;
      if ( v171 != 1 || v170 != 1 )
      {
        Common = -2005139401;
        v110 = -2005139401;
LABEL_186:
        v8 = v102;
LABEL_71:
        if ( Common >= 0 )
          goto LABEL_72;
        goto LABEL_187;
      }
      v41 = (struct ATL::CAtlPlex *)operator new(0x38uLL);
      v29 = v41;
      v114 = v41;
      if ( v41 )
      {
        *(_QWORD *)v41 = &CProcessNode::`vftable';
        *((_QWORD *)v41 + 1) = 0LL;
        *((_QWORD *)v41 + 2) = 0LL;
        v8 = v102;
        *((_DWORD *)v41 + 6) = v102;
        *((_QWORD *)v41 + 4) = 0LL;
        *((_DWORD *)v41 + 10) = 2;
        *(_QWORD *)v41 = &CAPOProcessNode::`vftable';
        *((_DWORD *)v41 + 12) = v169;
      }
      else
      {
        v29 = 0LL;
        v8 = v102;
      }
      v152 = v29;
      if ( v29 )
      {
        v42 = (char *)operator new(0x38uLL);
        v125 = (struct ATL::CAtlPlex *)v42;
        if ( v42 )
        {
          v43 = v168;
          *((_QWORD *)v42 + 5) = 0LL;
          *((_DWORD *)v42 + 12) = 1;
          *(_DWORD *)v42 = 0;
          *((_DWORD *)v42 + 1) = (_DWORD)v103;
          *(_OWORD *)(v42 + 8) = v43;
          *(GUID *)(v42 + 24) = v27;
        }
        else
        {
          v42 = 0LL;
        }
        if ( v42 )
        {
          v24 = v29;
          v118 = v29;
          *((_QWORD *)v29 + 4) = v42;
          goto LABEL_71;
        }
        Common = -2147024882;
        v110 = -2147024882;
      }
      else
      {
        Common = -2147024882;
        v110 = -2147024882;
      }
LABEL_187:
      if ( v29 )
        (**(void (__fastcall ***)(struct ATL::CAtlPlex *, __int64))v29)(v29, 1LL);
      v152 = 0LL;
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
LABEL_72:
      if ( Common < 0 )
      {
        v127 = Common;
        throw (long *)&v127;
      }
      v44 = *((_QWORD *)&v104 + 1);
      v45 = v106[1];
      if ( !v106[1] )
      {
        v93 = ATL::CAtlPlex::Create(v106, (unsigned int)v107, 0x18uLL);
        if ( !v93 )
          ATL::AtlThrowImpl(-2147024882);
        v94 = (unsigned int)(v107 - 1);
        v95 = (struct ATL::CAtlPlex *)((char *)v93 + 24 * v94 + 8);
        v154 = v95;
        v128 = v107 - 1;
        v45 = v106[1];
        while ( (int)v94 >= 0 )
        {
          *(_QWORD *)v95 = v45;
          v45 = v95;
          v106[1] = v95;
          v95 = (struct ATL::CAtlPlex *)((char *)v95 - 24);
          v154 = v95;
          LODWORD(v94) = v94 - 1;
          v128 = v94;
        }
      }
      v151 = v45;
      v46 = *(struct ATL::CAtlPlex **)v45;
      v150 = v45;
      if ( v45 )
        *((_QWORD *)v45 + 2) = v24;
      v106[1] = v46;
      *((_QWORD *)v45 + 1) = v44;
      *(_QWORD *)v45 = 0LL;
      ++v105;
      if ( *((_QWORD *)&v104 + 1) )
        **((_QWORD **)&v104 + 1) = v45;
      else
        *(_QWORD *)&v104 = v45;
      *((_QWORD *)&v104 + 1) = v45;
      v118 = 0LL;
      v112 = ++v23;
      v7 = v123;
    }
    v103 = 0LL;
    v47 = CAudioMediaType::Create(v149, (unsigned int)v149->cbSize + 18, &v103, 0.0, 0);
    if ( v47 < 0 )
    {
      v129 = v47;
      throw (long *)&v129;
    }
    v48 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
    {
      if ( v48 == 1 )
      {
        v121 = 0LL;
        v52 = v103;
        v98 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v103->lpVtbl->GetAudioFormat)(v103);
        v99 = CProcessNode::CreateDummyProcessNode(v8, v98, &v121);
        if ( v99 < 0 )
        {
          v132 = v99;
          throw (long *)&v132;
        }
        v151 = v121;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v104, &v151);
        v121 = 0LL;
      }
      else if ( v48 == 2 )
      {
        v122 = 0LL;
        v52 = v103;
        v100 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v103->lpVtbl->GetAudioFormat)(v103);
        v101 = CProcessNode::CreateDummyProcessNode(v8, v100, &v122);
        if ( v101 < 0 )
        {
          v133 = v101;
          throw (long *)&v133;
        }
        v125 = v122;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v104, &v125);
        v122 = 0LL;
      }
      else
      {
        v52 = v103;
      }
    }
    else
    {
      v120 = 0LL;
      v167 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v49 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
              v8,
              1,
              0,
              (__int128 *)&v167,
              &v120);
      if ( v49 < 0 )
      {
        v130 = v49;
        throw (long *)&v130;
      }
      v50 = v120;
      v51 = *(void (__fastcall **)(CAPOProcessNode *, struct IAudioMediaType *))(*(_QWORD *)v120 + 24LL);
      v52 = v103;
      if ( v51 == CAPOProcessNode::SetLeftFormat )
        CAPOProcessNode::SetLeftFormat(v120, v103);
      else
        v51(v120, v103);
      v53 = *(void (__fastcall **)(CAPOProcessNode *, struct IAudioMediaType *))(*(_QWORD *)v50 + 32LL);
      if ( v53 == CAPOProcessNode::SetRightFormat )
        CAPOProcessNode::SetRightFormat(v50, v52);
      else
        v53(v50, v52);
      v54 = *((_QWORD *)&v104 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v104);
      v55 = v106[1];
      ftLastWriteTime = (struct _FILETIME)v106[1];
      v56 = *(struct ATL::CAtlPlex **)v106[1];
      v114 = v106[1];
      if ( v106[1] )
        *((_QWORD *)v106[1] + 2) = v50;
      v106[1] = v56;
      *((_QWORD *)v55 + 1) = v54;
      *(_QWORD *)v55 = 0LL;
      ++v105;
      if ( *((_QWORD *)&v104 + 1) )
        **((_QWORD **)&v104 + 1) = v55;
      else
        *(_QWORD *)&v104 = v55;
      *((_QWORD *)&v104 + 1) = v55;
      v120 = 0LL;
      if ( !v140 )
      {
        v119 = 0LL;
        v96 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v52->lpVtbl->GetAudioFormat)(v52);
        v97 = CProcessNode::CreateDummyProcessNode(v8, v96, &v119);
        if ( v97 < 0 )
        {
          v131 = v97;
          throw (long *)&v131;
        }
        v150 = v119;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v104, &v150);
        v119 = 0LL;
      }
      v120 = 0LL;
    }
    v57 = (CPipeInstance *)operator new(0x130uLL);
    ftLastWriteTime = (struct _FILETIME)v57;
    if ( v57 )
      v58 = (HKEY)CPipeInstance::CPipeInstance(v57, WRITE_DATA_PIPE);
    else
      v58 = 0LL;
    hKey = v58;
    if ( !v58 )
    {
      v134 = -2147024882;
      throw (long *)&v134;
    }
    v59 = (_WORD *)*((_QWORD *)v7 + 13);
    v60 = -1LL;
    do
      ++v60;
    while ( v59[v60] );
    *((_QWORD *)v58 + 23) = 0LL;
    v61 = v60 + 1;
    if ( v60 + 1 >= v60 )
    {
      *((_QWORD *)v58 + 23) = 0LL;
      if ( !is_mul_ok(v61, 2uLL) )
      {
        v64 = -2147024362;
        goto LABEL_114;
      }
      v62 = CoTaskMemAlloc(2 * v61);
      v63 = v62;
      *((_QWORD *)v58 + 23) = v62;
      if ( !v62 )
      {
        v64 = -2147024882;
        goto LABEL_235;
      }
      v64 = 0;
      v114 = (struct ATL::CAtlPlex *)v60;
      v158 = v59;
      v65 = 0;
      if ( v61 > 0x7FFFFFFF )
        v65 = -2147024809;
      if ( v65 < 0 )
      {
        if ( v60 == -1LL )
          goto LABEL_114;
      }
      else
      {
        v135 = 0;
        if ( v60 < 0x7FFFFFFF )
        {
          if ( !v59 )
          {
            v59 = &unk_14006B308;
            v158 = &unk_14006B308;
            v60 = 0LL;
            v114 = 0LL;
          }
          if ( v61 )
          {
            v147 = 0LL;
            v161 = v60;
            v159 = v59;
            v66 = v61;
            v160 = v61;
            v67 = v63;
            v155 = v63;
            v68 = 0;
            v69 = 0LL;
            v146 = 0LL;
            while ( v66 )
            {
              if ( !v60 || !*v59 )
                goto LABEL_112;
              *v67++ = *v59;
              v155 = v67;
              v159 = ++v59;
              v160 = --v66;
              v161 = --v60;
              v146 = ++v69;
            }
            v155 = --v67;
            v146 = --v69;
            v68 = -2147024774;
LABEL_112:
            *v67 = 0;
            v147 = v69;
            v70 = v61 - v69;
            if ( v68 >= 0 && v70 > 1 && 2 * v70 > 2 )
              memset(&v63[v147 + 1], 0, 2 * v70 - 2);
          }
LABEL_114:
          if ( v64 >= 0 )
          {
            v71 = v123;
            *((_DWORD *)v58 + 30) = *(_DWORD *)v123 == 2;
            *((_DWORD *)v58 + 3) = v102;
            *((_DWORD *)v58 + 32) = *((_DWORD *)v71 + 28) != 0;
            *((_DWORD *)v58 + 31) = *((_DWORD *)v71 + 2) == 1;
            if ( *((_QWORD *)v58 + 18) )
              ATL::AtlComPtrAssign((struct IUnknown **)v58 + 18, 0LL);
            v72 = v153;
            if ( *((struct IDeviceGraphObjectCache **)v58 + 29) != v153 )
            {
              if ( v153 )
                (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)v153 + 8LL))(v153);
              v73 = *((_QWORD *)v58 + 29);
              if ( v73 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
              *((_QWORD *)v58 + 29) = v72;
            }
            v74 = v140;
            *(_QWORD *)v58 = v140;
            *((_DWORD *)v58 + 2) = v74 == 0LL;
            v75 = *((_QWORD *)&v104 + 1);
            while ( 1 )
            {
              v76 = 0x1999999999999999LL;
              if ( !v75 )
                break;
              v77 = v75;
              v75 = *(_QWORD *)(v75 + 8);
              v78 = *((_QWORD *)v58 + 2);
              if ( !*((_QWORD *)v58 + 6) )
              {
                v82 = *((unsigned int *)v58 + 14);
                if ( *((_DWORD *)v58 + 14) )
                {
                  if ( v82 != 10 )
                    v76 = 0xFFFFFFFFFFFFFFFFuLL / v82;
                  if ( v76 < 0x18 )
LABEL_229:
                    ATL::AtlThrowImpl(-2147024882);
                  v83 = 24 * v82;
                }
                else
                {
                  v83 = 0LL;
                }
                if ( (unsigned __int64)~v83 < 8 )
                  goto LABEL_229;
                v84 = malloc(v83 + 8);
                if ( !v84 )
                  goto LABEL_229;
                *v84 = *((_QWORD *)v58 + 5);
                *((_QWORD *)v58 + 5) = v84;
                v148 = v84 + 1;
                v85 = *((_DWORD *)v58 + 14) - 1;
                v86 = &v84[3 * (unsigned int)v85 + 1];
                v148 = v86;
                while ( 1 )
                {
                  v136 = v85;
                  if ( v85 < 0 )
                    break;
                  *v86 = *((_QWORD *)v58 + 6);
                  *((_QWORD *)v58 + 6) = v86;
                  v86 -= 3;
                  v148 = v86;
                  --v85;
                }
              }
              v79 = (struct IDeviceGraphObjectCache *)*((_QWORD *)v58 + 6);
              ftLastWriteTime = (struct _FILETIME)v79;
              v80 = *(_QWORD *)v79;
              v153 = v79;
              if ( v79 )
                *((_QWORD *)v79 + 2) = *(_QWORD *)(v77 + 16);
              *((_QWORD *)v58 + 6) = v80;
              *((_QWORD *)v79 + 1) = 0LL;
              *(_QWORD *)v79 = v78;
              ++*((_QWORD *)v58 + 4);
              v81 = *((_QWORD *)v58 + 2);
              if ( v81 )
                *(_QWORD *)(v81 + 8) = v79;
              else
                *((_QWORD *)v58 + 3) = v79;
              *((_QWORD *)v58 + 2) = v79;
            }
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v104);
            if ( v140 )
            {
              v87 = *((_DWORD *)v140 + 34);
              v88 = v123;
            }
            else
            {
              v88 = v123;
              v87 = (int)(float)((float)(int)((double)(int)(v149->nAvgBytesPerSec / v149->nBlockAlign)
                                            * (double)(int)*((_QWORD *)v123 + 4)
                                            / 10000000.0
                                            + 0.5)
                               * v9);
            }
            *((_DWORD *)v58 + 35) = v87;
            if ( *((_DWORD *)v88 + 1) )
              v89 = 7;
            else
              v89 = 1;
            *((_DWORD *)v58 + 33) = v89;
            *((_DWORD *)v58 + 51) = 0;
            if ( (*((_DWORD *)v88 + 22) & 0x100000) != 0 )
            {
              *((_DWORD *)v58 + 33) |= 0xAu;
              *((_DWORD *)v58 + 48) = 1056964608;
              *((_DWORD *)v58 + 49) = 1065353216;
            }
            if ( (*((_DWORD *)v88 + 22) & 0x8000000) != 0 )
              *((_DWORD *)v58 + 50) = 3;
            *v162 = (struct CPipeInstance *)v58;
            hKey = 0LL;
            if ( v52 )
            {
              Release = v52->lpVtbl->Release;
              if ( (char *)Release == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v52);
              else
                ((void (__fastcall *)(struct IAudioMediaType *))Release)(v52);
            }
            v124 = 0LL;
            goto LABEL_243;
          }
LABEL_235:
          v137 = v64;
          throw (long *)&v137;
        }
        v135 = -2147024809;
        if ( v60 == -1LL )
          goto LABEL_114;
      }
      *v62 = 0;
      goto LABEL_114;
    }
    v64 = -2147024362;
    goto LABEL_235;
  }
  catch ( long *v164 )
  {
    v64 = *(_DWORD *)v164;
  }
  catch ( ATL::CAtlException *v165 )
  {
    v64 = *(_DWORD *)v165;
  }
LABEL_243:
  if ( v64 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        19LL,
        &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
        (unsigned int)v64);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateStreamPipeInstance", 0x325u, v64);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v104);
  return (unsigned int)v64;
}
