/*
 * XREFs of ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DB8E8
 * Callers:
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00D09A0 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 *     ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1C00D0A34 (-_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DB824 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00DBE70 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00DC70C (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DD780 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00DE7C8 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z.c)
 *     ?AddActiveHMDPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@@Z @ 0x1C00DEA08 (-AddActiveHMDPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@@Z.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00E5360 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00F9C30 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C00F9E08 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C01002FC (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0102AA4 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C01F718C (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Reserve(CCD_TOPOLOGY *this, __int64 a2)
{
  unsigned __int16 v2; // bx
  unsigned __int16 v3; // r14
  __int64 v5; // rax
  unsigned __int16 v6; // si
  int v7; // r15d
  _OWORD *v8; // rbp
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  __int64 v11; // r8
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rax
  void *v22; // rcx
  _QWORD *v24; // rcx
  __int64 v25; // rax
  unsigned __int16 v26; // ax
  __int64 v27; // rax
  unsigned __int16 v28; // ax
  __int64 v29; // rax
  _OWORD *v30; // rax
  _OWORD *v31; // rcx
  __int64 v32; // r8
  __int128 v33; // xmm1
  _BYTE v34[320]; // [rsp+20h] [rbp-158h] BYREF

  v2 = 0;
  v3 = a2;
  if ( *((_BYTE *)this + 72) )
  {
    v5 = *((_QWORD *)this + 8);
    if ( v5 )
      v6 = *(_WORD *)(v5 + 22);
    else
      v6 = 0;
    if ( v6 < (unsigned __int16)a2
      && (v7 = (unsigned __int16)a2,
          (v8 = operator new(264 * ((unsigned __int16)a2 - 1LL) + 312, 0x63644356u, PagedPool)) != 0LL) )
    {
      if ( v6 )
      {
        v30 = (_OWORD *)*((_QWORD *)this + 8);
        v31 = v8;
        v32 = 2LL;
        do
        {
          *v31 = *v30;
          v31[1] = v30[1];
          v31[2] = v30[2];
          v31[3] = v30[3];
          v31[4] = v30[4];
          v31[5] = v30[5];
          v31[6] = v30[6];
          v31 += 8;
          v33 = v30[7];
          v30 += 8;
          *(v31 - 1) = v33;
          --v32;
        }
        while ( v32 );
        *v31 = *v30;
        v31[1] = v30[1];
        v31[2] = v30[2];
        *((_QWORD *)v31 + 6) = *((_QWORD *)v30 + 6);
        memmove((char *)v8 + 312, (const void *)(*((_QWORD *)this + 8) + 312LL), 264LL * v6 - 264);
      }
      else
      {
        memset(v34, 0, 0x138uLL);
        v9 = v34;
        v10 = v8;
        v11 = 2LL;
        do
        {
          v12 = v9[1];
          *v10 = *v9;
          v13 = v9[2];
          v10[1] = v12;
          v14 = v9[3];
          v10[2] = v13;
          v15 = v9[4];
          v10[3] = v14;
          v16 = v9[5];
          v10[4] = v15;
          v17 = v9[6];
          v10[5] = v16;
          v18 = v9[7];
          v9 += 8;
          v10[6] = v17;
          v10 += 8;
          *(v10 - 1) = v18;
          --v11;
        }
        while ( v11 );
        v19 = v9[1];
        *v10 = *v9;
        v20 = v9[2];
        v21 = *((_QWORD *)v9 + 6);
        v10[1] = v19;
        v10[2] = v20;
        *((_QWORD *)v10 + 6) = v21;
        *((_DWORD *)v8 + 9) = 0;
        *((_QWORD *)v8 + 5) = 0LL;
      }
      *((_WORD *)v8 + 11) = v3;
      memset((char *)v8 + 264 * v6 + 48, 0, 264LL * (v7 - v6));
      v22 = (void *)*((_QWORD *)this + 8);
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      *((_QWORD *)this + 8) = v8;
      return *((unsigned __int16 *)v8 + 11);
    }
    else
    {
      return v6;
    }
  }
  else
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
    v24[3] = this;
    v24[4] = *((_QWORD *)this + 8);
    v25 = *((_QWORD *)this + 8);
    if ( v25 )
      v26 = *(_WORD *)(v25 + 20);
    else
      v26 = 0;
    v24[5] = v26;
    v27 = *((_QWORD *)this + 8);
    if ( v27 )
      v28 = *(_WORD *)(v27 + 22);
    else
      v28 = 0;
    v24[6] = v28;
    v24[7] = v3;
    v29 = *((_QWORD *)this + 8);
    if ( v29 )
      return *(unsigned __int16 *)(v29 + 22);
    return v2;
  }
}
