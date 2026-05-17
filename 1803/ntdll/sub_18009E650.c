/*
 * XREFs of sub_18009E650 @ 0x18009E650
 * Callers:
 *     <none>
 * Callees:
 *     ZwTestAlert @ 0x18009E1B0 (ZwTestAlert.c)
 */

__int64 __fastcall sub_18009E650(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 4) & 0x66) != 0 )
    ZwTestAlert();
  return 1LL;
}
