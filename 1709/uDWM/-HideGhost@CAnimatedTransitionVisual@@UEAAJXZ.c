/*
 * XREFs of ?HideGhost@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18002EE90
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18002DAB4 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::HideGhost(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  int v4; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 970) )
  {
    v3 = *((_QWORD *)this + 4);
    if ( v3 )
    {
      v4 = VisualCollection::Remove((VisualCollection *)(v3 + 32), (CAnimatedTransitionVisual *)((char *)this + 8));
      v1 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x2BDu);
    }
  }
  return v1;
}
