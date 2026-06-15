/*
 * XREFs of ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x14000A5F0
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140005F00 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009CB8 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140002F60 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140003800 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x14001D6E1 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x14002F76C (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 *     ??0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTION@@PEAVCProcessNode@@4@Z @ 0x14002F7E8 (--0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTI.c)
 *     ?AddTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x14002FB00 (-AddTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?AddHead@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x14002FB30 (-AddHead@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14003E38C (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::CreateAPOConnectionList(CPipeInstance *this)
{
  int v2; // r14d
  CConnectionInstance *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  CConnectionInstance *v7; // rsi
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // r15
  _QWORD *v13; // rax
  int v14; // edx
  _QWORD *v15; // rcx
  int v16; // r8d
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  int v23; // edx
  _QWORD *v24; // rcx
  int n; // edx
  _QWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  char *v29; // rbx
  __int64 v30; // r12
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  int v34; // edx
  _QWORD *v35; // rcx
  int k; // edx
  CConnectionInstance *v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // r8
  _QWORD *v40; // rax
  int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rsi
  CConnectionInstance *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r15
  CConnectionInstance *v48; // rsi
  int v49; // eax
  __int64 v50; // rbx
  __int64 v51; // rcx
  _QWORD *v52; // rax
  _QWORD *v53; // rbx
  _QWORD *v54; // rax
  int v55; // edx
  _BYTE *v56; // rdx
  _QWORD *v57; // rsi
  int v58; // eax
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 **v61; // rax
  __int64 **v62; // rbx
  __int64 *v63; // rax
  int v64; // edx
  __int64 *v65; // rcx
  __int64 *v66; // r8
  __int64 *v67; // rax
  __int64 v68; // rsi
  __int64 *v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  struct ATL::CAtlPlex *v73; // r8
  int v74; // edx
  _QWORD *v75; // rcx
  int m; // edx
  _QWORD **Head; // rax
  const struct CConnectionInstance *LoopbackConnection; // rax
  __int64 v79; // r15
  CConnectionInstance *v80; // rsi
  int v81; // eax
  __int64 v82; // rbx
  __int64 v83; // rcx
  struct ATL::CAtlPlex **v84; // rax
  struct ATL::CAtlPlex **v85; // rbx
  struct ATL::CAtlPlex *v86; // r8
  unsigned int v87; // edx
  struct ATL::CAtlPlex *v88; // rcx
  int v89; // r8d
  struct ATL::CAtlPlex *v90; // rdx
  struct ATL::CAtlPlex *v91; // rax
  __int64 v92; // rsi
  struct ATL::CAtlPlex *v93; // r8
  int v94; // edx
  _QWORD *v95; // rcx
  int i; // edx
  CConnectionInstance *v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rsi
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // r12
  CConnectionInstance *v104; // rsi
  int v105; // eax
  __int64 v106; // r15
  __int64 v107; // rcx
  struct ATL::CAtlPlex *v108; // r15
  CConnectionInstance *v109; // rcx
  struct ATL::CAtlPlex *v110; // rax
  CConnectionInstance **v111; // rax
  _QWORD *v112; // rsi
  int v113; // eax
  __int64 v114; // rdi
  __int64 v115; // rcx
  __int64 *v116; // rdi
  __int64 *v117; // rcx
  __int64 *v118; // rax
  __int64 **v119; // rax
  struct ATL::CAtlPlex *v120; // r8
  unsigned int v121; // edx
  struct ATL::CAtlPlex *v122; // rcx
  int j; // edx
  struct ATL::CAtlPlex *v124; // r8
  int v125; // edx
  __int64 *v126; // rcx
  __int64 v127; // rdx
  CConnectionInstance *v128; // rcx
  __int64 v129; // rax
  struct ATL::CAtlPlex *v130; // r8
  int v131; // edx
  _QWORD *v132; // rcx
  _BYTE v133[32]; // [rsp+0h] [rbp-C8h] BYREF
  int pExceptionObject; // [rsp+40h] [rbp-88h] BYREF
  int v135; // [rsp+44h] [rbp-84h] BYREF
  int v136; // [rsp+48h] [rbp-80h] BYREF
  int v137; // [rsp+4Ch] [rbp-7Ch] BYREF
  int v138; // [rsp+50h] [rbp-78h] BYREF
  int v139; // [rsp+54h] [rbp-74h] BYREF
  int v140; // [rsp+58h] [rbp-70h] BYREF
  int v141; // [rsp+5Ch] [rbp-6Ch] BYREF
  int v142; // [rsp+60h] [rbp-68h] BYREF
  int v143; // [rsp+64h] [rbp-64h] BYREF
  int v144; // [rsp+68h] [rbp-60h] BYREF
  struct ATL::CAtlPlex *v145; // [rsp+70h] [rbp-58h]
  __int64 v146; // [rsp+78h] [rbp-50h]
  long *v147; // [rsp+80h] [rbp-48h] BYREF
  ATL::CAtlException *v148; // [rsp+88h] [rbp-40h] BYREF
  __int64 v149; // [rsp+D0h] [rbp+8h]
  CConnectionInstance *v150; // [rsp+D8h] [rbp+10h] BYREF
  _QWORD *v151; // [rsp+E0h] [rbp+18h]
  __int64 v152; // [rsp+E8h] [rbp+20h]

  v146 = -2LL;
  v2 = 0;
  v152 = 0LL;
  v3 = 0LL;
  v150 = 0LL;
  try
  {
    v4 = *((_QWORD *)this + 3);
    if ( !v4 )
      ATL::AtlThrowImpl(-2147467259);
    v5 = *(_QWORD *)(v4 + 8);
    v149 = v5;
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
      v79 = *((_QWORD *)LoopbackConnection + 1);
      v80 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v150 = v80;
      if ( v80 )
      {
        v81 = *(_DWORD *)(v6 + 24);
        v82 = *((_QWORD *)this + 29);
        *((_QWORD *)v80 + 6) = 0LL;
        *(_QWORD *)v80 = 0LL;
        *((_QWORD *)v80 + 1) = v79;
        *((_DWORD *)v80 + 4) = v81;
        *((_QWORD *)v80 + 3) = v6;
        *((_QWORD *)v80 + 4) = 0LL;
        *((_DWORD *)v80 + 10) = 0;
        *((_QWORD *)v80 + 7) = 0LL;
        v83 = *((_QWORD *)v80 + 6);
        if ( v83 != v82 )
        {
          if ( v82 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 8LL))(v82);
            v83 = *((_QWORD *)v80 + 6);
          }
          if ( v83 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 16LL))(v83);
          *((_QWORD *)v80 + 6) = v82;
        }
      }
      else
      {
        v80 = 0LL;
      }
      v150 = v80;
      if ( !v80 )
      {
        pExceptionObject = -2147024882;
        throw (long *)&pExceptionObject;
      }
      v84 = (struct ATL::CAtlPlex **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      v85 = v84;
      if ( !v84 )
      {
        v136 = -2147024882;
        throw (long *)&v136;
      }
      *v84 = 0LL;
      v84[1] = 0LL;
      v84[2] = 0LL;
      v84[3] = 0LL;
      v84[4] = 0LL;
      *((_DWORD *)v84 + 10) = 10;
      v86 = ATL::CAtlPlex::Create(v84 + 3, 0xAuLL, 0x18uLL);
      if ( !v86 )
        ATL::AtlThrowImpl(-2147024882);
      v87 = *((_DWORD *)v85 + 10);
      v88 = (struct ATL::CAtlPlex *)((char *)v86 + 16 * v87 + 8 * v87 - 16);
      v89 = v87 - 1;
      if ( (int)(v87 - 1) < 0 )
      {
        v90 = v85[4];
      }
      else
      {
        do
        {
          v90 = v88;
          *(_QWORD *)v88 = v85[4];
          v85[4] = v88;
          v88 = (struct ATL::CAtlPlex *)((char *)v88 - 24);
          --v89;
        }
        while ( v89 >= 0 );
      }
      v145 = v90;
      v91 = *(struct ATL::CAtlPlex **)v90;
      *((_QWORD *)v90 + 2) = v80;
      v85[4] = v91;
      *((_QWORD *)v90 + 1) = 0LL;
      *(_QWORD *)v90 = 0LL;
      v85[2] = (struct ATL::CAtlPlex *)((char *)v85[2] + 1);
      if ( *v85 )
        *((_QWORD *)*v85 + 1) = v90;
      else
        v85[1] = v90;
      *v85 = v90;
      v92 = *((_QWORD *)this + 8);
      if ( !*((_QWORD *)this + 12) )
      {
        v93 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 11, *((unsigned int *)this + 26), 0x18uLL);
        if ( !v93 )
          ATL::AtlThrowImpl(-2147024882);
        v94 = *((_DWORD *)this + 26);
        v95 = (_QWORD *)((char *)v93 + 16 * (v94 - 1) + 8 * (unsigned int)(v94 - 1) + 8);
        for ( i = v94 - 1; i >= 0; --i )
        {
          *v95 = *((_QWORD *)this + 12);
          *((_QWORD *)this + 12) = v95;
          v95 -= 3;
        }
      }
      v97 = (CConnectionInstance *)*((_QWORD *)this + 12);
      v150 = v97;
      v98 = *(_QWORD *)v97;
      *((_QWORD *)v97 + 2) = v85;
      *((_QWORD *)this + 12) = v98;
      *((_QWORD *)v97 + 1) = 0LL;
      *(_QWORD *)v97 = v92;
      ++*((_QWORD *)this + 10);
      v99 = *((_QWORD *)this + 8);
      if ( v99 )
        *(_QWORD *)(v99 + 8) = v97;
      else
        *((_QWORD *)this + 9) = v97;
      *((_QWORD *)this + 8) = v97;
      v3 = 0LL;
      v150 = 0LL;
      if ( !*((_DWORD *)this + 3) && *((_BYTE *)this + 308) )
      {
        v100 = *(_QWORD *)this;
        if ( *(_QWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(*(_QWORD *)this + 64LL))
                       + 16LL) == 2LL )
        {
          v101 = *(_QWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(v100 + 64))
                           + 8LL);
          if ( !v101 )
            ATL::AtlThrowImpl(-2147467259);
          v102 = *(_QWORD *)(v101 + 16);
        }
        else
        {
          v102 = 0LL;
        }
        v103 = *(_QWORD *)(v102 + 8);
        v104 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        v150 = v104;
        if ( v104 )
        {
          v105 = *(_DWORD *)(v6 + 24);
          v106 = *((_QWORD *)this + 29);
          *((_QWORD *)v104 + 6) = 0LL;
          *(_QWORD *)v104 = 0LL;
          *((_QWORD *)v104 + 1) = v103;
          *((_DWORD *)v104 + 4) = v105;
          *((_QWORD *)v104 + 3) = v6;
          *((_QWORD *)v104 + 4) = 0LL;
          *((_DWORD *)v104 + 10) = 0;
          *((_QWORD *)v104 + 7) = 0LL;
          v107 = *((_QWORD *)v104 + 6);
          if ( v107 != v106 )
          {
            if ( v106 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v106 + 8LL))(v106);
              v107 = *((_QWORD *)v104 + 6);
            }
            if ( v107 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 16LL))(v107);
            *((_QWORD *)v104 + 6) = v106;
          }
        }
        else
        {
          v104 = 0LL;
        }
        v150 = v104;
        if ( !v104 )
        {
          v135 = -2147024882;
          throw (long *)&v135;
        }
        v108 = v85[1];
        if ( !v85[4] )
        {
          v120 = ATL::CAtlPlex::Create(v85 + 3, *((unsigned int *)v85 + 10), 0x18uLL);
          if ( !v120 )
            ATL::AtlThrowImpl(-2147024882);
          v121 = *((_DWORD *)v85 + 10);
          v122 = (struct ATL::CAtlPlex *)((char *)v120 + 16 * v121 + 8 * v121 - 16);
          for ( j = v121 - 1; j >= 0; --j )
          {
            *(_QWORD *)v122 = v85[4];
            v85[4] = v122;
            v122 = (struct ATL::CAtlPlex *)((char *)v122 - 24);
          }
        }
        v109 = v85[4];
        v150 = v109;
        v110 = *(struct ATL::CAtlPlex **)v109;
        *((_QWORD *)v109 + 2) = v104;
        v85[4] = v110;
        *((_QWORD *)v109 + 1) = v108;
        *(_QWORD *)v109 = 0LL;
        v85[2] = (struct ATL::CAtlPlex *)((char *)v85[2] + 1);
        v111 = (CConnectionInstance **)v85[1];
        if ( v111 )
          *v111 = v109;
        else
          *v85 = v109;
        v85[1] = v109;
        goto LABEL_49;
      }
      goto LABEL_50;
    }
    if ( !*((_DWORD *)this + 2) )
      goto LABEL_51;
    v7 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v150 = v7;
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
      v10 = *((_QWORD *)v7 + 6);
      if ( v10 != v9 )
      {
        if ( v9 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
          v10 = *((_QWORD *)v7 + 6);
        }
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        *((_QWORD *)v7 + 6) = v9;
      }
    }
    else
    {
      v7 = 0LL;
    }
    v150 = v7;
    if ( !v7 )
    {
      v137 = -2147024882;
      throw (long *)&v137;
    }
    v11 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( !v11 )
    {
      v139 = -2147024882;
      throw (long *)&v139;
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
    v16 = v14 - 1;
    if ( v14 - 1 < 0 )
    {
      v17 = (_QWORD *)v12[4];
    }
    else
    {
      do
      {
        v17 = v15;
        *v15 = v12[4];
        v12[4] = v15;
        v15 -= 3;
        --v16;
      }
      while ( v16 >= 0 );
    }
    v151 = v17;
    v18 = *v17;
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
LABEL_27:
      v26 = (_QWORD *)*((_QWORD *)this + 12);
      v151 = v26;
      v27 = *v26;
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
        goto LABEL_37;
      v31 = *((unsigned int *)this + 70);
      if ( *((_DWORD *)this + 70) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v31 < 0x18 )
          goto LABEL_176;
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
          for ( k = v34 - 1; k >= 0; --k )
          {
            *v35 = *((_QWORD *)this + 34);
            *((_QWORD *)this + 34) = v35;
            v35 -= 3;
          }
LABEL_37:
          v37 = (CConnectionInstance *)*((_QWORD *)this + 34);
          v150 = v37;
          v38 = *(_QWORD *)v37;
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
          v150 = 0LL;
          if ( !*((_DWORD *)this + 3) && *((_BYTE *)this + 308) )
          {
            v128 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
            v150 = v128;
            if ( v128 )
              v129 = CConnectionInstance::CConnectionInstance(
                       v128,
                       v127,
                       *((_QWORD *)this + 29),
                       -2LL,
                       *(_DWORD *)(v6 + 24),
                       v6);
            else
              v129 = 0LL;
            v150 = (CConnectionInstance *)v129;
            if ( !v129 )
            {
              v138 = -2147024882;
              throw (long *)&v138;
            }
            ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddTail(v12, &v150);
            ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(
              (char *)this + 240,
              &v150);
            goto LABEL_49;
          }
LABEL_50:
          while ( 1 )
          {
            v5 = v149;
LABEL_51:
            if ( !v5 )
              break;
            v47 = *(_QWORD *)(v5 + 16);
            v149 = *(_QWORD *)(v5 + 8);
            v48 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
            v150 = v48;
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
              v51 = *((_QWORD *)v48 + 6);
              if ( v51 != v50 )
              {
                if ( v50 )
                {
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 8LL))(v50);
                  v51 = *((_QWORD *)v48 + 6);
                }
                if ( v51 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
                *((_QWORD *)v48 + 6) = v50;
              }
            }
            else
            {
              v48 = 0LL;
            }
            v150 = v48;
            if ( !v48 )
            {
              v140 = -2147024882;
              throw (long *)&v140;
            }
            v52 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
            v53 = v52;
            if ( !v52 )
            {
              v141 = -2147024882;
              throw (long *)&v141;
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
            v40 = &v54[2 * (v55 - 1) + 1 + (unsigned int)(v55 - 1)];
            v41 = v55 - 1;
            if ( v41 >= 0 )
            {
              do
              {
                v39 = v40;
                *v40 = v53[4];
                v53[4] = v40;
                v40 -= 3;
                --v41;
              }
              while ( v41 >= 0 );
            }
            else
            {
              v39 = (_QWORD *)v53[4];
            }
            v151 = v39;
            v42 = *v39;
            v39[2] = v48;
            v53[4] = v42;
            v39[1] = 0LL;
            *v39 = 0LL;
            ++v53[2];
            if ( *v53 )
              *(_QWORD *)(*v53 + 8LL) = v39;
            else
              v53[1] = v39;
            *v53 = v39;
            v43 = *((_QWORD *)this + 8);
            if ( !*((_QWORD *)this + 12) )
            {
              v73 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 11, *((unsigned int *)this + 26), 0x18uLL);
              if ( !v73 )
                ATL::AtlThrowImpl(-2147024882);
              v74 = *((_DWORD *)this + 26);
              v75 = (_QWORD *)((char *)v73 + 16 * (v74 - 1) + 8 * (unsigned int)(v74 - 1) + 8);
              for ( m = v74 - 1; m >= 0; --m )
              {
                *v75 = *((_QWORD *)this + 12);
                *((_QWORD *)this + 12) = v75;
                v75 -= 3;
              }
            }
            v44 = (CConnectionInstance *)*((_QWORD *)this + 12);
            v150 = v44;
            v45 = *(_QWORD *)v44;
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
LABEL_49:
            v3 = 0LL;
            v150 = 0LL;
          }
          LODWORD(v56) = *((_DWORD *)this + 28);
          if ( (((_DWORD)v56 - 1) & 0xFFFFFFFC) == 0 && (_DWORD)v56 != 2 )
          {
            v57 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
            if ( v57 )
            {
              v58 = *(_DWORD *)(v6 + 24);
              v59 = *((_QWORD *)this + 29);
              v57[6] = 0LL;
              *v57 = 1LL;
              v57[1] = 0LL;
              *((_DWORD *)v57 + 4) = v58;
              v57[3] = 0LL;
              v57[4] = v6;
              *((_DWORD *)v57 + 10) = 0;
              v57[7] = 0LL;
              v60 = v57[6];
              if ( v60 != v59 )
              {
                if ( v59 )
                {
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 8LL))(v59);
                  v60 = v57[6];
                }
                if ( v60 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
                v57[6] = v59;
              }
            }
            else
            {
              v57 = 0LL;
            }
            v150 = (CConnectionInstance *)v57;
            if ( !v57 )
            {
              v142 = -2147024882;
              throw (long *)&v142;
            }
            v61 = (__int64 **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
            v62 = v61;
            if ( !v61 )
            {
              v144 = -2147024882;
              throw (long *)&v144;
            }
            *v61 = 0LL;
            v61[1] = 0LL;
            v61[2] = 0LL;
            v61[3] = 0LL;
            v61[4] = 0LL;
            *((_DWORD *)v61 + 10) = 10;
            v63 = (__int64 *)malloc(0xF8uLL);
            if ( !v63 )
              ATL::AtlThrowImpl(-2147024882);
            *v63 = (__int64)v62[3];
            v62[3] = v63;
            v64 = *((_DWORD *)v62 + 10);
            v65 = &v63[2 * (v64 - 1) + 1 + (unsigned int)(v64 - 1)];
            LODWORD(v56) = v64 - 1;
            if ( (int)v56 < 0 )
            {
              v66 = v62[4];
            }
            else
            {
              do
              {
                v66 = v65;
                *v65 = (__int64)v62[4];
                v62[4] = v65;
                v65 -= 3;
                LODWORD(v56) = (_DWORD)v56 - 1;
              }
              while ( (int)v56 >= 0 );
            }
            v67 = (__int64 *)*v66;
            v66[2] = (__int64)v57;
            v62[4] = v67;
            v66[1] = 0LL;
            *v66 = 0LL;
            v62[2] = (__int64 *)((char *)v62[2] + 1);
            if ( *v62 )
              (*v62)[1] = (__int64)v66;
            else
              v62[1] = v66;
            *v62 = v66;
            v68 = *((_QWORD *)this + 8);
            if ( !*((_QWORD *)this + 12) )
            {
              v130 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 11, *((unsigned int *)this + 26), 0x18uLL);
              if ( !v130 )
                ATL::AtlThrowImpl(-2147024882);
              v131 = *((_DWORD *)this + 26);
              v132 = (_QWORD *)((char *)v130 + 16 * (v131 - 1) + 8 * (unsigned int)(v131 - 1) + 8);
              for ( LODWORD(v56) = v131 - 1; (int)v56 >= 0; LODWORD(v56) = (_DWORD)v56 - 1 )
              {
                *v132 = *((_QWORD *)this + 12);
                *((_QWORD *)this + 12) = v132;
                v132 -= 3;
              }
            }
            v69 = (__int64 *)*((_QWORD *)this + 12);
            v70 = *v69;
            v69[2] = (__int64)v62;
            *((_QWORD *)this + 12) = v70;
            v69[1] = 0LL;
            *v69 = v68;
            ++*((_QWORD *)this + 10);
            v71 = *((_QWORD *)this + 8);
            if ( v71 )
              *(_QWORD *)(v71 + 8) = v69;
            else
              *((_QWORD *)this + 9) = v69;
            *((_QWORD *)this + 8) = v69;
            v3 = 0LL;
            v150 = 0LL;
            if ( !*((_DWORD *)this + 3) && *((_BYTE *)this + 309) )
            {
              v112 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
              if ( v112 )
              {
                v113 = *(_DWORD *)(v6 + 24);
                v114 = *((_QWORD *)this + 29);
                v112[6] = 0LL;
                *v112 = 1LL;
                v112[1] = 0LL;
                *((_DWORD *)v112 + 4) = v113;
                v112[3] = 0LL;
                v112[4] = v6;
                *((_DWORD *)v112 + 10) = 0;
                v112[7] = 0LL;
                v115 = v112[6];
                if ( v115 != v114 )
                {
                  if ( v114 )
                  {
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v114 + 8LL))(v114);
                    v115 = v112[6];
                  }
                  if ( v115 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v115 + 16LL))(v115);
                  v112[6] = v114;
                }
              }
              else
              {
                v112 = 0LL;
              }
              v150 = (CConnectionInstance *)v112;
              if ( !v112 )
              {
                v143 = -2147024882;
                throw (long *)&v143;
              }
              v116 = v62[1];
              if ( !v62[4] )
              {
                v124 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)v62 + 3, *((unsigned int *)v62 + 10), 0x18uLL);
                if ( !v124 )
                  ATL::AtlThrowImpl(-2147024882);
                v125 = *((_DWORD *)v62 + 10);
                v126 = (__int64 *)((char *)v124 + 16 * (v125 - 1) + 8 * (unsigned int)(v125 - 1) + 8);
                for ( LODWORD(v56) = v125 - 1; (int)v56 >= 0; LODWORD(v56) = (_DWORD)v56 - 1 )
                {
                  *v126 = (__int64)v62[4];
                  v62[4] = v126;
                  v126 -= 3;
                }
              }
              v117 = v62[4];
              v118 = (__int64 *)*v117;
              v117[2] = (__int64)v112;
              v62[4] = v118;
              v117[1] = (__int64)v116;
              *v117 = 0LL;
              v62[2] = (__int64 *)((char *)v62[2] + 1);
              v119 = (__int64 **)v62[1];
              if ( v119 )
                *v119 = v117;
              else
                *v62 = v117;
              v62[1] = v117;
              v3 = 0LL;
              v150 = 0LL;
            }
          }
          goto LABEL_217;
        }
      }
LABEL_176:
      ATL::AtlThrowImpl(-2147024882);
    }
    v20 = *((unsigned int *)this + 26);
    if ( *((_DWORD *)this + 26) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v20 < 0x18 )
        goto LABEL_173;
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
        for ( n = v23 - 1; n >= 0; --n )
        {
          *v24 = *((_QWORD *)this + 12);
          *((_QWORD *)this + 12) = v24;
          v24 -= 3;
        }
        goto LABEL_27;
      }
    }
LABEL_173:
    ATL::AtlThrowImpl(-2147024882);
  }
  catch ( ATL::CAtlException *v148 )
  {
    v56 = v133;
    v2 = *(_DWORD *)v148;
    v3 = v150;
  }
  catch ( long *v147 )
  {
    v56 = v133;
    v2 = *(_DWORD *)v147;
    v3 = v150;
  }
LABEL_217:
  if ( v2 < 0 )
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
        &WPP_0100469152753b0964101f667eb0634c_Traceguids,
        (unsigned int)v2);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateAPOConnectionList", 0xA91u, v2);
  }
  return (unsigned int)v2;
}
