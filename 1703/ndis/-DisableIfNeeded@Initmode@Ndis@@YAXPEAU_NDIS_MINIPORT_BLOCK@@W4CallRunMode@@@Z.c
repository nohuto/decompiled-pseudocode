/*
 * XREFs of ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00B8E78
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B8D44 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     _lambda_3586b9b7f2fd6000f93b66a493a8f736_::_lambda_invoker_cdecl_ @ 0x1C00B8E40 (_lambda_3586b9b7f2fd6000f93b66a493a8f736_--_lambda_invoker_cdecl_.c)
 *     _lambda_28a615441be2ea9fc307386fd4fcfbda_::_lambda_invoker_cdecl_ @ 0x1C00F0B10 (_lambda_28a615441be2ea9fc307386fd4fcfbda_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00B8610 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B8EF0 (-CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall Ndis::Initmode::DisableIfNeeded(
        struct _NDIS_MINIPORT_BLOCK *this,
        enum CallRunMode a2,
        enum CallRunMode a3)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx
  bool v6; // bl

  if ( this->InitMode )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&this->BindEngine.m_lock, 0LL);
    v6 = Ndis::Initmode::CheckAllDriversRunning((Ndis::Initmode *)this, v5);
    KeLeaveCriticalRegion();
    ExReleasePushLockEx(&this->BindEngine.m_lock, 0LL);
    if ( v6 )
      ndisMExitInitMode(this, a2);
  }
}
