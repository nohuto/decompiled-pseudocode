/*
 * XREFs of ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x18000D0B0
 * Callers:
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x18000D124 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18000D2D0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 * Callees:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18000FB20 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

__int64 __fastcall CDrawingContext::FlushDeferredD2DLayers(CDrawingContext *this)
{
  unsigned int v1; // r14d
  __int64 v2; // rbx
  __int64 v3; // rbp
  char *v5; // rsi
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edi

  v1 = 0;
  v2 = 0LL;
  v3 = 0LL;
  if ( *((_DWORD *)this + 156) )
  {
    v5 = (char *)this + 600;
    while ( 1 )
    {
      v7 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v5 + 8 * v3), this);
      v1 = v7;
      if ( v7 < 0 )
        break;
      v2 = (unsigned int)(v2 + 1);
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 156) )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x19ECu);
  }
  else
  {
LABEL_2:
    v5 = (char *)this + 600;
    *((_DWORD *)this + 156) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 600, 8LL);
  }
  if ( (unsigned int)v2 < *((_DWORD *)this + 156) && (_DWORD)v2 )
  {
    v8 = *((_DWORD *)v5 + 6);
    if ( (unsigned int)v2 > v8 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x234u);
    }
    else
    {
      v9 = v8 - v2;
      if ( v9 )
        memmove(*(void **)v5, (const void *)(*(_QWORD *)v5 + 8 * v2), 8LL * v9);
      *((_DWORD *)v5 + 6) = v9;
    }
  }
  return v1;
}
