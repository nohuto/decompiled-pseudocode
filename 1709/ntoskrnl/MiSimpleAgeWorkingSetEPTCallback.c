/*
 * XREFs of MiSimpleAgeWorkingSetEPTCallback @ 0x14021E420
 * Callers:
 *     <none>
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiAgePteWorker @ 0x14021CBF0 (MiAgePteWorker.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiSimpleAgeWorkingSetEPTCallback(_QWORD *a1, __int64 a2, __int64 *a3, unsigned __int64 a4, int *a5)
{
  __int64 PteShadow; // rax
  _QWORD *v8; // r11
  __int64 v9; // rax
  unsigned __int64 v10; // r10
  char v11; // r11
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  PteShadow = *a3;
  v8 = a1;
  if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v13 = PteShadow;
  if ( (*v8 & 2) != 0 || (*v8 & 1) != 0 )
  {
    v9 = MI_GET_PFN_FROM_PTE(&v13, a2, a3, a4);
    MiAgePteWorker(a2, v10, a4, v9, a5, v11);
  }
  return 0LL;
}
