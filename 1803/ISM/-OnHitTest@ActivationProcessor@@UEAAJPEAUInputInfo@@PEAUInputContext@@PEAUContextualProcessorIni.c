/*
 * XREFs of ?OnHitTest@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800B9410
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180029500 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ActivationProcessor::OnHitTest(
        ActivationProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  unsigned int v6; // r8d
  unsigned int v7; // eax
  _BYTE *v8; // rcx
  char *v10; // rdi
  char *v11; // rax
  char *v12; // rbx
  _QWORD *v13; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v14; // rcx
  char v15; // cl
  __int64 *v16; // r14
  char *v17; // rsi
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)a4 = 1;
  if ( (*(_BYTE *)a2 & 0x3B) != 0 && (v6 = *((_DWORD *)a2 + 12), v7 = 0, v6) )
  {
    v8 = (char *)a2 + 60;
    while ( (*v8 & 2) == 0 )
    {
      ++v7;
      v8 += 32;
      if ( v7 >= v6 )
        goto LABEL_6;
    }
    v10 = 0LL;
    v11 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      v13 = v11 + 24;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v11 + 24));
      v14 = Microsoft::WRL::Details::ModuleBase::module_;
      *(_QWORD *)v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IActivationContext,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
      *((_QWORD *)v12 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IActivationContext,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IActivationContext,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
      *((_QWORD *)v12 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IActivationContext,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
      *v13 = &ActivationContext::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      *((_QWORD *)v12 + 8) = 1LL;
      if ( v14 )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v14 + 8LL))(v14);
      *(_QWORD *)v12 = &ActivationContext::`vftable'{for `IInspectable'};
      *((_QWORD *)v12 + 1) = &ActivationContext::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IActivationContext,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
      *((_QWORD *)v12 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IActivationContext,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
      *v13 = &ActivationContext::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      v15 = *((_BYTE *)a3 + 25);
      v12[72] = *((_BYTE *)a3 + 24);
      v12[73] = v15;
      v12[74] = 0;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 8LL))(v12);
      v10 = v12;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 16LL))(v12);
      v16 = (__int64 *)((char *)a4 + 8);
      v17 = v12;
      v18 = *v16;
      if ( *v16 )
      {
        *v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v19 = (**(__int64 (__fastcall ***)(char *, GUID *, __int64 *))v12)(
              v12,
              &GUID_00000000_0000_0000_c000_000000000046,
              v16);
      v20 = v19;
      if ( v19 >= 0 )
        v20 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\activation\\system\\lib\\"
                   "activationprocessor.cpp",
          (const char *)(unsigned int)v19);
    }
    else
    {
      v20 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\activation\\system\\lib\\ac"
                 "tivationprocessor.cpp",
        (const char *)0x8007000ELL);
      v17 = 0LL;
    }
    if ( v17 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))(v10);
    return v20;
  }
  else
  {
LABEL_6:
    *(_DWORD *)a4 = 0;
    return 0LL;
  }
}
