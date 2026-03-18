/*
 * XREFs of MiEmptyPte @ 0x140134C20
 * Callers:
 *     <none>
 * Callees:
 *     MiEmptyWorkingSetHelper @ 0x14007C56C (MiEmptyWorkingSetHelper.c)
 */

__int64 __fastcall MiEmptyPte(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r9
  __int64 v3; // rcx
  unsigned __int64 v4; // r10

  v2 = *(_BYTE **)(a1 + 136);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = a2 << 25 >> 16;
  if ( !*v2 || v4 < 0xFFFFF68000000000uLL || v4 > 0xFFFFF6FFFFFFFFFFuLL )
    MiEmptyWorkingSetHelper(v3, a2, (__int64)(v2 + 8));
  return 0LL;
}
