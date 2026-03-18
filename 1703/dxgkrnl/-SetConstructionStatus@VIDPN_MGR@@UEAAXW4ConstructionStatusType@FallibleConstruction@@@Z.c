/*
 * XREFs of ?SetConstructionStatus@VIDPN_MGR@@UEAAXW4ConstructionStatusType@FallibleConstruction@@@Z @ 0x1C000E170
 * Callers:
 *     ?SetConstructionStatus@VIDPN_MGR@@WCA@EAAXW4ConstructionStatusType@FallibleConstruction@@@Z @ 0x1C0015930 (-SetConstructionStatus@VIDPN_MGR@@WCA@EAAXW4ConstructionStatusType@FallibleConstruction@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDPN_MGR::SetConstructionStatus(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 48) = a2;
}
