/*
 * XREFs of ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C01F2100
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00A4228 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A56CC (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5730 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C00AA3FC (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemoveAllPathsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  ApplyPermissionWithinThisScope *v17; // rcx
  __int64 v18; // rcx
  D3DKMDT_HVIDPN Container; // r14
  __int64 v20; // rbx
  __int64 v21; // rax
  DXGADAPTER *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  ADAPTER_DISPLAY *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v32; // [rsp+20h] [rbp-50h]
  __int64 v33; // [rsp+20h] [rbp-50h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v34; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v35[24]; // [rsp+58h] [rbp-18h] BYREF

  v3 = (__int64)this;
  v4 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6025);
  v5 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v3);
  v8 = v5;
  if ( v5 )
  {
    LOBYTE(v6) = *(_BYTE *)(v5 + 76);
    if ( ((unsigned __int16)((2 << v6) - 1) & *(_WORD *)(v5 + 78)) != 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v12);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)&v34,
      v8 + 56,
      2u,
      v7,
      v32,
      *(_QWORD *)(v8 + 40));
    v13 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v8, v4);
    v3 = v13;
    if ( v13 < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
      v17 = (ApplyPermissionWithinThisScope *)&v34;
      v16[3] = v8;
      v16[4] = v4;
      v16[5] = v3;
LABEL_22:
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(v17);
      goto LABEL_25;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)&v34);
    if ( *(_QWORD *)(v8 + 24) != v8 + 24 )
    {
      Container = (D3DKMDT_HVIDPN)ContainedBy<DMMVIDPN>::GetContainer(v8 + 160);
      v20 = *((_QWORD *)Container + 6);
      if ( !*(_QWORD *)(v20 + 8) )
      {
        v21 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v21);
      }
      v22 = *(DXGADAPTER **)(*(_QWORD *)(v20 + 8) + 16LL);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v22) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v25);
      }
      LOBYTE(v23) = *(_BYTE *)(v8 + 76);
      if ( ((unsigned __int16)((2 << v23) - 1) & *(_WORD *)(v8 + 78)) != 0 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v26);
      }
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v35,
        v8 + 56,
        3u,
        v24,
        v33,
        *(_QWORD *)(v8 + 40));
      *(_QWORD *)&v34.EnumPivotType = 0LL;
      *(_QWORD *)&v34.EnumPivot.VidPnTargetId = 0LL;
      if ( Container == (D3DKMDT_HVIDPN)-88LL )
        v34.hConstrainingVidPn = 0LL;
      else
        v34.hConstrainingVidPn = Container;
      v27 = (ADAPTER_DISPLAY *)*((_QWORD *)v22 + 288);
      v34.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
      v34.EnumPivot.VidPnSourceId = -1;
      v34.EnumPivot.VidPnTargetId = -1;
      v28 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v27, &v34);
      v3 = v28;
      if ( v28 < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v29);
        v30[3] = Container;
        v30[4] = v4;
        v30[5] = v3;
        WdLogEvent5_WdError(v30);
        v17 = (ApplyPermissionWithinThisScope *)v35;
        goto LABEL_22;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v35);
    }
    LODWORD(v3) = 0;
    goto LABEL_25;
  }
  v9 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v9 + 24) = v3;
  WdLogEvent5_WdError(v9);
  LODWORD(v3) = -1071774976;
LABEL_25:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, 6025);
  return (unsigned int)v3;
}
