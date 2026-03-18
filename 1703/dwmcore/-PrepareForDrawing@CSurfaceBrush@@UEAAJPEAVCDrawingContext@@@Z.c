/*
 * XREFs of ?PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180038B00
 * Callers:
 *     ?PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180039830 (-PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008CCE0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x18000CD80 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?HrFindInterface@CCompositionSurfaceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037D00 (-HrFindInterface@CCompositionSurfaceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::PrepareForDrawing(CSurfaceBrush *this, struct CDrawingContext *a2)
{
  CBitmapOfDeviceBitmaps *v3; // rcx
  __int64 (__fastcall *v4)(CCompositionSurfaceBitmap *, const struct _GUID *, void **); // rax
  __int64 v5; // rax
  __int64 (__fastcall *v6)(CCompositionSurfaceBitmap *, const struct _GUID *, void **); // rax
  int Interface; // eax
  int v8; // ebx
  CBitmapOfDeviceBitmaps *v9; // r10
  void (*v11)(void); // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  CBitmapOfDeviceBitmaps *v15; // [rsp+38h] [rbp+18h] BYREF

  if ( *((_BYTE *)a2 + 3040) || *((_QWORD *)a2 + 838) )
    return 0LL;
  v15 = 0LL;
  v3 = (CBitmapOfDeviceBitmaps *)*((_QWORD *)this + 12);
  v4 = **(__int64 (__fastcall ***)(CCompositionSurfaceBitmap *, const struct _GUID *, void **))v3;
  if ( v4 != CCompositionSurfaceBitmap::QueryInterface )
  {
    v8 = v4(v3, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, (void **)&v15);
LABEL_19:
    v9 = v15;
    goto LABEL_11;
  }
  v5 = *(_QWORD *)&GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2.Data1
     - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v5 = *(_QWORD *)GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2.Data4
       - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v5 )
  {
    v15 = v3;
    v8 = 0;
LABEL_17:
    v11 = *(void (**)(void))(*(_QWORD *)v3 + 8LL);
    if ( (char *)v11 == (char *)CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef(v3);
    else
      v11();
    goto LABEL_19;
  }
  v6 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, const struct _GUID *, void **))(*(_QWORD *)v3 + 32LL);
  if ( v6 == CCompositionSurfaceBitmap::HrFindInterface )
    Interface = CCompositionSurfaceBitmap::HrFindInterface(
                  v3,
                  &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
                  (void **)&v15);
  else
    Interface = v6(v3, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, (void **)&v15);
  v8 = Interface;
  if ( Interface >= 0 )
  {
    v3 = v15;
    goto LABEL_17;
  }
  v9 = 0LL;
  v15 = 0LL;
LABEL_11:
  if ( v8 >= 0 )
  {
    LOBYTE(v12) = CDrawingContext::IsNormalDesktopRender(a2);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(v13 + 160))(v14, 0LL, v12);
    v9 = v15;
  }
  if ( v9 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
