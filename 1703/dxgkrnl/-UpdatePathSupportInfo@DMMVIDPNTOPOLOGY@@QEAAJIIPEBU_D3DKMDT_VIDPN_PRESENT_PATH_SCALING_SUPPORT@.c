/*
 * XREFs of ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00E091C
 * Callers:
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C009D1E0 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 * Callees:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0009060 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00090A4 (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0009434 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0009544 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C00E1680 (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::UpdatePathSupportInfo(
        DMMVIDPNTOPOLOGY *this,
        __int64 a2,
        __int64 a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *a4,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *a5,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *a6)
{
  __int64 v7; // r15
  DMMVIDPNTOPOLOGY *v8; // rbp
  __int64 v9; // r12
  DMMVIDPNTOPOLOGY *v10; // rbx
  char *v11; // rbx
  bool IsSourceAndTargetPinned; // al
  __int64 v13; // r8
  __int64 v14; // r9
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  int v33; // [rsp+50h] [rbp+8h] BYREF

  v7 = (unsigned int)a3;
  v8 = this;
  v9 = (unsigned int)a2;
  if ( *((_BYTE *)this + 76) <= 3u )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( (*((_BYTE *)v8 + 78) & 8) == 0 )
  {
    v28 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v28 + 24) = v8;
    WdLogEvent5_WdError(v28);
    return 3221225506LL;
  }
  v10 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v8 + 3);
  if ( v10 == (DMMVIDPNTOPOLOGY *)((char *)v8 + 24) )
  {
    v11 = 0LL;
  }
  else
  {
    v11 = (char *)v10 - 8;
    if ( !v11 )
    {
LABEL_34:
      v32 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
      v32[3] = v9;
      v32[4] = v7;
      v32[5] = v8;
      WdLogEvent5_WdError(v32);
      return 3223192359LL;
    }
    do
    {
      if ( *(_DWORD *)(*((_QWORD *)v11 + 11) + 24LL) == (_DWORD)v9
        && *(_DWORD *)(*((_QWORD *)v11 + 12) + 24LL) == (_DWORD)v7 )
      {
        break;
      }
      this = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v11 + 1);
      v11 = (char *)this - 8;
      if ( this == (DMMVIDPNTOPOLOGY *)((char *)v8 + 24) )
        v11 = 0LL;
    }
    while ( v11 );
  }
  if ( !v11 )
    goto LABEL_34;
  IsSourceAndTargetPinned = DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned((DMMVIDPNPRESENTPATH *)v11, a2);
  v15 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v11;
  if ( IsSourceAndTargetPinned )
  {
    if ( DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch((DMMVIDPNPRESENTPATH *)v11) )
    {
      if ( VIDPN_MGR::_bShouldLogOn1277688 && (*(_DWORD *)a4 & 6) != 0 )
      {
        v26 = WdLogNewEntry5_WdWarning(v17, v16, v13, v14);
        *(_QWORD *)(v26 + 24) = v9;
        *(_QWORD *)(v26 + 32) = v7;
        WdLogEvent5_WdWarning(v26);
        VIDPN_MGR::_bShouldLogOn1277688 = 0;
      }
      v33 = 1;
      v18 = (const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)&v33;
      v15 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v11;
      goto LABEL_13;
    }
    v15 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v11;
  }
  v18 = a4;
LABEL_13:
  DMMVIDPNPRESENTPATH::SetScalingSupport(v15, v18, v13, v14);
  DMMVIDPNPRESENTPATH::SetRotationSupport((DMMVIDPNPRESENTPATH *)v11, a5, v19, v20);
  v24 = (__int64)*a6;
  *((_DWORD *)v11 + 42) = v24;
  if ( *((_QWORD *)v8 + 17) <= 3uLL )
  {
    v29 = WdLogNewEntry5_WdAssertion(v24, v21, v22, v23);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( *(_QWORD *)(*((_QWORD *)v8 + 18) + 24LL) != 255LL )
  {
    if ( *((_QWORD *)v8 + 17) <= 3uLL )
    {
      v30 = WdLogNewEntry5_WdAssertion(v24, v21, v22, v23);
      WdLogEvent5_WdAssertion(v30);
    }
    --*(_QWORD *)(*((_QWORD *)v8 + 18) + 24LL);
  }
  if ( *((_QWORD *)v8 + 17) <= 3uLL )
  {
    v31 = WdLogNewEntry5_WdAssertion(v24, v21, v22, v23);
    WdLogEvent5_WdAssertion(v31);
  }
  if ( !*(_QWORD *)(*((_QWORD *)v8 + 18) + 24LL) )
    ProtectableFromChange::DisallowModifyingAction((DMMVIDPNTOPOLOGY *)((char *)v8 + 56), 3u);
  return 0LL;
}
