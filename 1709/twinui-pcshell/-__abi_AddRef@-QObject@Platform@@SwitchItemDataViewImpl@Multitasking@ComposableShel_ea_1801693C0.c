/*
 * XREFs of ?__abi_AddRef@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAKXZ @ 0x1801693C0
 * Callers:
 *     ?__abi_AddRef@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@W7E$AAAKXZ @ 0x1801615D0 (-__abi_AddRef@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Wi.c)
 *     ?__abi_AddRef@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WBA@E$AAAKXZ @ 0x180161C50 (-__abi_AddRef@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShel_ea_180161C50.c)
 *     ?__abi_AddRef@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WBI@E$AAAKXZ @ 0x180169080 (-__abi_AddRef@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShel_ea_180169080.c)
 *     ?__abi_AddRef@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WCA@E$AAAKXZ @ 0x1801690D0 (-__abi_AddRef@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShel_ea_1801690D0.c)
 *     ?__abi_AddRef@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WCI@E$AAAKXZ @ 0x1801693F0 (-__abi_AddRef@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShel_ea_1801693F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ___abi_AddRef__QObject_Platform__SwitchItemDataViewImpl_Multitasking_ComposableShell_Internal_Windows__UE_AAAKXZ(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 120) && *(int *)(*(_QWORD *)(a1 + 120) + 12LL) >= 0 )
    return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 120) + 12LL));
  else
    return (unsigned int)-1;
}
