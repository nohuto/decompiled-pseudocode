/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopInternal@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F45EC
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopInternal@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopInternal@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1802616B4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  void **v6; // r8
  unsigned int CanCastTo; // r9d
  __int64 v8; // r10
  const struct _GUID *v9; // r11

  if ( InlineIsEqualGUID(a2, &GUID_c179334c_4295_40d3_bea1_c654d965605a) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2) )
    {
      *v6 = (void *)v8;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v8 + 8), v9, v6);
      if ( CanCastTo == -2147467262 )
        return (unsigned int)-2147467262;
    }
    return CanCastTo;
  }
}
