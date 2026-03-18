/*
 * XREFs of MiAgeWorkingSetEPTCallback @ 0x14021CDF0
 * Callers:
 *     <none>
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiAgePteWorker @ 0x14021CBF0 (MiAgePteWorker.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiAgeWorkingSetEPTCallback(__int64 *a1, __int64 a2, __int64 *a3, unsigned __int64 a4, int *a5)
{
  __int64 PteShadow; // rax
  __int64 v7; // rsi
  __int64 v9; // rcx
  int *v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // r10
  char v13; // r11
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  PteShadow = *a3;
  v7 = a2;
  if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v9 = *a1;
  v10 = a5;
  v15 = PteShadow;
  if ( (v9 & 2) != 0 )
  {
    a2 = (unsigned int)*a5;
    LOBYTE(a2) = a2 & 3;
  }
  v11 = MI_GET_PFN_FROM_PTE(&v15, a2, a3, a4);
  MiAgePteWorker(v7, v12, a4, v11, v10, v13);
  return 0LL;
}
