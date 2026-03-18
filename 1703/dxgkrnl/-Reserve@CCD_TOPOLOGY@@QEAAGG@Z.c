/*
 * XREFs of ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00EA684
 * Callers:
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00A68C0 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C00A6A84 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00A8930 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1C00AE93C (-_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z.c)
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00AEB50 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00EA5C0 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EA9CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EAC10 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00EB9B0 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00EC32C (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0101280 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9B80 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Reserve(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // r14
  __int64 v7; // rax
  unsigned __int16 v8; // si
  int v9; // r15d
  _OWORD *v10; // rbp
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
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
  __int64 v23; // rax
  void *v24; // rcx
  _QWORD *v26; // rcx
  __int64 v27; // rax
  unsigned __int16 v28; // ax
  __int64 v29; // rax
  unsigned __int16 v30; // ax
  __int64 v31; // rax
  _OWORD *v32; // rax
  _OWORD *v33; // rcx
  __int64 v34; // r8
  __int128 v35; // xmm1
  _BYTE v36[320]; // [rsp+20h] [rbp-158h] BYREF

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
          (v10 = operator new(264LL * ((unsigned __int16)a2 - 1) + 312, 0x63644356u, PagedPool)) != 0LL) )
    {
      if ( v8 )
      {
        v32 = (_OWORD *)*((_QWORD *)this + 8);
        v33 = v10;
        v34 = 2LL;
        do
        {
          *v33 = *v32;
          v33[1] = v32[1];
          v33[2] = v32[2];
          v33[3] = v32[3];
          v33[4] = v32[4];
          v33[5] = v32[5];
          v33[6] = v32[6];
          v33 += 8;
          v35 = v32[7];
          v32 += 8;
          *(v33 - 1) = v35;
          --v34;
        }
        while ( v34 );
        *v33 = *v32;
        v33[1] = v32[1];
        v33[2] = v32[2];
        *((_QWORD *)v33 + 6) = *((_QWORD *)v32 + 6);
        memmove((char *)v10 + 312, (const void *)(*((_QWORD *)this + 8) + 312LL), 264LL * (v8 - 1));
      }
      else
      {
        memset(v36, 0, 0x138uLL);
        v11 = v36;
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
        v23 = *((_QWORD *)v11 + 6);
        v12[1] = v21;
        v12[2] = v22;
        *((_QWORD *)v12 + 6) = v23;
        *((_DWORD *)v10 + 9) = 0;
        *((_QWORD *)v10 + 5) = 0LL;
      }
      *((_WORD *)v10 + 11) = v5;
      memset((char *)v10 + 264 * v8 + 48, 0, 264LL * (v9 - v8));
      v24 = (void *)*((_QWORD *)this + 8);
      if ( v24 )
        ExFreePoolWithTag(v24, 0);
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
    v26 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v26[3] = this;
    v26[4] = *((_QWORD *)this + 8);
    v27 = *((_QWORD *)this + 8);
    if ( v27 )
      v28 = *(_WORD *)(v27 + 20);
    else
      v28 = 0;
    v26[5] = v28;
    v29 = *((_QWORD *)this + 8);
    if ( v29 )
      v30 = *(_WORD *)(v29 + 22);
    else
      v30 = 0;
    v26[6] = v30;
    v26[7] = v5;
    v31 = *((_QWORD *)this + 8);
    if ( v31 )
      return *(unsigned __int16 *)(v31 + 22);
    return v4;
  }
}
