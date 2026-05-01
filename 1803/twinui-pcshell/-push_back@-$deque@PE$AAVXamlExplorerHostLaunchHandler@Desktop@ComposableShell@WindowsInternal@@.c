/*
 * XREFs of ?push_back@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAAXAEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x1802007F0
 * Callers:
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x1801FD62C (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?_Growmap@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@IEAAX_K@Z @ 0x1801FE52C (-_Growmap@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::push_back(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 *v9; // [rsp+58h] [rbp+10h]

  v4 = *(_QWORD *)(a1 + 32);
  if ( ((*(_BYTE *)(a1 + 24) + (_BYTE)v4) & 1) == 0 && *(_QWORD *)(a1 + 16) <= (unsigned __int64)(v4 + 2) >> 1 )
    std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::_Growmap((_QWORD *)a1);
  *(_QWORD *)(a1 + 24) &= 2LL * *(_QWORD *)(a1 + 16) - 1;
  v5 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24);
  v6 = (v5 >> 1) & (*(_QWORD *)(a1 + 16) - 1LL);
  v7 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(v7 + 8 * v6) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v6) = std::_Allocate<std::_Default_allocate_traits<1>>(2uLL, 8uLL);
    v7 = *(_QWORD *)(a1 + 8);
  }
  v9 = (__int64 *)(*(_QWORD *)(v7 + 8 * v6) + 8 * (v5 & 1));
  result = __abi_winrt_ptr_ctor(*a2);
  *v9 = result;
  ++*(_QWORD *)(a1 + 32);
  return result;
}
