/*
 * XREFs of ??$_Remove_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@0AEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x1801FC310
 * Callers:
 *     ??$remove@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@0AEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x1801FC5B0 (--$remove@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHa.c)
 * Callees:
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1801F9514 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 */

_QWORD *__fastcall std::_Remove_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned __int64 i; // r10
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-28h]

  v12 = *(_OWORD *)a2;
  for ( i = a2[1];
        i != *(_QWORD *)(a3 + 8)
     && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8 * ((i >> 1) & (*(_QWORD *)(v12 + 16) - 1LL))) + 8 * (i & 1)) != *a4;
        ++i )
  {
    ;
  }
  *((_QWORD *)&v12 + 1) = i;
  *(_OWORD *)a2 = v12;
  v9 = a2[1];
  *(_OWORD *)a1 = v12;
  if ( v9 != *(_QWORD *)(a3 + 8) )
  {
    while ( 1 )
    {
      a2[1] = ++v9;
      if ( v9 == *(_QWORD *)(a3 + 8) )
        break;
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a2 + 8LL) + 8 * ((v9 >> 1) & (*(_QWORD *)(*a2 + 16LL) - 1LL)))
                      + 8 * (v9 & 1));
      if ( v10 != *a4 )
      {
        __abi_winrt_ptr_assign(
          (__int64 *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8 * ((a1[1] >> 1) & (*(_QWORD *)(*a1 + 16LL) - 1LL)))
                    + 8 * (a1[1] & 1LL)),
          v10);
        ++a1[1];
        v9 = a2[1];
      }
    }
  }
  return a1;
}
