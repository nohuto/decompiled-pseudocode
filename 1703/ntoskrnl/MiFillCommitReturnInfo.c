/*
 * XREFs of MiFillCommitReturnInfo @ 0x1400CE2E8
 * Callers:
 *     MiDecommitRegion @ 0x140499E58 (MiDecommitRegion.c)
 *     NtFreeVirtualMemory @ 0x14051A3B0 (NtFreeVirtualMemory.c)
 *     MiRemoveVadCharges @ 0x14051D900 (MiRemoveVadCharges.c)
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
