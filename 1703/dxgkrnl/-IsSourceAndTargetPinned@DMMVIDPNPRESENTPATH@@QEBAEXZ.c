/*
 * XREFs of ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0009544
 * Callers:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00093E0 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00E091C (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00EF8B8 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(DMMVIDPNPRESENTPATH *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  bool v7; // si
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  int v9; // ebx
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // rax

  v2 = *((_QWORD *)this + 11);
  v3 = *(_QWORD *)(v2 + 104);
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 96));
    v4 = *(_QWORD *)(v2 + 104);
  }
  else
  {
    v4 = 0LL;
  }
  v5 = *((_QWORD *)this + 12);
  v6 = *(_QWORD *)(v5 + 104);
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 96));
    v6 = *(_QWORD *)(v5 + 104);
  }
  v7 = *(_QWORD *)(v4 + 144) && *(_QWORD *)(v6 + 144);
  if ( v6 )
  {
    v8 = (void (__fastcall ***)(_QWORD, __int64))(v6 + 88);
    v9 = _InterlockedDecrement((volatile signed __int32 *)(v6 + 96));
    if ( v9 )
    {
      if ( v9 < 0 )
      {
        v13 = WdLogNewEntry5_WdError(v8, a2);
        *(_QWORD *)(v13 + 24) = v9;
        WdLogEvent5_WdError(v13);
      }
    }
    else if ( v6 != -88 )
    {
      (**v8)(v8, 1LL);
    }
  }
  v10 = (void (__fastcall ***)(_QWORD, __int64))(v4 + 88);
  v11 = _InterlockedDecrement((volatile signed __int32 *)(v4 + 96));
  if ( v11 )
  {
    if ( v11 < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v10, a2);
      *(_QWORD *)(v14 + 24) = v11;
      WdLogEvent5_WdError(v14);
    }
  }
  else if ( v4 != -88 )
  {
    (**v10)(v10, 1LL);
  }
  return v7;
}
