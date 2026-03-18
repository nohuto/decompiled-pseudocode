/*
 * XREFs of MiFillCommitReturnInfo @ 0x140037A00
 * Callers:
 *     MiDecommitRegion @ 0x1404952E0 (MiDecommitRegion.c)
 *     MiRemoveVadCharges @ 0x140495BC0 (MiRemoveVadCharges.c)
 * Callees:
 *     <none>
 */

void __fastcall MiFillCommitReturnInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  v3 = a1 - *(_QWORD *)(a2 + 16);
  *a3 = v3;
  a3[1] = v3 - *(_QWORD *)(a2 + 8);
}
