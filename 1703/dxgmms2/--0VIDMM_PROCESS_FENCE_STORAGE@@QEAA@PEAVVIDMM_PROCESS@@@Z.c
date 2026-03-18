/*
 * XREFs of ??0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z @ 0x1C004EDB4
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C004DA40 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ @ 0x1C0076E14 (-InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ.c)
 * Callees:
 *     <none>
 */

VIDMM_PROCESS_FENCE_STORAGE *__fastcall VIDMM_PROCESS_FENCE_STORAGE::VIDMM_PROCESS_FENCE_STORAGE(
        VIDMM_PROCESS_FENCE_STORAGE *this,
        struct VIDMM_PROCESS *a2)
{
  bool v3; // cl

  *(_QWORD *)this = a2;
  v3 = 0;
  if ( a2 )
    v3 = (*(_BYTE *)(*((_QWORD *)a2 + 4) + 275LL) & 4) != 0;
  *((_BYTE *)this + 64) = v3;
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_QWORD *)this + 2) = (char *)this + 8;
  *((_QWORD *)this + 1) = (char *)this + 8;
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 7);
  return this;
}
