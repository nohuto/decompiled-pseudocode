/*
 * XREFs of ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x180071194
 * Callers:
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180070920 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000F9A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020F90 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLivePreview::_CleanupClonedVisualTree(CLivePreview *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v2 = VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 64) + 32LL));
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 65) + 32LL));
    v3 = v4;
    if ( v4 >= 0 )
    {
      *((_DWORD *)this + 106) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 400, 0x10u);
      v5 = VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 66) + 32LL));
      v3 = v5;
      if ( v5 >= 0 )
      {
        v6 = CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 66));
        v3 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x6F4u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x6F3u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x6F1u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x6F0u);
  }
  return v3;
}
