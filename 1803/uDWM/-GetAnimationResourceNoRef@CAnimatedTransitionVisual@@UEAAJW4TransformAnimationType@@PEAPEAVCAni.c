/*
 * XREFs of ?GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z @ 0x180093A70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CAnimationResource@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800933FC (-Create@CAnimationResource@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetTrigger@CAnimationResource@@QEAAJPEAVCResource@@@Z @ 0x1800A72DC (-SetTrigger@CAnimationResource@@QEAAJPEAVCResource@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::GetAnimationResourceNoRef(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdi
  int v7; // eax
  struct CResource *v8; // rdx
  int v9; // eax

  v3 = 0;
  v6 = a1 + 8LL * a2;
  if ( !*(_QWORD *)(v6 + 616) )
  {
    v7 = CAnimationResource::Create(
           *(struct IDwmChannel **)(*(_QWORD *)(a1 + 24) + 16LL),
           (struct CAnimationResource **)(v6 + 616));
    v3 = v7;
    if ( v7 >= 0 )
    {
      v8 = *(struct CResource **)(a1 + 720);
      if ( v8 )
      {
        v9 = CAnimationResource::SetTrigger(*(CAnimationResource **)(v6 + 616), v8);
        v3 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x768u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x765u);
    }
  }
  *a3 = *(_QWORD *)(v6 + 616);
  return v3;
}
