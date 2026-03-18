/*
 * XREFs of ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000669C
 * Callers:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006648 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00A3CDC (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 *     BmlPinPathContentScaling @ 0x1C00D30A0 (BmlPinPathContentScaling.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0006980 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00A61AC (-IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v9; // eax
  DMMVIDPNPRESENTPATH *v10; // r8
  int v11; // ecx
  int v12; // eax
  char v13; // di
  void (__fastcall ***v14)(_QWORD, __int64); // rcx
  int v15; // ebx
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  int v17; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+30h] [rbp+8h]

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
    v7 = *(_QWORD *)(v5 + 104);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = *(_QWORD *)(v7 + 144);
  v21 = *(_QWORD *)(*(_QWORD *)(v4 + 144) + 76LL);
  v9 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)this + 29));
  if ( ((v9 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v9 == D3DKMDT_VPPR_UNPINNED && DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(v10) )
    {
      v11 = v21;
      v12 = HIDWORD(v21);
      if ( v21 == *(_QWORD *)(v8 + 84) )
      {
LABEL_9:
        v13 = 1;
        goto LABEL_13;
      }
    }
    else
    {
      v11 = HIDWORD(v21);
      v12 = v21;
    }
  }
  else
  {
    v11 = v21;
    v12 = HIDWORD(v21);
  }
  if ( v12 == *(_DWORD *)(v8 + 84) && v11 == *(_DWORD *)(v8 + 88) )
    goto LABEL_9;
  v13 = 0;
LABEL_13:
  v14 = (void (__fastcall ***)(_QWORD, __int64))(v7 + 88);
  v15 = _InterlockedDecrement((volatile signed __int32 *)(v7 + 96));
  if ( v15 )
  {
    if ( v15 < 0 )
    {
      v19 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v19 + 24) = v15;
      WdLogEvent5_WdError(v19);
    }
  }
  else if ( v7 != -88 )
  {
    (**v14)(v14, 1LL);
  }
  v16 = (void (__fastcall ***)(_QWORD, __int64))(v4 + 88);
  v17 = _InterlockedDecrement((volatile signed __int32 *)(v4 + 96));
  if ( v17 )
  {
    if ( v17 < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v20 + 24) = v17;
      WdLogEvent5_WdError(v20);
    }
  }
  else if ( v4 != -88 )
  {
    (**v16)(v16, 1LL);
  }
  return v13;
}
