/*
 * XREFs of ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00249B8
 * Callers:
 *     ?DxgkPresentVirtualFrameBuffer@@YAJII_KIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C016F800 (-DxgkPresentVirtualFrameBuffer@@YAJII_KIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C01A3718 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C01A4960 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 *     DxgkSubmitCommandToHwQueue @ 0x1C01A5850 (DxgkSubmitCommandToHwQueue.c)
 *     DxgkSubmitPresentBltToHwQueue @ 0x1C01A5B30 (DxgkSubmitPresentBltToHwQueue.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C01B2E2C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@P.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

DXGHWQUEUEBYHANDLE *__fastcall DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
        DXGHWQUEUEBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGHWQUEUE **a4,
        bool a5)
{
  __int64 v9; // rax
  struct _KTHREAD *v10; // r8
  int v11; // ecx
  __int64 v12; // rdx
  struct DXGHWQUEUE *v13; // rax
  struct DXGHWQUEUE *v14; // rtt
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v16, a3);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 < *((_DWORD *)a3 + 62)
    && (v10 = a3[29], v11 = *((_DWORD *)v10 + 4 * v9 + 2), ((a2 >> 25) & 0x60) == (*((_BYTE *)v10 + 16 * v9 + 8) & 0x60))
    && (v11 & 0x2000) == 0
    && (v11 & 0x1F) == 0xF )
  {
    v12 = *((_QWORD *)v10 + 2 * (unsigned int)v9);
  }
  else
  {
    v12 = 0LL;
  }
  v13 = (struct DXGHWQUEUE *)v12;
  *((_BYTE *)this + 8) = a5;
  *(_QWORD *)this = v12;
  if ( v12 && !a5 )
  {
    _m_prefetchw((const void *)(v12 + 56));
    v13 = *(struct DXGHWQUEUE **)(v12 + 56);
    do
    {
      if ( !v13 )
      {
        *(_QWORD *)this = 0LL;
        goto LABEL_13;
      }
      v14 = v13;
      v13 = (struct DXGHWQUEUE *)_InterlockedCompareExchange64(
                                   (volatile signed __int64 *)(v12 + 56),
                                   (signed __int64)v13 + 1,
                                   (signed __int64)v13);
    }
    while ( v14 != v13 );
    v13 = *(struct DXGHWQUEUE **)this;
  }
LABEL_13:
  *a4 = v13;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return this;
}
