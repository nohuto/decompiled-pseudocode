/*
 * XREFs of ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C006CD64
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C007F920 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ResetCleanupCounters(VIDMM_GLOBAL *this, char a2)
{
  __int64 v2; // rax

  if ( a2 || *((_QWORD *)this + 576) - *((_QWORD *)this + 962) > qword_1C0047330 )
  {
    *((_QWORD *)this + 960) = 0LL;
    v2 = *((_QWORD *)this + 576);
    *((_DWORD *)this + 1922) = 0;
    *((_QWORD *)this + 962) = v2;
  }
}
