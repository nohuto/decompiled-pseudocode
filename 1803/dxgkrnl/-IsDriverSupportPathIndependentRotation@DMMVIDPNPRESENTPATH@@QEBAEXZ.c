/*
 * XREFs of ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00BF1FC
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0006358 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000677C (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rdi
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v1 = *((_QWORD *)this + 11);
  v2 = 0;
  v3 = *(_QWORD *)(v1 + 40);
  if ( !v3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v10);
    v3 = *(_QWORD *)(v1 + 40);
  }
  v5 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(v3 + 64) + 48);
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v11);
    v6 = *(_QWORD *)(v5 + 8);
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( !v7 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v12);
  }
  v8 = *(_QWORD *)(v7 + 2456);
  if ( *(_BYTE *)(v8 + 132) && *(_BYTE *)(v8 + 133)
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 192) + 64LL) + 40LL) + 28LL) >= 0x4003u )
  {
    return 1;
  }
  return v2;
}
