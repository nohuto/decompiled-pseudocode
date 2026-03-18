/*
 * XREFs of ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01D1550
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01D0C74 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0043D18 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0044998 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0044A68 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01D402C (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01D42F4 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DC918 (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DCA60 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C01DCF34 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DD290 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DE110 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C01E446C (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagSummary(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  DMMVIDEOPRESENTTARGETSET *v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  _DWORD *v49; // rcx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  _QWORD *v55; // rsi
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // rcx
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // rsi
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rcx
  _QWORD *v77; // rsi
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // rcx
  _QWORD *v88; // rsi
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rax
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rcx
  unsigned __int64 v105; // rsi
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  void *v111; // r15
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rax
  __int64 v117; // rax
  int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rsi
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rax
  size_t v125; // r12
  unsigned __int64 v126; // rsi
  int v127; // eax
  __int64 v128; // rdx
  __int64 v129; // rcx
  _QWORD *v130; // rax
  char *v131; // rbx
  char *v132; // rcx
  char *v133; // rbx
  char *v134; // rbx
  char *v135; // rbx
  char *v136; // rbx
  char *v137; // rbx
  char *v138; // rbx
  char *v139; // rbx
  __int64 v140; // rdx
  __int64 v141; // rcx
  _QWORD v142[4]; // [rsp+28h] [rbp-E0h] BYREF
  char *v143; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v144; // [rsp+50h] [rbp-B8h]
  __int64 v145; // [rsp+58h] [rbp-B0h]
  _QWORD v146[4]; // [rsp+60h] [rbp-A8h] BYREF
  void *v147; // [rsp+80h] [rbp-88h]
  size_t v148; // [rsp+88h] [rbp-80h]
  int v149; // [rsp+90h] [rbp-78h]
  void **v150; // [rsp+98h] [rbp-70h] BYREF
  __int128 v151; // [rsp+A0h] [rbp-68h]
  void **v152; // [rsp+B0h] [rbp-58h]
  void *v153; // [rsp+B8h] [rbp-50h]
  size_t v154; // [rsp+C0h] [rbp-48h]
  int v155; // [rsp+C8h] [rbp-40h]
  void **v156; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v157; // [rsp+D8h] [rbp-30h]
  void **v158; // [rsp+E8h] [rbp-20h]
  void *v159; // [rsp+F0h] [rbp-18h]
  size_t v160; // [rsp+F8h] [rbp-10h]
  int v161; // [rsp+100h] [rbp-8h]
  void **v162; // [rsp+108h] [rbp+0h] BYREF
  __int128 v163; // [rsp+110h] [rbp+8h]
  void **v164; // [rsp+120h] [rbp+18h]
  void *v165; // [rsp+128h] [rbp+20h]
  size_t v166; // [rsp+130h] [rbp+28h]
  int v167; // [rsp+138h] [rbp+30h]
  void **v168; // [rsp+140h] [rbp+38h] BYREF
  __int128 v169; // [rsp+148h] [rbp+40h]
  void **v170; // [rsp+158h] [rbp+50h]
  void *v171; // [rsp+160h] [rbp+58h]
  size_t v172; // [rsp+168h] [rbp+60h]
  int v173; // [rsp+170h] [rbp+68h]
  void **v174; // [rsp+178h] [rbp+70h] BYREF
  __int128 v175; // [rsp+180h] [rbp+78h]
  void **v176; // [rsp+190h] [rbp+88h]
  void *v177; // [rsp+198h] [rbp+90h]
  size_t v178; // [rsp+1A0h] [rbp+98h]
  int v179; // [rsp+1A8h] [rbp+A0h]
  void **v180; // [rsp+1B0h] [rbp+A8h] BYREF
  __int128 v181; // [rsp+1B8h] [rbp+B0h]
  void **v182; // [rsp+1C8h] [rbp+C0h]
  void *Src; // [rsp+1D0h] [rbp+C8h]
  size_t Size; // [rsp+1D8h] [rbp+D0h]
  int v185; // [rsp+1E0h] [rbp+D8h]
  void **v186; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v187; // [rsp+1F0h] [rbp+E8h]
  void **v188; // [rsp+200h] [rbp+F8h]
  void *v189; // [rsp+208h] [rbp+100h]
  size_t v190; // [rsp+210h] [rbp+108h]
  int v191; // [rsp+218h] [rbp+110h]
  unsigned __int64 v192; // [rsp+260h] [rbp+158h] BYREF

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdError(a1, 0LL);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a2 + 32) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = a1[9];
  v180 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  Src = 0LL;
  v182 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  Size = 0LL;
  v181 = 0LL;
  v185 = 3;
  v10 = DMMVIDEOPRESENTSOURCESET::Serialize(v9, &v180);
  v13 = v10;
  if ( v10 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v12, v11);
    v18 = a1[9];
    v19 = v14;
    *(_QWORD *)(v14 + 24) = v18;
    if ( !a1[1] )
    {
      v20 = WdLogNewEntry5_WdAssertion(v18, v15, v16, v17);
      WdLogEvent5_WdAssertion(v20);
    }
    *(_QWORD *)(v19 + 32) = *(_QWORD *)(a1[1] + 16LL);
    *(_QWORD *)(v19 + 40) = v13;
    WdLogEvent5_WdError(v19);
    goto LABEL_68;
  }
  v21 = (DMMVIDEOPRESENTTARGETSET *)a1[10];
  v174 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v177 = 0LL;
  v176 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v175 = 0LL;
  v178 = 0LL;
  v179 = 3;
  v22 = DMMVIDEOPRESENTTARGETSET::Serialize(v21);
  v13 = v22;
  if ( v22 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v24, v23);
    v31 = a1[10];
    v32 = v27;
    *(_QWORD *)(v27 + 24) = v31;
    if ( !a1[1] )
    {
      v33 = WdLogNewEntry5_WdAssertion(v31, v28, v29, v30);
      WdLogEvent5_WdAssertion(v33);
    }
    *(_QWORD *)(v32 + 32) = *(_QWORD *)(a1[1] + 16LL);
    *(_QWORD *)(v32 + 40) = v13;
    WdLogEvent5_WdError(v32);
    goto LABEL_67;
  }
  v34 = a1[11];
  v146[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v146[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v147 = 0LL;
  v148 = 0LL;
  v149 = 3;
  *(_OWORD *)&v146[1] = 0LL;
  if ( v34 )
  {
    v35 = DMMVIDPN::Serialize(v34, v146);
    v13 = v35;
    if ( v35 < 0 )
    {
      v38 = WdLogNewEntry5_WdError(v37, v36);
      v42 = a1[11];
      v43 = v38;
      *(_QWORD *)(v38 + 24) = v42;
      if ( !a1[1] )
      {
        v44 = WdLogNewEntry5_WdAssertion(v42, v39, v40, v41);
        WdLogEvent5_WdAssertion(v44);
      }
      v45 = v43;
      *(_QWORD *)(v43 + 32) = *(_QWORD *)(a1[1] + 16LL);
      *(_QWORD *)(v43 + 40) = v13;
      goto LABEL_20;
    }
    goto LABEL_22;
  }
  v46 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)v146, 0xCuLL, v25, v26);
  v13 = v46;
  if ( v46 >= 0 )
  {
    v49 = v147;
    *(_QWORD *)v147 = qword_1C006F250;
    v49[2] = dword_1C006F258;
LABEL_22:
    v171 = 0LL;
    v168 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v172 = 0LL;
    v170 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v173 = 3;
    v169 = 0LL;
    v50 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(a1 + 19, &v168);
    v13 = v50;
    if ( v50 < 0 )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51);
      v55[3] = a1 + 19;
      if ( !a1[1] )
      {
        v58 = WdLogNewEntry5_WdAssertion(v54, v53, v56, v57);
        WdLogEvent5_WdAssertion(v58);
      }
      v55[4] = *(_QWORD *)(a1[1] + 16LL);
      v55[5] = v13;
      WdLogEvent5_WdError(v55);
      goto LABEL_65;
    }
    v59 = a1[10];
    v162 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v165 = 0LL;
    v164 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v163 = 0LL;
    v166 = 0LL;
    v167 = 3;
    v60 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v59, &v162);
    v13 = v60;
    if ( v60 < 0 )
    {
      v63 = WdLogNewEntry5_WdError(v62, v61);
      v67 = a1[10];
      v68 = v63;
      *(_QWORD *)(v63 + 24) = v67;
      if ( !a1[1] )
      {
        v69 = WdLogNewEntry5_WdAssertion(v67, v64, v65, v66);
        WdLogEvent5_WdAssertion(v69);
      }
      *(_QWORD *)(v68 + 32) = *(_QWORD *)(a1[1] + 16LL);
      *(_QWORD *)(v68 + 40) = v13;
      WdLogEvent5_WdError(v68);
      goto LABEL_64;
    }
    v159 = 0LL;
    v156 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v160 = 0LL;
    v158 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v161 = 3;
    v157 = 0LL;
    v70 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(a1 + 35, &v156);
    v13 = v70;
    if ( v70 < 0 )
    {
      v77 = (_QWORD *)WdLogNewEntry5_WdError(v72, v71);
      v77[3] = a1 + 35;
      if ( !a1[1] )
      {
        v80 = WdLogNewEntry5_WdAssertion(v76, v75, v78, v79);
        WdLogEvent5_WdAssertion(v80);
      }
      v77[4] = *(_QWORD *)(a1[1] + 16LL);
      v77[5] = v13;
      WdLogEvent5_WdError(v77);
      goto LABEL_63;
    }
    v153 = 0LL;
    v150 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v154 = 0LL;
    v152 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v155 = 3;
    v151 = 0LL;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v192, (__int64)a1, v73, v74);
    v81 = DMMVIDPN::SerializeVidPns(a1 + 27, &v150);
    v13 = v81;
    if ( v81 < 0 )
    {
      v88 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
      v88[3] = a1 + 27;
      if ( !a1[1] )
      {
        v91 = WdLogNewEntry5_WdAssertion(v87, v86, v89, v90);
        WdLogEvent5_WdAssertion(v91);
      }
      v88[4] = *(_QWORD *)(a1[1] + 16LL);
      v88[5] = v13;
      WdLogEvent5_WdError(v88);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v192 + 40), v92, v93, v94);
      goto LABEL_62;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v192 + 40), v82, v84, v85);
    v186 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v188 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v187 = 0LL;
    v189 = 0LL;
    v190 = 0LL;
    v191 = 3;
    v192 = 0LL;
    if ( !a1[1] )
    {
      v99 = WdLogNewEntry5_WdAssertion(v96, v95, v97, v98);
      WdLogEvent5_WdAssertion(v99);
    }
    v100 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(a1[1] + 16LL), &v192, 0LL);
    v104 = 0x80000000LL;
    v13 = v100;
    if ( (int)(v100 + 0x80000000) >= 0 && v100 != -1073741789 )
      goto LABEL_51;
    v105 = v192;
    if ( !v192 )
    {
      v106 = WdLogNewEntry5_WdAssertion(0x80000000LL, v101, v102, v103);
      WdLogEvent5_WdAssertion(v106);
    }
    DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v186, v105, v102, v103);
    v111 = v189;
    if ( !v189 )
    {
      v13 = WdLogNewEntry5_WdError(v108, v107);
      *(_QWORD *)(v13 + 24) = v105;
      if ( !a1[1] )
      {
        v116 = WdLogNewEntry5_WdAssertion(v113, v112, v114, v115);
        WdLogEvent5_WdAssertion(v116);
      }
      *(_QWORD *)(v13 + 32) = *(_QWORD *)(a1[1] + 16LL);
      WdLogEvent5_WdError(v13);
      LODWORD(v13) = -1073741801;
      goto LABEL_61;
    }
    if ( !a1[1] )
    {
      v117 = WdLogNewEntry5_WdAssertion(v108, v107, v109, v110);
      WdLogEvent5_WdAssertion(v117);
    }
    v118 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(a1[1] + 16LL), &v192, v111);
    v13 = v118;
    if ( v118 < 0 )
    {
LABEL_51:
      v121 = WdLogNewEntry5_WdError(v104, v101);
      if ( !a1[1] )
      {
        v124 = WdLogNewEntry5_WdAssertion(v120, v119, v122, v123);
        WdLogEvent5_WdAssertion(v124);
      }
      *(_QWORD *)(v121 + 24) = *(_QWORD *)(a1[1] + 16LL);
      *(_QWORD *)(v121 + 32) = v13;
      WdLogEvent5_WdError(v121);
      goto LABEL_61;
    }
    LODWORD(v145) = 3;
    v125 = v190;
    v142[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v126 = v178 + v148 + v172 + v166 + v160 + v190 + v154 + Size + 40;
    v142[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v143 = 0LL;
    v144 = 0LL;
    *(_OWORD *)&v142[1] = 0LL;
    v127 = DMM::AutoBuffer<unsigned char>::Initialize((__int64)v142, v126, 0LL, 1LL);
    v13 = v127;
    if ( v127 >= 0 )
    {
      v13 = (__int64)v143;
      *((_DWORD *)v143 + 1) = v144;
      *(_WORD *)v13 = 20480;
      v131 = v143 + 40;
      v132 = v143 + 40;
      *(_DWORD *)(v13 + 8) = 40;
      memmove(v132, Src, Size);
      v133 = &v131[Size];
      *(_DWORD *)(v13 + 12) = (_DWORD)v133 - (_DWORD)v143;
      memmove(v133, v177, v178);
      v134 = &v133[v178];
      *(_DWORD *)(v13 + 16) = (_DWORD)v134 - (_DWORD)v143;
      memmove(v134, v147, v148);
      v135 = &v134[v148];
      *(_DWORD *)(v13 + 20) = (_DWORD)v135 - (_DWORD)v143;
      memmove(v135, v171, v172);
      v136 = &v135[v172];
      *(_DWORD *)(v13 + 24) = (_DWORD)v136 - (_DWORD)v143;
      memmove(v136, v165, v166);
      v137 = &v136[v166];
      *(_DWORD *)(v13 + 28) = (_DWORD)v137 - (_DWORD)v143;
      memmove(v137, v159, v160);
      v138 = &v137[v160];
      *(_DWORD *)(v13 + 32) = (_DWORD)v138 - (_DWORD)v143;
      memmove(v138, v153, v154);
      v139 = &v138[v154];
      *(_DWORD *)(v13 + 36) = (_DWORD)v139 - (_DWORD)v143;
      memmove(v139, v111, v125);
      LODWORD(v13) = DMM::AutoBuffer<unsigned char>::Initialize(a2, v144, v143, (unsigned int)v145);
      if ( (int)v13 >= 0 )
      {
        LODWORD(v13) = 0;
        goto LABEL_60;
      }
      v130 = (_QWORD *)WdLogNewEntry5_WdError(v141, v140);
      v130[3] = a2;
      v130[4] = v142;
    }
    else
    {
      v130 = (_QWORD *)WdLogNewEntry5_WdError(v129, v128);
      v130[3] = v126;
      v130[4] = a1;
      v130[5] = v13;
    }
    WdLogEvent5_WdError(v130);
LABEL_60:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v142);
LABEL_61:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v186);
LABEL_62:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v150);
LABEL_63:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v156);
LABEL_64:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v162);
LABEL_65:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v168);
    goto LABEL_66;
  }
  v45 = WdLogNewEntry5_WdError(v48, v47);
  *(_QWORD *)(v45 + 24) = 12LL;
  *(_QWORD *)(v45 + 32) = v13;
LABEL_20:
  WdLogEvent5_WdError(v45);
LABEL_66:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v146);
LABEL_67:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v174);
LABEL_68:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v180);
  return (unsigned int)v13;
}
