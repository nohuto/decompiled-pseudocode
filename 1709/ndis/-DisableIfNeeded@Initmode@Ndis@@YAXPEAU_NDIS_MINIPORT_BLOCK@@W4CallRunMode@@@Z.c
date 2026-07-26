/*
 * XREFs of ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00B418C
 * Callers:
 *     _lambda_3586b9b7f2fd6000f93b66a493a8f736_::operator() @ 0x1C00B4320 (_lambda_3586b9b7f2fd6000f93b66a493a8f736_--operator().c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BFD0C (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     _lambda_28a615441be2ea9fc307386fd4fcfbda_::_lambda_invoker_cdecl_ @ 0x1C00FA020 (_lambda_28a615441be2ea9fc307386fd4fcfbda_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B4204 (-CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00C5BE8 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __fastcall Ndis::Initmode::DisableIfNeeded(
        Ndis::Initmode *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        enum CallRunMode a3)
{
  enum CallRunMode v3; // ebp
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx
  bool v6; // bl

  v3 = (int)a2;
  if ( *((_BYTE *)this + 1995) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)this + 5160, 0LL);
    v6 = Ndis::Initmode::CheckAllDriversRunning(this, v5);
    KeLeaveCriticalRegion();
    ExReleasePushLockEx((char *)this + 5160, 0LL);
    if ( v6 )
      ndisMExitInitMode((struct _NDIS_MINIPORT_BLOCK *)this, v3);
  }
}
