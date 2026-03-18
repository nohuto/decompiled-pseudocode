/*
 * XREFs of ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00DF258
 * Callers:
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00DE754 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 * Callees:
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0007480 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Serialize@DMMVIDPNTARGETMODE@@QEBAXQEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C000CF5C (-Serialize@DMMVIDPNTARGETMODE@@QEBAXQEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00DF3C8 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SerializeFunctionalPath(
        DMMVIDPNPRESENTPATH *this,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  DMMVIDPNSOURCEMODE *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  DMMVIDPNTARGETMODE *v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF
  __int64 v21; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  DMMVIDPNPRESENTPATH::Serialize(this, a2);
  v9 = *((_QWORD *)this + 11);
  v10 = *(_QWORD *)(v9 + 104);
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 96));
    v10 = *(_QWORD *)(v9 + 104);
  }
  v11 = *(DMMVIDPNSOURCEMODE **)(v10 + 144);
  v20 = v10;
  if ( v11 )
  {
    DMMVIDPNSOURCEMODE::Serialize(v11, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)&a2[1], v7, v8);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v20, 0LL);
    v13 = *((_QWORD *)this + 12);
    v14 = *(_QWORD *)(v13 + 104);
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 96));
      v14 = *(_QWORD *)(v13 + 104);
    }
    v15 = *(DMMVIDPNTARGETMODE **)(v14 + 144);
    v21 = v14;
    if ( v15 )
    {
      DMMVIDPNTARGETMODE::Serialize(
        v15,
        (struct _D3DKMDT_VIDPN_TARGET_MODE *const)&a2[1].VisibleFromActiveBROffset.cy,
        (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)&a2[1].CopyProtection.OEMCopyProtection[36],
        (enum D3DDDI_COLOR_SPACE_TYPE *)&a2[1].CopyProtection.OEMCopyProtection[40]);
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v21, 0LL);
      *(_WORD *)&a2[1].CopyProtection.OEMCopyProtection[44] = *((_WORD *)this + 54);
      return 0LL;
    }
    v19 = WdLogNewEntry5_WdError(0LL, v12);
    *(_QWORD *)(v19 + 24) = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    *(_QWORD *)(v19 + 32) = this;
    WdLogEvent5_WdError(v19);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v21, 0LL);
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(0LL, v6);
    *(_QWORD *)(v18 + 24) = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    *(_QWORD *)(v18 + 32) = this;
    WdLogEvent5_WdError(v18);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v20, 0LL);
  }
  return 1075708679LL;
}
