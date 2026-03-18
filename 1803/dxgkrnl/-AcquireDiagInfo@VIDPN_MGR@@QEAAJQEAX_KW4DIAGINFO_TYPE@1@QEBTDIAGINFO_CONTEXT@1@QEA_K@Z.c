/*
 * XREFs of ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C020FEC4
 * Callers:
 *     ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x1C0211F38 (-DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C0212560 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C0001288 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000452C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0043668 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0044A00 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0045A8C (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA2C4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02107F0 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C0211090 (-AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0217140 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C021741C (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C02177A0 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C0218754 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02188E8 (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0222014 (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0222170 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C022277C (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0222C1C (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02246F4 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C022EF74 (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagInfo(__int64 a1, void *a2, size_t a3, int a4, int *a5, size_t *a6)
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
  __int64 v24; // rcx
  _QWORD *v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  unsigned __int8 *v41; // rdx
  __int64 v42; // rax
  DXGDIAGNOSTICS *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  unsigned __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rcx
  _QWORD *v67; // r14
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rbx
  __int64 v74; // r15
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // eax
  __int64 v81; // rcx
  int v82; // eax
  __int64 v83; // rcx
  _QWORD *v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  int v91; // eax
  SIZE_T v92; // rsi
  __int64 v93; // rax
  __int64 v94; // rcx
  void *v95; // rbx
  __int64 v96; // rcx
  __int64 v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rax
  int v102; // eax
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rax
  int v107; // eax
  __int64 v108; // rcx
  __int64 v109; // rcx
  _QWORD *v110; // rbx
  __int64 v111; // rax
  __int64 v112; // rax
  size_t v113; // rbx
  size_t v114; // r8
  _QWORD *v115; // rax
  __int64 v116; // [rsp+38h] [rbp-49h] BYREF
  __int64 v117; // [rsp+40h] [rbp-41h] BYREF
  __int64 v118; // [rsp+48h] [rbp-39h] BYREF
  __int128 v119; // [rsp+50h] [rbp-31h]
  void **v120; // [rsp+60h] [rbp-21h]
  void *Src; // [rsp+68h] [rbp-19h]
  unsigned __int64 v122; // [rsp+70h] [rbp-11h]
  int v123; // [rsp+78h] [rbp-9h]
  SIZE_T v124; // [rsp+80h] [rbp-1h] BYREF
  __int64 v125; // [rsp+88h] [rbp+7h] BYREF
  __int64 v126; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v127; // [rsp+98h] [rbp+17h] BYREF
  void *v128; // [rsp+E0h] [rbp+5Fh] BYREF

  v128 = a2;
  v6 = a4;
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
    v10 = WdLogNewEntry5_WdError(a1);
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
  v118 = (__int64)&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v120 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v122 = 0LL;
  v123 = 3;
  v119 = 0LL;
  if ( (int)v6 <= 7 )
  {
    if ( (_DWORD)v6 == 7 )
    {
      if ( a5 )
      {
        v32 = WdLogNewEntry5_WdAssertion(a1);
        WdLogEvent5_WdAssertion(v32);
      }
      v14 = v9 + 288;
      v15 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(v9 + 288, &v118);
LABEL_42:
      v23 = v15;
      if ( v15 < 0 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdError(v17);
        v34[3] = v14;
        v35 = *(_QWORD *)(v9 + 8);
        if ( !v35 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v33);
          WdLogEvent5_WdAssertion(v36);
          v35 = *(_QWORD *)(v9 + 8);
        }
        v34[4] = *(_QWORD *)(v35 + 16);
        v34[5] = v23;
        goto LABEL_75;
      }
      goto LABEL_134;
    }
    if ( (_DWORD)v6 != 1 )
    {
      if ( (_DWORD)v6 == 2 )
      {
        if ( a5 )
        {
          v29 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 2));
          WdLogEvent5_WdAssertion(v29);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 72) + 72LL));
        v21 = *(_QWORD *)(v9 + 72);
        v22 = DMMVIDEOPRESENTSOURCESET::Serialize(v21, &v118);
        goto LABEL_23;
      }
      if ( (_DWORD)v6 == 3 )
      {
        if ( a5 )
        {
          v28 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 3));
          WdLogEvent5_WdAssertion(v28);
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
              v13 = WdLogNewEntry5_WdAssertion(a1);
              WdLogEvent5_WdAssertion(v13);
            }
            v14 = v9 + 152;
            v15 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(v9 + 152, &v118);
            goto LABEL_42;
          }
LABEL_108:
          v87 = WdLogNewEntry5_WdError(a1);
          *(_QWORD *)(v87 + 24) = v6;
          WdLogEvent5_WdError(v87);
          LODWORD(v23) = -1073741811;
          goto LABEL_144;
        }
        if ( a5 )
        {
          v20 = WdLogNewEntry5_WdAssertion(a1);
          WdLogEvent5_WdAssertion(v20);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 80) + 72LL));
        v21 = *(_QWORD *)(v9 + 80);
        v22 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v21, &v118);
LABEL_23:
        v23 = v22;
        if ( v22 < 0 )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdError(v17);
          v25[3] = v21;
          v26 = *(_QWORD *)(v9 + 8);
          if ( !v26 )
          {
            v27 = WdLogNewEntry5_WdAssertion(v24);
            WdLogEvent5_WdAssertion(v27);
            v26 = *(_QWORD *)(v9 + 8);
          }
          v25[4] = *(_QWORD *)(v26 + 16);
          v25[5] = v23;
          WdLogEvent5_WdError(v25);
          if ( v21 )
            ReferenceCounted::Release((ReferenceCounted *)(v21 + 64));
          goto LABEL_144;
        }
        if ( v21 )
          ReferenceCounted::Release((ReferenceCounted *)(v21 + 64));
        goto LABEL_135;
      }
      goto LABEL_76;
    }
    if ( a5 )
    {
      v30 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 1));
      WdLogEvent5_WdAssertion(v30);
    }
    v31 = VIDPN_MGR::AcquireDiagSummary(v9, &v118);
    goto LABEL_70;
  }
  if ( (_DWORD)v6 == 8 )
  {
    if ( a5 )
    {
      v106 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v106);
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v127, v9);
    v107 = DMMVIDPN::SerializeVidPns(v9 + 216, &v118);
    v23 = v107;
    if ( v107 < 0 )
    {
      v110 = (_QWORD *)WdLogNewEntry5_WdError(v108);
      v110[3] = v9 + 216;
      v111 = *(_QWORD *)(v9 + 8);
      if ( !v111 )
      {
        v112 = WdLogNewEntry5_WdAssertion(v109);
        WdLogEvent5_WdAssertion(v112);
        v111 = *(_QWORD *)(v9 + 8);
      }
      v110[4] = *(_QWORD *)(v111 + 16);
      v110[5] = v23;
      WdLogEvent5_WdError(v110);
      v46 = v127;
      goto LABEL_106;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v127 + 40));
    goto LABEL_134;
  }
  if ( (_DWORD)v6 == 9 )
  {
    if ( a5 )
    {
      v88 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v88);
    }
    v89 = *(_QWORD *)(v9 + 8);
    v124 = 0LL;
    if ( !v89 )
    {
      v90 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v90);
      v89 = *(_QWORD *)(v9 + 8);
    }
    v91 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v89 + 16), &v124, 0LL);
    v17 = 0x80000000LL;
    v23 = v91;
    if ( (int)(v91 + 0x80000000) < 0 || v91 == -1073741789 )
    {
      v92 = v124;
      if ( !v124 )
      {
        v93 = WdLogNewEntry5_WdAssertion(0x80000000LL);
        WdLogEvent5_WdAssertion(v93);
      }
      DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v118, v92);
      v95 = Src;
      if ( !Src )
      {
        v97 = WdLogNewEntry5_WdError(v94);
        *(_QWORD *)(v97 + 24) = v92;
        v98 = *(_QWORD *)(v9 + 8);
        if ( !v98 )
        {
          v99 = WdLogNewEntry5_WdAssertion(v96);
          WdLogEvent5_WdAssertion(v99);
          v98 = *(_QWORD *)(v9 + 8);
        }
        *(_QWORD *)(v97 + 32) = *(_QWORD *)(v98 + 16);
        WdLogEvent5_WdError(v97);
        LODWORD(v23) = -1073741801;
        goto LABEL_144;
      }
      v100 = *(_QWORD *)(v9 + 8);
      if ( !v100 )
      {
        v101 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v101);
        v100 = *(_QWORD *)(v9 + 8);
      }
      v102 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v100 + 16), &v124, v95);
      v23 = v102;
      if ( v102 >= 0 )
        goto LABEL_135;
    }
    v103 = WdLogNewEntry5_WdError(v17);
    v104 = *(_QWORD *)(v9 + 8);
    v34 = (_QWORD *)v103;
    if ( !v104 )
    {
      v105 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v105);
      v104 = *(_QWORD *)(v9 + 8);
    }
    v34[3] = *(_QWORD *)(v104 + 16);
    goto LABEL_74;
  }
  if ( (int)v6 <= 11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v126, v9);
    v117 = 0LL;
    v70 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn((const struct DMMVIDPN **)v9, &v117);
    v23 = v70;
    if ( v70 < 0 )
    {
      v72 = WdLogNewEntry5_WdDmmEvent(v71);
      *(_QWORD *)(v72 + 24) = v23;
      WdLogEvent5_WdDmmEvent(v72);
LABEL_105:
      auto_rc<DMMVIDPN>::reset(&v117, 0LL);
      v46 = v126;
      goto LABEL_106;
    }
    v73 = v117;
    v74 = (unsigned int)*a5;
    if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v117 + 96), *a5) )
    {
      v77 = WdLogNewEntry5_WdDmmEvent(v75);
      v78 = *(_QWORD *)(v9 + 8);
      if ( !v78 )
      {
        v79 = WdLogNewEntry5_WdAssertion(v76);
        WdLogEvent5_WdAssertion(v79);
        v78 = *(_QWORD *)(v9 + 8);
      }
      *(_QWORD *)(v77 + 24) = *(_QWORD *)(v78 + 16);
      WdLogEvent5_WdDmmEvent(v77);
      LODWORD(v23) = -1071774919;
      goto LABEL_105;
    }
    v80 = VIDPN_MGR::UnpinPathModalityFromSource((VIDPN_MGR *)v9, (struct DMMVIDPNTOPOLOGY *const)(v73 + 96), v74);
    v23 = v80;
    if ( v80 < 0
      || ((_DWORD)v6 == 10
        ? (v82 = VIDPN_MGR::_SerializeVidPnSourceModeSet(v9, v73, (unsigned int)v74, &v118))
        : (v82 = VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource((VIDPN_MGR *)v9, (__int64)&v118)),
          v23 = v82,
          v82 < 0) )
    {
      v84 = (_QWORD *)WdLogNewEntry5_WdError(v81);
      v84[3] = v74;
      v85 = *(_QWORD *)(v9 + 8);
      if ( !v85 )
      {
        v86 = WdLogNewEntry5_WdAssertion(v83);
        WdLogEvent5_WdAssertion(v86);
        v85 = *(_QWORD *)(v9 + 8);
      }
      v84[4] = *(_QWORD *)(v85 + 16);
      v84[5] = v23;
      WdLogEvent5_WdError(v84);
      goto LABEL_105;
    }
    auto_rc<DMMVIDPN>::reset(&v117, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v126 + 40));
    v8 = v128;
LABEL_134:
    v12 = a6;
    goto LABEL_135;
  }
  if ( (_DWORD)v6 == 12 )
  {
LABEL_76:
    if ( a5 )
    {
      v53 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v53);
    }
    v54 = *(_QWORD *)(v9 + 88);
    v116 = 0LL;
    if ( v54 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v54 + 32));
      v55 = *(_QWORD *)(v9 + 88);
    }
    else
    {
      v55 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v116, v55);
    v59 = v116;
    if ( !v116 )
    {
      v61 = WdLogNewEntry5_WdWarning(v57, v56, v58);
      v62 = *(_QWORD *)(v9 + 8);
      if ( !v62 )
      {
        v63 = WdLogNewEntry5_WdAssertion(v60);
        WdLogEvent5_WdAssertion(v63);
        v62 = *(_QWORD *)(v9 + 8);
      }
      *(_QWORD *)(v61 + 24) = *(_QWORD *)(v62 + 16);
      WdLogEvent5_WdWarning(v61);
      LODWORD(v23) = -1071774884;
LABEL_89:
      auto_rc<DMMVIDPN const>::reset(&v116, 0LL);
      goto LABEL_144;
    }
    v64 = DMMVIDPN::Serialize(v116, &v118);
    v23 = v64;
    if ( v64 < 0 )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdError(v65);
      v67[3] = v59;
      v68 = *(_QWORD *)(v9 + 8);
      if ( !v68 )
      {
        v69 = WdLogNewEntry5_WdAssertion(v66);
        WdLogEvent5_WdAssertion(v69);
        v68 = *(_QWORD *)(v9 + 8);
      }
      v67[4] = *(_QWORD *)(v68 + 16);
      v67[5] = v23;
      WdLogEvent5_WdError(v67);
      goto LABEL_89;
    }
    auto_rc<DMMVIDPN const>::reset(&v116, 0LL);
LABEL_135:
    v113 = v122;
    if ( v8 )
    {
      v114 = v122;
      if ( a3 < v122 )
        v114 = a3;
      memmove(v8, Src, v114);
    }
    if ( v12 )
      *v12 = v113;
    if ( v113 <= a3 )
    {
      LODWORD(v23) = 0;
    }
    else
    {
      v115 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
      LODWORD(v23) = -2147483643;
      v115[3] = a3;
      v115[4] = v6;
      v115[5] = v122;
    }
    goto LABEL_144;
  }
  if ( (_DWORD)v6 != 13 )
  {
    if ( (_DWORD)v6 != 14 )
      goto LABEL_108;
    if ( a5 )
    {
      v37 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v37);
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v125, v9);
    LODWORD(v128) = 0x8000;
    v38 = DMM::AutoBuffer<unsigned char>::Initialize((__int64)&v118, 0x8000uLL, 0LL, PagedPool);
    v23 = v38;
    if ( v38 >= 0 )
    {
      v41 = (unsigned __int8 *)Src;
      if ( !Src )
      {
        v42 = WdLogNewEntry5_WdAssertion(v39);
        WdLogEvent5_WdAssertion(v42);
        v41 = (unsigned __int8 *)Src;
      }
      v43 = *(DXGDIAGNOSTICS **)(v9 + 504);
      if ( !v43 )
      {
        v44 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v44 + 24) = Src;
        *(_QWORD *)(v44 + 32) = v9;
        WdLogEvent5_WdError(v44);
        LODWORD(v23) = -1073741436;
LABEL_63:
        v46 = v125;
LABEL_106:
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v46 + 40));
        goto LABEL_144;
      }
      LODWORD(v23) = DXGDIAGNOSTICS::ReadDiagnostics(v43, v41, (unsigned int *)&v128);
      if ( (int)v23 >= 0 )
      {
        v47 = (unsigned int)v128;
        if ( (unsigned int)v128 > v122 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v45);
          WdLogEvent5_WdAssertion(v48);
        }
        v122 = v47;
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v125 + 40));
        goto LABEL_135;
      }
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v45);
      v40[3] = Src;
    }
    else
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v39);
      v40[3] = 0x8000LL;
      v40[5] = v23;
    }
    v40[4] = v9;
    WdLogEvent5_WdError(v40);
    goto LABEL_63;
  }
  if ( a5 )
  {
    v49 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v49);
  }
  v31 = VIDPN_MGR::AcquireDiagVersion(a1, &v118);
LABEL_70:
  v23 = v31;
  if ( v31 >= 0 )
    goto LABEL_135;
  v34 = (_QWORD *)WdLogNewEntry5_WdError(v17);
  v51 = *(_QWORD *)(v9 + 8);
  if ( !v51 )
  {
    v52 = WdLogNewEntry5_WdAssertion(v50);
    WdLogEvent5_WdAssertion(v52);
    v51 = *(_QWORD *)(v9 + 8);
  }
  v34[3] = *(_QWORD *)(v51 + 16);
LABEL_74:
  v34[4] = v23;
LABEL_75:
  WdLogEvent5_WdError(v34);
LABEL_144:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v118);
  return (unsigned int)v23;
}
