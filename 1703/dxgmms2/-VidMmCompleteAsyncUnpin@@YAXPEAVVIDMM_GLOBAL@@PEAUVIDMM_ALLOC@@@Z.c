/*
 * XREFs of ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z @ 0x1C009AE3C
 * Callers:
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C006D260 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0001B1C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x1C001E88C (-CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C006DF40 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 */

void __fastcall VidMmCompleteAsyncUnpin(struct _KTHREAD **a1, struct VIDMM_ALLOC *a2)
{
  char v2; // di
  __int64 v5; // rbx
  char v6; // al
  bool v7; // di
  DXGDEVICE *v8; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL) + 40LL);
  if ( v5 )
  {
    if ( *(struct _KTHREAD **)(v5 + 120) == KeGetCurrentThread() )
      v5 = 0LL;
    else
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v5 + 112));
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, a1 + 5211, 0);
  DXGPUSHLOCK::AcquireExclusive(v10);
  *((_BYTE *)a2 + 25) &= ~2u;
  v6 = *((_BYTE *)a2 + 25);
  v11 = 2;
  if ( (v6 & 1) != 0 && (v6 & 4) == 0 )
  {
    v7 = VIDMM_GLOBAL::UnpinOneAllocation((VIDMM_GLOBAL *)a1, (__int64)a2, 1LL, 1);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
    if ( v7 )
      VIDMM_GLOBAL::UnpinOneAllocation((VIDMM_GLOBAL *)a1, (__int64)a2, 2LL, 0);
    v2 = 1;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 120) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 112, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v2 )
    DXGDEVICE::CompleteAsynchronousUnpin(
      v8,
      (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 48LL) + 4LL) >> 6) & 0xF,
      *((struct DXGALLOCATION **)a2 + 2));
}
