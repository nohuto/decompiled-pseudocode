/*
 * XREFs of ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140008200
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x1400078D8 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140011B30 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140005A18 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140017230 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D278 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x14001E511 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x14003072C (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 *     ??0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTION@@PEAVCProcessNode@@4@Z @ 0x1400307B8 (--0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTI.c)
 *     ?AddTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x140030ABC (-AddTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?AddHead@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x140030AEC (-AddHead@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x1400403B8 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::CreateAPOConnectionList(CPipeInstance *this)
{
  __int64 v2; // rbx
  CConnectionInstance *v3; // rcx
  __int64 v4; // rax
  CConnectionInstance *v5; // rdx
  __int64 v6; // r13
  CConnectionInstance *v7; // rdi
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // r15
  _QWORD *v13; // rax
  int v14; // edx
  _QWORD *v15; // rcx
  int ii; // edx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  int v23; // edx
  _QWORD *v24; // rcx
  int kk; // edx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  char *v29; // r14
  __int64 v30; // r12
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  int v34; // edx
  _QWORD *v35; // rcx
  int jj; // edx
  CConnectionInstance *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  int m; // edx
  _QWORD *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r14
  CConnectionInstance *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // r15
  CConnectionInstance *v48; // r14
  int v49; // eax
  __int64 v50; // rdi
  __int64 v51; // rcx
  _QWORD *v52; // rax
  _QWORD *v53; // rdi
  _QWORD *v54; // rax
  int v55; // edx
  _BYTE *v56; // rdx
  CConnectionInstance *v57; // r14
  int v58; // eax
  __int64 v59; // rdi
  __int64 v60; // rcx
  CConnectionInstance **v61; // rax
  CConnectionInstance **v62; // rdi
  unsigned __int64 v63; // rcx
  __int64 v64; // rcx
  CConnectionInstance *v65; // rax
  int v66; // edx
  CConnectionInstance *v67; // rcx
  CConnectionInstance *v68; // rax
  CConnectionInstance *v69; // rcx
  __int64 v70; // r14
  CConnectionInstance *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rcx
  _QWORD **Head; // rax
  const struct CConnectionInstance *LoopbackConnection; // rax
  __int64 v77; // r15
  CConnectionInstance *v78; // r14
  int v79; // eax
  __int64 v80; // rdi
  __int64 v81; // rcx
  unsigned int *v82; // rax
  unsigned int *v83; // rdi
  _QWORD *v84; // rax
  __int64 v85; // rcx
  __int64 v86; // r14
  struct ATL::CAtlPlex *v87; // r8
  int v88; // edx
  _QWORD *v89; // rcx
  int j; // edx
  CConnectionInstance *v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // r14
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // r12
  CConnectionInstance *v98; // r14
  int v99; // eax
  __int64 v100; // r15
  __int64 v101; // rcx
  __int64 v102; // r15
  CConnectionInstance *v103; // rax
  __int64 v104; // rcx
  CConnectionInstance **v105; // rcx
  struct ATL::CAtlPlex *v106; // r8
  int v107; // edx
  _QWORD *v108; // rcx
  int n; // edx
  CConnectionInstance *v110; // r14
  int v111; // eax
  __int64 v112; // rsi
  __int64 v113; // rcx
  CConnectionInstance *v114; // rsi
  CConnectionInstance *v115; // rax
  CConnectionInstance *v116; // rcx
  CConnectionInstance **v117; // rcx
  struct ATL::CAtlPlex *v118; // rax
  unsigned int v119; // edx
  _QWORD *v120; // rcx
  int i; // edx
  struct ATL::CAtlPlex *v122; // r8
  unsigned int v123; // edx
  _QWORD *v124; // rcx
  int k; // edx
  struct ATL::CAtlPlex *v126; // r8
  int v127; // edx
  CConnectionInstance *v128; // rcx
  __int64 v129; // rdx
  CConnectionInstance *v130; // rcx
  __int64 v131; // rax
  struct ATL::CAtlPlex *v132; // r8
  int v133; // edx
  _QWORD *v134; // rcx
  _BYTE v135[32]; // [rsp+0h] [rbp-D8h] BYREF
  int pExceptionObject; // [rsp+40h] [rbp-98h] BYREF
  int v137; // [rsp+44h] [rbp-94h] BYREF
  int v138; // [rsp+48h] [rbp-90h] BYREF
  int v139; // [rsp+4Ch] [rbp-8Ch] BYREF
  int v140; // [rsp+50h] [rbp-88h] BYREF
  int v141; // [rsp+54h] [rbp-84h] BYREF
  int v142; // [rsp+58h] [rbp-80h] BYREF
  int v143; // [rsp+5Ch] [rbp-7Ch] BYREF
  int v144; // [rsp+60h] [rbp-78h] BYREF
  int v145; // [rsp+64h] [rbp-74h] BYREF
  int v146; // [rsp+68h] [rbp-70h] BYREF
  __int64 v147; // [rsp+70h] [rbp-68h]
  _QWORD *v148; // [rsp+78h] [rbp-60h]
  __int64 v149; // [rsp+80h] [rbp-58h]
  long *v150; // [rsp+88h] [rbp-50h] BYREF
  ATL::CAtlException *v151; // [rsp+90h] [rbp-48h] BYREF
  int v152; // [rsp+E0h] [rbp+8h]
  CConnectionInstance *v153; // [rsp+E8h] [rbp+10h] BYREF
  CConnectionInstance *v154; // [rsp+F0h] [rbp+18h]
  _QWORD *v155; // [rsp+F8h] [rbp+20h]

  v149 = -2LL;
  v2 = 0LL;
  v147 = 0LL;
  v3 = 0LL;
  v153 = 0LL;
  v152 = 0;
  try
  {
    v4 = *((_QWORD *)this + 3);
    if ( !v4 )
      ATL::AtlThrowImpl(-2147467259);
    v5 = *(CConnectionInstance **)(v4 + 8);
    v154 = v5;
    v6 = *(_QWORD *)(v4 + 16);
    if ( *(_QWORD *)this )
    {
      if ( *((_DWORD *)this + 30) )
      {
        LoopbackConnection = CPipeInstance::GetLoopbackConnection(*(CPipeInstance **)this);
      }
      else
      {
        Head = (_QWORD **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(*(_QWORD *)this + 64LL));
        LoopbackConnection = *(const struct CConnectionInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(*Head);
      }
      v77 = *((_QWORD *)LoopbackConnection + 1);
      v78 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v153 = v78;
      if ( v78 )
      {
        v79 = *(_DWORD *)(v6 + 24);
        v80 = *((_QWORD *)this + 29);
        *((_QWORD *)v78 + 6) = 0LL;
        *(_QWORD *)v78 = 0LL;
        *((_QWORD *)v78 + 1) = v77;
        *((_DWORD *)v78 + 4) = v79;
        *((_QWORD *)v78 + 3) = v6;
        *((_QWORD *)v78 + 4) = 0LL;
        *((_DWORD *)v78 + 10) = 0;
        *((_QWORD *)v78 + 7) = 0LL;
        if ( *((_QWORD *)v78 + 6) != v80 )
        {
          if ( v80 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 8LL))(v80);
          v81 = *((_QWORD *)v78 + 6);
          if ( v81 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
          *((_QWORD *)v78 + 6) = v80;
        }
      }
      else
      {
        v78 = 0LL;
      }
      v153 = v78;
      if ( !v78 )
      {
        pExceptionObject = -2147024882;
        throw (long *)&pExceptionObject;
      }
      v82 = (unsigned int *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      v83 = v82;
      if ( !v82 )
      {
        v138 = -2147024882;
        throw (long *)&v138;
      }
      *(_QWORD *)v82 = 0LL;
      *((_QWORD *)v82 + 1) = 0LL;
      *((_QWORD *)v82 + 2) = 0LL;
      *((_QWORD *)v82 + 3) = 0LL;
      *((_QWORD *)v82 + 4) = 0LL;
      v82[10] = 10;
      v118 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)v82 + 3, v82[10], 0x18uLL);
      if ( !v118 )
        ATL::AtlThrowImpl(-2147024882);
      v119 = v83[10];
      v120 = (_QWORD *)((char *)v118 + 16 * v119 + 8 * v119 - 16);
      for ( i = v119 - 1; i >= 0; --i )
      {
        *v120 = *((_QWORD *)v83 + 4);
        *((_QWORD *)v83 + 4) = v120;
        v120 -= 3;
      }
      v84 = (_QWORD *)*((_QWORD *)v83 + 4);
      v148 = v84;
      v85 = *v84;
      if ( v84 )
        v84[2] = v78;
      *((_QWORD *)v83 + 4) = v85;
      v84[1] = 0LL;
      *v84 = 0LL;
      ++*((_QWORD *)v83 + 2);
      if ( *(_QWORD *)v83 )
        *(_QWORD *)(*(_QWORD *)v83 + 8LL) = v84;
      else
        *((_QWORD *)v83 + 1) = v84;
      *(_QWORD *)v83 = v84;
      v86 = *((_QWORD *)this + 8);
      if ( !*((_QWORD *)this + 12) )
      {
        v87 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 11, *((unsigned int *)this + 26), 0x18uLL);
        if ( !v87 )
          ATL::AtlThrowImpl(-2147024882);
        v88 = *((_DWORD *)this + 26);
        v89 = (_QWORD *)((char *)v87 + 16 * (v88 - 1) + 8 * (unsigned int)(v88 - 1) + 8);
        for ( j = v88 - 1; j >= 0; --j )
        {
          *v89 = *((_QWORD *)this + 12);
          *((_QWORD *)this + 12) = v89;
          v89 -= 3;
        }
      }
      v91 = (CConnectionInstance *)*((_QWORD *)this + 12);
      v153 = v91;
      v92 = *(_QWORD *)v91;
      if ( v91 )
        *((_QWORD *)v91 + 2) = v83;
      *((_QWORD *)this + 12) = v92;
      *((_QWORD *)v91 + 1) = 0LL;
      *(_QWORD *)v91 = v86;
      ++*((_QWORD *)this + 10);
      v93 = *((_QWORD *)this + 8);
      if ( v93 )
        *(_QWORD *)(v93 + 8) = v91;
      else
        *((_QWORD *)this + 9) = v91;
      *((_QWORD *)this + 8) = v91;
      v3 = 0LL;
      v153 = 0LL;
      if ( !*((_DWORD *)this + 3) && *((_BYTE *)this + 308) )
      {
        v94 = *(_QWORD *)this;
        if ( *(_QWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(*(_QWORD *)this + 64LL))
                       + 16LL) == 2LL )
        {
          v95 = *(_QWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(v94 + 64))
                          + 8LL);
          if ( !v95 )
            ATL::AtlThrowImpl(-2147467259);
          v96 = *(_QWORD *)(v95 + 16);
        }
        else
        {
          v96 = 0LL;
        }
        v97 = *(_QWORD *)(v96 + 8);
        v98 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        v153 = v98;
        if ( v98 )
        {
          v99 = *(_DWORD *)(v6 + 24);
          v100 = *((_QWORD *)this + 29);
          *((_QWORD *)v98 + 6) = 0LL;
          *(_QWORD *)v98 = 0LL;
          *((_QWORD *)v98 + 1) = v97;
          *((_DWORD *)v98 + 4) = v99;
          *((_QWORD *)v98 + 3) = v6;
          *((_QWORD *)v98 + 4) = 0LL;
          *((_DWORD *)v98 + 10) = 0;
          *((_QWORD *)v98 + 7) = 0LL;
          if ( *((_QWORD *)v98 + 6) != v100 )
          {
            if ( v100 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v100 + 8LL))(v100);
            v101 = *((_QWORD *)v98 + 6);
            if ( v101 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v101 + 16LL))(v101);
            *((_QWORD *)v98 + 6) = v100;
          }
        }
        else
        {
          v98 = 0LL;
        }
        v153 = v98;
        if ( !v98 )
        {
          v137 = -2147024882;
          throw (long *)&v137;
        }
        v102 = *((_QWORD *)v83 + 1);
        if ( !*((_QWORD *)v83 + 4) )
        {
          v122 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)v83 + 3, v83[10], 0x18uLL);
          if ( !v122 )
            ATL::AtlThrowImpl(-2147024882);
          v123 = v83[10];
          v124 = (_QWORD *)((char *)v122 + 16 * v123 + 8 * v123 - 16);
          for ( k = v123 - 1; k >= 0; --k )
          {
            *v124 = *((_QWORD *)v83 + 4);
            *((_QWORD *)v83 + 4) = v124;
            v124 -= 3;
          }
        }
        v103 = (CConnectionInstance *)*((_QWORD *)v83 + 4);
        v153 = v103;
        v104 = *(_QWORD *)v103;
        if ( v103 )
          *((_QWORD *)v103 + 2) = v98;
        *((_QWORD *)v83 + 4) = v104;
        *((_QWORD *)v103 + 1) = v102;
        *(_QWORD *)v103 = 0LL;
        ++*((_QWORD *)v83 + 2);
        v105 = (CConnectionInstance **)*((_QWORD *)v83 + 1);
        if ( v105 )
          *v105 = v103;
        else
          *(_QWORD *)v83 = v103;
        *((_QWORD *)v83 + 1) = v103;
        goto LABEL_59;
      }
LABEL_60:
      while ( 1 )
      {
        v5 = v154;
LABEL_61:
        if ( !v5 )
          break;
        v47 = *((_QWORD *)v5 + 2);
        v154 = (CConnectionInstance *)*((_QWORD *)v5 + 1);
        v48 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        v153 = v48;
        if ( v48 )
        {
          v49 = *(_DWORD *)(v47 + 24);
          v50 = *((_QWORD *)this + 29);
          *((_QWORD *)v48 + 6) = 0LL;
          *(_QWORD *)v48 = 1LL;
          *((_QWORD *)v48 + 1) = 0LL;
          *((_DWORD *)v48 + 4) = v49;
          *((_QWORD *)v48 + 3) = v47;
          *((_QWORD *)v48 + 4) = v6;
          *((_DWORD *)v48 + 10) = 0;
          *((_QWORD *)v48 + 7) = 0LL;
          if ( *((_QWORD *)v48 + 6) != v50 )
          {
            if ( v50 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 8LL))(v50);
            v51 = *((_QWORD *)v48 + 6);
            if ( v51 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
            *((_QWORD *)v48 + 6) = v50;
          }
        }
        else
        {
          v48 = 0LL;
        }
        v153 = v48;
        if ( !v48 )
        {
          v142 = -2147024882;
          throw (long *)&v142;
        }
        v52 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v53 = v52;
        if ( !v52 )
        {
          v143 = -2147024882;
          throw (long *)&v143;
        }
        *v52 = 0LL;
        v52[1] = 0LL;
        v52[2] = 0LL;
        v52[3] = 0LL;
        v52[4] = 0LL;
        *((_DWORD *)v52 + 10) = 10;
        v54 = malloc(0xF8uLL);
        if ( !v54 )
          ATL::AtlThrowImpl(-2147024882);
        *v54 = v53[3];
        v53[3] = v54;
        v55 = *((_DWORD *)v53 + 10);
        v39 = &v54[2 * (v55 - 1) + 1 + (unsigned int)(v55 - 1)];
        for ( m = v55 - 1; m >= 0; --m )
        {
          *v39 = v53[4];
          v53[4] = v39;
          v39 -= 3;
        }
        v41 = (_QWORD *)v53[4];
        v155 = v41;
        v42 = *v41;
        if ( v41 )
          v41[2] = v48;
        v53[4] = v42;
        v41[1] = 0LL;
        *v41 = 0LL;
        ++v53[2];
        if ( *v53 )
          *(_QWORD *)(*v53 + 8LL) = v41;
        else
          v53[1] = v41;
        *v53 = v41;
        v43 = *((_QWORD *)this + 8);
        if ( !*((_QWORD *)this + 12) )
        {
          v106 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 11, *((unsigned int *)this + 26), 0x18uLL);
          if ( !v106 )
            ATL::AtlThrowImpl(-2147024882);
          v107 = *((_DWORD *)this + 26);
          v108 = (_QWORD *)((char *)v106 + 16 * (v107 - 1) + 8 * (unsigned int)(v107 - 1) + 8);
          for ( n = v107 - 1; n >= 0; --n )
          {
            *v108 = *((_QWORD *)this + 12);
            *((_QWORD *)this + 12) = v108;
            v108 -= 3;
          }
        }
        v44 = (CConnectionInstance *)*((_QWORD *)this + 12);
        v153 = v44;
        v45 = *(_QWORD *)v44;
        if ( v44 )
          *((_QWORD *)v44 + 2) = v53;
        *((_QWORD *)this + 12) = v45;
        *((_QWORD *)v44 + 1) = 0LL;
        *(_QWORD *)v44 = v43;
        ++*((_QWORD *)this + 10);
        v46 = *((_QWORD *)this + 8);
        if ( v46 )
          *(_QWORD *)(v46 + 8) = v44;
        else
          *((_QWORD *)this + 9) = v44;
        *((_QWORD *)this + 8) = v44;
        v6 = v47;
LABEL_59:
        v153 = 0LL;
        v3 = 0LL;
      }
      LODWORD(v56) = *((_DWORD *)this + 28);
      if ( (((_DWORD)v56 - 1) & 0xFFFFFFFC) == 0 && (_DWORD)v56 != 2 )
      {
        v57 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        v153 = v57;
        if ( v57 )
        {
          v58 = *(_DWORD *)(v6 + 24);
          v59 = *((_QWORD *)this + 29);
          *((_QWORD *)v57 + 6) = 0LL;
          *(_QWORD *)v57 = 1LL;
          *((_QWORD *)v57 + 1) = 0LL;
          *((_DWORD *)v57 + 4) = v58;
          *((_QWORD *)v57 + 3) = 0LL;
          *((_QWORD *)v57 + 4) = v6;
          *((_DWORD *)v57 + 10) = 0;
          *((_QWORD *)v57 + 7) = 0LL;
          if ( *((_QWORD *)v57 + 6) != v59 )
          {
            if ( v59 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 8LL))(v59);
            v60 = *((_QWORD *)v57 + 6);
            if ( v60 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
            *((_QWORD *)v57 + 6) = v59;
          }
        }
        else
        {
          v57 = 0LL;
        }
        v153 = v57;
        if ( !v57 )
        {
          v144 = -2147024882;
          throw (long *)&v144;
        }
        v61 = (CConnectionInstance **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v62 = v61;
        if ( !v61 )
        {
          v146 = -2147024882;
          throw (long *)&v146;
        }
        *v61 = 0LL;
        v61[1] = 0LL;
        v61[2] = 0LL;
        v61[3] = 0LL;
        v61[4] = 0LL;
        *((_DWORD *)v61 + 10) = 10;
        v63 = *((unsigned int *)v61 + 10);
        if ( *((_DWORD *)v61 + 10) )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / v63 < 0x18 )
            goto LABEL_223;
          v64 = 24 * v63;
        }
        else
        {
          v64 = 0LL;
        }
        if ( (unsigned __int64)~v64 >= 8 )
        {
          v65 = (CConnectionInstance *)malloc(v64 + 8);
          if ( v65 )
          {
            *(_QWORD *)v65 = v62[3];
            v62[3] = v65;
            v66 = *((_DWORD *)v62 + 10);
            v67 = (CConnectionInstance *)((char *)v65 + 16 * (v66 - 1) + 8 * (unsigned int)(v66 - 1) + 8);
            for ( LODWORD(v56) = v66 - 1; (int)v56 >= 0; LODWORD(v56) = (_DWORD)v56 - 1 )
            {
              *(_QWORD *)v67 = v62[4];
              v62[4] = v67;
              v67 = (CConnectionInstance *)((char *)v67 - 24);
            }
            v68 = v62[4];
            v154 = v68;
            v69 = *(CConnectionInstance **)v68;
            if ( v68 )
              *((_QWORD *)v68 + 2) = v57;
            v62[4] = v69;
            *((_QWORD *)v68 + 1) = 0LL;
            *(_QWORD *)v68 = 0LL;
            v62[2] = (CConnectionInstance *)((char *)v62[2] + 1);
            if ( *v62 )
              *((_QWORD *)*v62 + 1) = v68;
            else
              v62[1] = v68;
            *v62 = v68;
            v70 = *((_QWORD *)this + 8);
            if ( !*((_QWORD *)this + 12) )
            {
              v132 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 11, *((unsigned int *)this + 26), 0x18uLL);
              if ( !v132 )
                ATL::AtlThrowImpl(-2147024882);
              v133 = *((_DWORD *)this + 26);
              v134 = (_QWORD *)((char *)v132 + 16 * (v133 - 1) + 8 * (unsigned int)(v133 - 1) + 8);
              for ( LODWORD(v56) = v133 - 1; (int)v56 >= 0; LODWORD(v56) = (_DWORD)v56 - 1 )
              {
                *v134 = *((_QWORD *)this + 12);
                *((_QWORD *)this + 12) = v134;
                v134 -= 3;
              }
            }
            v71 = (CConnectionInstance *)*((_QWORD *)this + 12);
            v153 = v71;
            v72 = *(_QWORD *)v71;
            if ( v71 )
              *((_QWORD *)v71 + 2) = v62;
            *((_QWORD *)this + 12) = v72;
            *((_QWORD *)v71 + 1) = 0LL;
            *(_QWORD *)v71 = v70;
            ++*((_QWORD *)this + 10);
            v73 = *((_QWORD *)this + 8);
            if ( v73 )
              *(_QWORD *)(v73 + 8) = v71;
            else
              *((_QWORD *)this + 9) = v71;
            *((_QWORD *)this + 8) = v71;
            v3 = 0LL;
            v153 = 0LL;
            if ( !*((_DWORD *)this + 3) && *((_BYTE *)this + 309) )
            {
              v110 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
              v153 = v110;
              if ( v110 )
              {
                v111 = *(_DWORD *)(v6 + 24);
                v112 = *((_QWORD *)this + 29);
                *((_QWORD *)v110 + 6) = 0LL;
                *(_QWORD *)v110 = 1LL;
                *((_QWORD *)v110 + 1) = 0LL;
                *((_DWORD *)v110 + 4) = v111;
                *((_QWORD *)v110 + 3) = 0LL;
                *((_QWORD *)v110 + 4) = v6;
                *((_DWORD *)v110 + 10) = 0;
                *((_QWORD *)v110 + 7) = 0LL;
                if ( *((_QWORD *)v110 + 6) != v112 )
                {
                  if ( v112 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v112 + 8LL))(v112);
                  v113 = *((_QWORD *)v110 + 6);
                  if ( v113 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v113 + 16LL))(v113);
                  *((_QWORD *)v110 + 6) = v112;
                }
              }
              else
              {
                v110 = 0LL;
              }
              v153 = v110;
              if ( !v110 )
              {
                v145 = -2147024882;
                throw (long *)&v145;
              }
              v114 = v62[1];
              if ( !v62[4] )
              {
                v126 = ATL::CAtlPlex::Create(v62 + 3, *((unsigned int *)v62 + 10), 0x18uLL);
                if ( !v126 )
                  ATL::AtlThrowImpl(-2147024882);
                v127 = *((_DWORD *)v62 + 10);
                v128 = (struct ATL::CAtlPlex *)((char *)v126 + 16 * (v127 - 1) + 8 * (unsigned int)(v127 - 1) + 8);
                for ( LODWORD(v56) = v127 - 1; (int)v56 >= 0; LODWORD(v56) = (_DWORD)v56 - 1 )
                {
                  *(_QWORD *)v128 = v62[4];
                  v62[4] = v128;
                  v128 = (CConnectionInstance *)((char *)v128 - 24);
                }
              }
              v115 = v62[4];
              v153 = v115;
              v116 = *(CConnectionInstance **)v115;
              if ( v115 )
                *((_QWORD *)v115 + 2) = v110;
              v62[4] = v116;
              *((_QWORD *)v115 + 1) = v114;
              *(_QWORD *)v115 = 0LL;
              v62[2] = (CConnectionInstance *)((char *)v62[2] + 1);
              v117 = (CConnectionInstance **)v62[1];
              if ( v117 )
                *v117 = v115;
              else
                *v62 = v115;
              v62[1] = v115;
              v3 = 0LL;
              v153 = 0LL;
            }
            goto LABEL_245;
          }
        }
LABEL_223:
        ATL::AtlThrowImpl(-2147024882);
      }
      goto LABEL_245;
    }
    if ( !*((_DWORD *)this + 2) )
      goto LABEL_61;
    v7 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v153 = v7;
    if ( v7 )
    {
      v8 = *(_DWORD *)(v6 + 24);
      v9 = *((_QWORD *)this + 29);
      *((_QWORD *)v7 + 6) = 0LL;
      *(_QWORD *)v7 = 0LL;
      *((_QWORD *)v7 + 1) = -1LL;
      *((_DWORD *)v7 + 4) = v8;
      *((_QWORD *)v7 + 3) = v6;
      *((_QWORD *)v7 + 4) = 0LL;
      *((_DWORD *)v7 + 10) = 0;
      *((_QWORD *)v7 + 7) = 0LL;
      if ( *((_QWORD *)v7 + 6) != v9 )
      {
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
        v10 = *((_QWORD *)v7 + 6);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        *((_QWORD *)v7 + 6) = v9;
      }
    }
    else
    {
      v7 = 0LL;
    }
    v153 = v7;
    if ( !v7 )
    {
      v139 = -2147024882;
      throw (long *)&v139;
    }
    v11 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( !v11 )
    {
      v141 = -2147024882;
      throw (long *)&v141;
    }
    *v11 = 0LL;
    v11[1] = 0LL;
    v11[2] = 0LL;
    v11[3] = 0LL;
    v11[4] = 0LL;
    *((_DWORD *)v11 + 10) = 10;
    v13 = malloc(0xF8uLL);
    if ( !v13 )
      ATL::AtlThrowImpl(-2147024882);
    *v13 = v12[3];
    v12[3] = v13;
    v14 = *((_DWORD *)v12 + 10);
    v15 = &v13[2 * (v14 - 1) + 1 + (unsigned int)(v14 - 1)];
    for ( ii = v14 - 1; ii >= 0; --ii )
    {
      *v15 = v12[4];
      v12[4] = v15;
      v15 -= 3;
    }
    v17 = (_QWORD *)v12[4];
    v155 = v17;
    v18 = *v17;
    if ( v17 )
      v17[2] = v7;
    v12[4] = v18;
    v17[1] = 0LL;
    *v17 = 0LL;
    ++v12[2];
    if ( *v12 )
      *(_QWORD *)(*v12 + 8LL) = v17;
    else
      v12[1] = v17;
    *v12 = v17;
    v19 = *((_QWORD *)this + 8);
    if ( *((_QWORD *)this + 12) )
    {
LABEL_29:
      v26 = (_QWORD *)*((_QWORD *)this + 12);
      v155 = v26;
      v27 = *v26;
      if ( v26 )
        v26[2] = v12;
      *((_QWORD *)this + 12) = v27;
      v26[1] = 0LL;
      *v26 = v19;
      ++*((_QWORD *)this + 10);
      v28 = *((_QWORD *)this + 8);
      if ( v28 )
        *(_QWORD *)(v28 + 8) = v26;
      else
        *((_QWORD *)this + 9) = v26;
      *((_QWORD *)this + 8) = v26;
      v29 = (char *)this + 240;
      v30 = *((_QWORD *)this + 30);
      if ( *((_QWORD *)this + 34) )
      {
LABEL_41:
        v37 = (CConnectionInstance *)*((_QWORD *)this + 34);
        v153 = v37;
        v38 = *(_QWORD *)v37;
        if ( v37 )
          *((_QWORD *)v37 + 2) = v7;
        *((_QWORD *)this + 34) = v38;
        *((_QWORD *)v37 + 1) = 0LL;
        *(_QWORD *)v37 = v30;
        ++*((_QWORD *)this + 32);
        if ( *(_QWORD *)v29 )
          *(_QWORD *)(*(_QWORD *)v29 + 8LL) = v37;
        else
          *((_QWORD *)this + 31) = v37;
        *(_QWORD *)v29 = v37;
        v3 = 0LL;
        v153 = 0LL;
        if ( !*((_DWORD *)this + 3) && *((_BYTE *)this + 308) )
        {
          v130 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
          v153 = v130;
          if ( v130 )
            v131 = CConnectionInstance::CConnectionInstance(
                     v130,
                     v129,
                     *((_QWORD *)this + 29),
                     -2LL,
                     *(_DWORD *)(v6 + 24),
                     v6);
          else
            v131 = 0LL;
          v153 = (CConnectionInstance *)v131;
          if ( !v131 )
          {
            v140 = -2147024882;
            throw (long *)&v140;
          }
          ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddTail(v12, &v153);
          ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(
            (char *)this + 240,
            &v153);
          goto LABEL_59;
        }
        goto LABEL_60;
      }
      v31 = *((unsigned int *)this + 70);
      if ( *((_DWORD *)this + 70) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v31 < 0x18 )
          goto LABEL_204;
        v32 = 24 * v31;
      }
      else
      {
        v32 = 0LL;
      }
      if ( (unsigned __int64)~v32 >= 8 )
      {
        v33 = malloc(v32 + 8);
        if ( v33 )
        {
          *v33 = *((_QWORD *)this + 33);
          *((_QWORD *)this + 33) = v33;
          v34 = *((_DWORD *)this + 70);
          v35 = &v33[2 * (v34 - 1) + 1 + (unsigned int)(v34 - 1)];
          for ( jj = v34 - 1; jj >= 0; --jj )
          {
            *v35 = *((_QWORD *)this + 34);
            *((_QWORD *)this + 34) = v35;
            v35 -= 3;
          }
          goto LABEL_41;
        }
      }
LABEL_204:
      ATL::AtlThrowImpl(-2147024882);
    }
    v20 = *((unsigned int *)this + 26);
    if ( *((_DWORD *)this + 26) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v20 < 0x18 )
        goto LABEL_201;
      v21 = 24 * v20;
    }
    else
    {
      v21 = 0LL;
    }
    if ( (unsigned __int64)~v21 >= 8 )
    {
      v22 = malloc(v21 + 8);
      if ( v22 )
      {
        *v22 = *((_QWORD *)this + 11);
        *((_QWORD *)this + 11) = v22;
        v23 = *((_DWORD *)this + 26);
        v24 = &v22[2 * (v23 - 1) + 1 + (unsigned int)(v23 - 1)];
        for ( kk = v23 - 1; kk >= 0; --kk )
        {
          *v24 = *((_QWORD *)this + 12);
          *((_QWORD *)this + 12) = v24;
          v24 -= 3;
        }
        goto LABEL_29;
      }
    }
LABEL_201:
    ATL::AtlThrowImpl(-2147024882);
  }
  catch ( ATL::CAtlException *v151 )
  {
    v56 = v135;
    v152 = *(_DWORD *)v151;
    v3 = v153;
    v2 = v147;
  }
  catch ( long *v150 )
  {
    v56 = v135;
    v152 = *(_DWORD *)v150;
    v3 = v153;
    v2 = v147;
  }
LABEL_245:
  if ( v152 < 0 )
  {
    if ( v3 )
      CConnectionInstance::`scalar deleting destructor'(v3, (unsigned int)v56);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        37LL,
        &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
        (unsigned int)v152);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateAPOConnectionList", 0xA91u, v152);
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v152;
}
