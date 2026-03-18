/*
 * XREFs of ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00592A0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0077550 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ResetCleanupCounters(VIDMM_GLOBAL *this, char a2)
{
  __int64 v2; // rax

  if ( a2 || *((_QWORD *)this + 576) - *((_QWORD *)this + 890) > qword_1C0040330 )
  {
    *((_QWORD *)this + 888) = 0LL;
    v2 = *((_QWORD *)this + 576);
    *((_DWORD *)this + 1778) = 0;
    *((_QWORD *)this + 890) = v2;
  }
}
