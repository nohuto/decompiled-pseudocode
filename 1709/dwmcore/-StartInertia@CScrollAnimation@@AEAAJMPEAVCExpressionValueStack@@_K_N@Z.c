/*
 * XREFs of ?StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x18018929C
 * Callers:
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180188974 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070274 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z @ 0x18016AC70 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z.c)
 *     ?HasInteraction@CScrollAnimation@@AEBA_NXZ @ 0x180188EB0 (-HasInteraction@CScrollAnimation@@AEBA_NXZ.c)
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAJPEAPEAUIScalarForce@@@Z @ 0x180189184 (-SelectInertiaModifier@CScrollAnimation@@QEAAJPEAPEAUIScalarForce@@@Z.c)
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
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _BYTE *v17; // rax
  __int64 v18; // rcx
  signed int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rax
  struct IScalarForce *v22; // rbx
  __int64 v23; // rsi
  struct IScalarForce *v25; // [rsp+30h] [rbp-30h] BYREF
  __int128 v26; // [rsp+38h] [rbp-28h]
  __int64 v27; // [rsp+48h] [rbp-18h]
  struct IScalarForce *v28; // [rsp+80h] [rbp+20h] BYREF

  v5 = *((_QWORD *)this + 35);
  if ( v5 )
    v9 = *(_QWORD *)(v5 + 8);
  else
    v9 = 0LL;
  *((_QWORD *)this + 36) = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
  v10 = *((_DWORD *)this + 69);
  *((_DWORD *)this + 68) = 2;
  CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v9, v10, a2);
  v11 = a5;
  (*(void (__fastcall **)(CScrollAnimation *, __int64, struct CExpressionValueStack *, __int64, bool))(*(_QWORD *)this + 296LL))(
    this,
    v12,
    a3,
    a4,
    a5);
  if ( !v11 )
  {
    if ( CScrollAnimation::HasInteraction(this) )
    {
      v13 = *((_QWORD *)this + 35);
      if ( v13 )
        v14 = *(_QWORD *)(v13 + 8);
      else
        v14 = 0LL;
      v15 = v14 + 340;
      v16 = 3LL * *((int *)this + 69);
      *(_BYTE *)(v15 + 4 * v16) &= ~2u;
      v17 = (_BYTE *)(v15 + 36);
      *(_DWORD *)(v15 + 4 * v16 + 4) = 0;
      *(_BYTE *)(v15 + 36) |= 1u;
      *(_BYTE *)(v15 + 4 * v16) &= ~4u;
      *(_DWORD *)(v15 + 4 * v16 + 8) = 0;
      v18 = 3LL;
      *(_BYTE *)(v15 + 36) |= 2u;
      do
      {
        *(_BYTE *)v15 |= 4u;
        *(_DWORD *)(v15 + 8) = -805306369;
        v15 += 12LL;
        *v17 |= 2u;
        --v18;
      }
      while ( v18 );
    }
    v28 = 0LL;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v28);
    v19 = CScrollAnimation::SelectInertiaModifier(this, &v28);
    v20 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x3DFu);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v28);
      return v20;
    }
    v21 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 280LL))(this);
    v22 = v28;
    v23 = v21;
    if ( *(struct IScalarForce **)(v21 + 136) != v28 )
    {
      v25 = v28;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v25);
      v25 = *(struct IScalarForce **)(v23 + 136);
      *(_QWORD *)(v23 + 136) = v22;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v25);
    }
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v28);
  }
  *((_BYTE *)this + 296) &= ~4u;
  v26 = 0uLL;
  v20 = 0;
  v27 = 0LL;
  *((_OWORD *)this + 23) = 0uLL;
  *((_QWORD *)this + 48) = 0LL;
  return v20;
}
