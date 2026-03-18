/*
 * XREFs of ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x18013CA50
 * Callers:
 *     ?Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z @ 0x18013AA20 (-Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z.c)
 * Callees:
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180036CA0 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawGenericInk(
        CDrawingContext *this,
        struct IDCompositionDirectInkWetStrokePartner *a2,
        char a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v7; // ebx
  signed int v8; // eax
  int v9; // eax
  float v10; // xmm0_4
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  unsigned int v15; // [rsp+20h] [rbp-28h]

  v3 = (unsigned __int64)this + 8;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8)) )
  {
    v7 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004001, 0x8AAu);
    return v7;
  }
  v8 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v7 = v8;
  if ( v8 < 0 )
  {
    v15 = 2221;
    goto LABEL_15;
  }
  v9 = *((_DWORD *)this + 776);
  if ( v9 )
    v10 = *(float *)(*((_QWORD *)this + 390) + 4LL * (unsigned int)(v9 - 1));
  else
    v10 = FLOAT_1_0;
  v11 = *((_DWORD *)this + 65);
  v12 = 0;
  if ( v11 )
  {
    v13 = v11 - 1;
    if ( v13 )
    {
      if ( v13 == 3 )
        v12 = 2;
    }
    else
    {
      v12 = 1;
    }
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, struct IDCompositionDirectInkWetStrokePartner *, bool, int, float, char))(**((_QWORD **)this + 48) + 192LL))(
         *((_QWORD *)this + 48),
         v3 & -(__int64)(this != 0LL),
         a2,
         *((_DWORD *)this + 64) != 0,
         v12,
         COERCE_FLOAT(LODWORD(v10)),
         a3);
  v7 = v8;
  if ( v8 < 0 )
  {
    v15 = 2232;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, v15);
  }
  return v7;
}
