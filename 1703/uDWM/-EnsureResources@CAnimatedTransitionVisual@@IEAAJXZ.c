/*
 * XREFs of ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180037680
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180037760 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800378B0 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x180037C70 (-OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180041744 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x18008F170 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x18008F754 (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800070D0 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003C20C (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008F358 (-Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
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
    v4 = CResource::Create(5u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 73);
    v1 = v4;
    if ( v4 < 0 )
    {
      v6 = 992;
      goto LABEL_21;
    }
  }
  if ( !*((_QWORD *)this + 74) )
  {
    v4 = CCachedVisualImageBrushResource::Create(this, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (char *)this + 592);
    v1 = v4;
    if ( v4 < 0 )
    {
      v6 = 997;
      goto LABEL_21;
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
        v6 = 1004;
        goto LABEL_21;
      }
    }
    else
    {
      v1 = 0;
      if ( !*((_QWORD *)this + 41) )
      {
        v5 = CResource::Create(0x15u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 41);
        v1 = v5;
        if ( v5 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x430u);
      }
      if ( (v1 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x3F0u);
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
    v6 = 1016;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v6);
  }
  return v1;
}
