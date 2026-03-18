/*
 * XREFs of ?StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x180182214
 * Callers:
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801815B4 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A3C8 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z @ 0x18016C0B0 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z.c)
 *     ?HasInteraction@CScrollAnimation@@AEBA_NXZ @ 0x180181B40 (-HasInteraction@CScrollAnimation@@AEBA_NXZ.c)
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAPEAUIAccelerator@@XZ @ 0x180181E40 (-SelectInertiaModifier@CScrollAnimation@@QEAAPEAUIAccelerator@@XZ.c)
 */

__int64 __fastcall CScrollAnimation::StartInertia(
        CScrollAnimation *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4,
        bool a5)
{
  __int64 v6; // rax
  __int64 v9; // rcx
  int v10; // edx
  bool v11; // si
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _BYTE *v19; // rax
  __int64 v20; // rcx
  struct IAccelerator *v21; // rsi
  __int64 v22; // rdi
  struct IAccelerator *v24; // [rsp+70h] [rbp+8h] BYREF

  v6 = *((_QWORD *)this + 29);
  if ( v6 )
    v9 = *(_QWORD *)(v6 + 8);
  else
    v9 = 0LL;
  *((_QWORD *)this + 30) = *(_QWORD *)(*((_QWORD *)this + 2) + 520LL);
  v10 = *((_DWORD *)this + 57);
  *((_DWORD *)this + 56) = 2;
  CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v9, v10, a2);
  v11 = a5;
  v13 = (*(__int64 (__fastcall **)(CScrollAnimation *, __int64, struct CExpressionValueStack *, __int64, bool))(*(_QWORD *)this + 240LL))(
          this,
          v12,
          a3,
          a4,
          a5);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x3CEu);
  }
  else
  {
    if ( !v11 )
    {
      if ( CScrollAnimation::HasInteraction(this) )
      {
        v15 = *((_QWORD *)this + 29);
        if ( v15 )
          v16 = *(_QWORD *)(v15 + 8);
        else
          v16 = 0LL;
        v17 = v16 + 328;
        v18 = 3LL * *((int *)this + 57);
        *(_BYTE *)(v17 + 4 * v18) &= ~2u;
        v19 = (_BYTE *)(v17 + 36);
        *(_DWORD *)(v17 + 4 * v18 + 4) = 0;
        *(_BYTE *)(v17 + 36) |= 1u;
        *(_BYTE *)(v17 + 4 * v18) &= ~4u;
        *(_DWORD *)(v17 + 4 * v18 + 8) = 0;
        v20 = 3LL;
        *(_BYTE *)(v17 + 36) |= 2u;
        do
        {
          *(_BYTE *)v17 |= 4u;
          *(_DWORD *)(v17 + 8) = -1;
          v17 += 12LL;
          *v19 |= 2u;
          --v20;
        }
        while ( v20 );
      }
      v21 = CScrollAnimation::SelectInertiaModifier(this);
      v22 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 224LL))(this);
      if ( *(struct IAccelerator **)(v22 + 184) != v21 )
      {
        v24 = v21;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v24);
        v24 = *(struct IAccelerator **)(v22 + 184);
        *(_QWORD *)(v22 + 184) = v21;
        Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v24);
      }
    }
    *((_BYTE *)this + 248) &= ~4u;
    v14 = 0;
    *(_OWORD *)((char *)this + 312) = 0uLL;
    *((_QWORD *)this + 41) = 0LL;
  }
  return v14;
}
