/*
 * XREFs of ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180196500
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180196090 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x180196148 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180196234 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x1801962EC (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801963D8 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180196448 (-SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x1801966B0 (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z @ 0x180196788 (-SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z.c)
 */

__int64 __fastcall CInteractionTracker::SetProperty(CInteractionTracker *a1, int a2, int a3, float *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  unsigned int v10; // ebx

  if ( a3 == 18 )
  {
    v7 = a2 - 2;
    if ( !v7 )
    {
      CInteractionTracker::SetScale(a1, *a4);
      return 0;
    }
    v8 = v7 - 24;
    if ( !v8 )
    {
      CInteractionTracker::SetMinScale(a1, *a4);
      return 0;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      CInteractionTracker::SetMaxScale(a1, *a4);
      return 0;
    }
    if ( v9 == 34 )
    {
      CInteractionTracker::SetScaleInertiaDecayRate(a1, *a4);
      return 0;
    }
  }
  else if ( a3 == 52 )
  {
    v4 = a2 - 1;
    if ( !v4 )
    {
      CInteractionTracker::SetPosition(a1, (const struct D2DVector3 *)a4);
      return 0;
    }
    v5 = v4 - 19;
    if ( !v5 )
    {
      CInteractionTracker::SetMinPosition(a1, (const struct D2DVector3 *)a4);
      return 0;
    }
    v6 = v5 - 3;
    if ( !v6 )
    {
      CInteractionTracker::SetMaxPosition(a1, (const struct D2DVector3 *)a4);
      return 0;
    }
    if ( v6 == 35 )
    {
      CInteractionTracker::SetPositionInertiaDecayRate(a1, (const struct D2DVector3 *)a4);
      return 0;
    }
  }
  v10 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x4C8u);
  return v10;
}
