/*
 * XREFs of ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00067AC
 * Callers:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006648 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00A3CDC (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00DB214 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  bool v6; // si
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  int v8; // ebx
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rax

  v1 = *((_QWORD *)this + 11);
  v2 = *(_QWORD *)(v1 + 104);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 96));
    v3 = *(_QWORD *)(v1 + 104);
  }
  else
  {
    v3 = 0LL;
  }
  v4 = *((_QWORD *)this + 12);
  v5 = *(_QWORD *)(v4 + 104);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 96));
    v5 = *(_QWORD *)(v4 + 104);
  }
  v6 = *(_QWORD *)(v3 + 144) && *(_QWORD *)(v5 + 144);
  if ( v5 )
  {
    v7 = (void (__fastcall ***)(_QWORD, __int64))(v5 + 88);
    v8 = _InterlockedDecrement((volatile signed __int32 *)(v5 + 96));
    if ( v8 )
    {
      if ( v8 < 0 )
      {
        v12 = WdLogNewEntry5_WdError(v7);
        *(_QWORD *)(v12 + 24) = v8;
        WdLogEvent5_WdError(v12);
      }
    }
    else if ( v5 != -88 )
    {
      (**v7)(v7, 1LL);
    }
  }
  v9 = (void (__fastcall ***)(_QWORD, __int64))(v3 + 88);
  v10 = _InterlockedDecrement((volatile signed __int32 *)(v3 + 96));
  if ( v10 )
  {
    if ( v10 < 0 )
    {
      v13 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v13 + 24) = v10;
      WdLogEvent5_WdError(v13);
    }
  }
  else if ( v3 != -88 )
  {
    (**v9)(v9, 1LL);
  }
  return v6;
}
