/*
 * XREFs of ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01EAA78
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01EA0A8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C003497C (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0035600 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00356D0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01EF704 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01EF9C8 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01F5248 (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01F5390 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C01F5934 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01F5C8C (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01F6B30 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C01FEA34 (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagSummary(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  DMMVIDEOPRESENTTARGETSET *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  _DWORD *v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rcx
  _QWORD *v48; // rsi
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rcx
  _QWORD *v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rcx
  unsigned __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rcx
  void *v62; // r15
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rsi
  __int64 v69; // rax
  size_t v70; // r12
  unsigned __int64 v71; // rsi
  int v72; // eax
  __int64 v73; // rcx
  _QWORD *v74; // rax
  char *v75; // rbx
  char *v76; // rcx
  char *v77; // rbx
  char *v78; // rbx
  char *v79; // rbx
  char *v80; // rbx
  char *v81; // rbx
  char *v82; // rbx
  char *v83; // rbx
  __int64 v84; // rcx
  _QWORD v85[4]; // [rsp+28h] [rbp-E0h] BYREF
  char *v86; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v87; // [rsp+50h] [rbp-B8h]
  __int64 v88; // [rsp+58h] [rbp-B0h]
  _QWORD v89[4]; // [rsp+60h] [rbp-A8h] BYREF
  void *v90; // [rsp+80h] [rbp-88h]
  size_t v91; // [rsp+88h] [rbp-80h]
  int v92; // [rsp+90h] [rbp-78h]
  void **v93; // [rsp+98h] [rbp-70h] BYREF
  __int128 v94; // [rsp+A0h] [rbp-68h]
  void **v95; // [rsp+B0h] [rbp-58h]
  void *v96; // [rsp+B8h] [rbp-50h]
  size_t v97; // [rsp+C0h] [rbp-48h]
  int v98; // [rsp+C8h] [rbp-40h]
  void **v99; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v100; // [rsp+D8h] [rbp-30h]
  void **v101; // [rsp+E8h] [rbp-20h]
  void *v102; // [rsp+F0h] [rbp-18h]
  size_t v103; // [rsp+F8h] [rbp-10h]
  int v104; // [rsp+100h] [rbp-8h]
  void **v105; // [rsp+108h] [rbp+0h] BYREF
  __int128 v106; // [rsp+110h] [rbp+8h]
  void **v107; // [rsp+120h] [rbp+18h]
  void *v108; // [rsp+128h] [rbp+20h]
  size_t v109; // [rsp+130h] [rbp+28h]
  int v110; // [rsp+138h] [rbp+30h]
  void **v111; // [rsp+140h] [rbp+38h] BYREF
  __int128 v112; // [rsp+148h] [rbp+40h]
  void **v113; // [rsp+158h] [rbp+50h]
  void *v114; // [rsp+160h] [rbp+58h]
  size_t v115; // [rsp+168h] [rbp+60h]
  int v116; // [rsp+170h] [rbp+68h]
  void **v117; // [rsp+178h] [rbp+70h] BYREF
  __int128 v118; // [rsp+180h] [rbp+78h]
  void **v119; // [rsp+190h] [rbp+88h]
  void *v120; // [rsp+198h] [rbp+90h]
  size_t v121; // [rsp+1A0h] [rbp+98h]
  int v122; // [rsp+1A8h] [rbp+A0h]
  void **v123; // [rsp+1B0h] [rbp+A8h] BYREF
  __int128 v124; // [rsp+1B8h] [rbp+B0h]
  void **v125; // [rsp+1C8h] [rbp+C0h]
  void *Src; // [rsp+1D0h] [rbp+C8h]
  size_t Size; // [rsp+1D8h] [rbp+D0h]
  int v128; // [rsp+1E0h] [rbp+D8h]
  void **v129; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v130; // [rsp+1F0h] [rbp+E8h]
  void **v131; // [rsp+200h] [rbp+F8h]
  void *v132; // [rsp+208h] [rbp+100h]
  size_t v133; // [rsp+210h] [rbp+108h]
  int v134; // [rsp+218h] [rbp+110h]
  unsigned __int64 v135; // [rsp+260h] [rbp+158h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a2 + 32) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = a1[9];
  v123 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  Src = 0LL;
  v125 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  Size = 0LL;
  v124 = 0LL;
  v128 = 3;
  v8 = DMMVIDEOPRESENTSOURCESET::Serialize(v7, &v123);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    v12 = a1[9];
    v13 = v11;
    *(_QWORD *)(v11 + 24) = v12;
    if ( !a1[1] )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v14);
    }
    *(_QWORD *)(v13 + 32) = *(_QWORD *)(a1[1] + 16LL);
    *(_QWORD *)(v13 + 40) = v10;
    WdLogEvent5_WdError(v13);
    goto LABEL_68;
  }
  v15 = (DMMVIDEOPRESENTTARGETSET *)a1[10];
  v117 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v120 = 0LL;
  v119 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v118 = 0LL;
  v121 = 0LL;
  v122 = 3;
  v16 = DMMVIDEOPRESENTTARGETSET::Serialize(v15);
  v10 = v16;
  if ( v16 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v17);
    v19 = a1[10];
    v20 = v18;
    *(_QWORD *)(v18 + 24) = v19;
    if ( !a1[1] )
    {
      v21 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v21);
    }
    *(_QWORD *)(v20 + 32) = *(_QWORD *)(a1[1] + 16LL);
    *(_QWORD *)(v20 + 40) = v10;
    WdLogEvent5_WdError(v20);
    goto LABEL_67;
  }
  v22 = a1[11];
  v89[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v89[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v90 = 0LL;
  v91 = 0LL;
  v92 = 3;
  *(_OWORD *)&v89[1] = 0LL;
  if ( v22 )
  {
    v23 = DMMVIDPN::Serialize(v22, v89);
    v10 = v23;
    if ( v23 < 0 )
    {
      v25 = WdLogNewEntry5_WdError(v24);
      v26 = a1[11];
      v27 = v25;
      *(_QWORD *)(v25 + 24) = v26;
      if ( !a1[1] )
      {
        v28 = WdLogNewEntry5_WdAssertion(v26);
        WdLogEvent5_WdAssertion(v28);
      }
      v29 = v27;
      *(_QWORD *)(v27 + 32) = *(_QWORD *)(a1[1] + 16LL);
      *(_QWORD *)(v27 + 40) = v10;
      goto LABEL_20;
    }
    goto LABEL_22;
  }
  v30 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)v89, 0xCuLL);
  v10 = v30;
  if ( v30 >= 0 )
  {
    v32 = v90;
    *(_QWORD *)v90 = qword_1C00600A0;
    v32[2] = dword_1C00600A8;
LABEL_22:
    v114 = 0LL;
    v111 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v115 = 0LL;
    v113 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v116 = 3;
    v112 = 0LL;
    v33 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(a1 + 19, &v111);
    v10 = v33;
    if ( v33 < 0 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v34);
      v36[3] = a1 + 19;
      if ( !a1[1] )
      {
        v37 = WdLogNewEntry5_WdAssertion(v35);
        WdLogEvent5_WdAssertion(v37);
      }
      v36[4] = *(_QWORD *)(a1[1] + 16LL);
      v36[5] = v10;
      WdLogEvent5_WdError(v36);
      goto LABEL_65;
    }
    v38 = a1[10];
    v105 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v108 = 0LL;
    v107 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v106 = 0LL;
    v109 = 0LL;
    v110 = 3;
    v39 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v38, &v105);
    v10 = v39;
    if ( v39 < 0 )
    {
      v41 = WdLogNewEntry5_WdError(v40);
      v42 = a1[10];
      v43 = v41;
      *(_QWORD *)(v41 + 24) = v42;
      if ( !a1[1] )
      {
        v44 = WdLogNewEntry5_WdAssertion(v42);
        WdLogEvent5_WdAssertion(v44);
      }
      *(_QWORD *)(v43 + 32) = *(_QWORD *)(a1[1] + 16LL);
      *(_QWORD *)(v43 + 40) = v10;
      WdLogEvent5_WdError(v43);
      goto LABEL_64;
    }
    v102 = 0LL;
    v99 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v103 = 0LL;
    v101 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v104 = 3;
    v100 = 0LL;
    v45 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(a1 + 36, &v99);
    v10 = v45;
    if ( v45 < 0 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v46);
      v48[3] = a1 + 36;
      if ( !a1[1] )
      {
        v49 = WdLogNewEntry5_WdAssertion(v47);
        WdLogEvent5_WdAssertion(v49);
      }
      v48[4] = *(_QWORD *)(a1[1] + 16LL);
      v48[5] = v10;
      WdLogEvent5_WdError(v48);
      goto LABEL_63;
    }
    v96 = 0LL;
    v93 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v97 = 0LL;
    v95 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v98 = 3;
    v94 = 0LL;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v135, (__int64)a1);
    v50 = DMMVIDPN::SerializeVidPns(a1 + 27, &v93);
    v10 = v50;
    if ( v50 < 0 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v51);
      v53[3] = a1 + 27;
      if ( !a1[1] )
      {
        v54 = WdLogNewEntry5_WdAssertion(v52);
        WdLogEvent5_WdAssertion(v54);
      }
      v53[4] = *(_QWORD *)(a1[1] + 16LL);
      v53[5] = v10;
      WdLogEvent5_WdError(v53);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v135 + 40));
      goto LABEL_62;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v135 + 40));
    v129 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v131 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v130 = 0LL;
    v132 = 0LL;
    v133 = 0LL;
    v134 = 3;
    v135 = 0LL;
    if ( !a1[1] )
    {
      v56 = WdLogNewEntry5_WdAssertion(v55);
      WdLogEvent5_WdAssertion(v56);
    }
    v57 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(a1[1] + 16LL), &v135, 0LL);
    v58 = 0x80000000LL;
    v10 = v57;
    if ( (int)(v57 + 0x80000000) >= 0 && v57 != -1073741789 )
      goto LABEL_51;
    v59 = v135;
    if ( !v135 )
    {
      v60 = WdLogNewEntry5_WdAssertion(0x80000000LL);
      WdLogEvent5_WdAssertion(v60);
    }
    DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v129, v59);
    v62 = v132;
    if ( !v132 )
    {
      v10 = WdLogNewEntry5_WdError(v61);
      *(_QWORD *)(v10 + 24) = v59;
      if ( !a1[1] )
      {
        v64 = WdLogNewEntry5_WdAssertion(v63);
        WdLogEvent5_WdAssertion(v64);
      }
      *(_QWORD *)(v10 + 32) = *(_QWORD *)(a1[1] + 16LL);
      WdLogEvent5_WdError(v10);
      LODWORD(v10) = -1073741801;
      goto LABEL_61;
    }
    if ( !a1[1] )
    {
      v65 = WdLogNewEntry5_WdAssertion(v61);
      WdLogEvent5_WdAssertion(v65);
    }
    v66 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(a1[1] + 16LL), &v135, v62);
    v10 = v66;
    if ( v66 < 0 )
    {
LABEL_51:
      v68 = WdLogNewEntry5_WdError(v58);
      if ( !a1[1] )
      {
        v69 = WdLogNewEntry5_WdAssertion(v67);
        WdLogEvent5_WdAssertion(v69);
      }
      *(_QWORD *)(v68 + 24) = *(_QWORD *)(a1[1] + 16LL);
      *(_QWORD *)(v68 + 32) = v10;
      WdLogEvent5_WdError(v68);
      goto LABEL_61;
    }
    LODWORD(v88) = 3;
    v70 = v133;
    v85[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v71 = v121 + v91 + v115 + v109 + v103 + v133 + v97 + Size + 40;
    v85[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v86 = 0LL;
    v87 = 0LL;
    *(_OWORD *)&v85[1] = 0LL;
    v72 = DMM::AutoBuffer<unsigned char>::Initialize((__int64)v85, v71, 0LL, PagedPool);
    v10 = v72;
    if ( v72 >= 0 )
    {
      v10 = (__int64)v86;
      *((_DWORD *)v86 + 1) = v87;
      *(_WORD *)v10 = 20480;
      v75 = v86 + 40;
      v76 = v86 + 40;
      *(_DWORD *)(v10 + 8) = 40;
      memmove(v76, Src, Size);
      v77 = &v75[Size];
      *(_DWORD *)(v10 + 12) = (_DWORD)v77 - (_DWORD)v86;
      memmove(v77, v120, v121);
      v78 = &v77[v121];
      *(_DWORD *)(v10 + 16) = (_DWORD)v78 - (_DWORD)v86;
      memmove(v78, v90, v91);
      v79 = &v78[v91];
      *(_DWORD *)(v10 + 20) = (_DWORD)v79 - (_DWORD)v86;
      memmove(v79, v114, v115);
      v80 = &v79[v115];
      *(_DWORD *)(v10 + 24) = (_DWORD)v80 - (_DWORD)v86;
      memmove(v80, v108, v109);
      v81 = &v80[v109];
      *(_DWORD *)(v10 + 28) = (_DWORD)v81 - (_DWORD)v86;
      memmove(v81, v102, v103);
      v82 = &v81[v103];
      *(_DWORD *)(v10 + 32) = (_DWORD)v82 - (_DWORD)v86;
      memmove(v82, v96, v97);
      v83 = &v82[v97];
      *(_DWORD *)(v10 + 36) = (_DWORD)v83 - (_DWORD)v86;
      memmove(v83, v62, v70);
      LODWORD(v10) = DMM::AutoBuffer<unsigned char>::Initialize(a2, v87, v86, (enum _POOL_TYPE)v88);
      if ( (int)v10 >= 0 )
      {
        LODWORD(v10) = 0;
        goto LABEL_60;
      }
      v74 = (_QWORD *)WdLogNewEntry5_WdError(v84);
      v74[3] = a2;
      v74[4] = v85;
    }
    else
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdError(v73);
      v74[3] = v71;
      v74[4] = a1;
      v74[5] = v10;
    }
    WdLogEvent5_WdError(v74);
LABEL_60:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v85);
LABEL_61:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v129);
LABEL_62:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v93);
LABEL_63:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v99);
LABEL_64:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v105);
LABEL_65:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v111);
    goto LABEL_66;
  }
  v29 = WdLogNewEntry5_WdError(v31);
  *(_QWORD *)(v29 + 24) = 12LL;
  *(_QWORD *)(v29 + 32) = v10;
LABEL_20:
  WdLogEvent5_WdError(v29);
LABEL_66:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v89);
LABEL_67:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v117);
LABEL_68:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v123);
  return (unsigned int)v10;
}
