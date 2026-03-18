/*
 * XREFs of ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180081630
 * Callers:
 *     ?ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800809A0 (-ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800BFD70 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014B890 (-ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014CD20 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18003B39C (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800816F0 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExternalLayer::ApplyState(CExternalLayer *this, struct CDrawingContext *a2)
{
  signed int v4; // eax
  int v5; // ebx
  signed int v6; // eax
  signed int v7; // eax
  bool v8; // cl
  bool v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0;
  v4 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *, char *))(*(_QWORD *)this + 32LL))(
         this,
         a2,
         (char *)this + 40);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0xD8u);
  }
  else
  {
    v6 = CDrawingContext::PushDeviceTransform(a2, (CExternalLayer *)((char *)this + 40), &v10);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xDEu);
    }
    else
    {
      *((_BYTE *)this + 32) = 1;
      v7 = CExternalLayer::ApplyRenderTarget(this, a2);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xE4u);
      }
      else
      {
        v8 = v10 && (*(unsigned __int8 (__fastcall **)(CExternalLayer *))(*(_QWORD *)this + 40LL))(this);
        *((_BYTE *)this + 36) = *((_BYTE *)a2 + 6827);
        *((_BYTE *)a2 + 6827) = v8;
        *((_BYTE *)this + 35) = 1;
      }
    }
  }
  if ( v5 < 0 )
    (*(void (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(*(_QWORD *)this + 24LL))(this, a2);
  return (unsigned int)v5;
}
