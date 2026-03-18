/*
 * XREFs of ?AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z @ 0x18007ABE0
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18007A2D8 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18007A4E8 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 * Callees:
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x18007AC08 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 */

bool __fastcall wil::details_abi::UsageIndexProperty::AddToCount(wil::details_abi::UsageIndexProperty *this, int a2)
{
  char v2; // r8
  bool v3; // bl

  v2 = *((_BYTE *)this + 2);
  v3 = v2 != 0;
  if ( v2 )
    wil::details_abi::UsageIndexProperty::UpdateCount(this, *((_DWORD *)this + 1) + a2);
  return v3;
}
