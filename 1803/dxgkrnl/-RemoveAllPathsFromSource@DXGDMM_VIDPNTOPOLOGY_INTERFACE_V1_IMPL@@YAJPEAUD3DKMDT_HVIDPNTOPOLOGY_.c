/*
 * XREFs of ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C021C200
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000733C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00BB648 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00BB6AC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C00E08DC (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C021EFE8 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
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
  unsigned __int8 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  ApplyPermissionWithinThisScope *v17; // rcx
  D3DKMDT_HVIDPN Container; // r14
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  DXGADAPTER *v22; // rbx
  __int64 v23; // rcx
  unsigned __int8 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  ADAPTER_DISPLAY *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v34; // [rsp+20h] [rbp-60h]
  __int64 v35; // [rsp+20h] [rbp-60h]
  int v36; // [rsp+40h] [rbp-40h] BYREF
  __int64 v37; // [rsp+48h] [rbp-38h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v38; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v39[24]; // [rsp+68h] [rbp-18h] BYREF

  v37 = 0LL;
  v3 = (__int64)this;
  v4 = (unsigned int)a2;
  v36 = 6025;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6025);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 6025);
  v5 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v3);
  v8 = v5;
  if ( v5 )
  {
    LOBYTE(v6) = *(_BYTE *)(v5 + 76);
    if ( ((unsigned __int16)((2 << v6) - 1) & *(_WORD *)(v5 + 78)) != 0 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v10);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)&v38,
      v8 + 56,
      2u,
      v7,
      v34,
      *(_QWORD *)(v8 + 40));
    v11 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v8, v4);
    v3 = v11;
    if ( v11 < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
      v17 = (ApplyPermissionWithinThisScope *)&v38;
      v16[3] = v8;
      v16[4] = v4;
      v16[5] = v3;
LABEL_22:
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(v17);
      goto LABEL_25;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)&v38);
    if ( *(_QWORD *)(v8 + 24) != v8 + 24 )
    {
      Container = (D3DKMDT_HVIDPN)ContainedBy<DMMVIDPN>::GetContainer(v8 + 160);
      v19 = *((_QWORD *)Container + 6);
      v20 = *(_QWORD *)(v19 + 8);
      if ( !v20 )
      {
        v21 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v21);
        v20 = *(_QWORD *)(v19 + 8);
      }
      v22 = *(DXGADAPTER **)(v20 + 16);
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
        (__int64)v39,
        v8 + 56,
        3u,
        v24,
        v35,
        *(_QWORD *)(v8 + 40));
      memset(&v38, 0, sizeof(v38));
      if ( Container == (D3DKMDT_HVIDPN)-88LL )
        v38.hConstrainingVidPn = 0LL;
      else
        v38.hConstrainingVidPn = Container;
      v27 = (ADAPTER_DISPLAY *)*((_QWORD *)v22 + 307);
      v38.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
      v38.EnumPivot.VidPnSourceId = -1;
      v38.EnumPivot.VidPnTargetId = -1;
      v28 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v27, &v38);
      v3 = v28;
      if ( v28 < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v29);
        v30[3] = Container;
        v30[4] = v4;
        v30[5] = v3;
        WdLogEvent5_WdError(v30);
        v17 = (ApplyPermissionWithinThisScope *)v39;
        goto LABEL_22;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v39);
    }
    LODWORD(v3) = 0;
    goto LABEL_25;
  }
  v9 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v9 + 24) = v3;
  WdLogEvent5_WdError(v9);
  LODWORD(v3) = -1071774976;
LABEL_25:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v36);
  return (unsigned int)v3;
}
