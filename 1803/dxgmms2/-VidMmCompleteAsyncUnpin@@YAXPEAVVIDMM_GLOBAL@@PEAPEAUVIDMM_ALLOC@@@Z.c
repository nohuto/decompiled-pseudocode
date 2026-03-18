/*
 * XREFs of ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007972C
 * Callers:
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C00555B0 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0004D1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00054C0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x1C0013C30 (-CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0013C58 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0079D04 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 */

void __fastcall VidMmCompleteAsyncUnpin(struct _KTHREAD **a1, struct VIDMM_ALLOC **a2)
{
  _QWORD *v2; // rdi
  char v5; // si
  char v6; // al
  char v7; // bl
  __int64 v8; // rcx
  __int64 v9; // rbx
  DXGDEVICE *v10; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = *a2;
  v5 = 0;
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK(
    (DXGPROCESSVIDMMLOCK *)&v14,
    *(struct _KTHREAD ***)(*(_QWORD *)(*((_QWORD *)*a2 + 2) + 8LL) + 40LL));
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, a1 + 5246, 0);
  DXGPUSHLOCK::AcquireExclusive(v12);
  *((_BYTE *)v2 + 25) &= ~2u;
  v6 = *((_BYTE *)v2 + 25);
  v13 = 2;
  if ( (v6 & 1) != 0 && (v6 & 4) == 0 )
  {
    v7 = VIDMM_GLOBAL::UnpinOneAllocation(a1, v2, 1LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
    if ( v7 )
      VIDMM_GLOBAL::UnpinOneAllocation(a1, v2, 2LL);
    v5 = 1;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  if ( v14 )
  {
    v8 = v14 + 144;
    *(_QWORD *)(v14 + 152) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
  }
  v9 = v2[2];
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)v2 + 29);
  *a2 = 0LL;
  if ( v5 )
    DXGDEVICE::CompleteAsynchronousUnpin(
      v10,
      (*(_DWORD *)(*(_QWORD *)(v9 + 48) + 4LL) >> 6) & 0xF,
      (struct DXGALLOCATION *)v9);
}
