/*
 * XREFs of ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00A3CDC
 * Callers:
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00F26B0 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 * Callees:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00062DC (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C0006320 (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000669C (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00067AC (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C00A62A4 (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::UpdatePathSupportInfo(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned int a3,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *a4,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *a5,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *a6)
{
  __int64 v7; // r15
  DMMVIDPNTOPOLOGY *v8; // rbp
  __int64 v9; // r12
  DMMVIDPNTOPOLOGY *v10; // rbx
  char *v11; // rbx
  bool IsSourceAndTargetPinned; // al
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v27; // [rsp+50h] [rbp+8h] BYREF

  v7 = a3;
  v8 = this;
  v9 = a2;
  if ( *((_BYTE *)this + 76) <= 3u )
  {
    v21 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( (*((_BYTE *)v8 + 78) & 8) == 0 )
  {
    v22 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v22 + 24) = v8;
    WdLogEvent5_WdError(v22);
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
      v26 = (_QWORD *)WdLogNewEntry5_WdError(this);
      v26[3] = v9;
      v26[4] = v7;
      v26[5] = v8;
      WdLogEvent5_WdError(v26);
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
  IsSourceAndTargetPinned = DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned((DMMVIDPNPRESENTPATH *)v11);
  v13 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v11;
  if ( IsSourceAndTargetPinned )
  {
    if ( DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch((DMMVIDPNPRESENTPATH *)v11) )
    {
      if ( VIDPN_MGR::_bShouldLogOn1277688 && (*(_DWORD *)a4 & 6) != 0 )
      {
        v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
        *(_QWORD *)(v18 + 24) = v9;
        *(_QWORD *)(v18 + 32) = v7;
        WdLogEvent5_WdWarning(v18);
        VIDPN_MGR::_bShouldLogOn1277688 = 0;
      }
      v27 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)1;
      v17 = &v27;
      v13 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v11;
      goto LABEL_17;
    }
    v13 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v11;
  }
  v17 = a4;
LABEL_17:
  DMMVIDPNPRESENTPATH::SetScalingSupport(v13, v17);
  DMMVIDPNPRESENTPATH::SetRotationSupport((DMMVIDPNPRESENTPATH *)v11, a5);
  v19 = (__int64)*a6;
  *((_DWORD *)v11 + 42) = v19;
  if ( *((_QWORD *)v8 + 17) <= 3uLL )
  {
    v23 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( *(_QWORD *)(*((_QWORD *)v8 + 18) + 24LL) != 255LL )
  {
    if ( *((_QWORD *)v8 + 17) <= 3uLL )
    {
      v24 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v24);
    }
    --*(_QWORD *)(*((_QWORD *)v8 + 18) + 24LL);
  }
  if ( *((_QWORD *)v8 + 17) <= 3uLL )
  {
    v25 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !*(_QWORD *)(*((_QWORD *)v8 + 18) + 24LL) )
    ProtectableFromChange::DisallowModifyingAction((DMMVIDPNTOPOLOGY *)((char *)v8 + 56), 3u);
  return 0LL;
}
