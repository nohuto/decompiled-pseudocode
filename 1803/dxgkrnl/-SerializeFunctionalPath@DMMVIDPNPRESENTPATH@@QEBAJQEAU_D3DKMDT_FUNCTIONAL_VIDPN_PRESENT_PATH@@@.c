/*
 * XREFs of ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0223204
 * Callers:
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0222AE0 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0044E58 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?Serialize@DMMVIDPNTARGETMODE@@QEBAXQEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C0046660 (-Serialize@DMMVIDPNTARGETMODE@@QEBAXQEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00BEEAC (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SerializeFunctionalPath(
        DMMVIDPNPRESENTPATH *this,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  DMMVIDPNSOURCEMODE *v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  DMMVIDPNTARGETMODE *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  DMMVIDPNPRESENTPATH::Serialize(this, a2);
  v5 = *((_QWORD *)this + 11);
  v6 = *(_QWORD *)(v5 + 104);
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 96));
    v6 = *(_QWORD *)(v5 + 104);
  }
  v7 = *(DMMVIDPNSOURCEMODE **)(v6 + 144);
  v14 = v6;
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v8 + 24) = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    *(_QWORD *)(v8 + 32) = this;
    WdLogEvent5_WdError(v8);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v14, 0LL);
    return 1075708679LL;
  }
  DMMVIDPNSOURCEMODE::Serialize(v7, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)&a2[1]);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v14, 0LL);
  v10 = *((_QWORD *)this + 12);
  v11 = *(_QWORD *)(v10 + 104);
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 96));
    v11 = *(_QWORD *)(v10 + 104);
  }
  v12 = *(DMMVIDPNTARGETMODE **)(v11 + 144);
  v15 = v11;
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v13 + 24) = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    *(_QWORD *)(v13 + 32) = this;
    WdLogEvent5_WdError(v13);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v15, 0LL);
    return 1075708679LL;
  }
  DMMVIDPNTARGETMODE::Serialize(
    v12,
    (struct _D3DKMDT_VIDPN_TARGET_MODE *const)&a2[1].VisibleFromActiveBROffset.cy,
    (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)&a2[1].CopyProtection.OEMCopyProtection[36],
    (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)&a2[1].CopyProtection.OEMCopyProtection[40]);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v15, 0LL);
  *(_WORD *)&a2[1].CopyProtection.OEMCopyProtection[44] = *((_WORD *)this + 54);
  return 0LL;
}
