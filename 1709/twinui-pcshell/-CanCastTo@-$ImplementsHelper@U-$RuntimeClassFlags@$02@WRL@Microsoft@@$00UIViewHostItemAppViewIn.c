/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@UIApplicationViewBackedViewHostItemPrivate@@UIImmersiveApplicationPresentationListener@@UIForegroundTarget@ComposableShell@78@UICoreForegroundTarget@Core@ComposableShell@78@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180104780
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIImmersiveApplicationPresentationListener@@UIForegroundTarget@ComposableShell@78@UICoreForegroundTarget@Core@ComposableShell@78@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801029C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1801029C0.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800025E8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,IImmersiveApplicationPresentationListener,Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  int CanCastTo; // eax
  unsigned int v5; // ecx

  if ( *(_DWORD *)a2 == 217877616
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_0cfc8c70_0442_4d54_ab51_7f5a0c9e44ad.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_0cfc8c70_0442_4d54_ab51_7f5a0c9e44ad.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_0cfc8c70_0442_4d54_ab51_7f5a0c9e44ad.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == -2033387338)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_86ccf8b6_d952_45b2_b3ad_bf46c2eec142.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_86ccf8b6_d952_45b2_b3ad_bf46c2eec142.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_86ccf8b6_d952_45b2_b3ad_bf46c2eec142.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 165329126)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_09dab8e6_f09f_4b9b_8485_922137fd8070.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_09dab8e6_f09f_4b9b_8485_922137fd8070.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_09dab8e6_f09f_4b9b_8485_922137fd8070.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == -1597740838)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_a0c468da_f582_42e8_886b_d3cc317a5fcb.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_a0c468da_f582_42e8_886b_d3cc317a5fcb.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_a0c468da_f582_42e8_886b_d3cc317a5fcb.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 175463802)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_0a755d7a_42b9_45ce_b3f2_398496c2378d.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_0a755d7a_42b9_45ce_b3f2_398496c2378d.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_0a755d7a_42b9_45ce_b3f2_398496c2378d.Data4[4] )
  {
    *a3 = (void *)a1;
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3);
    v5 = -2147467262;
    if ( CanCastTo >= 0 )
      return 0;
    return v5;
  }
}
