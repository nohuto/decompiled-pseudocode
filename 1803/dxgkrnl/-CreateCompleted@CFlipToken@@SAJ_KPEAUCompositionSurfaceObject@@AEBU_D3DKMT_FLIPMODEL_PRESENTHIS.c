/*
 * XREFs of ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C004B85C
 * Callers:
 *     ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C004AFE0 (-CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenBase@@@Z @ 0x1C000F468 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenStat.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C0017B10 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C0024F5C (--0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z.c)
 */

__int64 __fastcall CFlipToken::CreateCompleted(
        __int64 a1,
        struct CompositionSurfaceObject *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        struct CFlipToken **a4)
{
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // edi
  char v5; // bp
  CFlipToken *v10; // rax
  struct CFlipToken *v11; // rbx
  int v12; // edi
  unsigned int v14; // [rsp+28h] [rbp-30h]
  bool v15; // [rsp+70h] [rbp+18h] BYREF

  Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)a3->Flags.Value;
  v5 = 1;
  *a4 = 0LL;
  v15 = 1;
  if ( (*(_DWORD *)&Value & 0x42000) == 0x2000 )
  {
    CompositionSurfaceObject::GetIndependentFlipNotifyDwm(this, a1, &v15);
    Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)a3->Flags.Value;
    v5 = v15;
  }
  v10 = (CFlipToken *)operator new[](0x248uLL, 0x6F744D54u, PagedPool);
  if ( v10 )
    v11 = CFlipToken::CFlipToken(v10, a1, this);
  else
    v11 = 0LL;
  if ( v11 )
  {
    v12 = CFlipToken::InitializeCompleted(
            (__int64)v11,
            (__int64)a3,
            v5,
            (*(_DWORD *)&Value & 0x100000) != 0,
            *((_BYTE *)&Value + 3) & 1,
            v14);
    if ( v12 < 0 )
      (**(void (__fastcall ***)(struct CFlipToken *, __int64))v11)(v11, 1LL);
    else
      *a4 = v11;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v12;
}
