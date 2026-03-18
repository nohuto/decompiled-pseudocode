/*
 * XREFs of ??0DXGPUSHLOCK@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C000249C
 * Callers:
 *     ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C0074418 (--0VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPUSHLOCK::DXGPUSHLOCK(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  result = a1;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 16) = a2;
  return result;
}
