/*
 * XREFs of _lambda_c3441874af9188b8377da12ab0198c01_::operator() @ 0x1801C9698
 * Callers:
 *     ?_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOperation@@_K@Z @ 0x1801CFA94 (-_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOper.c)
 *     std::_Func_impl_no_alloc__lambda_0f49487d85e93c22671acec955f9e90a__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_&___ptr64_::_Do_call @ 0x1801CFDE0 (std--_Func_impl_no_alloc__lambda_0f49487d85e93c22671acec955f9e90a__void_Windows--In_ea_1801CFDE0.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180090FE0 (-InternalRelease@-$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0b65209c995f1ff64cab6d619e0087d7___ @ 0x1801C73A0 (Windows--Internal--ComTaskPool--QueueTask__lambda_0b65209c995f1ff64cab6d619e0087d7___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c3441874af9188b8377da12ab0198c01_::operator()(unsigned int **a1, _QWORD *a2)
{
  __int64 v4; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rcx
  int v8; // eax
  volatile int *v9; // rdx
  volatile int *v10; // rdx
  unsigned int *v12; // [rsp+28h] [rbp-20h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a2 + 840LL))(*a2, **a1, *(_QWORD *)a1[1]) == 1 )
  {
    v4 = (__int64)a1[2];
    v16 = v4;
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 272);
      while ( v5 >= 0 )
      {
        if ( (_DWORD)v5 != 0x7FFFFFFF )
        {
          v6 = v5;
          v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 272), v5 + 1, v5);
          if ( v6 != v5 )
            continue;
        }
        goto LABEL_9;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
        (Microsoft::WRL::Details *)(2 * v5 + 16),
        (volatile int *)v4);
    }
LABEL_9:
    v12 = a1[2];
    v13 = v16;
    v16 = 0LL;
    v14[0] = *a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v14);
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_0b65209c995f1ff64cab6d619e0087d7___(v7, &v12);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1194LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v14);
    Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease(&v13, v9);
    Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease(&v16, v10);
  }
  return 0LL;
}
