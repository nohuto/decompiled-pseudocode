/*
 * XREFs of ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x180020EF0
 * Callers:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 * Callees:
 *     ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x180018DD0 (-SetParent@CVisual@@UEAAJPEAV1@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180020F40 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::SetParent(CTopLevelWindow3D *this, struct CVisual *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = CVisual::SetParent(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x54Au);
  }
  else if ( !a2 )
  {
    v6 = CTopLevelWindow3D::StopAnimation(this);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x54Fu);
  }
  return v5;
}
