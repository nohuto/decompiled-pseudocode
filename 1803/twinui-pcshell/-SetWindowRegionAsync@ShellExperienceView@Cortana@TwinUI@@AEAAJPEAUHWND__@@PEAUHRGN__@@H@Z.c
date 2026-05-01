/*
 * XREFs of ?SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z @ 0x1800687A0
 * Callers:
 *     ?SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z @ 0x1800682E0 (-SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800462B0 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TwinUI::Cortana::ShellExperienceView::SetWindowRegionAsync(
        TwinUI::Cortana::ShellExperienceView *this,
        HWND a2,
        HRGN a3,
        int a4)
{
  HRGN v8; // rsi
  HRGN RectRgn; // rax
  HRGN v10; // r14
  unsigned int v11; // r13d
  _QWORD *v12; // rbx
  _DWORD *v13; // rax
  _DWORD *v14; // rdi
  _DWORD *v15; // rbp
  __int64 (*v16)(); // rax
  unsigned int v17; // edi
  volatile int *v18; // rdx
  void (__fastcall *v19)(_QWORD *); // rax
  __int64 v21; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8 = 0LL;
  if ( a3 )
  {
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    v8 = RectRgn;
    if ( RectRgn )
    {
      if ( CombineRgn(RectRgn, a3, 0LL, 5) )
        goto LABEL_4;
      v17 = -2147467259;
      v21 = 379LL;
    }
    else
    {
      v17 = -2147467259;
      v21 = 378LL;
    }
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)v17,
      -2);
    goto LABEL_15;
  }
LABEL_4:
  v10 = v8;
  v8 = 0LL;
  v11 = *((_DWORD *)this + 74);
  v12 = 0LL;
  v13 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v13;
  v15 = 0LL;
  if ( v13 )
  {
    *(_QWORD *)v13 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
    v13[3] = 1;
    *(_QWORD *)v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v16 = *(__int64 (**)())(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
      if ( v16 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
      else
        ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *, __int64 (*)()))v16)(
          Microsoft::WRL::Details::ModuleBase::module_,
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount);
    }
    *(_QWORD *)v14 = off_18031D6F8;
    *((_QWORD *)v14 + 2) = a2;
    *((_QWORD *)v14 + 3) = v10;
    v10 = 0LL;
    v14[8] = a4;
    v12 = v14;
    v15 = v14;
  }
  v17 = v15 == 0LL ? 0x8007000E : 0;
  if ( v15 )
  {
    v17 = Windows::Internal::ComTaskPool::s_QueuePoolTask(0, 0x102u, v11);
    v19 = *(void (__fastcall **)(_QWORD *))(*v12 + 16LL);
    if ( (char *)v19 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        v12,
        v18);
    else
      v19(v12);
  }
  if ( v10 )
    DeleteObject(v10);
  if ( (v17 & 0x80000000) != 0 )
  {
    v21 = 387LL;
    goto LABEL_23;
  }
LABEL_15:
  if ( v8 )
    DeleteObject(v8);
  return v17;
}
