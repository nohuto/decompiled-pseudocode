/*
 * XREFs of ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x180162554
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18000D7E0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180060EAC (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180158940 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??_ECStereoContextLayer@@UEAAPEAXI@Z @ 0x18015E5F0 (--_ECStereoContextLayer@@UEAAPEAXI@Z.c)
 *     ?ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801740E0 (-ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushStereoContext(__int64 a1, int a2, char a3)
{
  char v6; // r14
  _DWORD *v7; // rdi
  int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-28h]
  _DWORD *v15; // [rsp+68h] [rbp+20h] BYREF

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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x13u);
    v14 = 4206;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v14);
    goto LABEL_18;
  }
  v15 = v7;
  v9 = *(_DWORD *)(a1 + 568);
  v10 = v9 + 1;
  v8 = v9 + 1 < v9 ? 0x80070216 : 0;
  if ( v9 + 1 < v9 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v10 > *(_DWORD *)(a1 + 564) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 544, 8u, 1, &v15);
    v8 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 544) + 8LL * v9) = v15;
    *(_DWORD *)(a1 + 568) = v10;
  }
  if ( v8 < 0 )
  {
    v14 = 4211;
    goto LABEL_17;
  }
  v6 = 1;
  v12 = CStereoContextLayer::ApplyState((CStereoContextLayer *)v7, (struct CDrawingContext *)a1);
  v8 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1076u);
  else
    v7 = 0LL;
LABEL_18:
  if ( v8 < 0 && v6 )
    --*(_DWORD *)(a1 + 568);
  if ( v7 )
    CStereoContextLayer::`vector deleting destructor'((CStereoContextLayer *)v7, 1);
  return (unsigned int)v8;
}
