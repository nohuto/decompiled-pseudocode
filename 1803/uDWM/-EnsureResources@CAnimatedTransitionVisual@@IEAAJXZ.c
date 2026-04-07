/*
 * XREFs of ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180011780
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180011860 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x1800119A4 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180011A54 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x180011E00 (-OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x180093210 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x180093E14 (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180030B6C (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009394C (-Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180094B50 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::EnsureResources(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v1 = 0;
  if ( *((_BYTE *)this + 975) )
    goto LABEL_8;
  if ( !*((_QWORD *)this + 73) )
  {
    v4 = CResource::Create(5LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (char *)this + 584);
    v1 = v4;
    if ( v4 < 0 )
    {
      v6 = 993;
      goto LABEL_21;
    }
  }
  if ( !*((_QWORD *)this + 74) )
  {
    v4 = CCachedVisualImageBrushResource::Create(this, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (char *)this + 592);
    v1 = v4;
    if ( v4 < 0 )
    {
      v6 = 998;
LABEL_21:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v6);
      return v1;
    }
  }
  if ( !*((_BYTE *)this + 976) )
  {
    if ( *((_BYTE *)this + 984) )
    {
      v4 = CAnimatedTransitionVisual::Ensure3DResources(this);
      v1 = v4;
      if ( v4 < 0 )
      {
        v6 = 1005;
        goto LABEL_21;
      }
    }
    else
    {
      v1 = 0;
      if ( !*((_QWORD *)this + 41) )
      {
        v5 = CResource::Create(21LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (char *)this + 328);
        v1 = v5;
        if ( v5 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x431u);
      }
      if ( (v1 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x3F1u);
        return v1;
      }
    }
LABEL_8:
    if ( !*((_BYTE *)this + 976) )
      return v1;
  }
  v4 = CAnimatedTransitionVisual::_EnsureDCompResources(this);
  v1 = v4;
  if ( v4 < 0 )
  {
    v6 = 1017;
    goto LABEL_21;
  }
  return v1;
}
