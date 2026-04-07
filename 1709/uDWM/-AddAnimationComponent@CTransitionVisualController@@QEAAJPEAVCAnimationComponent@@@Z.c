/*
 * XREFs of ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800058A0
 * Callers:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000465C (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x18000257C (-GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180006DF4 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180006EE0 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionVisualController::AddAnimationComponent(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  int inserted; // eax
  int v4; // ebx
  __int64 v5; // rcx
  float v6; // edx
  unsigned int v7; // eax
  struct CAnimationComponent *v8; // rcx
  struct CVisual *v9; // rdx
  int v11; // eax
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-18h]
  struct CAnimationComponent *v14; // [rsp+48h] [rbp+10h] BYREF
  float v15; // [rsp+50h] [rbp+18h] BYREF

  v14 = a2;
  inserted = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v13 = 2313;
LABEL_18:
    v12 = inserted;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v12,
      v13);
    return (unsigned int)v4;
  }
  inserted = CTransitionVisualController::_EnsureStagingVisualRoot(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v13 = 2314;
    goto LABEL_18;
  }
  v5 = *((unsigned int *)this + 34);
  v6 = v15;
  v7 = v5 + 1;
  if ( (int)v5 + 1 >= (unsigned int)v5 )
    LODWORD(v6) = v5 + 1;
  v4 = v7 < (unsigned int)v5 ? 0x80070216 : 0;
  if ( v7 < (unsigned int)v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
  }
  else if ( LODWORD(v6) > *((_DWORD *)this + 33) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 112, 8LL, 1LL, &v14);
    v4 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v5) = v14;
    *((float *)this + 34) = v6;
  }
  if ( v4 < 0 )
  {
    v13 = 2316;
    v12 = v4;
    goto LABEL_20;
  }
  _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
  v8 = v14;
  v9 = (struct CVisual *)*((_QWORD *)v14 + 4);
  if ( v9 )
  {
    inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v9, 0LL, 0, 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v13 = 2321;
      goto LABEL_18;
    }
    v8 = v14;
  }
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
               (struct CVisual *)((*((_QWORD *)v8 + 5) + 8LL) & -(__int64)(*((_QWORD *)v8 + 5) != 0LL)),
               0LL,
               0,
               1);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v13 = 2325;
    goto LABEL_18;
  }
  if ( (int)CTransitionVisualController::GetPerspectiveValue(
              *(_DWORD *)(*((_QWORD *)v14 + 16) + 72LL),
              *((_DWORD *)v14 + 7),
              &v15) >= 0 )
    *(float *)(*((_QWORD *)v14 + 5) + 936LL) = v15;
  return (unsigned int)v4;
}
