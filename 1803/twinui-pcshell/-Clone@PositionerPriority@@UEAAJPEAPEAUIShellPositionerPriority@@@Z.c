/*
 * XREFs of ?Clone@PositionerPriority@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x1800246F0
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180023A80 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?ContainsPositioner@PositionerPriority@@UEAAHW4SHELL_POSITIONER_TYPE@@@Z @ 0x180024A10 (-ContainsPositioner@PositionerPriority@@UEAAHW4SHELL_POSITIONER_TYPE@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShellPositionerPriority@@UIShellPositionerPriorityPersistence@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShe.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShellPositionerPriority@@UIShellPositionerPriorityPersistence@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800259E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800259E0.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VPositionerPriority@@@WRL@Microsoft@@IEAAKXZ @ 0x1800951C4 (-InternalRelease@-$ComPtr@VPositionerPriority@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180097C44 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PositionerPriority::Clone(RTL_SRWLOCK *this, struct IShellPositionerPriority **a2)
{
  RTL_SRWLOCK *v3; // rdi
  RTL_SRWLOCK *v4; // rbp
  BOOL v5; // r14d
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  LPUNKNOWN v8; // rcx
  __int64 (__fastcall *v9)(_QWORD); // rax
  __int64 v10; // rax
  void (__fastcall *v11)(_QWORD *); // rax
  __int64 (__fastcall *v12)(_QWORD, GUID *, struct IShellPositionerPriority **); // rax
  int v13; // eax
  int v14; // ebx
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rcx
  void (*v16)(void); // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  struct IShellPositionerPriority *v19; // rcx
  __int64 (__fastcall *v21)(struct IShellPositionerPriority *, _QWORD); // rax
  int v22; // eax
  unsigned int v23; // esi
  int v24; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct IShellPositionerPriority *v26; // [rsp+70h] [rbp+8h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, struct IShellPositionerPriority **); // [rsp+78h] [rbp+10h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v29; // [rsp+88h] [rbp+20h] BYREF

  v24 = -2;
  v3 = this + 4;
  *a2 = 0LL;
  v4 = this + 3;
  AcquireSRWLockShared(this + 3);
  v5 = LOBYTE(v3->Ptr) == 0;
  v26 = 0LL;
  v27 = 0LL;
  v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v29 = v6;
  if ( !v6 )
  {
    Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v29);
    v14 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
      (const char *)0x8007000ELL,
      -2);
    Microsoft::WRL::ComPtr<PositionerPriority>::InternalRelease(&v27);
LABEL_39:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAA,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
      (const char *)(unsigned int)v14,
      v24);
    v19 = v26;
    goto LABEL_29;
  }
  *v6 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v6[3] = 0LL;
  ppunkMarshal = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v7 = v6[3];
    if ( v7 )
    {
      v6[3] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))ppunkMarshal->lpVtbl->QueryInterface)(
      ppunkMarshal,
      &GUID_00000003_0000_0000_c000_000000000046,
      v6 + 3);
  }
  v8 = ppunkMarshal;
  if ( ppunkMarshal )
  {
    ppunkMarshal = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v8->lpVtbl->Release)(v8);
  }
  *((_DWORD *)v6 + 13) = 1;
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::`vftable';
  v6[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::`vftable'{for `IShellPositionerPriority'};
  v6[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellPositionerPriorityPersistence>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    v9 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
    if ( v9 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
    else
      ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *, __int64 (__fastcall *)(_QWORD)))v9)(
        Microsoft::WRL::Details::ModuleBase::module_,
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount);
  }
  *v6 = &PositionerPriority::`vftable';
  v6[4] = &PositionerPriority::`vftable'{for `IShellPositionerPriority'};
  v6[5] = &PositionerPriority::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellPositionerPriorityPersistence>'};
  v6[7] = 0LL;
  *((_DWORD *)v6 + 16) = 0;
  *((_WORD *)v6 + 34) = 0;
  *((_BYTE *)v6 + 70) = 0;
  v10 = 64LL;
  if ( v5 )
    v10 = 65LL;
  *((_BYTE *)v6 + v10) = 1;
  (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
  v27 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IShellPositionerPriority **))v6;
  v11 = *(void (__fastcall **)(_QWORD *))(*v6 + 16LL);
  if ( (char *)v11 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::Release )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::Release(v6);
  else
    v11(v6);
  v12 = **v27;
  if ( (char *)v12 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::QueryInterface )
    v13 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::QueryInterface(
            v27,
            &GUID_9579607f_b1e9_4350_b203_d2784a62a5cb,
            &v26);
  else
    v13 = v12(v27, &GUID_9579607f_b1e9_4350_b203_d2784a62a5cb, &v26);
  v14 = v13;
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xED,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
      (const char *)(unsigned int)v13,
      -2);
  v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
  if ( v27 )
  {
    v27 = 0LL;
    v16 = (void (*)(void))(*v15)[2];
    if ( (char *)v16 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::Release(v15);
    else
      v16();
  }
  if ( v14 < 0 )
    goto LABEL_39;
  v17 = 0LL;
  v18 = 0LL;
  do
  {
    if ( *((_BYTE *)&v3->Ptr + v17) )
    {
      v21 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)v26 + 32LL);
      if ( (char *)v21 == (char *)PositionerPriority::ContainsPositioner )
      {
        v22 = PositionerPriority::ContainsPositioner(v26, (unsigned int)v18);
        v23 = v18;
      }
      else
      {
        v23 = v18;
        v22 = v21(v26, (unsigned int)v18);
      }
      if ( !v22 )
        (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)v26 + 40LL))(v26, v23);
    }
    v17 = v18 + 1;
    v18 = v17;
  }
  while ( v17 < 7 );
  v19 = v26;
  if ( v26 )
  {
    (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v26 + 8LL))(v26);
    v19 = v26;
  }
  *a2 = v19;
  v14 = 0;
LABEL_29:
  if ( v19 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return (unsigned int)v14;
}
