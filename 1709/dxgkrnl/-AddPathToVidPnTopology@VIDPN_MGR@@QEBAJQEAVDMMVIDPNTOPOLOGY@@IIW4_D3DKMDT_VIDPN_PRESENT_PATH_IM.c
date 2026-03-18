/*
 * XREFs of ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A80A8
 * Callers:
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B2160 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C00B9838 (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00D3870 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00E5108 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00F6230 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01EB850 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01F0C80 (-AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_V.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01F9C90 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01FA7C4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01FC05C (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C01FC31C (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C00063D0 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000A36C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C000A3B4 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00A823C (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 */

__int64 __fastcall VIDPN_MGR::AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a5,
        unsigned __int16 a6,
        unsigned __int8 a7,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a8)
{
  __int64 v8; // r14
  __int64 v10; // r15
  DMMVIDPNPRESENTPATH *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r11
  struct DMMVIDPNSOURCE *v14; // r13
  __int64 v15; // rcx
  struct DMMVIDPNTARGET *v16; // r12
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v17; // esi
  __int64 v18; // rcx
  int v19; // eax
  DMMVIDPNPRESENTPATH *PoolWithTag; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rsi
  unsigned int v27; // edi
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax

  v8 = a4;
  v10 = a3;
  if ( !a2 )
  {
    v30 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v30);
  }
  if ( !*((_QWORD *)a2 + 21) )
  {
    v31 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v31);
  }
  v11 = 0LL;
  v14 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(*((_QWORD *)a2 + 21) + 304LL), v10);
  if ( v14 )
  {
    v16 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v13 + 312), v8);
    if ( v16 )
    {
      v17 = a5;
      if ( a5 != 255 )
        goto LABEL_9;
      v18 = *((unsigned int *)a2 + 49);
      v17 = D3DKMDT_VPPI_PRIMARY;
      v19 = 1;
      if ( (v18 & 1) == 0 )
        goto LABEL_9;
      do
      {
        ++v17;
        v19 *= 2;
      }
      while ( ((unsigned int)v18 & v19) != 0 );
      if ( v17 > 32 )
      {
        v34 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v34 + 24) = 32LL;
        *(_QWORD *)(v34 + 32) = a2;
        WdLogEvent5_WdError(v34);
        v37 = WdLogNewEntry5_WdTrace(v36, v35);
        *(_QWORD *)(v37 + 24) = a2;
        v27 = -1071774892;
        *(_QWORD *)(v37 + 32) = -1071774892LL;
      }
      else
      {
LABEL_9:
        PoolWithTag = (DMMVIDPNPRESENTPATH *)ExAllocatePoolWithTag(PagedPool, 0xC0uLL, 0x4E506456u);
        if ( PoolWithTag )
          v11 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(PoolWithTag, v14, v16, v17, a6);
        if ( v11 )
        {
          if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v11 + 7))((__int64)v11 + 56) )
          {
            v39 = WdLogNewEntry5_WdAssertion(v22);
            WdLogEvent5_WdAssertion(v39);
          }
          v23 = VIDPN_MGR::_AddPathToVidPnTopology(this, a2, v11, a8, a7);
          v26 = v23;
          if ( v23 < 0 )
          {
            v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24);
            v29[5] = a2;
            v27 = v26;
            v29[3] = v10;
            v29[4] = v8;
            v29[6] = v26;
          }
          else
          {
            v11 = 0LL;
            v27 = 0;
          }
        }
        else
        {
          v38 = WdLogNewEntry5_WdLowResource(v21);
          WdLogEvent5_WdLowResource(v38);
          v27 = -1073741801;
        }
      }
    }
    else
    {
      v33 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v33 + 24) = v8;
      *(_QWORD *)(v33 + 32) = a2;
      WdLogEvent5_WdError(v33);
      v27 = -1071774971;
    }
  }
  else
  {
    v32 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v32 + 24) = v10;
    *(_QWORD *)(v32 + 32) = a2;
    WdLogEvent5_WdError(v32);
    v27 = -1071774972;
  }
  if ( v11 )
    (**(void (__fastcall ***)(DMMVIDPNPRESENTPATH *, __int64))v11)(v11, 1LL);
  return v27;
}
