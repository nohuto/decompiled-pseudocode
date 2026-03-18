/*
 * XREFs of ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A59E8
 * Callers:
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A4B78 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 * Callees:
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00041F8 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Serialize@DMMVIDPNTARGETMODE@@QEBAXQEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C000B7F4 (-Serialize@DMMVIDPNTARGETMODE@@QEBAXQEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A5CC0 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SerializeFunctionalPath(
        DMMVIDPNPRESENTPATH *this,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  DMMVIDPNSOURCEMODE *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  DMMVIDPNTARGETMODE *v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  DMMVIDPNPRESENTPATH::Serialize(this, a2);
  v4 = *((_QWORD *)this + 11);
  v5 = *(_QWORD *)(v4 + 104);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 96));
    v5 = *(_QWORD *)(v4 + 104);
  }
  v6 = *(DMMVIDPNSOURCEMODE **)(v5 + 144);
  v14 = v5;
  if ( v6 )
  {
    DMMVIDPNSOURCEMODE::Serialize(v6, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)&a2[1]);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v14, 0LL);
    v7 = *((_QWORD *)this + 12);
    v8 = *(_QWORD *)(v7 + 104);
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 96));
      v8 = *(_QWORD *)(v7 + 104);
    }
    v9 = *(DMMVIDPNTARGETMODE **)(v8 + 144);
    v15 = v8;
    if ( v9 )
    {
      DMMVIDPNTARGETMODE::Serialize(
        v9,
        (struct _D3DKMDT_VIDPN_TARGET_MODE *const)&a2[1].VisibleFromActiveBROffset.cy,
        (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)&a2[1].CopyProtection.OEMCopyProtection[36],
        (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)&a2[1].CopyProtection.OEMCopyProtection[40]);
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v15, 0LL);
      *(_WORD *)&a2[1].CopyProtection.OEMCopyProtection[44] = *((_WORD *)this + 54);
      return 0LL;
    }
    v13 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v13 + 24) = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    *(_QWORD *)(v13 + 32) = this;
    WdLogEvent5_WdError(v13);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v15, 0LL);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v12 + 24) = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    *(_QWORD *)(v12 + 32) = this;
    WdLogEvent5_WdError(v12);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v14, 0LL);
  }
  return 1075708679LL;
}
