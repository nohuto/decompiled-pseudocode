/*
 * XREFs of ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140010960
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005A10 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 * Callees:
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140001D84 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140002F60 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140007D20 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x140007DC0 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140007EE4 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14000CBF0 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000CE10 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000D630 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000D6C0 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000FBD0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140010370 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140010660 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x14001A700 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001B95C (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x14001D6E1 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140033578 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CPipeInstance::CreateStreamPipeInstance(
        struct IDeviceGraphObjectCache *a1,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct CPipeInstance *a3,
        struct tWAVEFORMATEX *a4,
        struct SYSTEM_AUDIO_STREAM *a5,
        struct CPipeInstance **a6)
{
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v7; // r14
  int v8; // r15d
  float v9; // xmm6_4
  int StreamProcessNode; // eax
  __int64 v11; // rdi
  struct ATL::CAtlPlex *v12; // rdx
  struct ATL::CAtlPlex *v13; // rcx
  unsigned __int16 *v14; // rcx
  unsigned __int16 v15; // ax
  GUID v16; // xmm1
  int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  WORD wFormatTag; // cx
  WORD cbSize; // ax
  int v23; // eax
  __int64 v24; // rdi
  struct ATL::CAtlPlex *v25; // rdx
  struct ATL::CAtlPlex *v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // edi
  int v29; // eax
  GUID *v30; // rcx
  int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // r14
  struct ATL::CAtlPlex *v34; // rcx
  struct ATL::CAtlPlex *v35; // rax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  CAPOProcessNode *v39; // rdi
  void (__fastcall *v40)(CAPOProcessNode *, struct IAudioMediaType *); // rax
  struct IAudioMediaType *v41; // rsi
  void (__fastcall *v42)(CAPOProcessNode *, struct IAudioMediaType *); // rax
  __int64 v43; // r14
  struct ATL::CAtlPlex *v44; // rcx
  struct ATL::CAtlPlex *v45; // rax
  CPipeInstance *v46; // rax
  CPipeInstance *v47; // rdi
  const unsigned __int16 *v48; // r15
  unsigned __int64 v49; // r14
  unsigned __int64 v50; // r12
  unsigned __int16 *v51; // rax
  int v52; // r13d
  int v53; // r15d
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v54; // r14
  struct IDeviceGraphObjectCache *v55; // rcx
  struct IDeviceGraphObjectCache *v56; // r15
  struct CPipeInstance *v57; // r15
  __int64 v58; // r14
  __int64 v59; // r15
  __int64 v60; // r12
  struct IDeviceGraphObjectCache *v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  struct ATL::CAtlPlex *v64; // rax
  int v65; // r9d
  char *v66; // r8
  __int64 v67; // rdx
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v68; // r14
  int v69; // eax
  int v70; // eax
  int v71; // eax
  ULONG (__stdcall *Release)(IAudioMediaType *); // rax
  int v73; // r15d
  int APOProcessNode; // eax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  WORD nChannels; // dx
  WORD wBitsPerSample; // r8
  struct ATL::CAtlPlex *v82; // rax
  __int64 v83; // r8
  struct ATL::CAtlPlex *v84; // rax
  const struct tWAVEFORMATEX *v85; // rax
  int v86; // eax
  const struct tWAVEFORMATEX *v87; // rax
  int v88; // eax
  const struct tWAVEFORMATEX *v89; // rax
  int v90; // eax
  unsigned __int16 **v91; // [rsp+20h] [rbp-238h]
  unsigned __int64 *v92; // [rsp+28h] [rbp-230h]
  unsigned int v93; // [rsp+30h] [rbp-228h]
  int v94[2]; // [rsp+48h] [rbp-210h] BYREF
  __int128 v95; // [rsp+50h] [rbp-208h] BYREF
  __int64 v96; // [rsp+60h] [rbp-1F8h]
  struct ATL::CAtlPlex *v97[2]; // [rsp+68h] [rbp-1F0h] BYREF
  unsigned __int64 v98; // [rsp+78h] [rbp-1E0h]
  struct ATL::CAtlPlex *v99; // [rsp+80h] [rbp-1D8h] BYREF
  struct ATL::CAtlPlex *v100; // [rsp+88h] [rbp-1D0h] BYREF
  struct IAudioMediaType *v101; // [rsp+90h] [rbp-1C8h] BYREF
  int v102; // [rsp+98h] [rbp-1C0h]
  int v103; // [rsp+9Ch] [rbp-1BCh]
  int v104; // [rsp+A0h] [rbp-1B8h]
  struct ATL::CAtlPlex *v105; // [rsp+A8h] [rbp-1B0h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v106; // [rsp+B0h] [rbp-1A8h]
  __int64 v107; // [rsp+B8h] [rbp-1A0h] BYREF
  __int64 v108; // [rsp+C0h] [rbp-198h] BYREF
  __int64 v109; // [rsp+C8h] [rbp-190h] BYREF
  CAPOProcessNode *v110; // [rsp+D0h] [rbp-188h] BYREF
  struct ATL::CAtlPlex *v111; // [rsp+D8h] [rbp-180h] BYREF
  struct CStreamProcessNode *v112; // [rsp+E0h] [rbp-178h] BYREF
  int v113; // [rsp+E8h] [rbp-170h] BYREF
  int v114; // [rsp+ECh] [rbp-16Ch] BYREF
  int v115; // [rsp+F0h] [rbp-168h] BYREF
  _DWORD v116[2]; // [rsp+F4h] [rbp-164h] BYREF
  int v117; // [rsp+FCh] [rbp-15Ch] BYREF
  int v118; // [rsp+100h] [rbp-158h] BYREF
  int pExceptionObject; // [rsp+104h] [rbp-154h] BYREF
  int v120; // [rsp+108h] [rbp-150h] BYREF
  int v121; // [rsp+10Ch] [rbp-14Ch] BYREF
  int v122; // [rsp+110h] [rbp-148h] BYREF
  int v123; // [rsp+114h] [rbp-144h]
  int v124; // [rsp+118h] [rbp-140h]
  struct CPipeInstance *v125; // [rsp+120h] [rbp-138h]
  int v126; // [rsp+128h] [rbp-130h] BYREF
  int v127; // [rsp+12Ch] [rbp-12Ch] BYREF
  int v128; // [rsp+130h] [rbp-128h] BYREF
  struct ATL::CAtlPlex *v129; // [rsp+138h] [rbp-120h]
  char *v130; // [rsp+140h] [rbp-118h]
  struct IDeviceGraphObjectCache *v131; // [rsp+148h] [rbp-110h]
  struct tWAVEFORMATEX *v132; // [rsp+150h] [rbp-108h]
  __int64 v133; // [rsp+158h] [rbp-100h] BYREF
  __int64 v134; // [rsp+160h] [rbp-F8h] BYREF
  struct CPipeInstance **v135; // [rsp+168h] [rbp-F0h]
  __int64 v136; // [rsp+170h] [rbp-E8h]
  long *v137; // [rsp+178h] [rbp-E0h] BYREF
  GUID v138; // [rsp+180h] [rbp-D8h] BYREF
  GUID v139; // [rsp+190h] [rbp-C8h] BYREF
  unsigned __int16 *v140[2]; // [rsp+1A0h] [rbp-B8h] BYREF
  ATL::CAtlException *v141; // [rsp+1B0h] [rbp-A8h] BYREF
  __int128 v142; // [rsp+1B8h] [rbp-A0h] BYREF
  _BYTE v143[24]; // [rsp+1C8h] [rbp-90h]
  __int128 v144; // [rsp+1E0h] [rbp-78h]
  _BYTE v145[24]; // [rsp+1F0h] [rbp-68h]

  v136 = -2LL;
  v132 = a4;
  v125 = a3;
  v7 = a2;
  v106 = a2;
  v131 = a1;
  v135 = a6;
  if ( *(_DWORD *)a2 )
  {
    v8 = 1;
    v104 = 1;
  }
  else
  {
    v8 = 0;
    v104 = 0;
  }
  v95 = 0LL;
  v96 = 0LL;
  *(_OWORD *)v97 = 0LL;
  LODWORD(v98) = 10;
  if ( *((_DWORD *)a2 + 2) == 1 )
    v9 = FLOAT_1_0;
  else
    v9 = FLOAT_1_1;
  *a6 = 0LL;
  try
  {
    v112 = 0LL;
    StreamProcessNode = CStreamProcessNode::CreateStreamProcessNode(
                          (const struct tWAVEFORMATEX **)a2,
                          (struct IAudioMediaType ***)&v112);
    if ( StreamProcessNode < 0 )
    {
      pExceptionObject = StreamProcessNode;
      throw (long *)&pExceptionObject;
    }
    v11 = *((_QWORD *)&v95 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v95);
    v12 = v97[1];
    v100 = v97[1];
    v13 = *(struct ATL::CAtlPlex **)v97[1];
    v105 = v97[1];
    *((_QWORD *)v97[1] + 2) = v112;
    v97[1] = v13;
    *((_QWORD *)v12 + 1) = v11;
    *(_QWORD *)v12 = 0LL;
    ++v96;
    if ( *((_QWORD *)&v95 + 1) )
      **((_QWORD **)&v95 + 1) = v12;
    else
      *(_QWORD *)&v95 = v12;
    *((_QWORD *)&v95 + 1) = v12;
    v112 = 0LL;
    v14 = (unsigned __int16 *)*((_QWORD *)v7 + 10);
    v102 = 0;
    if ( v14 )
    {
      v15 = v14[8];
      if ( *v14 == 0xFFFE )
      {
        v18 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( v15 == 22 )
          goto LABEL_103;
        v76 = *((_QWORD *)v14 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v76 )
          v76 = *((_QWORD *)v14 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( !v76 )
          goto LABEL_103;
        v77 = *((_QWORD *)v14 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
        if ( !v77 )
          v77 = *((_QWORD *)v14 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
        if ( !v77 )
        {
LABEL_103:
          v144 = *(_OWORD *)v14;
          *(_OWORD *)v145 = *((_OWORD *)v14 + 1);
          *(_QWORD *)&v145[16] = *((_QWORD *)v14 + 4);
          *(_WORD *)v145 = 22;
          v102 = 1;
          v17 = *(_DWORD *)&v145[4];
          v16 = GUID_00000000_0000_0010_8000_00aa00389b71;
          goto LABEL_17;
        }
      }
      else if ( (!v15 || ((*v14 - 1) & 0xFFFD) == 0)
             && (unsigned __int16)(v14[1] - 1) <= 1u
             && ((v14[7] - 8) & 0xFFE7) == 0 )
      {
        v144 = *(_OWORD *)v14;
        LOWORD(v144) = -2;
        *(_WORD *)v145 = 22;
        *(_WORD *)&v145[2] = v14[7];
        v16 = GUID_00000000_0000_0010_8000_00aa00389b71;
        *(GUID *)&v145[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
        *(_DWORD *)&v145[8] = *v14;
        if ( v14[1] == 1 )
          v17 = 4;
        else
          v17 = 3;
        *(_DWORD *)&v145[4] = v17;
        v102 = 1;
        v18 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
LABEL_17:
        v19 = v18 - *(_QWORD *)&v145[8];
        if ( v18 == *(_QWORD *)&v145[8] )
          v19 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v145[16];
        if ( !v19 )
          goto LABEL_23;
        v20 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v145[8];
        if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v145[8] )
          v20 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v145[16];
        if ( !v20 )
        {
LABEL_23:
          v103 = 0;
          if ( !a4 )
            goto LABEL_127;
          wFormatTag = a4->wFormatTag;
          cbSize = a4->cbSize;
          if ( a4->wFormatTag == 0xFFFE )
          {
            if ( cbSize != 22 )
            {
              v78 = *(_QWORD *)((char *)&a4[1].nSamplesPerSec + 2) - v18;
              if ( !v78 )
                v78 = *(_QWORD *)&a4[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
              if ( v78 )
              {
                v79 = *(_QWORD *)((char *)&a4[1].nSamplesPerSec + 2)
                    - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                if ( !v79 )
                  v79 = *(_QWORD *)&a4[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                if ( v79 )
                {
LABEL_127:
                  v117 = -2005139404;
                  throw (long *)&v117;
                }
              }
            }
            v142 = *(_OWORD *)&a4->wFormatTag;
            *(_OWORD *)v143 = *(_OWORD *)&a4->cbSize;
            *(_QWORD *)&v143[16] = *(_QWORD *)&a4[1].wBitsPerSample;
            *(_WORD *)v143 = 22;
          }
          else
          {
            if ( cbSize && ((wFormatTag - 1) & 0xFFFD) != 0 )
              goto LABEL_127;
            nChannels = a4->nChannels;
            if ( (unsigned __int16)(nChannels - 1) > 1u )
              goto LABEL_127;
            wBitsPerSample = a4->wBitsPerSample;
            if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
              goto LABEL_127;
            v142 = *(_OWORD *)&a4->wFormatTag;
            LOWORD(v142) = -2;
            *(_WORD *)v143 = 22;
            *(_WORD *)&v143[2] = wBitsPerSample;
            *(GUID *)&v143[8] = v16;
            *(_DWORD *)&v143[8] = wFormatTag;
            *(_DWORD *)&v143[4] = (nChannels == 1) + 3;
          }
          v103 = 1;
          if ( *((_DWORD *)v7 + 28) && WORD1(v142) != WORD1(v144) )
          {
            WORD1(v142) = WORD1(v144);
            *(_DWORD *)&v143[4] = v17;
            WORD6(v142) = WORD1(v144) * (HIWORD(v142) >> 3);
            DWORD2(v142) = DWORD1(v142) * WORD6(v142);
          }
          v108 = 0LL;
          v23 = CProcessNode::CreateDummyProcessNode(v8, (const struct tWAVEFORMATEX *)&v142, &v108);
          if ( v23 < 0 )
          {
            v120 = v23;
            throw (long *)&v120;
          }
          v24 = *((_QWORD *)&v95 + 1);
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v95);
          v25 = v97[1];
          v100 = v97[1];
          v26 = *(struct ATL::CAtlPlex **)v97[1];
          v105 = v97[1];
          *((_QWORD *)v97[1] + 2) = v108;
          v97[1] = v26;
          *((_QWORD *)v25 + 1) = v24;
          *(_QWORD *)v25 = 0LL;
          ++v96;
          if ( *((_QWORD *)&v95 + 1) )
            **((_QWORD **)&v95 + 1) = v25;
          else
            *(_QWORD *)&v95 = v25;
          *((_QWORD *)&v95 + 1) = v25;
          v108 = 0LL;
          v27 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v145[8];
          if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v145[8] )
            v27 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v145[16];
          if ( !v27 && (*((_DWORD *)v7 + 22) & 0x800000) == 0 )
          {
            *(_QWORD *)v94 = 0LL;
            v138 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
            APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(
                               &GUID_0f92ff8d_2f19_4b9a_b9dd_3efc2b3becec,
                               v8,
                               1,
                               0,
                               (__int128 *)&v138,
                               v94);
            if ( APOProcessNode < 0 )
            {
              v121 = APOProcessNode;
              throw (long *)&v121;
            }
            v133 = *(_QWORD *)v94;
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v95, &v133);
            *(_QWORD *)v94 = 0LL;
          }
          v108 = 0LL;
        }
        v28 = 0;
        v124 = 0;
        while ( v28 < *((_DWORD *)v7 + 34) )
        {
          v107 = 0LL;
          v29 = *((_DWORD *)v7 + 28) & (1 << v28);
          if ( v29 )
            v30 = (GUID *)((char *)v7 + 116);
          else
            v30 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v139 = *v30;
          v31 = CAPOProcessNode::CreateAPOProcessNode(
                  (const struct _GUID *)((char *)v7 + 16 * v28 + 200),
                  v8,
                  0,
                  v29 != 0,
                  (__int128 *)&v139,
                  &v107);
          if ( v31 < 0 )
          {
            v122 = v31;
            throw (long *)&v122;
          }
          v32 = v107;
          v33 = *((_QWORD *)&v95 + 1);
          v34 = v97[1];
          if ( !v97[1] )
          {
            v82 = ATL::CAtlPlex::Create(v97, (unsigned int)v98, 0x18uLL);
            if ( !v82 )
              ATL::AtlThrowImpl(-2147024882);
            v83 = (unsigned int)(v98 - 1);
            v84 = (struct ATL::CAtlPlex *)((char *)v82 + 24 * v83 + 8);
            v129 = v84;
            v123 = v98 - 1;
            v34 = v97[1];
            while ( (int)v83 >= 0 )
            {
              *(_QWORD *)v84 = v34;
              v34 = v84;
              v97[1] = v84;
              v84 = (struct ATL::CAtlPlex *)((char *)v84 - 24);
              v129 = v84;
              LODWORD(v83) = v83 - 1;
              v123 = v83;
            }
          }
          v100 = v34;
          v35 = *(struct ATL::CAtlPlex **)v34;
          v105 = v34;
          *((_QWORD *)v34 + 2) = v32;
          v97[1] = v35;
          *((_QWORD *)v34 + 1) = v33;
          *(_QWORD *)v34 = 0LL;
          ++v96;
          if ( *((_QWORD *)&v95 + 1) )
            **((_QWORD **)&v95 + 1) = v34;
          else
            *(_QWORD *)&v95 = v34;
          *((_QWORD *)&v95 + 1) = v34;
          v107 = 0LL;
          v124 = ++v28;
          v7 = v106;
        }
        v101 = 0LL;
        v36 = CAudioMediaType::Create(v132, (unsigned int)v132->cbSize + 18, &v101, 0.0, 0);
        if ( v36 < 0 )
        {
          v126 = v36;
          throw (long *)&v126;
        }
        v37 = *(_DWORD *)v7;
        if ( *(_DWORD *)v7 )
        {
          if ( v37 == 1 )
          {
            v111 = 0LL;
            v41 = v101;
            v87 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v101->lpVtbl->GetAudioFormat)(v101);
            v88 = CProcessNode::CreateDummyProcessNode(v8, v87, &v111);
            if ( v88 < 0 )
            {
              v114 = v88;
              throw (long *)&v114;
            }
            v105 = v111;
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(
              (__int64 **)&v95,
              (__int64 *)&v105);
            v111 = 0LL;
          }
          else if ( v37 == 2 )
          {
            v99 = 0LL;
            v41 = v101;
            v89 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v101->lpVtbl->GetAudioFormat)(v101);
            v90 = CProcessNode::CreateDummyProcessNode(v8, v89, &v99);
            if ( v90 < 0 )
            {
              v115 = v90;
              throw (long *)&v115;
            }
            v100 = v99;
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(
              (__int64 **)&v95,
              (__int64 *)&v100);
            v99 = 0LL;
          }
          else
          {
            v41 = v101;
          }
        }
        else
        {
          v110 = 0LL;
          *(GUID *)v140 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v38 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
                  v8,
                  1,
                  0,
                  (__int128 *)v140,
                  &v110);
          if ( v38 < 0 )
          {
            v127 = v38;
            throw (long *)&v127;
          }
          v39 = v110;
          v40 = *(void (__fastcall **)(CAPOProcessNode *, struct IAudioMediaType *))(*(_QWORD *)v110 + 24LL);
          v41 = v101;
          if ( v40 == CAPOProcessNode::SetLeftFormat )
            CAPOProcessNode::SetLeftFormat(v110, v101);
          else
            v40(v110, v101);
          v42 = *(void (__fastcall **)(CAPOProcessNode *, struct IAudioMediaType *))(*(_QWORD *)v39 + 32LL);
          if ( v42 == CAPOProcessNode::SetRightFormat )
            CAPOProcessNode::SetRightFormat(v39, v41);
          else
            v42(v39, v41);
          v43 = *((_QWORD *)&v95 + 1);
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v95);
          v44 = v97[1];
          v100 = v97[1];
          v45 = *(struct ATL::CAtlPlex **)v97[1];
          v105 = v97[1];
          *((_QWORD *)v97[1] + 2) = v39;
          v97[1] = v45;
          *((_QWORD *)v44 + 1) = v43;
          *(_QWORD *)v44 = 0LL;
          ++v96;
          if ( *((_QWORD *)&v95 + 1) )
            **((_QWORD **)&v95 + 1) = v44;
          else
            *(_QWORD *)&v95 = v44;
          *((_QWORD *)&v95 + 1) = v44;
          v110 = 0LL;
          if ( !v125 )
          {
            v109 = 0LL;
            v85 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v41->lpVtbl->GetAudioFormat)(v41);
            v86 = CProcessNode::CreateDummyProcessNode(v8, v85, &v109);
            if ( v86 < 0 )
            {
              v113 = v86;
              throw (long *)&v113;
            }
            v134 = v109;
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v95, &v134);
            v109 = 0LL;
          }
          v110 = 0LL;
          v7 = v106;
        }
        v46 = (CPipeInstance *)operator new(0x138uLL);
        v100 = v46;
        if ( v46 )
          v47 = CPipeInstance::CPipeInstance(v46, WRITE_DATA_PIPE);
        else
          v47 = 0LL;
        v99 = v47;
        if ( !v47 )
        {
          v116[0] = -2147024882;
          throw (long *)v116;
        }
        v48 = (const unsigned __int16 *)*((_QWORD *)v7 + 13);
        v49 = -1LL;
        do
          ++v49;
        while ( v48[v49] );
        *((_QWORD *)v47 + 23) = 0LL;
        v50 = v49 + 1;
        if ( v49 + 1 < v49 )
        {
          v52 = -2147024362;
        }
        else
        {
          *((_QWORD *)v47 + 23) = 0LL;
          if ( is_mul_ok(v50, 2uLL) )
          {
            v51 = (unsigned __int16 *)CoTaskMemAlloc(2 * v50);
            *((_QWORD *)v47 + 23) = v51;
            if ( !v51 )
            {
              v52 = -2147024882;
              goto LABEL_168;
            }
            v94[0] = 0;
            v52 = 0;
            StringCchCopyNExW(v51, v49 + 1, v48, v49, v91, v92, v93);
            v53 = 0;
          }
          else
          {
            v53 = -2147024362;
            v94[0] = -2147024362;
            v52 = -2147024362;
          }
          if ( v53 >= 0 )
          {
            v54 = v106;
            *((_DWORD *)v47 + 30) = *(_DWORD *)v106 == 2;
            *((_DWORD *)v47 + 3) = v104;
            *((_DWORD *)v47 + 32) = *((_DWORD *)v54 + 28) != 0;
            *((_DWORD *)v47 + 31) = *((_DWORD *)v54 + 2) == 1;
            if ( *((_QWORD *)v47 + 18) )
              ATL::AtlComPtrAssign((struct IUnknown **)v47 + 18, 0LL);
            v55 = (struct IDeviceGraphObjectCache *)*((_QWORD *)v47 + 29);
            v56 = v131;
            if ( v55 != v131 )
            {
              if ( v131 )
              {
                (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)v131 + 8LL))(v131);
                v55 = (struct IDeviceGraphObjectCache *)*((_QWORD *)v47 + 29);
              }
              if ( v55 )
                (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)v55 + 16LL))(v55);
              *((_QWORD *)v47 + 29) = v56;
            }
            v57 = v125;
            *(_QWORD *)v47 = v125;
            *((_DWORD *)v47 + 2) = v57 == 0LL;
            *((_BYTE *)v47 + 308) = *((_DWORD *)v54 + 33) != 0;
            v58 = *((_QWORD *)&v95 + 1);
            while ( v58 )
            {
              v59 = v58;
              v58 = *(_QWORD *)(v58 + 8);
              v60 = *((_QWORD *)v47 + 2);
              if ( !*((_QWORD *)v47 + 6) )
              {
                v64 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)v47 + 5, *((unsigned int *)v47 + 14), 0x18uLL);
                if ( !v64 )
                  ATL::AtlThrowImpl(-2147024882);
                v130 = (char *)v64 + 8;
                v65 = *((_DWORD *)v47 + 14) - 1;
                v66 = (char *)v64 + 24 * (unsigned int)v65 + 8;
                v130 = v66;
                while ( 1 )
                {
                  v116[1] = v65;
                  if ( v65 < 0 )
                    break;
                  *(_QWORD *)v66 = *((_QWORD *)v47 + 6);
                  *((_QWORD *)v47 + 6) = v66;
                  v66 -= 24;
                  v130 = v66;
                  --v65;
                }
              }
              v61 = (struct IDeviceGraphObjectCache *)*((_QWORD *)v47 + 6);
              v131 = v61;
              v62 = *(_QWORD *)v61;
              v100 = v61;
              *((_QWORD *)v61 + 2) = *(_QWORD *)(v59 + 16);
              *((_QWORD *)v47 + 6) = v62;
              *((_QWORD *)v61 + 1) = 0LL;
              *(_QWORD *)v61 = v60;
              ++*((_QWORD *)v47 + 4);
              v63 = *((_QWORD *)v47 + 2);
              if ( v63 )
                *(_QWORD *)(v63 + 8) = v61;
              else
                *((_QWORD *)v47 + 3) = v61;
              *((_QWORD *)v47 + 2) = v61;
            }
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v95);
            v68 = v106;
            if ( v125 )
            {
              v69 = *((_DWORD *)v125 + 34);
            }
            else
            {
              v67 = v132->nAvgBytesPerSec % v132->nBlockAlign;
              v69 = (int)(float)((float)(int)((double)(int)(v132->nAvgBytesPerSec / v132->nBlockAlign)
                                            * (double)(int)*((_QWORD *)v106 + 4)
                                            / 10000000.0
                                            + 0.5)
                               * v9);
            }
            *((_DWORD *)v47 + 35) = v69;
            v70 = 1;
            if ( *((_DWORD *)v68 + 1) )
              v70 = 7;
            *((_DWORD *)v47 + 33) = v70;
            *((_DWORD *)v47 + 51) = 0;
            v71 = *((_DWORD *)v68 + 22);
            if ( (v71 & 0x100000) != 0 )
            {
              *((_DWORD *)v47 + 33) |= 0xAu;
              *((_DWORD *)v47 + 48) = 1056964608;
              *((_DWORD *)v47 + 49) = 1065353216;
              v71 = *((_DWORD *)v68 + 22);
            }
            if ( (v71 & 0x8000000) != 0 )
              *((_DWORD *)v47 + 50) = 3;
            *v135 = v47;
            v99 = 0LL;
            if ( v41 )
            {
              Release = v41->lpVtbl->Release;
              if ( (char *)Release == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v41);
              else
                ((void (__fastcall *)(struct IAudioMediaType *, __int64))Release)(v41, v67);
            }
            v112 = 0LL;
            goto LABEL_176;
          }
        }
LABEL_168:
        v128 = v52;
        throw (long *)&v128;
      }
    }
    v118 = -2005139404;
    throw (long *)&v118;
  }
  catch ( long *v137 )
  {
    v73 = *(_DWORD *)v137;
    goto LABEL_100;
  }
  catch ( ATL::CAtlException *v141 )
  {
    v73 = *(_DWORD *)v141;
    goto LABEL_100;
  }
LABEL_176:
  v73 = v94[0];
LABEL_100:
  if ( v73 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        19LL,
        &WPP_0100469152753b0964101f667eb0634c_Traceguids,
        (unsigned int)v73);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateStreamPipeInstance", 0x32Cu, v73);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v95);
  return (unsigned int)v73;
}
