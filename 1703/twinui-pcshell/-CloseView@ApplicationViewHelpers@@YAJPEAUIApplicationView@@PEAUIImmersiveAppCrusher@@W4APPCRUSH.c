/*
 * XREFs of ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18017F8FC
 * Callers:
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DC440 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?TryClose@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x1800E6220 (-TryClose@ApplicationViewBackedViewHostItem@@UEAAJE@Z.c)
 *     CAsyncCallbackWithLambda__lambda_9d14f4c5953655842eb18c10ba19f0b4___::Invoke @ 0x180146560 (CAsyncCallbackWithLambda__lambda_9d14f4c5953655842eb18c10ba19f0b4___--Invoke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180005560 (--1-$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@.c)
 *     ??0CMarshaledInterface@@QEAA@XZ @ 0x1800056F0 (--0CMarshaledInterface@@QEAA@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@QEAA@XZ @ 0x180023048 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@VNil@D.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x1800472D0 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ??0CMarshaledInterface@@QEAA@AEBV0@@Z @ 0x180047C2C (--0CMarshaledInterface@@QEAA@AEBV0@@Z.c)
 *     ??0CMarshaledInterface@@QEAA@$$QEAV0@@Z @ 0x180071198 (--0CMarshaledInterface@@QEAA@$$QEAV0@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewHelpers::CloseView(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        struct IUnknown *a2,
        int a3,
        int a4,
        int a5)
{
  __int64 (__fastcall **v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v10; // rax
  int v11; // eax
  int v12; // ebx
  __int64 (__fastcall **v13)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 *v18; // rsi
  IUnknown *v19; // rdi
  IUnknown *v20; // rax
  IUnknown *v21; // rbx
  __int64 v22; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v29; // [rsp+30h] [rbp-40h] BYREF
  __int64 v30; // [rsp+38h] [rbp-38h] BYREF
  HWND hwnd; // [rsp+40h] [rbp-30h] BYREF
  __int64 v32; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v33; // [rsp+50h] [rbp-20h] BYREF
  int v34; // [rsp+58h] [rbp-18h]
  int v35; // [rsp+5Ch] [rbp-14h]
  int v36; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 *pvAttribute; // [rsp+90h] [rbp+20h] BYREF

  v5 = *a1;
  v30 = 0LL;
  v29 = 0LL;
  v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v30);
  if ( (int)(*v5)(a1, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v10) >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v30 + 24LL))(v30, &hwnd);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x61,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_32;
    }
    if ( (a5 & 1) != 0 )
    {
      LODWORD(pvAttribute) = 1;
      DwmSetWindowAttribute(hwnd, 3u, &pvAttribute, 4u);
    }
    PostMessageW(hwnd, 0x112u, 0xF060uLL, 0LL);
    goto LABEL_9;
  }
  v13 = *a1;
  v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v29);
  v15 = (*v13)(a1, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, v14);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)v15);
LABEL_9:
    v12 = 0;
    goto LABEL_32;
  }
  if ( a2 )
  {
    pvAttribute = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v29 + 24LL))(v29, &pvAttribute);
    v12 = v16;
    if ( v16 >= 0 )
    {
      CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&hwnd);
      v17 = CMarshaledInterface::Marshal((__int64 *)&hwnd, &GUID_55c8429b_3f9e_4736_96a2_1c56e2dfc883, a2, 2);
      v12 = v17;
      if ( v17 >= 0 )
      {
        CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&v32, (const struct CMarshaledInterface *)&hwnd);
        v18 = pvAttribute;
        v33 = pvAttribute;
        if ( pvAttribute )
          (*(void (__fastcall **)(__int64 *))(*pvAttribute + 8))(pvAttribute);
        v19 = 0LL;
        v34 = a3;
        v35 = a4;
        v36 = a5;
        v20 = (IUnknown *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v21 = v20;
        if ( v20 )
        {
          Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>((__int64)v20);
          v21->lpVtbl = (struct IUnknownVtbl *)off_1801BBBC0;
          CMarshaledInterface::CMarshaledInterface(&v21[2].lpVtbl, &v32);
          *(_QWORD *)(v22 + 8) = 0LL;
          if ( (__int64 **)(v22 + 8) == &v33 )
          {
            v18 = v33;
          }
          else
          {
            v18 = 0LL;
            *(_QWORD *)(v22 + 8) = v33;
            v33 = 0LL;
          }
          v19 = v21;
          *(_DWORD *)(v22 + 16) = v34;
          *(_DWORD *)(v22 + 20) = v35;
          *(_DWORD *)(v22 + 24) = v36;
        }
        CurrentThreadId = GetCurrentThreadId();
        v12 = Windows::Internal::ComTaskPool::RunTask(1, 0, CurrentThreadId, 0, v19, 0LL);
        if ( v19 )
          ((void (__fastcall *)(IUnknown *))v19->lpVtbl->Release)(v19);
        if ( v18 )
        {
          v24 = *v18;
          v33 = 0LL;
          (*(void (__fastcall **)(__int64 *))(v24 + 16))(v18);
        }
        Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>::~ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>(&v32);
        if ( v12 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x85,
            (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
            (const char *)(unsigned int)v12);
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x7D,
          (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
          (const char *)(unsigned int)v17);
      }
      Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>::~ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>((__int64 *)&hwnd);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x76,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v16);
    }
    v25 = pvAttribute;
    if ( pvAttribute )
    {
      pvAttribute = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v25 + 16))(v25);
    }
  }
  else
  {
    v12 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x73,
      (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)0x8007139FLL);
  }
LABEL_32:
  v26 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v27 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return (unsigned int)v12;
}
