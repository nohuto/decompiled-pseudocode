/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180016E40
 * Callers:
 *     ??_ECApplication@@MEAAPEAXI@Z @ 0x1800107A0 (--_ECApplication@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180016F08 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x180017308 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
BOOL __fastcall std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>(
        _QWORD *a1)
{
  __int64 v2; // rax
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rcx
  HANDLE ProcessHeap; // rax
  void *v7; // rbx
  HANDLE v8; // rax

  v2 = *a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  v4 = v3;
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>::_Erase(
        a1,
        v4[2]);
      v4 = (__int64 *)*v4;
      v5 = v3[8];
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      std::wstring::~wstring(v3 + 4);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v3);
      v3 = v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
    v2 = *a1;
  }
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)*a1 = *a1;
  *(_QWORD *)(*a1 + 16LL) = *a1;
  a1[1] = 0LL;
  v7 = (void *)*a1;
  v8 = GetProcessHeap();
  return HeapFree(v8, 0, v7);
}
