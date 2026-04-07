/*
 * XREFs of ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x18006A478
 * Callers:
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180069C00 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180012E90 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020C30 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x6F8u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x6F7u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x6F5u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x6F4u);
  }
  return v3;
}
