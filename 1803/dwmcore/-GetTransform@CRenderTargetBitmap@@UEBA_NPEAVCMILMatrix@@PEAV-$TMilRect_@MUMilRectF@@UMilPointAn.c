/*
 * XREFs of ?GetTransform@CRenderTargetBitmap@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180179AF0
 * Callers:
 *     ?GetBounds@CRenderTargetImageSource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180179870 (-GetBounds@CRenderTargetImageSource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@M.c)
 *     ?GetTransform@CRenderTargetImageSource@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801798A0 (-GetTransform@CRenderTargetImageSource@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetBitmap::GetTransform(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  char result; // al

  if ( a3 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    a3[1] = 0LL;
    *a3 = 0LL;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 48LL))(v5, a3);
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 24);
      if ( v6 )
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 328LL))(v6, a3);
    }
  }
  *(_WORD *)(a2 + 64) = 32085;
  result = 1;
  *(_OWORD *)a2 = _xmm;
  *(_OWORD *)(a2 + 16) = _xmm;
  *(_OWORD *)(a2 + 32) = _xmm;
  *(_OWORD *)(a2 + 48) = _xmm;
  return result;
}
