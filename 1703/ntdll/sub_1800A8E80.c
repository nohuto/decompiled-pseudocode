/*
 * XREFs of sub_1800A8E80 @ 0x1800A8E80
 * Callers:
 *     <none>
 * Callees:
 *     ZwTestAlert @ 0x1800A8930 (ZwTestAlert.c)
 */

__int64 __fastcall sub_1800A8E80(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 4) & 0x66) != 0 )
    ZwTestAlert();
  return 1LL;
}
