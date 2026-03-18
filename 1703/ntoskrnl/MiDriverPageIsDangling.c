/*
 * XREFs of MiDriverPageIsDangling @ 0x140211754
 * Callers:
 *     MiDeleteValidSystemPage @ 0x1400C90C0 (MiDeleteValidSystemPage.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDriverPageIsDangling(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 40);
  v2 = qword_14036C0B8;
  if ( (result & 0x200000000000000LL) != 0 )
    --*(_QWORD *)(qword_14036C0B8 + 200);
  --*(_QWORD *)(v2 + 208);
  return result;
}
