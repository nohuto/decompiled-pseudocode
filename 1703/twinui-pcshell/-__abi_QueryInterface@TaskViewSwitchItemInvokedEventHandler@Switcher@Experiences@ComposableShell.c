/*
 * XREFs of ?__abi_QueryInterface@TaskViewSwitchItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18012EC00
 * Callers:
 *     ?__abi_QueryInterface@TaskViewSwitchItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180131AE0 (-__abi_QueryInterface@TaskViewSwitchItemInvokedEventHandler@Switcher@Experiences@Co_ea_180131AE0.c)
 *     ?__abi_QueryInterface@TaskViewSwitchItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180131C60 (-__abi_QueryInterface@TaskViewSwitchItemInvokedEventHandler@Switcher@Experiences@Co_ea_180131C60.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801202E8 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewSwitchItemInvokedEventHandler::__abi_QueryInterface(
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
    || *(_DWORD *)a2 == 1145414514
    && *(_DWORD *)(a2 + 4) == 1044236438
    && *(_DWORD *)(a2 + 8) == -104758346
    && *(_DWORD *)(a2 + 12) == -1582232488
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
  if ( *(_DWORD *)a2 == 1145414514
    && *(_DWORD *)(a2 + 4) == 1044236438
    && *(_DWORD *)(a2 + 8) == -104758346
    && *(_DWORD *)(a2 + 12) == -1582232488 )
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
