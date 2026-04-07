/*
 * XREFs of ??1CScreenRotation@@MEAA@XZ @ 0x180090434
 * Callers:
 *     ??_ECScreenRotation@@MEAAPEAXI@Z @ 0x180079F30 (--_ECScreenRotation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800913C0 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

void __fastcall CScreenRotation::~CScreenRotation(CScreenRotation *this)
{
  *(_QWORD *)this = &CScreenRotation::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 35) = &CScreenRotation::`vftable'{for `IAnimationListener'};
  CScreenRotation::Stop(this, 0);
  CRenderDataVisual::~CRenderDataVisual((volatile signed __int32 **)this);
}
