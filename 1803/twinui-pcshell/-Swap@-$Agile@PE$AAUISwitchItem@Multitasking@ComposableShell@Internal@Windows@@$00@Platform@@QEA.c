/*
 * XREFs of ?Swap@?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAAXAEAV12@@Z @ 0x18021F26C
 * Callers:
 *     ??4?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAAEAV01@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180207B44 (--4-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInte.c)
 *     ??4?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAAEAV01@V01@@Z @ 0x180207B78 (--4-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShel_ea_180207B78.c)
 *     ??0?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAA@$$QEAV01@@Z @ 0x18021AF18 (--0-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInte.c)
 * Callees:
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1801F9514 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$swap@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@X@std@@YAXAEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x180205020 (--$swap@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@X@std@@YAXAEAV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Swap(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax

  v4 = __abi_winrt_ptr_ctor(*(_QWORD *)a1);
  __abi_winrt_ptr_assign((__int64 *)a1, *(_QWORD *)a2);
  __abi_winrt_ptr_assign((__int64 *)a2, v4);
  __abi_winrt_ptr_dtor(v4);
  std::swap<Microsoft::WRL::ComPtr<IUnknown>,void>((CWinRTApplicationView **)(a1 + 8), a2 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = v5;
  LODWORD(v5) = *(_DWORD *)(a1 + 24);
  result = *(unsigned int *)(a2 + 24);
  *(_DWORD *)(a1 + 24) = result;
  *(_DWORD *)(a2 + 24) = v5;
  return result;
}
