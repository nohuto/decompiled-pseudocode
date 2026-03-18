/*
 * XREFs of ?GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x1801F48A4
 * Callers:
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x1801E9CB0 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF6AC (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?AllocateHwBrush@CHwBrushPoolManager@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x1801F6B30 (-AllocateHwBrush@CHwBrushPoolManager@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@.c)
 */

__int64 __fastcall CHwBrushPool::GetHwBrush(
        struct CHwBrush **this,
        struct CMILBrush *a2,
        const struct CHwBrushContext *a3,
        struct CHwBrush **const a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  struct CHwBrush *v11; // rax
  int v12; // r9d
  int HwBrush; // eax
  unsigned int v15; // [rsp+20h] [rbp-18h]

  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(struct CMILBrush *))(*(_QWORD *)a2 + 24LL))(a2);
  if ( v9 == 1 )
  {
    *((_OWORD *)*this + 3) = *((_OWORD *)a2 + 2);
    v11 = *this;
    goto LABEL_15;
  }
  if ( v9 != 2 )
  {
    if ( v9 != 3 )
    {
      *a4 = 0LL;
      v8 = -2147467263;
      v15 = 148;
LABEL_10:
      v12 = v8;
LABEL_13:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v15);
      return v8;
    }
    v10 = CHwBitmapColorSource::DeriveFromBrushAndContext(
            *((struct CD3DDeviceLevel1 **)this[2] + 1),
            (struct CMILBrush *)((char *)a2 - 24),
            a3,
            (struct CHwTexturedColorSource **)this[2] + 2);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x177u);
    if ( (v8 & 0x80000000) != 0 )
    {
      v15 = 141;
      goto LABEL_10;
    }
    v11 = this[2];
LABEL_15:
    *a4 = v11;
    return v8;
  }
  HwBrush = CHwBrushPoolManager::AllocateHwBrush(this[1], a2, a3, a4);
  v8 = HwBrush;
  if ( HwBrush < 0 )
  {
    v15 = 133;
    v12 = HwBrush;
    goto LABEL_13;
  }
  return v8;
}
