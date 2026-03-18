/*
 * XREFs of ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0009434
 * Callers:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00093E0 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00E091C (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 *     BmlPinPathContentScaling @ 0x1C00F2B0C (BmlPinPathContentScaling.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0009CF0 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00DF880 (-IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
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
  __int64 v10; // rdx
  DMMVIDPNPRESENTPATH *v11; // r8
  int v12; // ecx
  int v13; // eax
  char v14; // di
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  int v16; // ebx
  void (__fastcall ***v17)(_QWORD, __int64); // rcx
  int v18; // ebx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+30h] [rbp+8h]

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
  v22 = *(_QWORD *)(*(_QWORD *)(v4 + 144) + 76LL);
  v9 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)this + 29));
  if ( ((v9 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v9 == D3DKMDT_VPPR_UNPINNED && DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(v11) )
    {
      v12 = v22;
      v13 = HIDWORD(v22);
      if ( v22 == *(_QWORD *)(v8 + 84) )
      {
LABEL_9:
        v14 = 1;
        goto LABEL_10;
      }
    }
    else
    {
      v12 = HIDWORD(v22);
      v13 = v22;
    }
  }
  else
  {
    v12 = v22;
    v13 = HIDWORD(v22);
  }
  if ( v13 == *(_DWORD *)(v8 + 84) && v12 == *(_DWORD *)(v8 + 88) )
    goto LABEL_9;
  v14 = 0;
LABEL_10:
  v15 = (void (__fastcall ***)(_QWORD, __int64))(v7 + 88);
  v16 = _InterlockedDecrement((volatile signed __int32 *)(v7 + 96));
  if ( v16 )
  {
    if ( v16 < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v15, v10);
      *(_QWORD *)(v20 + 24) = v16;
      WdLogEvent5_WdError(v20);
    }
  }
  else if ( v7 != -88 )
  {
    (**v15)(v15, 1LL);
  }
  v17 = (void (__fastcall ***)(_QWORD, __int64))(v4 + 88);
  v18 = _InterlockedDecrement((volatile signed __int32 *)(v4 + 96));
  if ( v18 )
  {
    if ( v18 < 0 )
    {
      v21 = WdLogNewEntry5_WdError(v17, v10);
      *(_QWORD *)(v21 + 24) = v18;
      WdLogEvent5_WdError(v21);
    }
  }
  else if ( v4 != -88 )
  {
    (**v17)(v17, 1LL);
  }
  return v14;
}
