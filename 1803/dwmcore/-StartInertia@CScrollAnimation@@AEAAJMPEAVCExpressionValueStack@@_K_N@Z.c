/*
 * XREFs of ?StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x1801BE6E4
 * Callers:
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801BDDE0 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180025080 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z @ 0x180193560 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z.c)
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAJPEAPEAUIScalarForce@@@Z @ 0x1801BE5C4 (-SelectInertiaModifier@CScrollAnimation@@QEAAJPEAPEAUIScalarForce@@@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x1801CA9F0 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 */

__int64 __fastcall CScrollAnimation::StartInertia(
        CScrollAnimation *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4,
        bool a5)
{
  __int64 v5; // rax
  __int64 v9; // rcx
  int v10; // edx
  bool v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct CChainingHelper *ActiveChainingHelper; // rax
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rax
  struct IScalarForce *v21; // rbx
  __int64 v22; // rsi
  struct IScalarForce *v24; // [rsp+30h] [rbp-30h] BYREF
  __int128 v25; // [rsp+38h] [rbp-28h]
  __int64 v26; // [rsp+48h] [rbp-18h]
  struct IScalarForce *v27; // [rsp+80h] [rbp+20h] BYREF

  v5 = *((_QWORD *)this + 37);
  if ( v5 )
    v9 = *(_QWORD *)(v5 + 8);
  else
    v9 = 0LL;
  *((_QWORD *)this + 38) = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL);
  v10 = *((_DWORD *)this + 73);
  *((_DWORD *)this + 72) = 2;
  CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v9, v10, a2);
  v11 = a5;
  (*(void (__fastcall **)(CScrollAnimation *, __int64, struct CExpressionValueStack *, __int64, bool))(*(_QWORD *)this + 296LL))(
    this,
    v12,
    a3,
    a4,
    a5);
  v13 = *((_QWORD *)this + 37);
  if ( v13 )
    v13 = *(_QWORD *)(v13 + 8);
  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v13 + 352));
  if ( !v11 )
  {
    if ( ActiveChainingHelper )
    {
      v15 = 3LL * *((int *)this + 73);
      *((_BYTE *)ActiveChainingHelper + 4 * v15) &= ~2u;
      v16 = (char *)ActiveChainingHelper + 36;
      *((_DWORD *)ActiveChainingHelper + v15 + 1) = 0;
      *((_BYTE *)ActiveChainingHelper + 36) |= 1u;
      *((_BYTE *)ActiveChainingHelper + 4 * v15) &= ~4u;
      *((_DWORD *)ActiveChainingHelper + v15 + 2) = 0;
      v17 = 3LL;
      *((_BYTE *)ActiveChainingHelper + 36) |= 2u;
      do
      {
        *(_BYTE *)ActiveChainingHelper |= 4u;
        *((_DWORD *)ActiveChainingHelper + 2) = -805306369;
        ActiveChainingHelper = (struct CChainingHelper *)((char *)ActiveChainingHelper + 12);
        *v16 |= 2u;
        --v17;
      }
      while ( v17 );
    }
    v27 = 0LL;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
    v18 = CScrollAnimation::SelectInertiaModifier(this, &v27);
    v19 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x3E2u);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
      return v19;
    }
    v20 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 280LL))(this);
    v21 = v27;
    v22 = v20;
    if ( *(struct IScalarForce **)(v20 + 136) != v27 )
    {
      v24 = v27;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v24);
      v24 = *(struct IScalarForce **)(v22 + 136);
      *(_QWORD *)(v22 + 136) = v21;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v24);
    }
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
  }
  *((_BYTE *)this + 312) &= ~4u;
  v25 = 0uLL;
  v19 = 0;
  v26 = 0LL;
  *((_OWORD *)this + 24) = 0uLL;
  *((_QWORD *)this + 50) = 0LL;
  return v19;
}
