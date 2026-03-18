/*
 * XREFs of ?IsMiniportDriverCCDSupport@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00BF2A4
 * Callers:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0006688 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00BF290 (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax

  v1 = *((_QWORD *)this + 11);
  v2 = *(_QWORD *)(v1 + 40);
  if ( !v2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v7);
    v2 = *(_QWORD *)(v1 + 40);
  }
  v4 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(v2 + 64) + 48);
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v8);
    v5 = *(_QWORD *)(v4 + 8);
    if ( !v5 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v10);
    }
  }
  return (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v5 + 16)) >= 1105;
}
