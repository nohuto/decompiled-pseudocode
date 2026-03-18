/*
 * XREFs of ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C021EA2C
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0211124 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C021FE60 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00032EC (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0003318 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00035B0 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0003F5C (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0045590 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C00BC1A8 (-GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTA.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::CreateNewPath(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        struct DMMVIDPNPRESENTPATH **a3)
{
  __int64 v6; // rax
  __int64 VidPnSourceId; // r14
  __int64 VidPnTargetId; // rbp
  __int64 Container; // rax
  __int64 v10; // rcx
  struct DMMVIDPNSOURCE *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  struct DMMVIDPNTARGET *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v20; // rcx
  const struct _D3DKMDT_VIDPN_PRESENT_PATH *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  bool v29; // zf
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // rax
  int LowestAvailImportanceOrdinal; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  DMMVIDPNPRESENTPATH *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 (__fastcall ***v48)(_QWORD, __int64); // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v49; // [rsp+28h] [rbp-1C0h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH v50; // [rsp+30h] [rbp-1B8h] BYREF

  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  *a3 = 0LL;
  VidPnSourceId = a2->VidPnSourceId;
  VidPnTargetId = a2->VidPnTargetId;
  v48 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v11 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), VidPnSourceId);
  if ( v11 )
  {
    v14 = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    v49 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v14 + 312), VidPnTargetId);
    v16 = (struct DMMVIDPNTARGET *)v49;
    if ( v49 )
    {
      if ( DMMVIDPNTOPOLOGY::FindPath(this, VidPnSourceId, VidPnTargetId) )
      {
        v13 = WdLogNewEntry5_WdDmmEvent(v18);
        *(_QWORD *)(v13 + 24) = VidPnSourceId;
        *(_QWORD *)(v13 + 32) = VidPnTargetId;
        *(_QWORD *)(v13 + 40) = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
        WdLogEvent5_WdDmmEvent(v13);
        LODWORD(v13) = -1071774957;
      }
      else
      {
        v19 = 2LL;
        v20 = &v50;
        v21 = a2;
        do
        {
          v22 = *(_OWORD *)&v21->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v20->VidPnSourceId = *(_OWORD *)&v21->VidPnSourceId;
          v23 = *(_OWORD *)&v21->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v20->ContentTransformation.ScalingSupport = v22;
          VidPnTargetColorCoeffDynamicRanges = v21->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v20->VisibleFromActiveTLOffset.cy = v23;
          v25 = *(_OWORD *)&v21->Content;
          v20->VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
          v26 = *(_OWORD *)&v21->CopyProtection.OEMCopyProtection[4];
          *(_OWORD *)&v20->Content = v25;
          v27 = *(_OWORD *)&v21->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v20->CopyProtection.OEMCopyProtection[4] = v26;
          v28 = *(_OWORD *)&v21->CopyProtection.OEMCopyProtection[36];
          v21 = (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v21 + 128);
          *(_OWORD *)&v20->CopyProtection.OEMCopyProtection[20] = v27;
          v20 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v20 + 128);
          *(_OWORD *)&v20[-1].GammaRamp.DataSize = v28;
          --v19;
        }
        while ( v19 );
        v29 = a2->ImportanceOrdinal == 255;
        v30 = *(_OWORD *)&v21->ContentTransformation.ScalingSupport;
        *(_OWORD *)&v20->VidPnSourceId = *(_OWORD *)&v21->VidPnSourceId;
        v31 = *(_OWORD *)&v21->VisibleFromActiveTLOffset.cy;
        *(_OWORD *)&v20->ContentTransformation.ScalingSupport = v30;
        v32 = v21->VidPnTargetColorCoeffDynamicRanges;
        *(_OWORD *)&v20->VisibleFromActiveTLOffset.cy = v31;
        v33 = *(_OWORD *)&v21->Content;
        v20->VidPnTargetColorCoeffDynamicRanges = v32;
        v34 = *(_OWORD *)&v21->CopyProtection.OEMCopyProtection[4];
        v35 = *(_QWORD *)&v21->CopyProtection.OEMCopyProtection[20];
        *(_OWORD *)&v20->Content = v33;
        *(_OWORD *)&v20->CopyProtection.OEMCopyProtection[4] = v34;
        *(_QWORD *)&v20->CopyProtection.OEMCopyProtection[20] = v35;
        if ( v29 )
        {
          LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(this, &v50.ImportanceOrdinal);
          v13 = LowestAvailImportanceOrdinal;
          if ( LowestAvailImportanceOrdinal < 0 )
          {
            v41 = WdLogNewEntry5_WdTrace(v38, v37, v39, v40);
            *(_QWORD *)(v41 + 24) = this;
            *(_QWORD *)(v41 + 32) = v13;
            goto LABEL_22;
          }
          v16 = (struct DMMVIDPNTARGET *)v49;
        }
        v42 = (DMMVIDPNPRESENTPATH *)operator new[](0xC0uLL, 0x4E506456u, PagedPool);
        if ( v42 )
          v42 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v42, v11, v16, &v50);
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(&v48, (__int64 (__fastcall ***)(_QWORD, __int64))v42);
        v13 = (__int64)v48;
        if ( v48 )
        {
          if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64)))*v48[7])(v48 + 7) )
          {
            v48 = 0LL;
            *a3 = (struct DMMVIDPNPRESENTPATH *)v13;
            LODWORD(v13) = 0;
          }
          else
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v45);
            v46[3] = a2->VidPnSourceId;
            v46[4] = a2->VidPnTargetId;
            v46[5] = this;
            v46[6] = *(int *)(v13 + 64);
            WdLogEvent5_WdDmmEvent(v46);
            LODWORD(v13) = *(_DWORD *)(v13 + 64);
          }
        }
        else
        {
          v44 = WdLogNewEntry5_WdLowResource(v43);
          *(_QWORD *)(v44 + 24) = this;
          WdLogEvent5_WdLowResource(v44);
          LODWORD(v13) = -1073741801;
        }
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v17 + 24) = a2->VidPnTargetId;
      WdLogEvent5_WdError(v17);
      LODWORD(v13) = -1071774971;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = a2->VidPnSourceId;
    WdLogEvent5_WdError(v12);
    LODWORD(v13) = -1071774972;
  }
LABEL_22:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>(&v48);
  return (unsigned int)v13;
}
