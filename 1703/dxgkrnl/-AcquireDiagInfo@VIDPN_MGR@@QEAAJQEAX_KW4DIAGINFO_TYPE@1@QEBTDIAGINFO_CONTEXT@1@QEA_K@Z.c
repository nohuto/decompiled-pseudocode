/*
 * XREFs of ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01D0C74
 * Callers:
 *     DmmCollectTdrDiagInfo @ 0x1C01D4A4C (DmmCollectTdrDiagInfo.c)
 *     DmmEscape @ 0x1C01D4DD0 (DmmEscape.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000A87C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C0036810 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0043D18 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0044998 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0044A68 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4DBC (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01D1550 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01D1DCC (-AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01D402C (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01D42F4 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C01D4538 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01D4630 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01D47C0 (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DC918 (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DCA60 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C01DCF34 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DD290 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DE110 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C01E446C (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagInfo(__int64 a1, void *a2, size_t a3, __int64 a4, int *a5, size_t *a6)
{
  __int64 v6; // r14
  void *v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rax
  size_t *v12; // r15
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // rbx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // rax
  unsigned __int8 *v49; // rdx
  __int64 v50; // rax
  DXGDIAGNOSTICS *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  unsigned __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rbx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  _QWORD *v90; // r14
  __int64 v91; // rax
  __int64 v92; // r8
  __int64 v93; // r9
  int v94; // eax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rax
  __int64 v100; // rbx
  __int64 v101; // r15
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rbx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rax
  int v112; // eax
  __int64 v113; // rdx
  __int64 v114; // rcx
  int v115; // eax
  __int64 v116; // rdx
  __int64 v117; // rcx
  _QWORD *v118; // rbx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  int v128; // eax
  __int64 v129; // r8
  __int64 v130; // r9
  unsigned __int64 v131; // rsi
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  void *v137; // rbx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rbx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  int v146; // eax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rdx
  __int64 v152; // rcx
  _QWORD *v153; // rbx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rax
  size_t v157; // rbx
  size_t v158; // r8
  _QWORD *v159; // rax
  __int64 v160; // [rsp+38h] [rbp-49h] BYREF
  __int64 v161; // [rsp+40h] [rbp-41h] BYREF
  __int64 v162; // [rsp+48h] [rbp-39h] BYREF
  __int128 v163; // [rsp+50h] [rbp-31h]
  void **v164; // [rsp+60h] [rbp-21h]
  void *Src; // [rsp+68h] [rbp-19h]
  unsigned __int64 v166; // [rsp+70h] [rbp-11h]
  int v167; // [rsp+78h] [rbp-9h]
  unsigned __int64 v168; // [rsp+80h] [rbp-1h] BYREF
  __int64 v169; // [rsp+88h] [rbp+7h] BYREF
  __int64 v170; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v171; // [rsp+98h] [rbp+17h] BYREF
  void *v172; // [rsp+E0h] [rbp+5Fh] BYREF

  v172 = a2;
  v6 = (int)a4;
  v8 = a2;
  v9 = a1;
  if ( a2 )
  {
    if ( a3 )
    {
      memset(a2, 0, a3);
      goto LABEL_7;
    }
LABEL_5:
    v10 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v10 + 24) = v8;
    *(_QWORD *)(v10 + 32) = a3;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  if ( a3 )
    goto LABEL_5;
LABEL_7:
  v12 = a6;
  if ( a6 )
    *a6 = 0LL;
  Src = 0LL;
  v162 = (__int64)&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v164 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v166 = 0LL;
  v167 = 3;
  v163 = 0LL;
  if ( (int)v6 > 7 )
  {
    if ( (_DWORD)v6 == 8 )
    {
      if ( a5 )
      {
        v145 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        WdLogEvent5_WdAssertion(v145);
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v171, v9, a3, a4);
      v146 = DMMVIDPN::SerializeVidPns(v9 + 216, &v162);
      v23 = v146;
      if ( v146 >= 0 )
      {
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v171 + 40), v147, v149, v150);
        goto LABEL_130;
      }
      v153 = (_QWORD *)WdLogNewEntry5_WdError(v148, v147);
      v153[3] = v9 + 216;
      if ( !*(_QWORD *)(v9 + 8) )
      {
        v156 = WdLogNewEntry5_WdAssertion(v152, v151, v154, v155);
        WdLogEvent5_WdAssertion(v156);
      }
      v153[4] = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
      v153[5] = v23;
      WdLogEvent5_WdError(v153);
      v60 = v171;
    }
    else
    {
      if ( (_DWORD)v6 == 9 )
      {
        if ( a5 )
        {
          v126 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
          WdLogEvent5_WdAssertion(v126);
        }
        v168 = 0LL;
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v127 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
          WdLogEvent5_WdAssertion(v127);
        }
        v128 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL), &v168, 0LL);
        v17 = 0x80000000LL;
        v23 = v128;
        if ( (int)(v128 + 0x80000000) >= 0 && v128 != -1073741789 )
          goto LABEL_71;
        v131 = v168;
        if ( !v168 )
        {
          v132 = WdLogNewEntry5_WdAssertion(0x80000000LL, v16, v129, v130);
          WdLogEvent5_WdAssertion(v132);
        }
        DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v162, v131, v129, v130);
        v137 = Src;
        if ( !Src )
        {
          v140 = WdLogNewEntry5_WdError(v134, v133);
          *(_QWORD *)(v140 + 24) = v131;
          if ( !*(_QWORD *)(v9 + 8) )
          {
            v143 = WdLogNewEntry5_WdAssertion(v139, v138, v141, v142);
            WdLogEvent5_WdAssertion(v143);
          }
          *(_QWORD *)(v140 + 32) = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
          WdLogEvent5_WdError(v140);
          LODWORD(v23) = -1073741801;
          goto LABEL_140;
        }
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v144 = WdLogNewEntry5_WdAssertion(v134, v133, v135, v136);
          WdLogEvent5_WdAssertion(v144);
        }
        v34 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL), &v168, v137);
        goto LABEL_70;
      }
      if ( (int)v6 > 11 )
      {
        if ( (_DWORD)v6 == 12 )
        {
LABEL_75:
          if ( a5 )
          {
            v69 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
            WdLogEvent5_WdAssertion(v69);
          }
          v70 = *(_QWORD *)(v9 + 88);
          v160 = 0LL;
          if ( v70 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v70 + 32));
            v71 = *(_QWORD *)(v9 + 88);
          }
          else
          {
            v71 = 0LL;
          }
          auto_rc<DMMVIDPN const>::reset(&v160, v71);
          v76 = v160;
          if ( !v160 )
          {
            v79 = WdLogNewEntry5_WdWarning(v73, v72, v74, v75);
            if ( !*(_QWORD *)(v9 + 8) )
            {
              v82 = WdLogNewEntry5_WdAssertion(v78, v77, v80, v81);
              WdLogEvent5_WdAssertion(v82);
            }
            *(_QWORD *)(v79 + 24) = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
            WdLogEvent5_WdWarning(v79);
            LODWORD(v23) = -1071774884;
LABEL_88:
            auto_rc<DMMVIDPN const>::reset(&v160, 0LL);
            goto LABEL_140;
          }
          v83 = DMMVIDPN::Serialize(v160, &v162);
          v23 = v83;
          if ( v83 < 0 )
          {
            v90 = (_QWORD *)WdLogNewEntry5_WdError(v85, v84);
            v90[3] = v76;
            if ( !*(_QWORD *)(v9 + 8) )
            {
              v91 = WdLogNewEntry5_WdAssertion(v87, v86, v88, v89);
              WdLogEvent5_WdAssertion(v91);
            }
            v90[4] = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
            v90[5] = v23;
            WdLogEvent5_WdError(v90);
            goto LABEL_88;
          }
          auto_rc<DMMVIDPN const>::reset(&v160, 0LL);
LABEL_131:
          v157 = v166;
          if ( v8 )
          {
            v158 = v166;
            if ( a3 < v166 )
              v158 = a3;
            memmove(v8, Src, v158);
          }
          if ( v12 )
            *v12 = v157;
          if ( v157 <= a3 )
          {
            LODWORD(v23) = 0;
          }
          else
          {
            v159 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
            LODWORD(v23) = -2147483643;
            v159[3] = a3;
            v159[4] = v6;
            v159[5] = v166;
          }
          goto LABEL_140;
        }
        if ( (_DWORD)v6 != 13 )
        {
          if ( (_DWORD)v6 != 14 )
            goto LABEL_107;
          if ( a5 )
          {
            v42 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
            WdLogEvent5_WdAssertion(v42);
          }
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v169, v9, a3, a4);
          LODWORD(v172) = 0x8000;
          v43 = DMM::AutoBuffer<unsigned char>::Initialize((__int64)&v162, 0x8000uLL, 0LL, 1LL);
          v23 = v43;
          if ( v43 >= 0 )
          {
            v49 = (unsigned __int8 *)Src;
            if ( !Src )
            {
              v50 = WdLogNewEntry5_WdAssertion(v45, 0LL, v46, v47);
              WdLogEvent5_WdAssertion(v50);
              v49 = (unsigned __int8 *)Src;
            }
            v51 = *(DXGDIAGNOSTICS **)(v9 + 496);
            if ( !v51 )
            {
              v52 = WdLogNewEntry5_WdError(0LL, v49);
              *(_QWORD *)(v52 + 24) = Src;
              *(_QWORD *)(v52 + 32) = v9;
              WdLogEvent5_WdError(v52);
              LODWORD(v23) = -1073741436;
LABEL_63:
              v60 = v169;
              goto LABEL_105;
            }
            LODWORD(v23) = DXGDIAGNOSTICS::ReadDiagnostics(v51, v49, (unsigned int *)&v172);
            if ( (int)v23 >= 0 )
            {
              v61 = (unsigned int)v172;
              if ( (unsigned int)v172 > v166 )
              {
                v62 = WdLogNewEntry5_WdAssertion(v57, v56, v58, v59);
                WdLogEvent5_WdAssertion(v62);
              }
              v166 = v61;
              DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v169 + 40), v56, v58, v59);
              goto LABEL_131;
            }
            v48 = (_QWORD *)WdLogNewEntry5_WdError(v57, v56);
            v48[3] = Src;
          }
          else
          {
            v48 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44);
            v48[3] = 0x8000LL;
            v48[5] = v23;
          }
          v48[4] = v9;
          WdLogEvent5_WdError(v48);
          goto LABEL_63;
        }
        if ( a5 )
        {
          v63 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
          WdLogEvent5_WdAssertion(v63);
        }
        v34 = VIDPN_MGR::AcquireDiagVersion(a1, &v162);
LABEL_70:
        v23 = v34;
        if ( v34 >= 0 )
          goto LABEL_131;
LABEL_71:
        v38 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v68 = WdLogNewEntry5_WdAssertion(v65, v64, v66, v67);
          WdLogEvent5_WdAssertion(v68);
        }
        v38[3] = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
        v38[4] = v23;
        goto LABEL_74;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v170, v9, a3, a4);
      v161 = 0LL;
      v94 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn((const struct DMMVIDPN **)v9, &v161, v92, v93);
      v23 = v94;
      if ( v94 >= 0 )
      {
        v100 = v161;
        v101 = (unsigned int)*a5;
        if ( DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v161 + 96), *a5) )
        {
          v112 = VIDPN_MGR::UnpinPathModalityFromSource(
                   (VIDPN_MGR *)v9,
                   (struct DMMVIDPNTOPOLOGY *const)(v100 + 96),
                   v101);
          v23 = v112;
          if ( v112 >= 0 )
          {
            v115 = (_DWORD)v6 == 10
                 ? VIDPN_MGR::_SerializeVidPnSourceModeSet(v9, v100, (unsigned int)v101, &v162)
                 : VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource((VIDPN_MGR *)v9, (__int64)&v162);
            v23 = v115;
            if ( v115 >= 0 )
            {
              auto_rc<DMMVIDPN>::reset(&v161, 0LL);
              DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v170 + 40), v122, v123, v124);
              v8 = v172;
              goto LABEL_130;
            }
          }
          v118 = (_QWORD *)WdLogNewEntry5_WdError(v114, v113);
          v118[3] = v101;
          if ( !*(_QWORD *)(v9 + 8) )
          {
            v121 = WdLogNewEntry5_WdAssertion(v117, v116, v119, v120);
            WdLogEvent5_WdAssertion(v121);
          }
          v118[4] = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
          v118[5] = v23;
          WdLogEvent5_WdError(v118);
        }
        else
        {
          v108 = WdLogNewEntry5_WdDmmEvent(v103, v102, v104, v105);
          if ( !*(_QWORD *)(v9 + 8) )
          {
            v111 = WdLogNewEntry5_WdAssertion(v107, v106, v109, v110);
            WdLogEvent5_WdAssertion(v111);
          }
          *(_QWORD *)(v108 + 24) = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
          WdLogEvent5_WdDmmEvent(v108);
          LODWORD(v23) = -1071774919;
        }
      }
      else
      {
        v99 = WdLogNewEntry5_WdDmmEvent(v96, v95, v97, v98);
        *(_QWORD *)(v99 + 24) = v23;
        WdLogEvent5_WdDmmEvent(v99);
      }
      auto_rc<DMMVIDPN>::reset(&v161, 0LL);
      v60 = v170;
    }
LABEL_105:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v60 + 40), v53, v54, v55);
    goto LABEL_140;
  }
  if ( (_DWORD)v6 != 7 )
  {
    if ( (_DWORD)v6 != 1 )
    {
      if ( (_DWORD)v6 == 2 )
      {
        if ( a5 )
        {
          v32 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 2), a2, a3, a4);
          WdLogEvent5_WdAssertion(v32);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 72) + 72LL));
        v21 = *(_QWORD *)(v9 + 72);
        v22 = DMMVIDEOPRESENTSOURCESET::Serialize(v21, &v162);
        goto LABEL_23;
      }
      if ( (_DWORD)v6 == 3 )
      {
        if ( a5 )
        {
          v31 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 3), a2, a3, a4);
          WdLogEvent5_WdAssertion(v31);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 80) + 72LL));
        v21 = *(_QWORD *)(v9 + 80);
        v22 = DMMVIDEOPRESENTTARGETSET::Serialize((DMMVIDEOPRESENTTARGETSET *)v21);
        goto LABEL_23;
      }
      a1 = (unsigned int)(v6 - 4);
      if ( (_DWORD)v6 != 4 )
      {
        a1 = (unsigned int)(v6 - 5);
        if ( (_DWORD)v6 != 5 )
        {
          if ( (_DWORD)v6 == 6 )
          {
            if ( a5 )
            {
              v13 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
              WdLogEvent5_WdAssertion(v13);
            }
            v14 = v9 + 152;
            v15 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(v9 + 152, &v162);
            goto LABEL_42;
          }
LABEL_107:
          v125 = WdLogNewEntry5_WdError(a1, a2);
          *(_QWORD *)(v125 + 24) = v6;
          WdLogEvent5_WdError(v125);
          LODWORD(v23) = -1073741811;
          goto LABEL_140;
        }
        if ( a5 )
        {
          v20 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
          WdLogEvent5_WdAssertion(v20);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 80) + 72LL));
        v21 = *(_QWORD *)(v9 + 80);
        v22 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v21, &v162);
LABEL_23:
        v23 = v22;
        if ( v22 < 0 )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
          v28[3] = v21;
          if ( !*(_QWORD *)(v9 + 8) )
          {
            v29 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
            WdLogEvent5_WdAssertion(v29);
          }
          v28[4] = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
          v28[5] = v23;
          WdLogEvent5_WdError(v28);
          if ( v21 )
            ReferenceCounted::Release((ReferenceCounted *)(v21 + 64), v30);
          goto LABEL_140;
        }
        if ( v21 )
          ReferenceCounted::Release((ReferenceCounted *)(v21 + 64), v16);
        goto LABEL_131;
      }
      goto LABEL_75;
    }
    if ( a5 )
    {
      v33 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 1), a2, a3, a4);
      WdLogEvent5_WdAssertion(v33);
    }
    v34 = VIDPN_MGR::AcquireDiagSummary(v9, &v162);
    goto LABEL_70;
  }
  if ( a5 )
  {
    v35 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v35);
  }
  v14 = v9 + 280;
  v15 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(v9 + 280, &v162);
LABEL_42:
  v23 = v15;
  if ( v15 >= 0 )
  {
LABEL_130:
    v12 = a6;
    goto LABEL_131;
  }
  v38 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
  v38[3] = v14;
  if ( !*(_QWORD *)(v9 + 8) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v37, v36, v39, v40);
    WdLogEvent5_WdAssertion(v41);
  }
  v38[4] = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
  v38[5] = v23;
LABEL_74:
  WdLogEvent5_WdError(v38);
LABEL_140:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v162);
  return (unsigned int)v23;
}
