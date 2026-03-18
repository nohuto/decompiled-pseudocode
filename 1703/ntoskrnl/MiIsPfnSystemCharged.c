/*
 * XREFs of MiIsPfnSystemCharged @ 0x140147870
 * Callers:
 *     MiDeleteValidSystemPage @ 0x1400C90C0 (MiDeleteValidSystemPage.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnSystemCharged(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v1 > 0xFFFFF6BFFFFFFF78uLL || v1 < 0xFFFFF68000000000uLL )
    return (*(unsigned __int8 *)(a1 + 35) >> 5) & 1;
  else
    return 0LL;
}
