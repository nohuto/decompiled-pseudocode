/*
 * XREFs of ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18006C970
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180069700 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001DE38 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180092D70 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180092DA8 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x180154CB0 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180155520 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 */

void __fastcall CHwndRenderTarget::AddInvalidRects(
        CHwndRenderTarget *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rcx
  CDirectFlipInfo *v8; // rcx
  __int64 v9; // rbp
  CDirectFlipInfo *v10; // rcx

  v5 = *((_QWORD *)this + 7);
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, const struct CVisualTree *))(*(_QWORD *)v5 + 48LL))(v5, a2)
      && (!*(_DWORD *)(*((_QWORD *)this - 7) + 284LL) || *((_BYTE *)this + 725)) )
    {
      *((_BYTE *)this + 721) = 1;
    }
    else
    {
      if ( *((_BYTE *)this + 721) )
        *((_BYTE *)this + 715) = 1;
      *((_BYTE *)this + 721) = 0;
    }
  }
  if ( *((_BYTE *)this + 715) )
  {
    CDirtyRegion::SetFullDirty(a3);
  }
  else
  {
    if ( (*((_BYTE *)this + 300) & 8) == 0 && !*((_BYTE *)a3 + 2724) )
    {
      if ( CDirtyRegion::IsEmpty(a3) )
        *((_BYTE *)a3 + 2725) = 1;
      else
        CDirtyRegion::SetFullDirty(a3);
    }
    v6 = *((_QWORD *)this + 50);
    if ( *((_DWORD *)this + 106) )
    {
      v9 = *((unsigned int *)this + 106);
      do
      {
        CDirtyRegion::Add(a3, 0LL, 0LL, v6);
        v6 += 16LL;
        --v9;
      }
      while ( v9 );
    }
    v7 = *((_QWORD *)this + 88);
    if ( v7 )
    {
      v8 = *(CDirectFlipInfo **)(v7 + 968);
      if ( v8 )
      {
        if ( *((_BYTE *)v8 + 48) && CDirectFlipInfo::RenderingRealizationChanged(v8) )
          CDirectFlipInfo::AddOverdrawToDirtyRegion(v10, a3, (CHwndRenderTarget *)((char *)this + 92));
      }
    }
  }
  *((_BYTE *)this + 715) = 0;
  *((_DWORD *)this + 106) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 400, 16LL);
}
