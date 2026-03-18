/*
 * XREFs of ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01EA0A8
 * Callers:
 *     ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x1C01EB710 (-DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C01EBD30 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000596C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C0009A80 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C003497C (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0035600 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00356D0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8A58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01EAA78 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01EB2F4 (-AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01EF704 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01EF9C8 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C01EFC4C (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01EFD44 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01EFED4 (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01F5248 (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01F5390 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C01F5934 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01F5C8C (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01F6B30 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C01FEA34 (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagInfo(__int64 a1, void *a2, size_t a3, int a4, int *a5, size_t *a6)
{
  __int64 v6; // r14
  void *v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rax
  size_t *v12; // r15
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  volatile signed __int32 *v19; // rbx
  int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // rcx
  _QWORD *v23; // r14
  __int64 v24; // rax
  void (__fastcall ***v25)(_QWORD, __int64); // rcx
  int v26; // ebx
  __int64 v27; // rax
  _QWORD *v28; // rcx
  int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  int v34; // eax
  __int64 v35; // rcx
  _QWORD *v36; // r14
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  unsigned __int8 *v48; // rdx
  __int64 v49; // rax
  DXGDIAGNOSTICS *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  unsigned __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 v68; // rax
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rcx
  _QWORD *v72; // r14
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v78; // r15
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // rax
  int v83; // eax
  __int64 v84; // rcx
  int v85; // eax
  __int64 v86; // rcx
  _QWORD *v87; // rbx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  int v92; // eax
  unsigned __int64 v93; // rsi
  __int64 v94; // rax
  __int64 v95; // rcx
  void *v96; // rbx
  __int64 v97; // rcx
  __int64 v98; // rbx
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  int v102; // eax
  __int64 v103; // rcx
  __int64 v104; // rcx
  _QWORD *v105; // rbx
  __int64 v106; // rax
  size_t v107; // rbx
  size_t v108; // r8
  _QWORD *v109; // rax
  __int64 v110; // [rsp+38h] [rbp-59h] BYREF
  __int64 v111; // [rsp+40h] [rbp-51h] BYREF
  __int64 v112; // [rsp+48h] [rbp-49h] BYREF
  __int128 v113; // [rsp+50h] [rbp-41h]
  void **v114; // [rsp+60h] [rbp-31h]
  void *Src; // [rsp+68h] [rbp-29h]
  unsigned __int64 v116; // [rsp+70h] [rbp-21h]
  int v117; // [rsp+78h] [rbp-19h]
  unsigned __int64 v118; // [rsp+80h] [rbp-11h] BYREF
  __int64 v119; // [rsp+88h] [rbp-9h] BYREF
  __int64 v120; // [rsp+90h] [rbp-1h] BYREF
  _QWORD v121[4]; // [rsp+98h] [rbp+7h] BYREF
  void *v122; // [rsp+F0h] [rbp+5Fh] BYREF

  v122 = a2;
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
  v112 = (__int64)&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v114 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v116 = 0LL;
  v117 = 3;
  v113 = 0LL;
  if ( (int)v6 > 7 )
  {
    if ( (_DWORD)v6 == 8 )
    {
      if ( a5 )
      {
        v101 = WdLogNewEntry5_WdAssertion(a1);
        WdLogEvent5_WdAssertion(v101);
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v121, v9);
      v102 = DMMVIDPN::SerializeVidPns(v9 + 216, &v112);
      v21 = v102;
      if ( v102 < 0 )
      {
        v105 = (_QWORD *)WdLogNewEntry5_WdError(v103);
        v105[3] = v9 + 216;
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v106 = WdLogNewEntry5_WdAssertion(v104);
          WdLogEvent5_WdAssertion(v106);
        }
        v105[4] = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
        v105[5] = v21;
        WdLogEvent5_WdError(v105);
        v53 = v121[0];
        goto LABEL_120;
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v121[0] + 40LL));
    }
    else
    {
      if ( (_DWORD)v6 == 9 )
      {
        if ( a5 )
        {
          v90 = WdLogNewEntry5_WdAssertion(a1);
          WdLogEvent5_WdAssertion(v90);
        }
        v118 = 0LL;
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v91 = WdLogNewEntry5_WdAssertion(a1);
          WdLogEvent5_WdAssertion(v91);
        }
        v92 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL), &v118, 0LL);
        v17 = 0x80000000LL;
        v21 = v92;
        if ( (int)(v92 + 0x80000000) >= 0 && v92 != -1073741789 )
          goto LABEL_86;
        v93 = v118;
        if ( !v118 )
        {
          v94 = WdLogNewEntry5_WdAssertion(0x80000000LL);
          WdLogEvent5_WdAssertion(v94);
        }
        DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v112, v93);
        v96 = Src;
        if ( !Src )
        {
          v98 = WdLogNewEntry5_WdError(v95);
          *(_QWORD *)(v98 + 24) = v93;
          if ( !*(_QWORD *)(v9 + 8) )
          {
            v99 = WdLogNewEntry5_WdAssertion(v97);
            WdLogEvent5_WdAssertion(v99);
          }
          *(_QWORD *)(v98 + 32) = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
          WdLogEvent5_WdError(v98);
          LODWORD(v21) = -1073741801;
          goto LABEL_155;
        }
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v100 = WdLogNewEntry5_WdAssertion(v95);
          WdLogEvent5_WdAssertion(v100);
        }
        v39 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL), &v118, v96);
        goto LABEL_85;
      }
      if ( (int)v6 > 11 )
      {
        if ( (_DWORD)v6 == 12 )
        {
LABEL_90:
          if ( a5 )
          {
            v59 = WdLogNewEntry5_WdAssertion(a1);
            WdLogEvent5_WdAssertion(v59);
          }
          v60 = *(_QWORD *)(v9 + 88);
          v110 = 0LL;
          if ( v60 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v60 + 32));
            v61 = *(_QWORD *)(v9 + 88);
          }
          else
          {
            v61 = 0LL;
          }
          auto_rc<DMMVIDPN const>::reset(&v110, v61);
          v65 = v110;
          if ( !v110 )
          {
            v67 = WdLogNewEntry5_WdWarning(v63, v62, v64);
            if ( !*(_QWORD *)(v9 + 8) )
            {
              v68 = WdLogNewEntry5_WdAssertion(v66);
              WdLogEvent5_WdAssertion(v68);
            }
            *(_QWORD *)(v67 + 24) = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
            WdLogEvent5_WdWarning(v67);
            LODWORD(v21) = -1071774884;
LABEL_103:
            auto_rc<DMMVIDPN const>::reset(&v110, 0LL);
            goto LABEL_155;
          }
          v69 = DMMVIDPN::Serialize(v110, &v112);
          v21 = v69;
          if ( v69 < 0 )
          {
            v72 = (_QWORD *)WdLogNewEntry5_WdError(v70);
            v72[3] = v65;
            if ( !*(_QWORD *)(v9 + 8) )
            {
              v73 = WdLogNewEntry5_WdAssertion(v71);
              WdLogEvent5_WdAssertion(v73);
            }
            v72[4] = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
            v72[5] = v21;
            WdLogEvent5_WdError(v72);
            goto LABEL_103;
          }
          auto_rc<DMMVIDPN const>::reset(&v110, 0LL);
LABEL_146:
          v107 = v116;
          if ( v8 )
          {
            v108 = v116;
            if ( a3 < v116 )
              v108 = a3;
            memmove(v8, Src, v108);
          }
          if ( v12 )
            *v12 = v107;
          if ( v107 <= a3 )
          {
            LODWORD(v21) = 0;
          }
          else
          {
            v109 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16);
            LODWORD(v21) = -2147483643;
            v109[3] = a3;
            v109[4] = v6;
            v109[5] = v116;
          }
          goto LABEL_155;
        }
        if ( (_DWORD)v6 != 13 )
        {
          if ( (_DWORD)v6 != 14 )
            goto LABEL_122;
          if ( a5 )
          {
            v44 = WdLogNewEntry5_WdAssertion(a1);
            WdLogEvent5_WdAssertion(v44);
          }
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v119, v9);
          LODWORD(v122) = 0x8000;
          v45 = DMM::AutoBuffer<unsigned char>::Initialize((__int64)&v112, 0x8000uLL, 0LL, PagedPool);
          v21 = v45;
          if ( v45 >= 0 )
          {
            v48 = (unsigned __int8 *)Src;
            if ( !Src )
            {
              v49 = WdLogNewEntry5_WdAssertion(v46);
              WdLogEvent5_WdAssertion(v49);
              v48 = (unsigned __int8 *)Src;
            }
            v50 = *(DXGDIAGNOSTICS **)(v9 + 504);
            if ( !v50 )
            {
              v51 = WdLogNewEntry5_WdError(0LL);
              *(_QWORD *)(v51 + 24) = Src;
              *(_QWORD *)(v51 + 32) = v9;
              WdLogEvent5_WdError(v51);
              LODWORD(v21) = -1073741436;
LABEL_78:
              v53 = v119;
LABEL_120:
              DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v53 + 40));
              goto LABEL_155;
            }
            LODWORD(v21) = DXGDIAGNOSTICS::ReadDiagnostics(v50, v48, (unsigned int *)&v122);
            if ( (int)v21 >= 0 )
            {
              v54 = (unsigned int)v122;
              if ( (unsigned int)v122 > v116 )
              {
                v55 = WdLogNewEntry5_WdAssertion(v52);
                WdLogEvent5_WdAssertion(v55);
              }
              v116 = v54;
              DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v119 + 40));
              goto LABEL_146;
            }
            v47 = (_QWORD *)WdLogNewEntry5_WdError(v52);
            v47[3] = Src;
          }
          else
          {
            v47 = (_QWORD *)WdLogNewEntry5_WdError(v46);
            v47[3] = 0x8000LL;
            v47[5] = v21;
          }
          v47[4] = v9;
          WdLogEvent5_WdError(v47);
          goto LABEL_78;
        }
        if ( a5 )
        {
          v56 = WdLogNewEntry5_WdAssertion(a1);
          WdLogEvent5_WdAssertion(v56);
        }
        v39 = VIDPN_MGR::AcquireDiagVersion(a1, &v112);
LABEL_85:
        v21 = v39;
        if ( v39 >= 0 )
          goto LABEL_146;
LABEL_86:
        v42 = (_QWORD *)WdLogNewEntry5_WdError(v17);
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v58 = WdLogNewEntry5_WdAssertion(v57);
          WdLogEvent5_WdAssertion(v58);
        }
        v42[3] = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
        v42[4] = v21;
        goto LABEL_89;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v120, v9);
      v111 = 0LL;
      v74 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn((const struct DMMVIDPN **)v9, &v111);
      v21 = v74;
      if ( v74 < 0 )
      {
        v76 = WdLogNewEntry5_WdDmmEvent(v75);
        *(_QWORD *)(v76 + 24) = v21;
        WdLogEvent5_WdDmmEvent(v76);
LABEL_119:
        auto_rc<DMMVIDPN>::reset(&v111, 0LL);
        v53 = v120;
        goto LABEL_120;
      }
      v77 = v111;
      v78 = (unsigned int)*a5;
      if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v111 + 96), *a5) )
      {
        v81 = WdLogNewEntry5_WdDmmEvent(v79);
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v82 = WdLogNewEntry5_WdAssertion(v80);
          WdLogEvent5_WdAssertion(v82);
        }
        *(_QWORD *)(v81 + 24) = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
        WdLogEvent5_WdDmmEvent(v81);
        LODWORD(v21) = -1071774919;
        goto LABEL_119;
      }
      v83 = VIDPN_MGR::UnpinPathModalityFromSource((VIDPN_MGR *)v9, (struct DMMVIDPNTOPOLOGY *const)(v77 + 96), v78);
      v21 = v83;
      if ( v83 < 0
        || ((_DWORD)v6 == 10
          ? (v85 = VIDPN_MGR::_SerializeVidPnSourceModeSet(v9, v77, (unsigned int)v78, &v112))
          : (v85 = VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource((VIDPN_MGR *)v9, (__int64)&v112)),
            v21 = v85,
            v85 < 0) )
      {
        v87 = (_QWORD *)WdLogNewEntry5_WdError(v84);
        v87[3] = v78;
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v88 = WdLogNewEntry5_WdAssertion(v86);
          WdLogEvent5_WdAssertion(v88);
        }
        v87[4] = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
        v87[5] = v21;
        WdLogEvent5_WdError(v87);
        goto LABEL_119;
      }
      auto_rc<DMMVIDPN>::reset(&v111, 0LL);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v120 + 40));
      v8 = v122;
    }
LABEL_145:
    v12 = a6;
    goto LABEL_146;
  }
  switch ( (_DWORD)v6 )
  {
    case 7:
      if ( a5 )
      {
        v40 = WdLogNewEntry5_WdAssertion(a1);
        WdLogEvent5_WdAssertion(v40);
      }
      v14 = v9 + 288;
      v15 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(v9 + 288, &v112);
LABEL_57:
      v21 = v15;
      if ( v15 < 0 )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdError(v17);
        v42[3] = v14;
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v43 = WdLogNewEntry5_WdAssertion(v41);
          WdLogEvent5_WdAssertion(v43);
        }
        v42[4] = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
        v42[5] = v21;
LABEL_89:
        v28 = v42;
        goto LABEL_32;
      }
      goto LABEL_145;
    case 1:
      if ( a5 )
      {
        v38 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 1));
        WdLogEvent5_WdAssertion(v38);
      }
      v39 = VIDPN_MGR::AcquireDiagSummary(v9, &v112);
      goto LABEL_85;
    case 2:
      if ( a5 )
      {
        v32 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 2));
        WdLogEvent5_WdAssertion(v32);
      }
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 72) + 72LL));
      v33 = *(_QWORD *)(v9 + 72);
      v34 = DMMVIDEOPRESENTSOURCESET::Serialize(v33, &v112);
      v21 = v34;
      if ( v34 < 0 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v17);
        v36[3] = v33;
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v37 = WdLogNewEntry5_WdAssertion(v35);
          WdLogEvent5_WdAssertion(v37);
        }
        v36[4] = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
        v36[5] = v21;
        WdLogEvent5_WdError(v36);
        if ( v33 )
          ReferenceCounted::Release((ReferenceCounted *)(v33 + 64));
        goto LABEL_155;
      }
      if ( v33 )
        ReferenceCounted::Release((ReferenceCounted *)(v33 + 64));
      goto LABEL_146;
    case 3:
      if ( a5 )
      {
        v30 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 3));
        WdLogEvent5_WdAssertion(v30);
      }
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 80) + 72LL));
      v19 = *(volatile signed __int32 **)(v9 + 80);
      v121[2] = v19;
      v20 = DMMVIDEOPRESENTTARGETSET::Serialize((DMMVIDEOPRESENTTARGETSET *)v19);
      goto LABEL_23;
  }
  a1 = (unsigned int)(v6 - 4);
  if ( (_DWORD)v6 == 4 )
    goto LABEL_90;
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
      v15 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(v9 + 152, &v112);
      goto LABEL_57;
    }
LABEL_122:
    v89 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v89 + 24) = v6;
    WdLogEvent5_WdError(v89);
    LODWORD(v21) = -1073741811;
    goto LABEL_155;
  }
  if ( a5 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v18);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 80) + 72LL));
  v19 = *(volatile signed __int32 **)(v9 + 80);
  v121[1] = v19;
  v20 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v19, &v112);
LABEL_23:
  v21 = v20;
  if ( v20 >= 0 )
  {
    if ( v19 )
    {
      v17 = (__int64)(v19 + 16);
      v29 = _InterlockedDecrement(v19 + 18);
      if ( v29 )
      {
        if ( v29 < 0 )
        {
          v31 = WdLogNewEntry5_WdError(v17);
          *(_QWORD *)(v31 + 24) = v29;
          WdLogEvent5_WdError(v31);
        }
      }
      else if ( v17 )
      {
        (**(void (__fastcall ***)(__int64, __int64))v17)(v17, 1LL);
      }
    }
    goto LABEL_146;
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdError(v17);
  v23[3] = v19;
  if ( !*(_QWORD *)(v9 + 8) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v22);
    WdLogEvent5_WdAssertion(v24);
  }
  v23[4] = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
  v23[5] = v21;
  WdLogEvent5_WdError(v23);
  if ( !v19 )
    goto LABEL_155;
  v25 = (void (__fastcall ***)(_QWORD, __int64))(v19 + 16);
  v26 = _InterlockedDecrement(v19 + 18);
  if ( !v26 )
  {
    if ( v25 )
      (**v25)(v25, 1LL);
    goto LABEL_155;
  }
  if ( v26 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v27 + 24) = v26;
    v28 = (_QWORD *)v27;
LABEL_32:
    WdLogEvent5_WdError(v28);
  }
LABEL_155:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v112);
  return (unsigned int)v21;
}
