/*
 * XREFs of ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00A3674
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A7C5C (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01F3B80 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0005FA4 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000A36C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C000A3B4 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C000B628 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000EA34 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C01705B8 (-GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTA.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::CreateNewPath(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        struct DMMVIDPNPRESENTPATH **a3)
{
  __int64 VidPnSourceId; // r14
  __int64 VidPnTargetId; // rbp
  __int64 Container; // rax
  __int64 v9; // rcx
  struct DMMVIDPNSOURCE *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  struct DMMVIDPNTARGET *v13; // rbx
  __int64 v14; // rdx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v15; // rcx
  const struct _D3DKMDT_VIDPN_PRESENT_PATH *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  bool v24; // zf
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  DMMVIDPNPRESENTPATH *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  int LowestAvailImportanceOrdinal; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 (__fastcall ***v44)(_QWORD, __int64); // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v45; // [rsp+28h] [rbp-1C0h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH v46; // [rsp+30h] [rbp-1B8h] BYREF

  if ( !a3 )
  {
    v35 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v35);
  }
  *a3 = 0LL;
  VidPnSourceId = a2->VidPnSourceId;
  VidPnTargetId = a2->VidPnTargetId;
  v44 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v10 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), VidPnSourceId);
  if ( v10 )
  {
    v11 = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    v45 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v11 + 312), VidPnTargetId);
    v13 = (struct DMMVIDPNTARGET *)v45;
    if ( v45 )
    {
      if ( DMMVIDPNTOPOLOGY::FindPath(this, VidPnSourceId, VidPnTargetId) )
      {
        v33 = WdLogNewEntry5_WdDmmEvent();
        *(_QWORD *)(v33 + 24) = VidPnSourceId;
        *(_QWORD *)(v33 + 32) = VidPnTargetId;
        *(_QWORD *)(v33 + 40) = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
        WdLogEvent5_WdDmmEvent(v33);
        LODWORD(v33) = -1071774957;
      }
      else
      {
        v14 = 2LL;
        v15 = &v46;
        v16 = a2;
        do
        {
          v17 = *(_OWORD *)&v16->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v15->VidPnSourceId = *(_OWORD *)&v16->VidPnSourceId;
          v18 = *(_OWORD *)&v16->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v15->ContentTransformation.ScalingSupport = v17;
          VidPnTargetColorCoeffDynamicRanges = v16->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v15->VisibleFromActiveTLOffset.cy = v18;
          v20 = *(_OWORD *)&v16->Content;
          v15->VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
          v21 = *(_OWORD *)&v16->CopyProtection.OEMCopyProtection[4];
          *(_OWORD *)&v15->Content = v20;
          v22 = *(_OWORD *)&v16->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v15->CopyProtection.OEMCopyProtection[4] = v21;
          v23 = *(_OWORD *)&v16->CopyProtection.OEMCopyProtection[36];
          v16 = (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v16 + 128);
          *(_OWORD *)&v15->CopyProtection.OEMCopyProtection[20] = v22;
          v15 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v15 + 128);
          *(_OWORD *)&v15[-1].GammaRamp.DataSize = v23;
          --v14;
        }
        while ( v14 );
        v24 = a2->ImportanceOrdinal == 255;
        v25 = *(_OWORD *)&v16->ContentTransformation.ScalingSupport;
        *(_OWORD *)&v15->VidPnSourceId = *(_OWORD *)&v16->VidPnSourceId;
        v26 = *(_OWORD *)&v16->VisibleFromActiveTLOffset.cy;
        *(_OWORD *)&v15->ContentTransformation.ScalingSupport = v25;
        v27 = v16->VidPnTargetColorCoeffDynamicRanges;
        *(_OWORD *)&v15->VisibleFromActiveTLOffset.cy = v26;
        v28 = *(_OWORD *)&v16->Content;
        v15->VidPnTargetColorCoeffDynamicRanges = v27;
        v29 = *(_OWORD *)&v16->CopyProtection.OEMCopyProtection[4];
        v30 = *(_QWORD *)&v16->CopyProtection.OEMCopyProtection[20];
        *(_OWORD *)&v15->Content = v28;
        *(_OWORD *)&v15->CopyProtection.OEMCopyProtection[4] = v29;
        *(_QWORD *)&v15->CopyProtection.OEMCopyProtection[20] = v30;
        if ( v24 )
        {
          LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(this, &v46.ImportanceOrdinal);
          v33 = LowestAvailImportanceOrdinal;
          if ( LowestAvailImportanceOrdinal < 0 )
          {
            v41 = WdLogNewEntry5_WdTrace(v40, v39);
            *(_QWORD *)(v41 + 24) = this;
            *(_QWORD *)(v41 + 32) = v33;
            goto LABEL_14;
          }
          v13 = (struct DMMVIDPNTARGET *)v45;
        }
        v31 = (DMMVIDPNPRESENTPATH *)operator new(0xC0uLL, 0x4E506456u, PagedPool);
        if ( v31 )
          v31 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v31, v10, v13, &v46);
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(&v44, (__int64 (__fastcall ***)(_QWORD, __int64))v31);
        v33 = (__int64)v44;
        if ( v44 )
        {
          if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64)))*v44[7])(v44 + 7) )
          {
            v44 = 0LL;
            *a3 = (struct DMMVIDPNPRESENTPATH *)v33;
            LODWORD(v33) = 0;
          }
          else
          {
            v43 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
            v43[3] = a2->VidPnSourceId;
            v43[4] = a2->VidPnTargetId;
            v43[5] = this;
            v43[6] = *(int *)(v33 + 64);
            WdLogEvent5_WdDmmEvent(v43);
            LODWORD(v33) = *(_DWORD *)(v33 + 64);
          }
        }
        else
        {
          v42 = WdLogNewEntry5_WdLowResource(v32);
          *(_QWORD *)(v42 + 24) = this;
          WdLogEvent5_WdLowResource(v42);
          LODWORD(v33) = -1073741801;
        }
      }
    }
    else
    {
      v37 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v37 + 24) = a2->VidPnTargetId;
      WdLogEvent5_WdError(v37);
      LODWORD(v33) = -1071774971;
    }
  }
  else
  {
    v36 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v36 + 24) = a2->VidPnSourceId;
    WdLogEvent5_WdError(v36);
    LODWORD(v33) = -1071774972;
  }
LABEL_14:
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v44);
  return (unsigned int)v33;
}
