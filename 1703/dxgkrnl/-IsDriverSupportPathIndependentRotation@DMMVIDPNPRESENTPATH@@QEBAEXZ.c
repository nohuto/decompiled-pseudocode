/*
 * XREFs of ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00DF880
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0009060 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0009434 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(
        DMMVIDPNPRESENTPATH *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  char v5; // bl
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v4 = *((_QWORD *)this + 11);
  v5 = 0;
  if ( !*(_QWORD *)(v4 + 40) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  v6 = *(_QWORD *)(v4 + 40);
  if ( !*(_QWORD *)(v6 + 72) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 72) + 48LL);
  if ( !*(_QWORD *)(v7 + 8) )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL);
  if ( !v8 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( g_Win32kSupportsPathIndependentRotation )
  {
    v9 = *(_QWORD *)(v8 + 2280);
    if ( *(_BYTE *)(v9 + 133) )
    {
      if ( *(_BYTE *)(v9 + 134) )
        return 1;
    }
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 192) + 64LL) + 40LL) + 28LL) >= 0x4003u )
      return 1;
  }
  return v5;
}
