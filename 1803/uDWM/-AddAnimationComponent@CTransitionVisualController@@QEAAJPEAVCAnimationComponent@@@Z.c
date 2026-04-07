/*
 * XREFs of ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180007BAC
 * Callers:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000996C (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x180006B1C (-GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180008EA4 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180008F90 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionVisualController::AddAnimationComponent(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  int inserted; // eax
  int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // edx
  struct CAnimationComponent *v7; // rcx
  struct CVisual *v8; // rdx
  int v10; // eax
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-18h]
  struct CAnimationComponent *v13; // [rsp+48h] [rbp+10h] BYREF
  float v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = a2;
  inserted = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 2311;
LABEL_18:
    v11 = inserted;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v11,
      v12);
    return (unsigned int)v4;
  }
  inserted = CTransitionVisualController::_EnsureStagingVisualRoot(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 2312;
    goto LABEL_18;
  }
  v5 = *((_DWORD *)this + 34);
  v6 = v5 + 1;
  v4 = v5 + 1 < v5 ? 0x80070216 : 0;
  if ( v5 + 1 < v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
  }
  else if ( v6 > *((_DWORD *)this + 33) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 112, 8LL, 1LL, &v13);
    v4 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * v5) = v13;
    *((_DWORD *)this + 34) = v6;
  }
  if ( v4 < 0 )
  {
    v12 = 2314;
    v11 = v4;
    goto LABEL_20;
  }
  _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
  v7 = v13;
  v8 = (struct CVisual *)*((_QWORD *)v13 + 4);
  if ( v8 )
  {
    inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v8, 0LL, 0, 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v12 = 2319;
      goto LABEL_18;
    }
    v7 = v13;
  }
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
               (struct CVisual *)((*((_QWORD *)v7 + 5) + 8LL) & -(__int64)(*((_QWORD *)v7 + 5) != 0LL)),
               0LL,
               0,
               1);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 2323;
    goto LABEL_18;
  }
  if ( (int)CTransitionVisualController::GetPerspectiveValue(
              *(_DWORD *)(*((_QWORD *)v13 + 16) + 72LL),
              *((_DWORD *)v13 + 7),
              &v14) >= 0 )
    *(float *)(*((_QWORD *)v13 + 5) + 936LL) = v14;
  return (unsigned int)v4;
}
