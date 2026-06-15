/*
 * XREFs of ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140004550
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140011B30 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
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
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D278 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     _CxxThrowException_0 @ 0x14001E511 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x14003006C (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140035F54 (WPP_SF_.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CPipeInstance::CreateSubmixPipeInstance(
        struct IDeviceGraphObjectCache *a1,
        struct SUBMIX_DESCRIPTOR *a2,
        struct CPipeInstance **a3)
{
  struct SUBMIX_DESCRIPTOR *v4; // r14
  BOOL v5; // r15d
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rsi
  struct ATL::CAtlPlex *v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  struct ATL::CAtlPlex *v12; // rax
  __int64 v13; // r9
  struct ATL::CAtlPlex *v14; // r8
  struct ATL::CAtlPlex *v15; // rcx
  unsigned int v16; // edi
  int v17; // eax
  int v18; // eax
  CAPOProcessNode *v19; // rsi
  void (__fastcall *v20)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  struct IAudioMediaType *v21; // rdi
  void (__fastcall *v22)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  __int64 v23; // r14
  struct ATL::CAtlPlex *v24; // rax
  struct ATL::CAtlPlex *v25; // rcx
  CPipeInstance *v26; // rax
  CPipeInstance *v27; // r12
  _WORD *v28; // r14
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // r15
  _WORD *v31; // rax
  int v32; // r13d
  int v33; // ecx
  unsigned __int64 v34; // rcx
  _WORD *v35; // rdx
  int v36; // r9d
  __int64 v37; // r8
  unsigned __int64 v38; // r15
  __int64 v39; // rcx
  __int64 v40; // rsi
  __int64 v41; // r14
  __int64 v42; // r15
  struct ATL::CAtlPlex *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  int v50; // r9d
  _QWORD *v51; // r8
  struct ATL::CAtlPlex *v52; // rcx
  ULONG (__stdcall *Release)(IAudioMediaType *); // rax
  int v55; // eax
  GUID *v56; // rax
  int APOProcessNode; // eax
  __int64 v58; // rsi
  struct ATL::CAtlPlex *v59; // rcx
  struct ATL::CAtlPlex *v60; // rdx
  struct ATL::CAtlPlex *v61; // rax
  __int64 v62; // r8
  struct ATL::CAtlPlex *v63; // r9
  __int64 v64; // rax
  int v65; // eax
  __int128 v66; // [rsp+40h] [rbp-158h] BYREF
  __int64 v67; // [rsp+50h] [rbp-148h]
  struct ATL::CAtlPlex *v68[2]; // [rsp+58h] [rbp-140h] BYREF
  unsigned __int64 v69; // [rsp+68h] [rbp-130h]
  struct ATL::CAtlPlex *v70; // [rsp+70h] [rbp-128h] BYREF
  struct ATL::CAtlPlex *v71; // [rsp+78h] [rbp-120h]
  struct IAudioMediaType *v72; // [rsp+80h] [rbp-118h] BYREF
  __int64 v73; // [rsp+88h] [rbp-110h] BYREF
  struct ATL::CAtlPlex *v74; // [rsp+90h] [rbp-108h] BYREF
  __int64 v75; // [rsp+98h] [rbp-100h]
  CAPOProcessNode *v76; // [rsp+A0h] [rbp-F8h]
  int v77; // [rsp+A8h] [rbp-F0h] BYREF
  unsigned int v78; // [rsp+ACh] [rbp-ECh]
  int v79; // [rsp+B0h] [rbp-E8h] BYREF
  int v80; // [rsp+B4h] [rbp-E4h] BYREF
  int v81; // [rsp+B8h] [rbp-E0h]
  int v82; // [rsp+BCh] [rbp-DCh] BYREF
  int v83; // [rsp+C0h] [rbp-D8h] BYREF
  int v84; // [rsp+C4h] [rbp-D4h]
  int v85; // [rsp+C8h] [rbp-D0h]
  int v86; // [rsp+CCh] [rbp-CCh] BYREF
  int pExceptionObject; // [rsp+D0h] [rbp-C8h] BYREF
  int v88; // [rsp+D4h] [rbp-C4h]
  __int64 v89; // [rsp+D8h] [rbp-C0h]
  __int64 v90; // [rsp+E0h] [rbp-B8h]
  _QWORD *v91; // [rsp+E8h] [rbp-B0h]
  struct ATL::CAtlPlex *v92; // [rsp+F0h] [rbp-A8h]
  _WORD *v93; // [rsp+F8h] [rbp-A0h]
  struct ATL::CAtlPlex *v94; // [rsp+100h] [rbp-98h]
  void *v95; // [rsp+108h] [rbp-90h]
  _WORD *v96; // [rsp+110h] [rbp-88h]
  unsigned __int64 v97; // [rsp+118h] [rbp-80h]
  unsigned __int64 v98; // [rsp+120h] [rbp-78h]
  __int64 v99; // [rsp+128h] [rbp-70h]
  long *v100; // [rsp+130h] [rbp-68h] BYREF
  ATL::CAtlException *v101; // [rsp+138h] [rbp-60h] BYREF
  GUID v102; // [rsp+140h] [rbp-58h]
  GUID v103; // [rsp+150h] [rbp-48h]
  BOOL v107; // [rsp+1B8h] [rbp+20h]

  v99 = -2LL;
  v4 = a2;
  v66 = 0LL;
  v67 = 0LL;
  *(_OWORD *)v68 = 0LL;
  LODWORD(v69) = 10;
  v5 = *(_DWORD *)a2 != 0;
  v107 = v5;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids);
  }
  *a3 = 0LL;
  try
  {
    v73 = 0LL;
    v6 = CProcessNode::CreateDummyProcessNode(v5, *((_QWORD *)v4 + 3), &v73);
    if ( v6 < 0 )
    {
      pExceptionObject = v6;
      throw (long *)&pExceptionObject;
    }
    v7 = v73;
    v8 = *((_QWORD *)&v66 + 1);
    v9 = v68[1];
    if ( v68[1] )
    {
LABEL_16:
      v71 = v9;
      v15 = *(struct ATL::CAtlPlex **)v9;
      v74 = v9;
      if ( v9 )
        *((_QWORD *)v9 + 2) = v7;
      v68[1] = v15;
      *((_QWORD *)v9 + 1) = v8;
      *(_QWORD *)v9 = 0LL;
      ++v67;
      if ( *((_QWORD *)&v66 + 1) )
        **((_QWORD **)&v66 + 1) = v9;
      else
        *(_QWORD *)&v66 = v9;
      *((_QWORD *)&v66 + 1) = v9;
      v73 = 0LL;
      v16 = 0;
      v78 = 0;
      while ( v16 < *((_DWORD *)v4 + 22) )
      {
        v75 = 0LL;
        v55 = *((_DWORD *)v4 + 16);
        if ( _bittest(&v55, v16) )
          v56 = (GUID *)((char *)v4 + 68);
        else
          v56 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v102 = *v56;
        APOProcessNode = CAPOProcessNode::CreateAPOProcessNode((char *)v4 + 16 * v16 + 92, v5, 0LL);
        if ( APOProcessNode < 0 )
        {
          v77 = APOProcessNode;
          throw (long *)&v77;
        }
        v58 = *((_QWORD *)&v66 + 1);
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v66);
        v59 = v68[1];
        v71 = v68[1];
        v60 = *(struct ATL::CAtlPlex **)v68[1];
        v74 = v68[1];
        if ( v68[1] )
          *((_QWORD *)v68[1] + 2) = v75;
        v68[1] = v60;
        *((_QWORD *)v59 + 1) = v58;
        *(_QWORD *)v59 = 0LL;
        ++v67;
        if ( *((_QWORD *)&v66 + 1) )
          **((_QWORD **)&v66 + 1) = v59;
        else
          *(_QWORD *)&v66 = v59;
        *((_QWORD *)&v66 + 1) = v59;
        v75 = 0LL;
        v78 = ++v16;
      }
      v72 = 0LL;
      v17 = CAudioMediaType::Create(*((const struct tWAVEFORMATEX **)v4 + 6), *((_DWORD *)v4 + 10), &v72, 0.0, 0);
      if ( v17 < 0 )
      {
        v79 = v17;
        throw (long *)&v79;
      }
      if ( *(_DWORD *)v4 )
      {
        if ( *(_DWORD *)v4 == 1 )
        {
          v70 = 0LL;
          v21 = v72;
          v64 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v72->lpVtbl->GetAudioFormat)(v72);
          v65 = CProcessNode::CreateDummyProcessNode(v5, v64, &v70);
          if ( v65 < 0 )
          {
            v82 = v65;
            throw (long *)&v82;
          }
          v74 = v70;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v66, &v74);
          v70 = 0LL;
        }
        else
        {
          v21 = v72;
        }
      }
      else
      {
        v76 = 0LL;
        v103 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v18 = CAPOProcessNode::CreateAPOProcessNode(&GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a, v5, 1LL);
        if ( v18 < 0 )
        {
          v80 = v18;
          throw (long *)&v80;
        }
        v19 = v76;
        v20 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v76 + 24LL);
        v21 = v72;
        if ( v20 == CAPOProcessNode::SetLeftFormat )
          CAPOProcessNode::SetLeftFormat(v76, v72);
        else
          v20(v76, v72);
        v22 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v19 + 32LL);
        if ( v22 == CAPOProcessNode::SetRightFormat )
          CAPOProcessNode::SetRightFormat(v19, v21);
        else
          v22(v19, v21);
        v23 = *((_QWORD *)&v66 + 1);
        v24 = v68[1];
        if ( !v68[1] )
        {
          v61 = ATL::CAtlPlex::Create(v68, (unsigned int)v69, 0x18uLL);
          if ( !v61 )
            ATL::AtlThrowImpl(-2147024882);
          v62 = (unsigned int)(v69 - 1);
          v63 = (struct ATL::CAtlPlex *)((char *)v61 + 24 * v62 + 8);
          v94 = v63;
          v81 = v69 - 1;
          v24 = v68[1];
          while ( (int)v62 >= 0 )
          {
            *(_QWORD *)v63 = v24;
            v24 = v63;
            v68[1] = v63;
            v63 = (struct ATL::CAtlPlex *)((char *)v63 - 24);
            v94 = v63;
            LODWORD(v62) = v62 - 1;
            v81 = v62;
          }
        }
        v71 = v24;
        v25 = *(struct ATL::CAtlPlex **)v24;
        v74 = v24;
        if ( v24 )
          *((_QWORD *)v24 + 2) = v19;
        v68[1] = v25;
        *((_QWORD *)v24 + 1) = v23;
        *(_QWORD *)v24 = 0LL;
        ++v67;
        if ( *((_QWORD *)&v66 + 1) )
          **((_QWORD **)&v66 + 1) = v24;
        else
          *(_QWORD *)&v66 = v24;
        *((_QWORD *)&v66 + 1) = v24;
        v76 = 0LL;
        v4 = a2;
      }
      v26 = (CPipeInstance *)operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
      v71 = v26;
      if ( v26 )
        v27 = CPipeInstance::CPipeInstance(v26, (enum PIPE_TYPE)*((_DWORD *)v4 + 2));
      else
        v27 = 0LL;
      v70 = v27;
      if ( !v27 )
      {
        v83 = -2147024882;
        throw (long *)&v83;
      }
      v28 = (_WORD *)*((_QWORD *)v4 + 4);
      v29 = -1LL;
      do
        ++v29;
      while ( v28[v29] );
      *((_QWORD *)v27 + 23) = 0LL;
      v30 = v29 + 1;
      if ( v29 + 1 < v29 )
      {
        v32 = -2147024362;
        goto LABEL_148;
      }
      *((_QWORD *)v27 + 23) = 0LL;
      if ( !is_mul_ok(v30, 2uLL) )
      {
        v32 = -2147024362;
        goto LABEL_57;
      }
      v31 = CoTaskMemAlloc(2 * v30);
      *((_QWORD *)v27 + 23) = v31;
      if ( !v31 )
      {
        v32 = -2147024882;
        goto LABEL_148;
      }
      v32 = 0;
      v71 = (struct ATL::CAtlPlex *)v29;
      v95 = v28;
      v33 = 0;
      if ( v30 > 0x7FFFFFFF )
        v33 = -2147024809;
      if ( v33 < 0 )
      {
        if ( v29 == -1LL )
          goto LABEL_57;
      }
      else
      {
        v84 = 0;
        if ( v29 < 0x7FFFFFFF )
        {
          if ( !v28 )
          {
            v28 = &unk_14006DFC4;
            v95 = &unk_14006DFC4;
            v29 = 0LL;
            v71 = 0LL;
          }
          if ( v30 )
          {
            v90 = 0LL;
            v98 = v29;
            v96 = v28;
            v34 = v30;
            v97 = v30;
            v35 = v31;
            v93 = v31;
            v36 = 0;
            v37 = 0LL;
            v89 = 0LL;
            while ( v34 )
            {
              if ( !v29 || !*v28 )
                goto LABEL_55;
              *v35++ = *v28;
              v93 = v35;
              v96 = ++v28;
              v97 = --v34;
              v98 = --v29;
              v89 = ++v37;
            }
            v93 = --v35;
            v89 = --v37;
            v36 = -2147024774;
LABEL_55:
            *v35 = 0;
            v90 = v37;
            v38 = v30 - v37;
            if ( v36 >= 0 && v38 > 1 && 2 * v38 > 2 )
              memset(&v31[v90 + 1], 0, 2 * v38 - 2);
          }
LABEL_57:
          if ( v32 >= 0 )
          {
            *((_DWORD *)v27 + 30) = *(_DWORD *)a2 == 2;
            *((_DWORD *)v27 + 3) = v107;
            *((_DWORD *)v27 + 32) = *((_DWORD *)a2 + 16) != 0;
            if ( *((_QWORD *)v27 + 18) )
              ATL::AtlComPtrAssign((struct IUnknown **)v27 + 18, 0LL);
            if ( *((struct IDeviceGraphObjectCache **)v27 + 29) != a1 )
            {
              if ( a1 )
                (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)a1 + 8LL))(a1);
              v39 = *((_QWORD *)v27 + 29);
              if ( v39 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
              *((_QWORD *)v27 + 29) = a1;
            }
            *(_QWORD *)v27 = 0LL;
            *((_DWORD *)v27 + 2) = 1;
            v40 = *((_QWORD *)&v66 + 1);
            while ( v40 )
            {
              v41 = v40;
              v40 = *(_QWORD *)(v40 + 8);
              v42 = *((_QWORD *)v27 + 2);
              if ( !*((_QWORD *)v27 + 6) )
              {
                v46 = *((unsigned int *)v27 + 14);
                if ( *((_DWORD *)v27 + 14) )
                {
                  if ( v46 == 10 )
                    v47 = 0x1999999999999999LL;
                  else
                    v47 = 0xFFFFFFFFFFFFFFFFuLL / v46;
                  if ( v47 < 0x18 )
LABEL_143:
                    ATL::AtlThrowImpl(-2147024882);
                  v48 = 24 * v46;
                }
                else
                {
                  v48 = 0LL;
                }
                if ( (unsigned __int64)~v48 < 8 )
                  goto LABEL_143;
                v49 = malloc(v48 + 8);
                if ( !v49 )
                  goto LABEL_143;
                *v49 = *((_QWORD *)v27 + 5);
                *((_QWORD *)v27 + 5) = v49;
                v91 = v49 + 1;
                v50 = *((_DWORD *)v27 + 14) - 1;
                v51 = &v49[3 * (unsigned int)v50 + 1];
                v91 = v51;
                while ( 1 )
                {
                  v85 = v50;
                  if ( v50 < 0 )
                    break;
                  *v51 = *((_QWORD *)v27 + 6);
                  *((_QWORD *)v27 + 6) = v51;
                  v51 -= 3;
                  v91 = v51;
                  --v50;
                }
              }
              v43 = (struct ATL::CAtlPlex *)*((_QWORD *)v27 + 6);
              v44 = *(_QWORD *)v43;
              v71 = v43;
              if ( v43 )
                *((_QWORD *)v43 + 2) = *(_QWORD *)(v41 + 16);
              *((_QWORD *)v27 + 6) = v44;
              *((_QWORD *)v43 + 1) = 0LL;
              *(_QWORD *)v43 = v42;
              ++*((_QWORD *)v27 + 4);
              v45 = *((_QWORD *)v27 + 2);
              if ( v45 )
                *(_QWORD *)(v45 + 8) = v43;
              else
                *((_QWORD *)v27 + 3) = v43;
              *((_QWORD *)v27 + 2) = v43;
            }
            while ( v67 )
            {
              v52 = (struct ATL::CAtlPlex *)v66;
              if ( !(_QWORD)v66 )
                ATL::AtlThrowImpl(-2147467259);
              *(_QWORD *)&v66 = *(_QWORD *)v66;
              *(struct ATL::CAtlPlex **)v52 = v68[1];
              v68[1] = v52;
              if ( !--v67 )
                ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v66);
            }
            v66 = 0LL;
            v68[1] = 0LL;
            if ( v68[0] )
            {
              ATL::CAtlPlex::FreeDataChain(v68[0]);
              v68[0] = 0LL;
            }
            *((_DWORD *)v27 + 35) = (int)(float)((float)(int)((float)((float)*(int *)(*((_QWORD *)a2 + 6) + 8LL)
                                                                    / (float)*(unsigned __int16 *)(*((_QWORD *)a2 + 6)
                                                                                                 + 12LL))
                                                            * (double)(int)*((_QWORD *)a2 + 7)
                                                            / 10000000.0
                                                            + 0.5)
                                               * 1.1);
            *((_DWORD *)v27 + 33) = 0;
            *((_DWORD *)v27 + 51) = 0;
            *((_OWORD *)v27 + 13) = *(_OWORD *)((char *)a2 + 68);
            *((_BYTE *)v27 + 309) = *((_BYTE *)a2 + 85);
            *a3 = v27;
            v70 = 0LL;
            if ( v21 )
            {
              Release = v21->lpVtbl->Release;
              if ( (char *)Release == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v21);
              else
                ((void (__fastcall *)(struct IAudioMediaType *))Release)(v21);
            }
            v73 = 0LL;
            goto LABEL_156;
          }
LABEL_148:
          v86 = v32;
          throw (long *)&v86;
        }
        v84 = -2147024809;
        if ( v29 == -1LL )
          goto LABEL_57;
      }
      *v31 = 0;
      goto LABEL_57;
    }
    if ( (_DWORD)v69 )
    {
      if ( (unsigned int)v69 == 10LL )
        v10 = 0x1999999999999999LL;
      else
        v10 = 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v69;
      if ( v10 < 0x18 )
        goto LABEL_113;
      v11 = 24LL * (unsigned int)v69;
    }
    else
    {
      v11 = 0LL;
    }
    if ( (unsigned __int64)~v11 >= 8 )
    {
      v12 = (struct ATL::CAtlPlex *)malloc(v11 + 8);
      if ( v12 )
      {
        *(struct ATL::CAtlPlex **)v12 = v68[0];
        v68[0] = v12;
        v13 = (unsigned int)(v69 - 1);
        v14 = (struct ATL::CAtlPlex *)((char *)v12 + 24 * v13 + 8);
        v92 = v14;
        v88 = v69 - 1;
        v9 = v68[1];
        while ( (int)v13 >= 0 )
        {
          *(_QWORD *)v14 = v9;
          v9 = v14;
          v68[1] = v14;
          v14 = (struct ATL::CAtlPlex *)((char *)v14 - 24);
          v92 = v14;
          LODWORD(v13) = v13 - 1;
          v88 = v13;
        }
        goto LABEL_16;
      }
    }
LABEL_113:
    ATL::AtlThrowImpl(-2147024882);
  }
  catch ( long *v100 )
  {
    v32 = *(_DWORD *)v100;
  }
  catch ( ATL::CAtlException *v101 )
  {
    v32 = *(_DWORD *)v101;
  }
LABEL_156:
  if ( v32 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
        (unsigned int)v32);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateSubmixPipeInstance", 0x1ADu, v32);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v66);
  return (unsigned int)v32;
}
