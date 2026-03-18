/*
 * XREFs of ?GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z @ 0x18014FCC4
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180089E8C (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 */

struct tagRECT *__fastcall CDwmMetaRegion::GetMoveRects(CDwmMetaRegion *this, unsigned int *a2, unsigned int *a3)
{
  char *v3; // rbx
  void **v4; // rdi
  signed int v7; // eax
  _DWORD *v8; // rax
  unsigned int v9; // ecx

  v3 = 0LL;
  v4 = (void **)((char *)this + 32);
  *a2 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    WPF::ProcessHeapImpl::Free(*v4);
    *v4 = 0LL;
  }
  v7 = HrgnToRgnData(*((HRGN *)this + 3), (struct _RGNDATA **)v4, a3);
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x20Bu);
  }
  else
  {
    v8 = *v4;
    if ( *v4 )
    {
      v9 = v8[2];
      if ( v9 )
      {
        v3 = (char *)(v8 + 8);
        *a2 = v9;
      }
    }
  }
  return (struct tagRECT *)v3;
}
