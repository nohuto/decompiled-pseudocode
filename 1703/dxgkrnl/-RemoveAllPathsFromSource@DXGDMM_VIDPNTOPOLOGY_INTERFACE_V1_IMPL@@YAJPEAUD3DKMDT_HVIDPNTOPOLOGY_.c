/*
 * XREFs of ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C01D8F40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000CC00 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E0178 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E01DC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00E0C78 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C00E54AC (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemoveAllPathsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  ApplyPermissionWithinThisScope *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  D3DKMDT_HVIDPN Container; // r14
  __int64 v30; // rbx
  __int64 v31; // rax
  DXGADAPTER *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  ADAPTER_DISPLAY *v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _QWORD *v47; // rax
  __int64 v49; // [rsp+20h] [rbp-50h]
  __int64 v50; // [rsp+20h] [rbp-50h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v51; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v52[24]; // [rsp+58h] [rbp-18h] BYREF

  v3 = (__int64)this;
  v4 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6025);
  v5 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v3);
  v10 = v5;
  if ( v5 )
  {
    LOBYTE(v7) = *(_BYTE *)(v5 + 76);
    if ( ((unsigned __int16)((2 << v7) - 1) & *(_WORD *)(v5 + 78)) != 0 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v14);
    }
    LOBYTE(v8) = 2;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)&v51,
      v10 + 56,
      v8,
      v9,
      v49,
      *(_QWORD *)(v10 + 40));
    v15 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v10, v4);
    v3 = v15;
    if ( v15 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
      v24 = (ApplyPermissionWithinThisScope *)&v51;
      v20[3] = v10;
      v20[4] = v4;
      v20[5] = v3;
LABEL_22:
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(v24, v21, v22, v23);
      goto LABEL_25;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)&v51,
      v16,
      v18,
      v19);
    if ( *(_QWORD *)(v10 + 24) != v10 + 24 )
    {
      Container = (D3DKMDT_HVIDPN)ContainedBy<DMMVIDPN>::GetContainer(v10 + 160);
      v30 = *((_QWORD *)Container + 6);
      if ( !*(_QWORD *)(v30 + 8) )
      {
        v31 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
        WdLogEvent5_WdAssertion(v31);
      }
      v32 = *(DXGADAPTER **)(*(_QWORD *)(v30 + 8) + 16LL);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v32) )
      {
        v37 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
        WdLogEvent5_WdAssertion(v37);
      }
      LOBYTE(v34) = *(_BYTE *)(v10 + 76);
      if ( ((unsigned __int16)((2 << v34) - 1) & *(_WORD *)(v10 + 78)) != 0 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
        WdLogEvent5_WdAssertion(v38);
      }
      LOBYTE(v35) = 3;
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v52,
        v10 + 56,
        v35,
        v36,
        v50,
        *(_QWORD *)(v10 + 40));
      *(_QWORD *)&v51.EnumPivotType = 0LL;
      *(_QWORD *)&v51.EnumPivot.VidPnTargetId = 0LL;
      if ( Container == (D3DKMDT_HVIDPN)-88LL )
        v51.hConstrainingVidPn = 0LL;
      else
        v51.hConstrainingVidPn = Container;
      v41 = (ADAPTER_DISPLAY *)*((_QWORD *)v32 + 285);
      v51.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
      v51.EnumPivot.VidPnSourceId = -1;
      v51.EnumPivot.VidPnTargetId = -1;
      v42 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v41, &v51, v39, v40);
      v3 = v42;
      if ( v42 < 0 )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43);
        v47[3] = Container;
        v47[4] = v4;
        v47[5] = v3;
        WdLogEvent5_WdError(v47);
        v24 = (ApplyPermissionWithinThisScope *)v52;
        goto LABEL_22;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
        (ApplyPermissionWithinThisScope *)v52,
        v43,
        v45,
        v46);
    }
    LODWORD(v3) = 0;
    goto LABEL_25;
  }
  v11 = WdLogNewEntry5_WdError(v7, v6);
  *(_QWORD *)(v11 + 24) = v3;
  WdLogEvent5_WdError(v11);
  LODWORD(v3) = -1071774976;
LABEL_25:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 6025);
  return (unsigned int)v3;
}
