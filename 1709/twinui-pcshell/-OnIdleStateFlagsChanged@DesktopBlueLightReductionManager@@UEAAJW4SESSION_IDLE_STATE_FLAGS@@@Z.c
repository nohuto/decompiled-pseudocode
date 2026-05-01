/*
 * XREFs of ?OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180086A20
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IdleStateFlagsChanged@II@DesktopBlueLightReductionManagerTelemetry@@SAX$$QEAI0@Z @ 0x180087118 (--$IdleStateFlagsChanged@II@DesktopBlueLightReductionManagerTelemetry@@SAX$$QEAI0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DesktopBlueLightReductionManager::OnIdleStateFlagsChanged(__int64 a1, int a2)
{
  int v4; // ebx
  const char *v5; // r9
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // r14
  int v12; // r13d
  IUnknown *v13; // rsi
  IUnknown *v14; // rax
  IUnknown *v15; // rdi
  int v16; // edi
  struct Microsoft::WRL::Details::ModuleBase *v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 result; // rax
  __int64 v21; // [rsp+30h] [rbp-78h] BYREF
  struct Microsoft::WRL::Details::ModuleBase *v22; // [rsp+38h] [rbp-70h] BYREF
  IUnknown *v23; // [rsp+40h] [rbp-68h]
  __int64 v24; // [rsp+48h] [rbp-60h]
  IUnknown *v25; // [rsp+50h] [rbp-58h]
  __int64 v26; // [rsp+58h] [rbp-50h]
  __int64 v27; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v29; // [rsp+B0h] [rbp+8h] BYREF
  int v30; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v31; // [rsp+C8h] [rbp+20h]

  v24 = -2LL;
  try
  {
    v30 = *(_DWORD *)(a1 + 88) ^ a2;
    v4 = v30;
    v29 = a2;
    DesktopBlueLightReductionManagerTelemetry::IdleStateFlagsChanged<unsigned int,unsigned int>(&v29, &v30);
    if ( v4 )
    {
      *(_DWORD *)(a1 + 88) = a2;
      if ( (v4 & 0xD) != 0 )
      {
        if ( (a2 & 0xD) != 0 )
          goto LABEL_39;
        if ( !*(_DWORD *)(a1 + 72) )
        {
          v6 = *(_QWORD *)(a1 + 64);
          v21 = 0LL;
          v7 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
                 v6,
                 &IID_IImmersiveWindowMessageService,
                 &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
                 &v21);
          if ( v7 < 0 )
            wil::details::in1diag3::_Throw_Hr(
              retaddr,
              (void *)0x106,
              (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
              (const char *)(unsigned int)v7);
          v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v21 + 24LL))(
                 v21,
                 30LL,
                 (a1 - 16) & -(__int64)(a1 != 120),
                 a1 + 72);
          if ( v8 < 0 )
            wil::details::in1diag3::_Throw_Hr(
              retaddr,
              (void *)0x107,
              (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
              (const char *)(unsigned int)v8);
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v9 = a1 - 120;
        v10 = a1 - 120;
        v31 = a1 - 120;
        if ( a1 != 120 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 172));
          v10 = v31;
        }
        v26 = a1 - 120;
        v11 = v10;
        v27 = v10;
        if ( v10 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 172));
          v10 = v31;
          v11 = v27;
        }
        v12 = *(_DWORD *)(a1 + 84);
        v13 = 0LL;
        v23 = 0LL;
        v14 = (IUnknown *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
        v15 = v14;
        if ( v14 )
        {
          v14->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
          HIDWORD(v14[1].lpVtbl) = 1;
          v14->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
          v15->lpVtbl = (struct IUnknownVtbl *)off_180200FE0;
          v15[2].lpVtbl = (struct IUnknownVtbl *)v9;
          v11 = 0LL;
          v27 = 0LL;
          v15[3].lpVtbl = (struct IUnknownVtbl *)v10;
          v13 = v15;
          v23 = v15;
        }
        v25 = v13;
        v16 = Windows::Internal::ComTaskPool::RunTask(0, 2u, v12, 0, v13, 0LL);
        if ( v13 )
          ((void (__fastcall *)(IUnknown *))v13->lpVtbl->Release)(v13);
        if ( v11 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 172), 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v27 + 40) + 64LL))(v27 + 40, 1LL);
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
          }
          v10 = v31;
        }
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x110,
            (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
            (const char *)(unsigned int)v16);
        if ( !v10 || _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 172), 0xFFFFFFFF) != 1 )
          goto LABEL_39;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v31 + 40) + 64LL))(v31 + 40, 1LL);
        v17 = Microsoft::WRL::Details::ModuleBase::module_;
        goto LABEL_37;
      }
      if ( *(_DWORD *)(a1 + 72) )
      {
        v18 = *(_QWORD *)(a1 + 64);
        v22 = 0LL;
        v19 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, struct Microsoft::WRL::Details::ModuleBase **))(*(_QWORD *)v18 + 24LL))(
                v18,
                &IID_IImmersiveWindowMessageService,
                &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
                &v22);
        if ( v19 >= 0 )
        {
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD))(*(_QWORD *)v22 + 32LL))(
            v22,
            *(unsigned int *)(a1 + 72));
          *(_DWORD *)(a1 + 72) = 0;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x119,
            (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
            (const char *)(unsigned int)v19);
        }
        v17 = v22;
LABEL_37:
        if ( v17 )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
LABEL_39:
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x124,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v5);
  }
  return result;
}
