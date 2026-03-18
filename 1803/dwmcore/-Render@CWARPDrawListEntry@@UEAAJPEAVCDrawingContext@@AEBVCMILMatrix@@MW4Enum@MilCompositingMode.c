/*
 * XREFs of ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18017E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180006170 (-UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?FromMilCompositingMode@BlendMode@@YA?AW4Enum@1@W42MilCompositingMode@@@Z @ 0x18017E900 (-FromMilCompositingMode@BlendMode@@YA-AW4Enum@1@W42MilCompositingMode@@@Z.c)
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x1801E1870 (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::Render(__int64 a1, __int64 a2, __int64 a3, float a4, unsigned int a5)
{
  __int64 v5; // r14
  int updated; // eax
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  CD2DContext *v17; // rax
  int appended; // eax

  v5 = *(_QWORD *)(a2 + 384);
  if ( (*(_BYTE *)(a1 + 44) & 0x10) != 0 )
  {
    updated = CDrawListBitmap::UpdateSwapChainRealization(
                (CCompositionSurfaceBitmap **)(a1 + 96),
                (CDrawingContext *)a2);
    v10 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x4Eu);
      return v10;
    }
    v11 = CDrawListBitmap::UpdateSwapChainRealization((CCompositionSurfaceBitmap **)(a1 + 176), (CDrawingContext *)a2);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x4Fu);
      return v10;
    }
  }
  v12 = *(_DWORD *)(a1 + 44);
  if ( (v12 & 4) != 0 )
  {
    *(_BYTE *)(a2 + 6835) = 1;
    v12 = *(_DWORD *)(a1 + 44);
  }
  if ( (v12 & 0x200) != 0 )
  {
    v13 = *(_DWORD *)(a2 + 252);
    v14 = 0;
    if ( v13 == 1 )
    {
      v14 = 1;
      goto LABEL_19;
    }
    if ( v13 > 1 )
    {
      if ( v13 <= 3 )
      {
        v14 = 2;
        goto LABEL_19;
      }
      switch ( v13 )
      {
        case 4:
          goto LABEL_15;
        case 5:
          v14 = 4;
          break;
        case 6:
LABEL_15:
          v14 = 3;
          break;
      }
    }
LABEL_19:
    *(_DWORD *)(a1 + 168) = v14;
    v15 = 0;
    v16 = *(_DWORD *)(a2 + 252);
    if ( v16 == 1 )
    {
      v15 = 1;
      goto LABEL_29;
    }
    if ( v16 > 1 )
    {
      if ( v16 <= 3 )
      {
        v15 = 2;
        goto LABEL_29;
      }
      switch ( v16 )
      {
        case 4:
          goto LABEL_25;
        case 5:
          v15 = 4;
          break;
        case 6:
LABEL_25:
          v15 = 3;
          break;
      }
    }
LABEL_29:
    *(_DWORD *)(a1 + 248) = v15;
  }
  *(_OWORD *)(a1 + 256) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 272) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 288) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(a1 + 304) = *(_OWORD *)(a3 + 48);
  *(_DWORD *)(a1 + 320) = *(_DWORD *)(a3 + 64);
  *(_DWORD *)(a1 + 324) = BlendMode::FromMilCompositingMode(a5);
  *(float *)(a1 + 328) = a4;
  v17 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 160LL))(v5);
  appended = CD2DContext::AppendWARPDrawListEntry(v17, (struct CWARPDrawListEntry *)a1);
  v10 = appended;
  if ( appended < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x63u);
  return v10;
}
