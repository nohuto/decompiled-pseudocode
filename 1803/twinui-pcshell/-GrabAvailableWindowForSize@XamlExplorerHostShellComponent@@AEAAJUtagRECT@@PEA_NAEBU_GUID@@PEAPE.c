/*
 * XREFs of ?GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPEAX@Z @ 0x1801F87A0
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KAEBU_GUID@@PEAPEAX@Z @ 0x1801F7F10 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow_________lambda_a3c0ee3324251dd54d4d9fdc0ecbe67e___ @ 0x1801F74E4 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_IX.c)
 *     ?erase@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1801F9584 (-erase@-$vector@V-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIXam.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlExplorerHostShellComponent::GrabAvailableWindowForSize(
        RTL_SRWLOCK *this,
        struct tagRECT *a2,
        bool *a3,
        const struct _GUID *a4,
        void **a5)
{
  RTL_SRWLOCK *v8; // rdi
  const char *v9; // r9
  void **v10; // r12
  RTL_SRWLOCK *v11; // rsi
  __int64 *Ptr; // r8
  __int64 result; // rax
  void **v14; // rdx
  __int64 *v15; // rbx
  int v16; // eax
  unsigned int v17; // ebx
  _OWORD v18[3]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  const struct _GUID *v20; // [rsp+88h] [rbp+20h] BYREF

  v20 = a4;
  try
  {
    v8 = this + 29;
    AcquireSRWLockExclusive(this + 29);
    *a3 = 0;
    v10 = a5;
    *a5 = 0LL;
    v11 = this + 25;
    Ptr = (__int64 *)this[26].Ptr;
    if ( this[25].Ptr == Ptr )
    {
      if ( v8 )
        ReleaseSRWLockExclusive(v8);
      result = 2147943568LL;
    }
    else
    {
      v20 = 0LL;
      v18[0] = *a2;
      std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow_________lambda_a3c0ee3324251dd54d4d9fdc0ecbe67e___(
        (__int64 **)&a5,
        (__int64 *)v11->Ptr,
        Ptr,
        (__int64)v18);
      v14 = (void **)this[26].Ptr;
      v15 = (__int64 *)a5;
      if ( a5 == v14 )
      {
        Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)&v20, (__int64 *)v14 - 1);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v11[1].Ptr - 1);
        v11[1].Ptr = (char *)v11[1].Ptr - 8;
      }
      else
      {
        *a3 = 1;
        Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)&v20, v15);
        std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::erase(v11, &a5, v15);
      }
      v16 = (**(__int64 (__fastcall ***)(const struct _GUID *, GUID *, void **))&v20->Data1)(
              v20,
              &GUID_a9728204_899b_46a5_9344_43e74614d24b,
              v10);
      v17 = v16;
      if ( v16 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFB,
          (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
          (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      if ( v8 )
        ReleaseSRWLockExclusive(v8);
      result = v17;
    }
  }
  catch ( ... )
  {
    LODWORD(v20) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xFD,
                     (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
                     v9);
    return (unsigned int)v20;
  }
  return result;
}
