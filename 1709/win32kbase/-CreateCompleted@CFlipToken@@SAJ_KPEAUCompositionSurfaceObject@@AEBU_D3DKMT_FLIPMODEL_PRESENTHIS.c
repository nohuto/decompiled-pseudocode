/*
 * XREFs of ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C007BD8C
 * Callers:
 *     ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C007BD30 (-CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     ??0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C0037C08 (--0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z.c)
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenBase@@@Z @ 0x1C00381A8 (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenB.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C01540C4 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 */

__int64 __fastcall CFlipToken::CreateCompleted(
        unsigned __int64 a1,
        struct CompositionSurfaceObject *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        struct CFlipToken **a4)
{
  char v4; // di
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // eax
  char v10; // r15
  char v11; // si
  CFlipToken *v12; // rax
  struct CFlipToken *v13; // rbx
  int v14; // edi
  bool v16; // [rsp+70h] [rbp+18h] BYREF

  *a4 = 0LL;
  v4 = 1;
  Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)a3->Flags.Value;
  v16 = 1;
  if ( (*(_WORD *)&Value & 0x2000) != 0 && (*(_DWORD *)&Value & 0x40000) == 0 )
  {
    CompositionSurfaceObject::GetIndependentFlipNotifyDwm(this, a1, &v16);
    v4 = v16;
  }
  v10 = (a3->Flags.Value & 0x100000) != 0;
  v11 = HIBYTE(a3->Flags.Value) & 1;
  v12 = (CFlipToken *)Win32AllocPool(248LL, 0x6F744D54u);
  if ( v12 )
    v13 = CFlipToken::CFlipToken(v12, a1, this);
  else
    v13 = 0LL;
  if ( v13 )
  {
    v14 = CFlipToken::Initialize((__int64)v13, (__int64)a3, v4, v10, v11);
    if ( v14 < 0 )
      (**(void (__fastcall ***)(struct CFlipToken *, __int64))v13)(v13, 1LL);
    else
      *a4 = v13;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v14;
}
