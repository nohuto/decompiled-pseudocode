/*
 * XREFs of ?PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@Z @ 0x1C00D4280
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C000BBA4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00A7FC0 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::PinMode(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r14
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  struct DMMVIDPNSOURCEMODESET *v8; // rsi
  __int64 v9; // rbx
  __int64 Container; // rax
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v3 = a3;
  v4 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6007);
  v6 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  v8 = (struct DMMVIDPNSOURCEMODESET *)v6;
  if ( v6 )
  {
    v9 = *(_QWORD *)(v6 + 112);
    if ( !v9 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v16);
    }
    if ( !*(_QWORD *)(v9 + 40) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v17);
    }
    Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v9 + 40) + 64LL);
    v12 = VIDPN_MGR::PinVidPnSourceMode(*(VIDPN_MGR **)(Container + 48), v8, v4, v3);
    if ( v12 < 0 )
    {
      v18 = WdLogNewEntry5_WdDmmEvent(v11);
      *(_QWORD *)(v18 + 24) = v4;
      *(_QWORD *)(v18 + 32) = this;
      WdLogEvent5_WdDmmEvent(v18);
    }
    else
    {
      v12 = 0;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    v12 = -1071774968;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v13, 6007);
  return (unsigned int)v12;
}
