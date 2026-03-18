/*
 * XREFs of MiIsPfnSystemCharged @ 0x14012C56C
 * Callers:
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiDeleteValidSystemPage @ 0x14004D040 (MiDeleteValidSystemPage.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnSystemCharged(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v1 <= 0xFFFFF6BFFFFFFF78uLL && v1 >= 0xFFFFF68000000000uLL )
    return 0LL;
  else
    return (*(unsigned __int8 *)(a1 + 35) >> 5) & 1;
}
