/*
 * XREFs of MiEmptyPte @ 0x140010BA0
 * Callers:
 *     <none>
 * Callees:
 *     MiEmptyWorkingSetHelper @ 0x140010BF0 (MiEmptyWorkingSetHelper.c)
 */

__int64 __fastcall MiEmptyPte(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r9
  unsigned __int64 v3; // r10

  v2 = *(_BYTE **)(a1 + 144);
  v3 = a2 << 25 >> 16;
  if ( !*v2 || v3 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL )
    MiEmptyWorkingSetHelper(*(_QWORD *)(a1 + 8), a2, v2 + 8);
  return 0LL;
}
