/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@PEAX@2@PEAU32@0@Z @ 0x18025F30C
 * Callers:
 *     ??$_Buynode@AEAV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@AEAV?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@?$_List_buy@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@PEAX@1@PEAU21@0AEAV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@AEAV?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@45@@Z @ 0x18025C1EC (--$_Buynode@AEAV-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@AEAV-$ComPtr@UIVirtualDesktop@Multita.c)
 *     ??0VirtualDesktopDataSource@@QEAA@XZ @ 0x18025CC04 (--0VirtualDesktopDataSource@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

_QWORD *__fastcall std::_List_alloc<std::_List_base_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>::_Buynode0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax

  result = std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x20uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  try
  {
    *result = a2;
    result[1] = a3;
  }
  catch ( ... )
  {
    std::_Deallocate((char *)result, 1uLL, 0x20uLL);
    throw;
  }
  return result;
}
