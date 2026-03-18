/*
 * XREFs of ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E1350
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E3E84 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01DAEF0 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0001F94 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0002828 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0008E60 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CBB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C00E12A8 (-GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTA.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::CreateNewPath(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        struct DMMVIDPNPRESENTPATH **a3,
        __int64 a4)
{
  __int64 VidPnSourceId; // r12
  struct DMMVIDPNPRESENTPATH *v8; // rbx
  __int64 VidPnTargetId; // r14
  __int64 Container; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DMMVIDPNTARGET *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  const struct _D3DKMDT_VIDPN_PRESENT_PATH *v22; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  bool v31; // zf
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // rax
  DMMVIDPNPRESENTPATH *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct DMMVIDPNPRESENTPATH *v44; // rax
  __int64 v45; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  int LowestAvailImportanceOrdinal; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  struct DMMVIDPNPRESENTPATH *v58; // [rsp+20h] [rbp-1D8h] BYREF
  __int64 v59; // [rsp+28h] [rbp-1D0h]
  struct DMMVIDPNSOURCE *v60; // [rsp+30h] [rbp-1C8h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH v61; // [rsp+40h] [rbp-1B8h] BYREF

  if ( !a3 )
  {
    v47 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v47);
  }
  *a3 = 0LL;
  VidPnSourceId = a2->VidPnSourceId;
  v8 = 0LL;
  VidPnTargetId = a2->VidPnTargetId;
  v58 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v60 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(
                                   *(_QWORD *)(Container + 304),
                                   VidPnSourceId);
  if ( !v60 )
  {
    v48 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v48 + 24) = a2->VidPnSourceId;
    WdLogEvent5_WdError(v48);
    LODWORD(v45) = -1071774972;
    goto LABEL_14;
  }
  v13 = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v59 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v13 + 312), VidPnTargetId);
  v16 = (struct DMMVIDPNTARGET *)v59;
  if ( !v59 )
  {
    v49 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v49 + 24) = a2->VidPnTargetId;
    WdLogEvent5_WdError(v49);
    LODWORD(v45) = -1071774971;
    goto LABEL_14;
  }
  if ( DMMVIDPNTOPOLOGY::FindPath(this, VidPnSourceId, VidPnTargetId) )
  {
    v45 = WdLogNewEntry5_WdDmmEvent(v18, v17, v19, v20);
    *(_QWORD *)(v45 + 24) = VidPnSourceId;
    *(_QWORD *)(v45 + 32) = VidPnTargetId;
    *(_QWORD *)(v45 + 40) = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    WdLogEvent5_WdDmmEvent(v45);
    LODWORD(v45) = -1071774957;
    goto LABEL_14;
  }
  v21 = 2LL;
  v22 = a2;
  v23 = &v61;
  do
  {
    v24 = *(_OWORD *)&v22->ContentTransformation.ScalingSupport;
    *(_OWORD *)&v23->VidPnSourceId = *(_OWORD *)&v22->VidPnSourceId;
    v25 = *(_OWORD *)&v22->VisibleFromActiveTLOffset.cy;
    *(_OWORD *)&v23->ContentTransformation.ScalingSupport = v24;
    VidPnTargetColorCoeffDynamicRanges = v22->VidPnTargetColorCoeffDynamicRanges;
    *(_OWORD *)&v23->VisibleFromActiveTLOffset.cy = v25;
    v27 = *(_OWORD *)&v22->Content;
    v23->VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
    v28 = *(_OWORD *)&v22->CopyProtection.OEMCopyProtection[4];
    *(_OWORD *)&v23->Content = v27;
    v29 = *(_OWORD *)&v22->CopyProtection.OEMCopyProtection[20];
    *(_OWORD *)&v23->CopyProtection.OEMCopyProtection[4] = v28;
    v30 = *(_OWORD *)&v22->CopyProtection.OEMCopyProtection[36];
    v22 = (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v22 + 128);
    *(_OWORD *)&v23->CopyProtection.OEMCopyProtection[20] = v29;
    v23 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v23 + 128);
    *(_OWORD *)&v23[-1].GammaRamp.DataSize = v30;
    --v21;
  }
  while ( v21 );
  v31 = a2->ImportanceOrdinal == 255;
  v32 = *(_OWORD *)&v22->ContentTransformation.ScalingSupport;
  *(_OWORD *)&v23->VidPnSourceId = *(_OWORD *)&v22->VidPnSourceId;
  v33 = *(_OWORD *)&v22->VisibleFromActiveTLOffset.cy;
  *(_OWORD *)&v23->ContentTransformation.ScalingSupport = v32;
  v34 = v22->VidPnTargetColorCoeffDynamicRanges;
  *(_OWORD *)&v23->VisibleFromActiveTLOffset.cy = v33;
  v35 = *(_OWORD *)&v22->Content;
  v23->VidPnTargetColorCoeffDynamicRanges = v34;
  v36 = *(_OWORD *)&v22->CopyProtection.OEMCopyProtection[4];
  v37 = *(_QWORD *)&v22->CopyProtection.OEMCopyProtection[20];
  *(_OWORD *)&v23->Content = v35;
  *(_OWORD *)&v23->CopyProtection.OEMCopyProtection[4] = v36;
  *(_QWORD *)&v23->CopyProtection.OEMCopyProtection[20] = v37;
  if ( v31 )
  {
    LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(
                                     this,
                                     &v61.ImportanceOrdinal,
                                     128LL,
                                     v20);
    v45 = LowestAvailImportanceOrdinal;
    if ( LowestAvailImportanceOrdinal < 0 )
    {
      v55 = WdLogNewEntry5_WdTrace(v52, v51, v53, v54);
      *(_QWORD *)(v55 + 24) = this;
      *(_QWORD *)(v55 + 32) = v45;
      goto LABEL_14;
    }
    v16 = (struct DMMVIDPNTARGET *)v59;
  }
  v38 = (DMMVIDPNPRESENTPATH *)operator new(0xD0uLL, 0x4E506456u, PagedPool);
  if ( v38 )
    v38 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v38, v60, v16, &v61);
  auto_ptr<DMMVIDPNPRESENTPATH>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))&v58,
    (__int64 (__fastcall ***)(_QWORD, __int64))v38);
  v8 = v58;
  if ( v58 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(char *))v58 + 7))((char *)v58 + 56) )
    {
      v44 = v8;
      v8 = 0LL;
      LODWORD(v45) = 0;
      *a3 = v44;
    }
    else
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v41, v40, v42, v43);
      v57[3] = a2->VidPnSourceId;
      v57[4] = a2->VidPnTargetId;
      v57[5] = this;
      v57[6] = *((int *)v8 + 16);
      WdLogEvent5_WdDmmEvent(v57);
      LODWORD(v45) = *((_DWORD *)v8 + 16);
    }
  }
  else
  {
    v56 = WdLogNewEntry5_WdLowResource(v39);
    *(_QWORD *)(v56 + 24) = this;
    WdLogEvent5_WdLowResource(v56);
    LODWORD(v45) = -1073741801;
  }
LABEL_14:
  if ( v8 )
    (**(void (__fastcall ***)(struct DMMVIDPNPRESENTPATH *, __int64))v8)(v8, 1LL);
  return (unsigned int)v45;
}
