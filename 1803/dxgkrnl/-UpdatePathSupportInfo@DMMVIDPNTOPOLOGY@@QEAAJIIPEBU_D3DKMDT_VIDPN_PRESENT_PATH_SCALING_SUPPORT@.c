/*
 * XREFs of ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00BBB0C
 * Callers:
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00C2EE0 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 * Callees:
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C00041E0 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C0004218 (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0006358 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C0006414 (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000677C (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006864 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::UpdatePathSupportInfo(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned int a3,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *a4,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *a5,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *a6)
{
  __int64 v6; // r14
  __int64 v8; // rbp
  __int64 v10; // rcx
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v12; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *v13; // rbx
  char IsSourceAndTargetPinned; // al
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v20; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v24; // [rsp+40h] [rbp+8h] BYREF

  v6 = a2;
  v8 = a3;
  if ( ProtectableFromChange::IsModifyingActionAllowed((DMMVIDPNTOPOLOGY *)((char *)this + 56), 3u) )
  {
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v6, v8);
    v13 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *)Path;
    if ( Path )
    {
      IsSourceAndTargetPinned = DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(Path);
      v15 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v13;
      if ( IsSourceAndTargetPinned )
      {
        if ( DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch((DMMVIDPNPRESENTPATH *)v13) )
        {
          if ( VIDPN_MGR::_bShouldLogOn1277688 )
          {
            if ( (*(_DWORD *)a4 & 6) != 0 )
            {
              v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
              *(_QWORD *)(v19 + 24) = v6;
              *(_QWORD *)(v19 + 32) = v8;
              WdLogEvent5_WdWarning(v19);
              VIDPN_MGR::_bShouldLogOn1277688 = 0;
            }
          }
          v24 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)1;
          v20 = &v24;
          v15 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v13;
          goto LABEL_9;
        }
        v15 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v13;
      }
      v20 = a4;
LABEL_9:
      DMMVIDPNPRESENTPATH::SetScalingSupport(v15, v20);
      DMMVIDPNPRESENTPATH::SetRotationSupport((DMMVIDPNPRESENTPATH *)v13, a5);
      v13[42] = *a6;
      ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 3u);
      return 0LL;
    }
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v23[3] = v6;
    v23[4] = v8;
    v23[5] = this;
    WdLogEvent5_WdError(v23);
    return 3223192359LL;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v22 + 24) = this;
    WdLogEvent5_WdError(v22);
    return 3221225506LL;
  }
}
