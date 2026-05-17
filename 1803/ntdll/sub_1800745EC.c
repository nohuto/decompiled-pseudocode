/*
 * XREFs of sub_1800745EC @ 0x1800745EC
 * Callers:
 *     sub_180074558 @ 0x180074558 (sub_180074558.c)
 *     RtlContractHashTable @ 0x180081350 (RtlContractHashTable.c)
 *     RtlExpandHashTable @ 0x180089AF0 (RtlExpandHashTable.c)
 *     RtlStronglyEnumerateEntryHashTable @ 0x1800EE1A0 (RtlStronglyEnumerateEntryHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800745EC(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 8) > 0x80u )
  {
    _BitScanReverse(&v4, a2 + 128);
    a2 = (a2 + 128) ^ (1 << v4);
    v2 = *(_QWORD *)(v2 + 8LL * (v4 - 7));
  }
  return v2 + 16LL * a2;
}
