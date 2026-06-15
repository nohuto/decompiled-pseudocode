/*
 * XREFs of ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140003A90
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011570 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140001CC0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140001FE0 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x1400057E0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x140005880 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x1400059CC (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14000A960 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000AA90 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000AF50 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000B730 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000B7C0 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000E120 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000E410 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140017230 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14001BF70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001C898 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x14001E511 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CPipeInstance::CreateStreamPipeInstance(
        struct IDeviceGraphObjectCache *a1,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct CPipeInstance *a3,
        struct tWAVEFORMATEX *a4,
        struct SYSTEM_AUDIO_STREAM *a5,
        struct CPipeInstance **a6)
{
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v7; // r14
  unsigned int v8; // r15d
  float v9; // xmm6_4
  int StreamProcessNode; // eax
  __int64 v11; // rdi
  struct ATL::CAtlPlex *v12; // rcx
  struct ATL::CAtlPlex *v13; // rdx
  unsigned __int16 *v14; // rcx
  GUID v15; // xmm1
  int v16; // r9d
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  WORD wFormatTag; // cx
  int v21; // eax
  __int64 v22; // rdi
  struct ATL::CAtlPlex *v23; // rcx
  struct ATL::CAtlPlex *v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // edi
  GUID *v27; // rcx
  int APOProcessNode; // eax
  __int64 v29; // rsi
  __int64 v30; // r14
  struct ATL::CAtlPlex *v31; // rax
  struct ATL::CAtlPlex *v32; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  CAPOProcessNode *v36; // rdi
  void (__fastcall *v37)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  struct IAudioMediaType *v38; // rsi
  void (__fastcall *v39)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  __int64 v40; // r14
  struct ATL::CAtlPlex *v41; // rax
  struct ATL::CAtlPlex *v42; // rcx
  CPipeInstance *v43; // rax
  CPipeInstance *v44; // rdi
  const unsigned __int16 *v45; // r15
  unsigned __int64 v46; // r14
  unsigned __int64 v47; // r12
  char *v48; // rax
  int v49; // r13d
  int v50; // r15d
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v51; // r14
  struct IDeviceGraphObjectCache *v52; // r15
  __int64 v53; // rcx
  struct CPipeInstance *v54; // r15
  __int64 v55; // r14
  __int64 v56; // r15
  __int64 v57; // r12
  struct IDeviceGraphObjectCache *v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rax
  struct ATL::CAtlPlex *v61; // rax
  int v62; // r9d
  char *v63; // r8
  __int64 v64; // rdx
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v65; // r14
  int v66; // eax
  int v67; // eax
  ULONG (__stdcall *Release)(IAudioMediaType *); // rax
  int v69; // r15d
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  WORD nChannels; // dx
  WORD wBitsPerSample; // r8
  struct ATL::CAtlPlex *v78; // rax
  __int64 v79; // r8
  struct ATL::CAtlPlex *v80; // r9
  __int64 v81; // rax
  int v82; // eax
  __int64 v83; // rax
  int v84; // eax
  __int64 v85; // rax
  int v86; // eax
  int v87; // [rsp+48h] [rbp-210h]
  __int128 v88; // [rsp+50h] [rbp-208h] BYREF
  __int64 v89; // [rsp+60h] [rbp-1F8h]
  struct ATL::CAtlPlex *v90[2]; // [rsp+68h] [rbp-1F0h] BYREF
  unsigned __int64 v91; // [rsp+78h] [rbp-1E0h]
  struct ATL::CAtlPlex *v92; // [rsp+80h] [rbp-1D8h] BYREF
  struct ATL::CAtlPlex *v93; // [rsp+88h] [rbp-1D0h] BYREF
  struct IAudioMediaType *v94; // [rsp+90h] [rbp-1C8h] BYREF
  int v95; // [rsp+98h] [rbp-1C0h]
  int v96; // [rsp+9Ch] [rbp-1BCh]
  int v97; // [rsp+A0h] [rbp-1B8h]
  struct ATL::CAtlPlex *v98; // [rsp+A8h] [rbp-1B0h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v99; // [rsp+B0h] [rbp-1A8h]
  __int64 v100; // [rsp+B8h] [rbp-1A0h]
  __int64 v101; // [rsp+C0h] [rbp-198h] BYREF
  __int64 v102; // [rsp+C8h] [rbp-190h] BYREF
  CAPOProcessNode *v103; // [rsp+D0h] [rbp-188h]
  struct ATL::CAtlPlex *v104; // [rsp+D8h] [rbp-180h] BYREF
  struct CStreamProcessNode *v105; // [rsp+E0h] [rbp-178h] BYREF
  int v106; // [rsp+E8h] [rbp-170h] BYREF
  int v107; // [rsp+ECh] [rbp-16Ch] BYREF
  int v108; // [rsp+F0h] [rbp-168h] BYREF
  _DWORD v109[2]; // [rsp+F4h] [rbp-164h] BYREF
  int v110; // [rsp+FCh] [rbp-15Ch] BYREF
  int v111; // [rsp+100h] [rbp-158h] BYREF
  int pExceptionObject; // [rsp+104h] [rbp-154h] BYREF
  int v113; // [rsp+108h] [rbp-150h] BYREF
  int v114; // [rsp+10Ch] [rbp-14Ch] BYREF
  int v115; // [rsp+110h] [rbp-148h] BYREF
  int v116; // [rsp+114h] [rbp-144h]
  int v117; // [rsp+118h] [rbp-140h]
  struct CPipeInstance *v118; // [rsp+120h] [rbp-138h]
  int v119; // [rsp+128h] [rbp-130h] BYREF
  int v120; // [rsp+12Ch] [rbp-12Ch] BYREF
  int v121; // [rsp+130h] [rbp-128h] BYREF
  struct ATL::CAtlPlex *v122; // [rsp+138h] [rbp-120h]
  char *v123; // [rsp+140h] [rbp-118h]
  struct IDeviceGraphObjectCache *v124; // [rsp+148h] [rbp-110h]
  struct tWAVEFORMATEX *v125; // [rsp+150h] [rbp-108h]
  __int64 v126; // [rsp+158h] [rbp-100h] BYREF
  __int64 v127; // [rsp+160h] [rbp-F8h] BYREF
  struct CPipeInstance **v128; // [rsp+168h] [rbp-F0h]
  __int64 v129; // [rsp+170h] [rbp-E8h]
  long *v130; // [rsp+178h] [rbp-E0h] BYREF
  GUID v131; // [rsp+180h] [rbp-D8h]
  GUID v132; // [rsp+190h] [rbp-C8h]
  unsigned __int16 *v133[2]; // [rsp+1A0h] [rbp-B8h]
  ATL::CAtlException *v134; // [rsp+1B0h] [rbp-A8h] BYREF
  __int128 v135; // [rsp+1B8h] [rbp-A0h] BYREF
  _BYTE v136[24]; // [rsp+1C8h] [rbp-90h]
  __int128 v137; // [rsp+1E0h] [rbp-78h]
  _BYTE v138[24]; // [rsp+1F0h] [rbp-68h]

  v129 = -2LL;
  v125 = a4;
  v118 = a3;
  v7 = a2;
  v99 = a2;
  v124 = a1;
  v128 = a6;
  if ( *(_DWORD *)a2 )
  {
    v8 = 1;
    v97 = 1;
  }
  else
  {
    v8 = 0;
    v97 = 0;
  }
  v88 = 0LL;
  v89 = 0LL;
  *(_OWORD *)v90 = 0LL;
  LODWORD(v91) = 10;
  if ( *((_DWORD *)a2 + 2) == 1 )
    v9 = FLOAT_1_0;
  else
    v9 = FLOAT_1_1;
  *a6 = 0LL;
  try
  {
    v105 = 0LL;
    StreamProcessNode = CStreamProcessNode::CreateStreamProcessNode(
                          (const struct tWAVEFORMATEX **)a2,
                          (struct IAudioMediaType ***)&v105);
    if ( StreamProcessNode < 0 )
    {
      pExceptionObject = StreamProcessNode;
      throw (long *)&pExceptionObject;
    }
    v11 = *((_QWORD *)&v88 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v88);
    v12 = v90[1];
    v93 = v90[1];
    v13 = *(struct ATL::CAtlPlex **)v90[1];
    v98 = v90[1];
    if ( v90[1] )
      *((_QWORD *)v90[1] + 2) = v105;
    v90[1] = v13;
    *((_QWORD *)v12 + 1) = v11;
    *(_QWORD *)v12 = 0LL;
    ++v89;
    if ( *((_QWORD *)&v88 + 1) )
      **((_QWORD **)&v88 + 1) = v12;
    else
      *(_QWORD *)&v88 = v12;
    *((_QWORD *)&v88 + 1) = v12;
    v105 = 0LL;
    v14 = (unsigned __int16 *)*((_QWORD *)v7 + 10);
    v95 = 0;
    if ( v14 )
    {
      if ( *v14 == 0xFFFE )
      {
        v17 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( v14[8] == 22 )
          goto LABEL_113;
        v72 = *((_QWORD *)v14 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v72 )
          v72 = *((_QWORD *)v14 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( !v72 )
          goto LABEL_113;
        v73 = *((_QWORD *)v14 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
        if ( !v73 )
          v73 = *((_QWORD *)v14 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
        if ( !v73 )
        {
LABEL_113:
          v137 = *(_OWORD *)v14;
          *(_OWORD *)v138 = *((_OWORD *)v14 + 1);
          *(_QWORD *)&v138[16] = *((_QWORD *)v14 + 4);
          *(_WORD *)v138 = 22;
          v95 = 1;
          v16 = *(_DWORD *)&v138[4];
          v15 = GUID_00000000_0000_0010_8000_00aa00389b71;
          goto LABEL_19;
        }
      }
      else if ( (!v14[8] || ((*v14 - 1) & 0xFFFD) == 0)
             && (unsigned __int16)(v14[1] - 1) <= 1u
             && ((v14[7] - 8) & 0xFFE7) == 0 )
      {
        v137 = *(_OWORD *)v14;
        LOWORD(v137) = -2;
        *(_WORD *)v138 = 22;
        *(_WORD *)&v138[2] = v14[7];
        v15 = GUID_00000000_0000_0010_8000_00aa00389b71;
        *(GUID *)&v138[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
        *(_DWORD *)&v138[8] = *v14;
        if ( v14[1] == 1 )
          v16 = 4;
        else
          v16 = 3;
        *(_DWORD *)&v138[4] = v16;
        v95 = 1;
        v17 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
LABEL_19:
        v18 = v17 - *(_QWORD *)&v138[8];
        if ( v17 == *(_QWORD *)&v138[8] )
          v18 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v138[16];
        if ( v18 )
        {
          v19 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v138[8];
          if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v138[8] )
            v19 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v138[16];
          if ( v19 )
          {
LABEL_41:
            v26 = 0;
            v117 = 0;
            while ( v26 < *((_DWORD *)v7 + 34) )
            {
              v100 = 0LL;
              if ( (*((_DWORD *)v7 + 28) & (1 << v26)) != 0 )
                v27 = (GUID *)((char *)v7 + 116);
              else
                v27 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
              v132 = *v27;
              APOProcessNode = CAPOProcessNode::CreateAPOProcessNode((char *)v7 + 16 * v26 + 200, v8, 0LL);
              if ( APOProcessNode < 0 )
              {
                v115 = APOProcessNode;
                throw (long *)&v115;
              }
              v29 = v100;
              v30 = *((_QWORD *)&v88 + 1);
              v31 = v90[1];
              if ( !v90[1] )
              {
                v78 = ATL::CAtlPlex::Create(v90, (unsigned int)v91, 0x18uLL);
                if ( !v78 )
                  ATL::AtlThrowImpl(-2147024882);
                v79 = (unsigned int)(v91 - 1);
                v80 = (struct ATL::CAtlPlex *)((char *)v78 + 24 * v79 + 8);
                v122 = v80;
                v116 = v91 - 1;
                v31 = v90[1];
                while ( (int)v79 >= 0 )
                {
                  *(_QWORD *)v80 = v31;
                  v31 = v80;
                  v90[1] = v80;
                  v80 = (struct ATL::CAtlPlex *)((char *)v80 - 24);
                  v122 = v80;
                  LODWORD(v79) = v79 - 1;
                  v116 = v79;
                }
              }
              v93 = v31;
              v32 = *(struct ATL::CAtlPlex **)v31;
              v98 = v31;
              if ( v31 )
                *((_QWORD *)v31 + 2) = v29;
              v90[1] = v32;
              *((_QWORD *)v31 + 1) = v30;
              *(_QWORD *)v31 = 0LL;
              ++v89;
              if ( *((_QWORD *)&v88 + 1) )
                **((_QWORD **)&v88 + 1) = v31;
              else
                *(_QWORD *)&v88 = v31;
              *((_QWORD *)&v88 + 1) = v31;
              v100 = 0LL;
              v117 = ++v26;
              v7 = v99;
            }
            v94 = 0LL;
            v33 = CAudioMediaType::Create(v125, (unsigned int)v125->cbSize + 18, &v94, 0.0, 0);
            if ( v33 < 0 )
            {
              v119 = v33;
              throw (long *)&v119;
            }
            v34 = *(_DWORD *)v7;
            if ( *(_DWORD *)v7 )
            {
              if ( v34 == 1 )
              {
                v104 = 0LL;
                v38 = v94;
                v83 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v94->lpVtbl->GetAudioFormat)(v94);
                v84 = CProcessNode::CreateDummyProcessNode(v8, v83, &v104);
                if ( v84 < 0 )
                {
                  v107 = v84;
                  throw (long *)&v107;
                }
                v98 = v104;
                ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v88, &v98);
                v104 = 0LL;
              }
              else if ( v34 == 2 )
              {
                v92 = 0LL;
                v38 = v94;
                v85 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v94->lpVtbl->GetAudioFormat)(v94);
                v86 = CProcessNode::CreateDummyProcessNode(v8, v85, &v92);
                if ( v86 < 0 )
                {
                  v108 = v86;
                  throw (long *)&v108;
                }
                v93 = v92;
                ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v88, &v93);
                v92 = 0LL;
              }
              else
              {
                v38 = v94;
              }
            }
            else
            {
              v103 = 0LL;
              *(GUID *)v133 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
              v35 = CAPOProcessNode::CreateAPOProcessNode(&GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a, v8, 1LL);
              if ( v35 < 0 )
              {
                v120 = v35;
                throw (long *)&v120;
              }
              v36 = v103;
              v37 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v103 + 24LL);
              v38 = v94;
              if ( v37 == CAPOProcessNode::SetLeftFormat )
                CAPOProcessNode::SetLeftFormat(v103, v94);
              else
                v37(v103, v94);
              v39 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v36 + 32LL);
              if ( v39 == CAPOProcessNode::SetRightFormat )
                CAPOProcessNode::SetRightFormat(v36, v38);
              else
                v39(v36, v38);
              v40 = *((_QWORD *)&v88 + 1);
              ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v88);
              v41 = v90[1];
              v93 = v90[1];
              v42 = *(struct ATL::CAtlPlex **)v90[1];
              v98 = v90[1];
              if ( v90[1] )
                *((_QWORD *)v90[1] + 2) = v36;
              v90[1] = v42;
              *((_QWORD *)v41 + 1) = v40;
              *(_QWORD *)v41 = 0LL;
              ++v89;
              if ( *((_QWORD *)&v88 + 1) )
                **((_QWORD **)&v88 + 1) = v41;
              else
                *(_QWORD *)&v88 = v41;
              *((_QWORD *)&v88 + 1) = v41;
              v103 = 0LL;
              if ( !v118 )
              {
                v102 = 0LL;
                v81 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v38->lpVtbl->GetAudioFormat)(v38);
                v82 = CProcessNode::CreateDummyProcessNode(v8, v81, &v102);
                if ( v82 < 0 )
                {
                  v106 = v82;
                  throw (long *)&v106;
                }
                v127 = v102;
                ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v88, &v127);
                v102 = 0LL;
              }
              v103 = 0LL;
              v7 = v99;
            }
            v43 = (CPipeInstance *)operator new(0x138uLL);
            v93 = v43;
            if ( v43 )
              v44 = CPipeInstance::CPipeInstance(v43, WRITE_DATA_PIPE);
            else
              v44 = 0LL;
            v92 = v44;
            if ( !v44 )
            {
              v109[0] = -2147024882;
              throw (long *)v109;
            }
            v45 = (const unsigned __int16 *)*((_QWORD *)v7 + 13);
            v46 = -1LL;
            do
              ++v46;
            while ( v45[v46] );
            *((_QWORD *)v44 + 23) = 0LL;
            v47 = v46 + 1;
            if ( v46 + 1 < v46 )
            {
              v49 = -2147024362;
            }
            else
            {
              *((_QWORD *)v44 + 23) = 0LL;
              if ( is_mul_ok(v47, 2uLL) )
              {
                v48 = (char *)CoTaskMemAlloc(2 * v47);
                *((_QWORD *)v44 + 23) = v48;
                if ( !v48 )
                {
                  v49 = -2147024882;
                  goto LABEL_178;
                }
                v87 = 0;
                v49 = 0;
                StringCchCopyNExW(v48, v46 + 1, v45, v46);
                v50 = 0;
              }
              else
              {
                v50 = -2147024362;
                v87 = -2147024362;
                v49 = -2147024362;
              }
              if ( v50 >= 0 )
              {
                v51 = v99;
                *((_DWORD *)v44 + 30) = *(_DWORD *)v99 == 2;
                *((_DWORD *)v44 + 3) = v97;
                *((_DWORD *)v44 + 32) = *((_DWORD *)v51 + 28) != 0;
                *((_DWORD *)v44 + 31) = *((_DWORD *)v51 + 2) == 1;
                if ( *((_QWORD *)v44 + 18) )
                  ATL::AtlComPtrAssign((struct IUnknown **)v44 + 18, 0LL);
                v52 = v124;
                if ( *((struct IDeviceGraphObjectCache **)v44 + 29) != v124 )
                {
                  if ( v124 )
                    (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)v124 + 8LL))(v124);
                  v53 = *((_QWORD *)v44 + 29);
                  if ( v53 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
                  *((_QWORD *)v44 + 29) = v52;
                }
                v54 = v118;
                *(_QWORD *)v44 = v118;
                *((_DWORD *)v44 + 2) = v54 == 0LL;
                *((_BYTE *)v44 + 308) = *((_DWORD *)v51 + 33) != 0;
                v55 = *((_QWORD *)&v88 + 1);
                while ( v55 )
                {
                  v56 = v55;
                  v55 = *(_QWORD *)(v55 + 8);
                  v57 = *((_QWORD *)v44 + 2);
                  if ( !*((_QWORD *)v44 + 6) )
                  {
                    v61 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)v44 + 5, *((unsigned int *)v44 + 14), 0x18uLL);
                    if ( !v61 )
                      ATL::AtlThrowImpl(-2147024882);
                    v123 = (char *)v61 + 8;
                    v62 = *((_DWORD *)v44 + 14) - 1;
                    v63 = (char *)v61 + 24 * (unsigned int)v62 + 8;
                    v123 = v63;
                    while ( 1 )
                    {
                      v109[1] = v62;
                      if ( v62 < 0 )
                        break;
                      *(_QWORD *)v63 = *((_QWORD *)v44 + 6);
                      *((_QWORD *)v44 + 6) = v63;
                      v63 -= 24;
                      v123 = v63;
                      --v62;
                    }
                  }
                  v58 = (struct IDeviceGraphObjectCache *)*((_QWORD *)v44 + 6);
                  v124 = v58;
                  v59 = *(_QWORD *)v58;
                  v93 = v58;
                  if ( v58 )
                    *((_QWORD *)v58 + 2) = *(_QWORD *)(v56 + 16);
                  *((_QWORD *)v44 + 6) = v59;
                  *((_QWORD *)v58 + 1) = 0LL;
                  *(_QWORD *)v58 = v57;
                  ++*((_QWORD *)v44 + 4);
                  v60 = *((_QWORD *)v44 + 2);
                  if ( v60 )
                    *(_QWORD *)(v60 + 8) = v58;
                  else
                    *((_QWORD *)v44 + 3) = v58;
                  *((_QWORD *)v44 + 2) = v58;
                }
                ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v88);
                v65 = v99;
                if ( v118 )
                {
                  v66 = *((_DWORD *)v118 + 34);
                }
                else
                {
                  v64 = v125->nAvgBytesPerSec % v125->nBlockAlign;
                  v66 = (int)(float)((float)(int)((double)(int)(v125->nAvgBytesPerSec / v125->nBlockAlign)
                                                * (double)(int)*((_QWORD *)v99 + 4)
                                                / 10000000.0
                                                + 0.5)
                                   * v9);
                }
                *((_DWORD *)v44 + 35) = v66;
                v67 = 1;
                if ( *((_DWORD *)v65 + 1) )
                  v67 = 7;
                *((_DWORD *)v44 + 33) = v67;
                *((_DWORD *)v44 + 51) = 0;
                if ( (*((_DWORD *)v65 + 22) & 0x100000) != 0 )
                {
                  *((_DWORD *)v44 + 33) |= 0xAu;
                  *((_DWORD *)v44 + 48) = 1056964608;
                  *((_DWORD *)v44 + 49) = 1065353216;
                }
                if ( (*((_DWORD *)v65 + 22) & 0x8000000) != 0 )
                  *((_DWORD *)v44 + 50) = 3;
                *v128 = v44;
                v92 = 0LL;
                if ( v38 )
                {
                  Release = v38->lpVtbl->Release;
                  if ( (char *)Release == (char *)CAudioMediaType::Release )
                    CAudioMediaType::Release((CAudioMediaType *)v38);
                  else
                    ((void (__fastcall *)(struct IAudioMediaType *, __int64))Release)(v38, v64);
                }
                v105 = 0LL;
                goto LABEL_188;
              }
            }
LABEL_178:
            v121 = v49;
            throw (long *)&v121;
          }
        }
        v96 = 0;
        if ( a4 )
        {
          wFormatTag = a4->wFormatTag;
          if ( a4->wFormatTag == 0xFFFE )
          {
            if ( a4->cbSize == 22 )
              goto LABEL_28;
            v74 = *(_QWORD *)((char *)&a4[1].nSamplesPerSec + 2) - v17;
            if ( !v74 )
              v74 = *(_QWORD *)&a4[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
            if ( !v74 )
              goto LABEL_28;
            v75 = *(_QWORD *)((char *)&a4[1].nSamplesPerSec + 2)
                - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
            if ( !v75 )
              v75 = *(_QWORD *)&a4[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
            if ( !v75 )
            {
LABEL_28:
              v135 = *(_OWORD *)&a4->wFormatTag;
              *(_OWORD *)v136 = *(_OWORD *)&a4->cbSize;
              *(_QWORD *)&v136[16] = *(_QWORD *)&a4[1].wBitsPerSample;
              *(_WORD *)v136 = 22;
              goto LABEL_29;
            }
          }
          else if ( !a4->cbSize || ((wFormatTag - 1) & 0xFFFD) == 0 )
          {
            nChannels = a4->nChannels;
            if ( (unsigned __int16)(nChannels - 1) <= 1u )
            {
              wBitsPerSample = a4->wBitsPerSample;
              if ( ((wBitsPerSample - 8) & 0xFFE7) == 0 )
              {
                v135 = *(_OWORD *)&a4->wFormatTag;
                LOWORD(v135) = -2;
                *(_WORD *)v136 = 22;
                *(_WORD *)&v136[2] = wBitsPerSample;
                *(GUID *)&v136[8] = v15;
                *(_DWORD *)&v136[8] = wFormatTag;
                *(_DWORD *)&v136[4] = (nChannels == 1) + 3;
LABEL_29:
                v96 = 1;
                if ( *((_DWORD *)v7 + 28) && WORD1(v135) != WORD1(v137) )
                {
                  WORD1(v135) = WORD1(v137);
                  *(_DWORD *)&v136[4] = v16;
                  WORD6(v135) = WORD1(v137) * (HIWORD(v135) >> 3);
                  DWORD2(v135) = DWORD1(v135) * WORD6(v135);
                }
                v101 = 0LL;
                v21 = CProcessNode::CreateDummyProcessNode(v8, &v135, &v101);
                if ( v21 < 0 )
                {
                  v113 = v21;
                  throw (long *)&v113;
                }
                v22 = *((_QWORD *)&v88 + 1);
                ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v88);
                v23 = v90[1];
                v93 = v90[1];
                v24 = *(struct ATL::CAtlPlex **)v90[1];
                v98 = v90[1];
                if ( v90[1] )
                  *((_QWORD *)v90[1] + 2) = v101;
                v90[1] = v24;
                *((_QWORD *)v23 + 1) = v22;
                *(_QWORD *)v23 = 0LL;
                ++v89;
                if ( *((_QWORD *)&v88 + 1) )
                  **((_QWORD **)&v88 + 1) = v23;
                else
                  *(_QWORD *)&v88 = v23;
                *((_QWORD *)&v88 + 1) = v23;
                v101 = 0LL;
                v25 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v138[8];
                if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v138[8] )
                  v25 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v138[16];
                if ( !v25 && (*((_DWORD *)v7 + 22) & 0x800000) == 0 )
                {
                  v131 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
                  v71 = CAPOProcessNode::CreateAPOProcessNode(&GUID_0f92ff8d_2f19_4b9a_b9dd_3efc2b3becec, v8, 1LL);
                  if ( v71 < 0 )
                  {
                    v114 = v71;
                    throw (long *)&v114;
                  }
                  v126 = 0LL;
                  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v88, &v126);
                }
                v101 = 0LL;
                goto LABEL_41;
              }
            }
          }
        }
        v110 = -2005139404;
        throw (long *)&v110;
      }
    }
    v111 = -2005139404;
    throw (long *)&v111;
  }
  catch ( long *v130 )
  {
    v69 = *(_DWORD *)v130;
    goto LABEL_110;
  }
  catch ( ATL::CAtlException *v134 )
  {
    v69 = *(_DWORD *)v134;
    goto LABEL_110;
  }
LABEL_188:
  v69 = v87;
LABEL_110:
  if ( v69 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        19LL,
        &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
        (unsigned int)v69);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateStreamPipeInstance", 0x32Cu, v69);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v88);
  return (unsigned int)v69;
}
