/*
 * XREFs of ?ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C00998A4
 * Callers:
 *     ?ChangeVideoMemoryReservation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C0092700 (-ChangeVideoMemoryReservation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GR.c)
 * Callees:
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0063A64 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS::ChangeVideoMemoryReservation(
        VIDMM_PROCESS *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned __int64 a5)
{
  VIDMM_GLOBAL **v5; // r10

  v5 = *(VIDMM_GLOBAL ***)(*((_QWORD *)this + 2) + 8LL * a2);
  if ( !v5 || (unsigned int)a4 > 1 || a5 > *(_QWORD *)(*((_QWORD *)*v5 + 5150) + 8 * (a4 + 35LL * a3) + 80) )
    return 3221225485LL;
  *((_QWORD *)v5[6] + 33 * a3 + a4 + 7) = a5;
  VIDMM_GLOBAL::RequestNewBudget(*v5, 1);
  return 0LL;
}
