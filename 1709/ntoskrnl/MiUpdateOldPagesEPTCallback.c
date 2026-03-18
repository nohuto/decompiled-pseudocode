/*
 * XREFs of MiUpdateOldPagesEPTCallback @ 0x14021E810
 * Callers:
 *     <none>
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiUpdateOldPteWorker @ 0x14021EA1C (MiUpdateOldPteWorker.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiUpdateOldPagesEPTCallback(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 PteShadow; // rax
  __int64 *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  PteShadow = *a3;
  v6 = a1;
  if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v7 = *v6;
  v12 = PteShadow;
  if ( (v7 & 2) != 0 )
  {
    if ( (PteShadow & 0x20) != 0 )
      return 0LL;
    goto LABEL_8;
  }
  if ( (v7 & 1) == 0 )
  {
LABEL_8:
    v8 = MI_GET_PFN_FROM_PTE(&v12, a2, a3, v6);
    MiUpdateOldPteWorker(v10, v9, v8, a5);
  }
  return 0LL;
}
