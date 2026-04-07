/*
 * XREFs of ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800A40B8
 * Callers:
 *     ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029AF0 (-ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18001FB40 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x1800A4BB8 (-_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z.c)
 */

void __fastcall CDesktopThumbnailBase::RecloneWindow(CDesktopThumbnailBase *this, struct CWindowData *a2)
{
  const struct CTopLevelWindow *v3; // rdx
  int Index; // eax
  CVisual *v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  struct CVisual *v11; // rcx
  __int64 v12; // rsi
  struct CVisual *v13; // rdi
  __int64 v14; // rax
  struct CVisual *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = 0LL;
  v3 = (const struct CTopLevelWindow *)*((_QWORD *)a2 + 49);
  if ( v3 )
  {
    Index = CDesktopThumbnailBase::_GetIndex(this, v3);
    v7 = (unsigned int)Index;
    if ( Index >= 0 )
    {
      CVisual::RenderRecursive(v6);
      v10 = CTopLevelWindow::CloneVisualTreeForLivePreview(*((CTopLevelWindow **)a2 + 49), 0, v8, v9, &v15);
      if ( v10 >= 0 )
      {
        v12 = v7;
        v13 = v15;
        v12 *= 2LL;
        VisualCollection::InsertRelative(
          (CDesktopThumbnailBase *)((char *)this + 32),
          (struct CVisual **)v15,
          *(struct CVisual **)(*((_QWORD *)this + 30) + 8 * v12 + 8),
          0,
          1);
        VisualCollection::Remove(
          (CDesktopThumbnailBase *)((char *)this + 32),
          *(struct CVisual **)(*((_QWORD *)this + 30) + 8 * v12 + 8));
        v14 = *((_QWORD *)this + 30);
        v11 = *(struct CVisual **)(v14 + 8 * v12 + 8);
        *(_QWORD *)(v14 + 8 * v12 + 8) = v13;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xA2u);
        v11 = v15;
      }
      if ( v11 )
        CBaseObject::Release(v11);
    }
  }
}
