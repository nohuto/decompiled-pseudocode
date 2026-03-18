/*
 * XREFs of ?SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x1801BC564
 * Callers:
 *     ?SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x1801BC4E0 (-SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x18007BFC0 (-SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z.c)
 *     ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PEBUCContextState@@@Z @ 0x1801BCAD8 (-SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PE.c)
 */

__int64 __fastcall CHwLinearGradientBrush::SetBrushAndContextInternal(
        CHwLinearGradientBrush *this,
        struct CMILBrush *a2,
        const struct CMILMatrix **a3)
{
  char v4; // bp
  _DWORD *v5; // rsi
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rax
  signed int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // edx

  v4 = 0;
  v5 = (_DWORD *)(((unsigned __int64)a2 - 24) & -(__int64)(a2 != 0LL));
  v6 = *((_DWORD *)this + 4);
  v7 = v5[30];
  if ( v6 )
  {
    if ( *((_DWORD *)this + 22) != v7 )
    {
      v8 = *((_QWORD *)this + 12);
      *((_DWORD *)this + 22) = v7;
      *(_BYTE *)(v8 + 232) = 1;
    }
  }
  else
  {
    v9 = *((_QWORD *)this + 12);
    v4 = 1;
    *((_DWORD *)this + 22) = v7;
    *(_BYTE *)(v9 + 232) = 1;
  }
  v10 = CHwLinearGradientColorSource::SetBrushAndContext(
          *((CHwLinearGradientColorSource **)this + 12),
          (struct CMILBrushGradient *)v5,
          a3[1],
          *a3);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x141u);
  }
  else if ( v4 )
  {
    v12 = *(_DWORD *)(*((_QWORD *)this + 5) + 496LL);
    if ( v12 != -1 )
      CMILResourceCache::SetResource((CMILResourceCache *)(v5 + 12), v12, this);
  }
  return v11;
}
