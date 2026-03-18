/*
 * XREFs of ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0005808
 * Callers:
 *     ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00057AC (-CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     ??0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C0005C74 (--0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z.c)
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenBase@@@Z @ 0x1C00061A8 (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenB.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C0152C24 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 */

__int64 __fastcall CFlipToken::CreateCompleted(
        unsigned __int64 a1,
        struct CompositionSurfaceObject *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        struct CFlipToken **a4)
{
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // eax
  bool v5; // di
  bool v10; // r12
  char v11; // bp
  CFlipToken *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  CFlipToken *v15; // rbx
  int v16; // edi
  bool v18; // [rsp+70h] [rbp+18h] BYREF

  Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)a3->Flags.Value;
  v5 = 1;
  *a4 = 0LL;
  v18 = 1;
  if ( (*(_DWORD *)&Value & 0x42000) == 0x2000 )
  {
    CompositionSurfaceObject::GetIndependentFlipNotifyDwm(this, a1, &v18);
    v5 = v18;
  }
  v10 = (a3->Flags.Value & 0x100000) != 0;
  v11 = HIBYTE(a3->Flags.Value) & 1;
  v12 = (CFlipToken *)Win32AllocPool(248LL, 1869892948LL);
  if ( v12 )
    v15 = CFlipToken::CFlipToken(v12, a1, this);
  else
    v15 = 0LL;
  if ( v15 )
  {
    LOBYTE(v14) = v10;
    LOBYTE(v13) = v5;
    v16 = CFlipToken::Initialize(v15, a3, v13, v14, v11);
    if ( v16 < 0 )
      (**(void (__fastcall ***)(CFlipToken *, __int64))v15)(v15, 1LL);
    else
      *a4 = v15;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v16;
}
