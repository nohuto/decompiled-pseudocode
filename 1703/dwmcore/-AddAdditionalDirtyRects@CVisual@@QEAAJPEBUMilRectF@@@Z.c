/*
 * XREFs of ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800853C0
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180069700 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180084EB8 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x1800B6D20 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801407D8 (-SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800735BC (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedRect@@@Z @ 0x180086080 (-SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedRect@@@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CVisual::AddAdditionalDirtyRects(CVisual *this, const struct MilRectF *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  char v10; // al
  void *v12; // rax

  v2 = 0;
  if ( *((float *)a2 + 2) > *(float *)a2 && *((float *)a2 + 3) > *((float *)a2 + 1) )
  {
    v5 = *((_QWORD *)this + 26);
    if ( (*(_DWORD *)(v5 + 4) & 0x20000) == 0 )
      goto LABEL_12;
    v6 = v5 + 12;
    v7 = 2130706432LL;
    v8 = 251658240LL;
    while ( (*(_DWORD *)v6 & 0x7F000000) != 0xF000000 )
      v6 += (*(_DWORD *)v6 & 0xFFFFFF) + 4LL;
    v9 = *(_QWORD *)(v6 + 4);
    if ( !v9 )
    {
LABEL_12:
      v12 = HeapAlloc(WPF::g_processHeap, 0, 0x4CuLL);
      v9 = (__int64)v12;
      if ( v12 )
      {
        memset_0(v12, 0, 0x4CuLL);
        *(_DWORD *)(v9 + 68) = 1;
      }
      else
      {
        v9 = 0LL;
      }
      if ( !v9 )
      {
        v2 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xA32u);
        return v2;
      }
      CVisual::SetAdditionalDirtyRects(this, (struct CMergedRect *)v9);
    }
    v10 = *((_BYTE *)this + 90);
    if ( (v10 & 1) != 0 )
    {
      *((_BYTE *)this + 90) = v10 & 0xFE;
      *(_DWORD *)(v9 + 64) = 0;
      *(_QWORD *)(v9 + 68) = 1LL;
    }
    CMergedRectBase<4>::Add(v9, (float *)a2, v7, (_BYTE *)v8);
    CVisual::PropagateFlags(this, 0, 0, 1, 0, 0, 0, 0);
  }
  return v2;
}
