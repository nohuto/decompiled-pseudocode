/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F4570
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIWeakReferenceSource@@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F3CC4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIVirtualDesktopDataSo.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  void **v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned int CanCastTo; // edx

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc);
  CanCastTo = 0;
  if ( IsEqualGUID )
  {
    *v3 = (void *)v5;
    return 0LL;
  }
  else
  {
    if ( *(_DWORD *)v4 == -1049021620
      && *(_DWORD *)(v4 + 4) == *(_DWORD *)&GUID_c179334c_4295_40d3_bea1_c654d965605a.Data2
      && *(_DWORD *)(v4 + 8) == *(_DWORD *)GUID_c179334c_4295_40d3_bea1_c654d965605a.Data4
      && *(_DWORD *)(v4 + 12) == *(_DWORD *)&GUID_c179334c_4295_40d3_bea1_c654d965605a.Data4[4] )
    {
      *v3 = (void *)(v5 + 8);
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v5 + 16), (const struct _GUID *)v4, v3);
      if ( CanCastTo == -2147467262 )
        return (unsigned int)-2147467262;
    }
    return CanCastTo;
  }
}
