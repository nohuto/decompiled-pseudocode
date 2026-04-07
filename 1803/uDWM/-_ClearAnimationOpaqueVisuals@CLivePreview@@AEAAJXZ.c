/*
 * XREFs of ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180071308
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x18002DE1C (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x180070404 (--1CLivePreview@@MEAA@XZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180070920 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000F9A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18001FB24 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020F90 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLivePreview::_ClearAnimationOpaqueVisuals(CLivePreview *this)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v4; // r14
  __int64 v5; // rsi
  CVisual *v6; // rbx
  int v7; // eax
  CBaseObject *v8; // rcx
  __int64 v9; // rcx
  struct CVisual *v10; // rdx
  __int64 v11; // rcx

  v1 = 0;
  v2 = *((_DWORD *)this + 90) - 1;
  v4 = v2;
  if ( v2 < 0 )
  {
LABEL_7:
    *((_DWORD *)this + 90) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 336, 0x30u);
    v9 = *((_QWORD *)this + 63);
    if ( v9 )
    {
      VisualCollection::RemoveAll((VisualCollection *)(v9 + 32));
      v10 = (struct CVisual *)*((_QWORD *)this + 63);
      v11 = *((_QWORD *)v10 + 3);
      if ( v11 )
        VisualCollection::Remove((VisualCollection *)(v11 + 32), v10);
      *((_DWORD *)this + 106) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 400, 0x10u);
      *((_DWORD *)this + 114) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 432, 0x20u);
    }
  }
  else
  {
    v5 = 48LL * v2;
    while ( 1 )
    {
      v6 = *(CVisual **)(v5 + *((_QWORD *)this + 42));
      CVisual::RenderRecursive(v6);
      CTopLevelWindow::StopLivePreviewAnimation(v6);
      v7 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v6 + 3) + 32LL), v6);
      v1 = v7;
      if ( v7 < 0 )
        break;
      v8 = *(CBaseObject **)(*((_QWORD *)this + 42) + v5 + 16);
      if ( v8 )
      {
        CBaseObject::Release(v8);
        *(_QWORD *)(*((_QWORD *)this + 42) + v5 + 16) = 0LL;
      }
      v5 -= 48LL;
      if ( --v4 < 0 )
        goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x88u);
  }
  return v1;
}
