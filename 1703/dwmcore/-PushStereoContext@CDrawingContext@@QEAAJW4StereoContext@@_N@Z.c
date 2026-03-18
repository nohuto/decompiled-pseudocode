/*
 * XREFs of ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x18012D120
 * Callers:
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18006C2A4 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18006D45C (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B4740 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??_ECLayer@@UEAAPEAXI@Z @ 0x18014AC60 (--_ECLayer@@UEAAPEAXI@Z.c)
 *     ?ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801572D0 (-ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushStereoContext(__int64 a1, int a2, char a3)
{
  char v6; // r14
  _DWORD *v7; // rdi
  int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // eax
  int v12; // eax
  int v13; // eax
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x13u);
    v15 = 4614;
LABEL_19:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v15);
    goto LABEL_20;
  }
  v16 = v7;
  v9 = *(unsigned int *)(a1 + 560);
  v10 = (unsigned int)v7;
  v11 = v9 + 1;
  if ( (int)v9 + 1 >= (unsigned int)v9 )
    v10 = v9 + 1;
  v8 = v11 < (unsigned int)v9 ? 0x80070216 : 0;
  if ( v11 < (unsigned int)v9 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v10 > *(_DWORD *)(a1 + 556) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 536, 8u, 1, &v16);
    v8 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 536) + 8 * v9) = v16;
    *(_DWORD *)(a1 + 560) = v10;
  }
  if ( v8 < 0 )
  {
    v15 = 4619;
    goto LABEL_19;
  }
  v6 = 1;
  v13 = CStereoContextLayer::ApplyState((CStereoContextLayer *)v7, (struct CDrawingContext *)a1);
  v8 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x120Eu);
  else
    v7 = 0LL;
LABEL_20:
  if ( v8 < 0 && v6 )
    --*(_DWORD *)(a1 + 560);
  if ( v7 )
    CLayer::`vector deleting destructor'((CLayer *)v7, 1u);
  return (unsigned int)v8;
}
