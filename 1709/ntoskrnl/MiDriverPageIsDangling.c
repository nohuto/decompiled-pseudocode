/*
 * XREFs of MiDriverPageIsDangling @ 0x140218FE4
 * Callers:
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiDeleteValidSystemPage @ 0x14004D040 (MiDeleteValidSystemPage.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDriverPageIsDangling(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 40);
  v2 = qword_1403883F8;
  if ( (result & 0x200000000000000LL) != 0 )
    --*(_QWORD *)(qword_1403883F8 + 200);
  --*(_QWORD *)(v2 + 208);
  return result;
}
