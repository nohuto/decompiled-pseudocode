/*
 * XREFs of std::_Func_impl__lambda_f762a111a87cc3672fab2d2d37f8e7d5__std::allocator_int__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_&___ptr64_::_Do_call @ 0x1801010B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1800F82C8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl__lambda_f762a111a87cc3672fab2d2d37f8e7d5__std::allocator_int__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_____ptr64_::_Do_call(
        __int64 a1,
        _DWORD *a2)
{
  int *v4; // rax
  unsigned __int64 v5; // rdi
  int v6; // edx
  struct IViewWrapperInternal *v7; // rcx
  unsigned int Ancestor; // eax
  HWND PropW; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      v4 = *(int **)(a1 + 8);
      v5 = v4[1];
      if ( !v4[1] )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v10 &= v5;
          if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(
                      *(ViewEventDispatcher **)(a1 + 16),
                      v6,
                      (struct IViewWrapperInternal **)&v10) >= 0 )
            v5 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 624LL))(v10);
          v7 = (struct IViewWrapperInternal *)v10;
          if ( v10 )
          {
            v10 = 0LL;
            (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v7 + 16LL))(v7);
          }
        }
      }
      Ancestor = 0;
      if ( v5 )
      {
        PropW = (HWND)GetPropW((HWND)v5, L"CrossProcessParentHWND");
        Ancestor = (unsigned int)GetAncestor(PropW, 2u);
      }
      **(_DWORD **)(a1 + 8) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) = Ancestor;
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a2[2];
    }
  }
  else
  {
    **(_DWORD **)(a1 + 8) = a2[1];
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = 0;
  }
}
