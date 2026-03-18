/*
 * XREFs of ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0013C58
 * Callers:
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007972C (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0004D1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

DXGPROCESSVIDMMLOCK *__fastcall DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK(
        DXGPROCESSVIDMMLOCK *this,
        struct _KTHREAD **a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    if ( a2[19] == KeGetCurrentThread() )
      *(_QWORD *)this = 0LL;
    else
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a2 + 18));
  }
  return this;
}
