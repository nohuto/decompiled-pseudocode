/*
 * XREFs of ?__abi_QueryInterface@TaskViewSwitchItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18012E9C0
 * Callers:
 *     ?__abi_QueryInterface@TaskViewSwitchItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180131AF0 (-__abi_QueryInterface@TaskViewSwitchItemCloseInvokedEventHandler@Switcher@Experienc_ea_180131AF0.c)
 *     ?__abi_QueryInterface@TaskViewSwitchItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180131C80 (-__abi_QueryInterface@TaskViewSwitchItemCloseInvokedEventHandler@Switcher@Experienc_ea_180131C80.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801202E8 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewSwitchItemCloseInvokedEventHandler::__abi_QueryInterface(
        _QWORD *a1,
        __int64 a2,
        void **a3)
{
  _QWORD *v4; // r8
  __int64 v5; // rax

  if ( !*(_DWORD *)a2
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *(_DWORD *)a2 == 1249726285
    && *(_DWORD *)(a2 + 4) == 908803680
    && *(_DWORD *)(a2 + 8) == -858815354
    && *(_DWORD *)(a2 + 12) == -189688270
    || (v4 = a1 + 3, a1[4])
    && *(_DWORD *)a2 == -1796592748
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    *a3 = a1;
    if ( !a1[3] || *(int *)(a1[3] + 12LL) < 0 )
      return 0LL;
    v5 = a1[3];
LABEL_24:
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
    return 0LL;
  }
  if ( *(_DWORD *)a2 == 1249726285
    && *(_DWORD *)(a2 + 4) == 908803680
    && *(_DWORD *)(a2 + 8) == -858815354
    && *(_DWORD *)(a2 + 12) == -189688270 )
  {
    *a3 = a1;
    if ( !*v4 || *(int *)(*v4 + 12LL) < 0 )
      return 0LL;
    v5 = *v4;
    goto LABEL_24;
  }
  if ( a1[4]
    && !(unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                        (__abi_FTMWeakRefData *)((unsigned __int64)(a1 + 3) & -(__int64)(a1[4] != 0LL)),
                        (struct Platform::Guid *)a2,
                        a3) )
  {
    return 0LL;
  }
  return 2147500034LL;
}
