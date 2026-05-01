/*
 * XREFs of ShellPositionerManager::DoWorkForEachMonitor__lambda_82278fcd7836ba841de055e25599339d___ @ 0x1802B7D48
 * Callers:
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@2@Z @ 0x1802B9968 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1800F7708 (--4-$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApp.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@2@PEAU32@@Z @ 0x180253EA0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU-$_Tree.c)
 *     wil::ResultFromException__lambda_a928f0ddc407f1fa0c53cd408c359a95___ @ 0x1802B819C (wil--ResultFromException__lambda_a928f0ddc407f1fa0c53cd408c359a95___.c)
 *     _lambda_82278fcd7836ba841de055e25599339d_::operator() @ 0x1802B8AD4 (_lambda_82278fcd7836ba841de055e25599339d_--operator().c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x1802BA9D8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitask.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@2@0@Z @ 0x1802BAA3C (-erase@-$_Tree@V-$_Tmap_traits@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$le_ea_1802BAA3C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ShellPositionerManager::DoWorkForEachMonitor__lambda_82278fcd7836ba841de055e25599339d___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // edi
  int v12; // ebx
  void *v13; // rbx
  wil::details::in1diag3 *v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *i; // rax
  __int64 v25; // [rsp+30h] [rbp-50h] BYREF
  __int64 v26; // [rsp+38h] [rbp-48h] BYREF
  void *v27[2]; // [rsp+40h] [rbp-40h] BYREF
  void *v28[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v29[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v31; // [rsp+B8h] [rbp+38h] BYREF

  v27[1] = (void *)-2LL;
  *(_OWORD *)v28 = 0LL;
  v28[0] = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode(a1);
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v31);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BB,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_35;
  }
  v11 = 0;
  if ( v31 )
  {
    while ( 1 )
    {
      v27[0] = 0LL;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)v27);
      if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, void **))(*(_QWORD *)a2 + 32LL))(
             a2,
             v11,
             &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
             v27) >= 0 )
        break;
LABEL_15:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)v27);
      if ( ++v11 >= v31 )
        goto LABEL_16;
    }
    v12 = 0;
    v26 = 0LL;
    if ( a4 )
    {
      Microsoft::WRL::ComPtr<IImmersiveApplicationManagerInternal>::operator=(&v26, a4);
    }
    else
    {
      v13 = v27[0];
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v26);
      v12 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v13 + 80LL))(v13, &v26);
    }
    v14 = retaddr;
    if ( v12 >= 0 )
    {
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 24LL))(v26, &v25) < 0 )
        goto LABEL_14;
      v29[0] = v28;
      v29[1] = &v25;
      v29[2] = v27;
      v17 = wil::ResultFromException__lambda_a928f0ddc407f1fa0c53cd408c359a95___(v29);
      v14 = retaddr;
      if ( v17 >= 0 )
        goto LABEL_14;
      v15 = (unsigned int)v17;
      v16 = 735LL;
    }
    else
    {
      v15 = (unsigned int)v12;
      v16 = 716LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v14,
      v16,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v15);
LABEL_14:
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v26);
    goto LABEL_15;
  }
LABEL_16:
  v18 = *(_QWORD **)v28[0];
  while ( v18 != v28[0] )
  {
    v19 = v18[5];
    v25 = v19;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    v26 = 0LL;
    v20 = *(_QWORD *)(a1 + 152);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v26);
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 56LL))(
           v20,
           *((unsigned int *)v18 + 8),
           &v26) >= 0 )
    {
      v27[0] = 0LL;
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(v27);
      if ( (**(int (__fastcall ***)(__int64, GUID *, void **))v19)(v19, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9, v27) >= 0 )
      {
        v21 = a3;
        if ( !a3 )
          v21 = v26;
        lambda_82278fcd7836ba841de055e25599339d_::operator()(a5, v21, v26, v27[0]);
      }
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(v27);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    if ( !*((_BYTE *)v18 + 25) )
    {
      v22 = v18[2];
      if ( *(_BYTE *)(v22 + 25) )
      {
        for ( i = (_QWORD *)v18[1]; !*((_BYTE *)i + 25) && v18 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
          v18 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,double>>>::_Min((_QWORD *)v22);
      }
      v18 = i;
    }
  }
  v10 = 0;
LABEL_35:
  std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::erase(
    v28,
    v27);
  std::_Deallocate((char *)v28[0], 1uLL, 0x30uLL);
  return v10;
}
