/*
 * XREFs of MiDriverPageIsDangling @ 0x140255CBC
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiDeleteValidSystemPage @ 0x140028710 (MiDeleteValidSystemPage.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDriverPageIsDangling(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 40);
  v2 = qword_1403CB578;
  if ( (result & 0x200000000000000LL) != 0 )
    --*(_QWORD *)(qword_1403CB578 + 200);
  --*(_QWORD *)(v2 + 208);
  return result;
}
