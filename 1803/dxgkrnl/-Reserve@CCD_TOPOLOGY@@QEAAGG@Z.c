/*
 * XREFs of ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00B36B8
 * Callers:
 *     ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1C009D7C4 (-_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00B3600 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00B41DC (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00B443C (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B5514 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00B64BC (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@@Z @ 0x1C00B66F0 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@@Z.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00D78B0 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00DDF90 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C010A2A0 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?HMDDisplayOnOff@@YAJPEAVDXGADAPTER@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C01C5780 (-HMDDisplayOnOff@@YAJPEAVDXGADAPTER@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C5C40 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C0224D50 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C0227A28 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Reserve(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // r14
  __int64 v7; // rax
  unsigned __int16 v8; // si
  int v9; // r15d
  _OWORD *v10; // rbp
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  __int64 v13; // r8
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  _QWORD *v25; // rcx
  __int64 v26; // rax
  unsigned __int16 v27; // ax
  __int64 v28; // rax
  unsigned __int16 v29; // dx
  __int64 v30; // rax
  _OWORD *v31; // rax
  _OWORD *v32; // rcx
  __int64 v33; // r8
  __int128 v34; // xmm1
  _BYTE v35[320]; // [rsp+20h] [rbp-158h] BYREF

  v4 = 0;
  v5 = a2;
  if ( *((_BYTE *)this + 72) )
  {
    v7 = *((_QWORD *)this + 8);
    if ( v7 )
      v8 = *(_WORD *)(v7 + 22);
    else
      v8 = 0;
    if ( v8 < (unsigned __int16)a2
      && (v9 = (unsigned __int16)a2,
          (v10 = operator new[](272 * ((unsigned __int16)a2 - 1LL) + 320, 0x63644356u, PagedPool)) != 0LL) )
    {
      if ( v8 )
      {
        v31 = (_OWORD *)*((_QWORD *)this + 8);
        v32 = v10;
        v33 = 2LL;
        do
        {
          *v32 = *v31;
          v32[1] = v31[1];
          v32[2] = v31[2];
          v32[3] = v31[3];
          v32[4] = v31[4];
          v32[5] = v31[5];
          v32[6] = v31[6];
          v32 += 8;
          v34 = v31[7];
          v31 += 8;
          *(v32 - 1) = v34;
          --v33;
        }
        while ( v33 );
        *v32 = *v31;
        v32[1] = v31[1];
        v32[2] = v31[2];
        v32[3] = v31[3];
        memmove(v10 + 20, (const void *)(*((_QWORD *)this + 8) + 320LL), 272LL * v8 - 272);
      }
      else
      {
        memset(v35, 0, sizeof(v35));
        v11 = v35;
        v12 = v10;
        v13 = 2LL;
        do
        {
          v14 = v11[1];
          *v12 = *v11;
          v15 = v11[2];
          v12[1] = v14;
          v16 = v11[3];
          v12[2] = v15;
          v17 = v11[4];
          v12[3] = v16;
          v18 = v11[5];
          v12[4] = v17;
          v19 = v11[6];
          v12[5] = v18;
          v20 = v11[7];
          v11 += 8;
          v12[6] = v19;
          v12 += 8;
          *(v12 - 1) = v20;
          --v13;
        }
        while ( v13 );
        v21 = v11[1];
        *v12 = *v11;
        v22 = v11[2];
        v12[1] = v21;
        v23 = v11[3];
        v12[2] = v22;
        v12[3] = v23;
        *((_DWORD *)v10 + 9) = 0;
        *((_QWORD *)v10 + 5) = 0LL;
      }
      *((_WORD *)v10 + 11) = v5;
      memset(&v10[17 * v8 + 3], 0, 272LL * (v9 - v8));
      operator delete[](*((void **)this + 8));
      *((_QWORD *)this + 8) = v10;
      return *((unsigned __int16 *)v10 + 11);
    }
    else
    {
      return v8;
    }
  }
  else
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v25[3] = this;
    v25[4] = *((_QWORD *)this + 8);
    v26 = *((_QWORD *)this + 8);
    if ( v26 )
      v27 = *(_WORD *)(v26 + 20);
    else
      v27 = 0;
    v25[5] = v27;
    v28 = *((_QWORD *)this + 8);
    if ( v28 )
      v29 = *(_WORD *)(v28 + 22);
    else
      v29 = 0;
    v25[6] = v29;
    v25[7] = v5;
    v30 = *((_QWORD *)this + 8);
    if ( v30 )
      return *(unsigned __int16 *)(v30 + 22);
    return v4;
  }
}
