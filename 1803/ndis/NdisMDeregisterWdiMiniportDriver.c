/*
 * XREFs of NdisMDeregisterWdiMiniportDriver @ 0x1C00FE0B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ?ndisMpHookGetHookUnsafe@@YAPEBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x1C007D2D8 (-ndisMpHookGetHookUnsafe@@YAPEBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@W4_NDIS_MINIPORT_HOOK_DRIVER_T.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1C00FDDE8 (-DereferenceWdi@@YAXXZ.c)
 */

void __stdcall NdisMDeregisterWdiMiniportDriver(NDIS_MINIPORT_DRIVER_HANDLE NdisMiniportDriverHandle)
{
  const struct NDIS_MINIPORT_HOOK_PROVIDER_INFO *HookUnsafe; // rbx
  __int64 v2; // r9

  if ( *((_DWORD *)NdisMiniportDriverHandle + 226) == 1 )
  {
    if ( *((_BYTE *)NdisMiniportDriverHandle + 908) )
    {
      *((_BYTE *)NdisMiniportDriverHandle + 908) = 0;
      HookUnsafe = ndisMpHookGetHookUnsafe(1);
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD))HookUnsafe + 2))(
        *(_QWORD *)HookUnsafe,
        v2,
        *(_QWORD *)(v2 + 896));
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)HookUnsafe - 2);
      DereferenceWdi();
    }
  }
}
