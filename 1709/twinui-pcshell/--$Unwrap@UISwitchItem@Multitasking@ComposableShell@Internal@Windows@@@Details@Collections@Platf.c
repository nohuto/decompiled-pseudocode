/*
 * XREFs of ??$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEBV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@@Z @ 0x180167B8C
 * Callers:
 *     ?GetAt@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@I@Z @ 0x180162FEC (-GetAt@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@_ea_180162FEC.c)
 *     ?GetAt@?Q?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@I@Z @ 0x1801665B0 (-GetAt@-Q-$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collect.c)
 *     ??$VectorIndexOf@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@@Details@Collections@Platform@@YA_NAEBV?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAI@Z @ 0x1801666BC (--$VectorIndexOf@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE.c)
 *     ??$VectorGetMany@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@YAIAEBV?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@IP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@@Z @ 0x1801678D8 (--$VectorGetMany@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Colle.c)
 *     ?get@?QCurrent@?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@1?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@3Platform@@UE$AAAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@5@XZ @ 0x180167D40 (-get@-QCurrent@-$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Col.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
Platform::Details *__fastcall Platform::Collections::Details::Unwrap<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
        __int64 a1)
{
  HRESULT ContextToken; // eax
  Platform::Details *v3; // rbx
  int ProxyImpl; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct IUnknownVtbl *lpVtbl; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF
  struct IUnknown v11; // [rsp+58h] [rbp+20h] BYREF
  Platform::Details *v12; // [rsp+60h] [rbp+28h]
  ULONG_PTR pToken; // [rsp+68h] [rbp+30h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 1 || !*(_QWORD *)a1 )
  {
    v3 = *(Platform::Details **)a1;
LABEL_26:
    if ( v3 )
      (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)v3 + 8LL))(v3);
    goto LABEL_28;
  }
  ContextToken = CoGetContextToken(&pToken);
  if ( ContextToken < 0 )
    __abi_WinRTraiseException(ContextToken);
  if ( pToken == *(_QWORD *)(a1 + 16) )
  {
    v3 = *(Platform::Details **)a1;
    goto LABEL_26;
  }
  v11.lpVtbl = 0LL;
  ProxyImpl = Platform::Details::GetProxyImpl(
                *(Platform::Details **)a1,
                (struct IUnknown *)&_uuidof__AUISwitchItem_Multitasking_ComposableShell_Internal_Windows__,
                *(const struct _GUID **)(a1 + 8),
                &v11,
                (struct IUnknown **)0xFFFFFFFFFFFFFFFELL);
  if ( ProxyImpl < 0 )
    __abi_WinRTraiseException(ProxyImpl);
  if ( *(_DWORD *)(a1 + 24) != 2 )
    goto LABEL_22;
  v10 = 0LL;
  if ( (*(unsigned int (__fastcall **)(struct IUnknownVtbl *, GUID *, __int64 *))v11.lpVtbl->QueryInterface)(
         v11.lpVtbl,
         &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90,
         &v10) )
  {
    *(_DWORD *)(a1 + 24) = 0;
    v8 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
LABEL_22:
    lpVtbl = v11.lpVtbl;
    v3 = (Platform::Details *)v11.lpVtbl;
    if ( v11.lpVtbl )
    {
      (*((void (__fastcall **)(struct IUnknownVtbl *))v11.lpVtbl->QueryInterface + 1))(v11.lpVtbl);
      lpVtbl = v11.lpVtbl;
    }
    goto LABEL_18;
  }
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v3 = *(Platform::Details **)a1;
  if ( v3 )
    (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)v3 + 8LL))(v3);
  v6 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  lpVtbl = v11.lpVtbl;
LABEL_18:
  if ( lpVtbl )
    (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
LABEL_28:
  v12 = v3;
  if ( v3 )
  {
    (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)v3 + 8LL))(v3);
    (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v3;
}
