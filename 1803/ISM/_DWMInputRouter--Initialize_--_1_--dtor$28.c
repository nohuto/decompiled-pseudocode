/*
 * XREFs of _DWMInputRouter::Initialize_::_1_::dtor$28 @ 0x1800E7BBF
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180004760 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall DWMInputRouter::Initialize_::_1_::dtor_28(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 536) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 536) &= ~1u;
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((__int64 *)(a2 + 304));
  }
}
