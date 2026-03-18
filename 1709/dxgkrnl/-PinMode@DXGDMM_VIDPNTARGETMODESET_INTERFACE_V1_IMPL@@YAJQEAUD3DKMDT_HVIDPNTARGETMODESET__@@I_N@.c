/*
 * XREFs of ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C00D53F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000BA08 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00A3448 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00A7ED8 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::PinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r14
  __int64 v4; // rbp
  DMMVIDPNTARGETMODESET *v6; // rax
  __int64 v7; // rcx
  struct DMMVIDPNTARGETMODESET *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rbx
  __int64 Container; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  v3 = a3;
  v4 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6014);
  v6 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v8 = v6;
  if ( v6 )
  {
    v11 = DMMVIDPNTARGETMODESET::PinMode(v6, v4);
    if ( v11 < 0 )
    {
      v18 = WdLogNewEntry5_WdTrace(v10, v9);
      *(_QWORD *)(v18 + 24) = v4;
      *(_QWORD *)(v18 + 32) = this;
    }
    else
    {
      v12 = *((_QWORD *)v8 + 14);
      if ( !v12 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v19);
      }
      if ( !*(_QWORD *)(v12 + 40) )
      {
        v20 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v20);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v12 + 40) + 64LL);
      v11 = VIDPN_MGR::PinVidPnTargetMode(*(VIDPN_MGR **)(Container + 48), v8, v4, v3);
      if ( v11 < 0 )
      {
        v21 = WdLogNewEntry5_WdDmmEvent(v14);
        *(_QWORD *)(v21 + 24) = v4;
        *(_QWORD *)(v21 + 32) = this;
        WdLogEvent5_WdDmmEvent(v21);
      }
      else
      {
        v11 = 0;
      }
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    v11 = -1071774967;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, 6014);
  return (unsigned int)v11;
}
