/*
 * XREFs of ?IsPenaltyBoxEmptyWithoutLock@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C001623C
 * Callers:
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00051D0 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C007F920 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock(__int64 a1, int a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)(a1 + 16 * ((unsigned int)(a2 - 1) + 2615LL));
  return *v2 == (_QWORD)v2;
}
