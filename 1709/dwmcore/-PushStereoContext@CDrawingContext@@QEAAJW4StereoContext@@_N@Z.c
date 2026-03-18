/*
 * XREFs of ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x18013E324
 * Callers:
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180018970 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180078680 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801363AC (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_ECLayer@@UEAAPEAXI@Z @ 0x18013BFF0 (--_ECLayer@@UEAAPEAXI@Z.c)
 *     ?ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014B270 (-ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushStereoContext(__int64 a1, int a2, char a3)
{
  char v6; // r14
  _DWORD *v7; // rdi
  signed int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // eax
  signed int v12; // eax
  signed int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-28h]
  _DWORD *v16; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v7 = operator new(0x10uLL);
  if ( v7 )
  {
    v7[2] = a2;
    *(_QWORD *)v7 = &CStereoContextLayer::`vftable';
    *((_BYTE *)v7 + 12) = a3;
    *((_BYTE *)v7 + 13) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x13u);
    v15 = 4077;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, v15);
    goto LABEL_20;
  }
  v16 = v7;
  v9 = *(unsigned int *)(a1 + 568);
  v10 = (unsigned int)v7;
  v11 = v9 + 1;
  if ( (int)v9 + 1 >= (unsigned int)v9 )
    v10 = v9 + 1;
  v8 = v11 < (unsigned int)v9 ? 0x80070216 : 0;
  if ( v11 < (unsigned int)v9 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xB5u);
  }
  else if ( v10 > *(_DWORD *)(a1 + 564) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 544, 8u, 1, &v16);
    v8 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 544) + 8 * v9) = v16;
    *(_DWORD *)(a1 + 568) = v10;
  }
  if ( v8 < 0 )
  {
    v15 = 4082;
    goto LABEL_19;
  }
  v6 = 1;
  v13 = CStereoContextLayer::ApplyState((CStereoContextLayer *)v7, (struct CDrawingContext *)a1);
  v8 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0xFF5u);
  else
    v7 = 0LL;
LABEL_20:
  if ( v8 < 0 && v6 )
    --*(_DWORD *)(a1 + 568);
  if ( v7 )
    CLayer::`vector deleting destructor'((CLayer *)v7, 1);
  return (unsigned int)v8;
}
