/*
 * XREFs of ?AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z @ 0x18002A14C
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1800297E0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x18002A174 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
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
