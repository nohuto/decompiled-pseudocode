/*
 * XREFs of ?OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z @ 0x1802E9A30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014F3DC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180151734 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802B8578 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag__ea_1802B8578.c)
 *     ??4?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802B8884 (--4-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46d2ac6b30f5d317ef4bcc4e3f77555a__&___ptr64___lambda_46d2ac6b30f5d317ef4bcc4e3f77555a__&___ptr64_ @ 0x1802E81A8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_46d2ac6b30f5d.c)
 *     ??1JointResize@JointResizeTelemetry@@QEAA@XZ @ 0x1802E8828 (--1JointResize@JointResizeTelemetry@@QEAA@XZ.c)
 *     ?CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z @ 0x1802E8B20 (-CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x1802E8CF4 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?ComputeExtendedViewRect@JointResize@@AEAA?AUtagRECT@@PEAUIApplicationView@@U2@@Z @ 0x1802E8E90 (-ComputeExtendedViewRect@JointResize@@AEAA-AUtagRECT@@PEAUIApplicationView@@U2@@Z.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1802E906C (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x1802E9F24 (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
 *     ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x1802E9FEC (-RegisterViewChanges@JointResize@@AEAAX_N@Z.c)
 *     ?StartActivity@JointResize@JointResizeTelemetry@@QEAAXXZ @ 0x1802EA190 (-StartActivity@JointResize@JointResizeTelemetry@@QEAAXXZ.c)
 */

__int64 __fastcall JointResize::OnArrangedWindowSizeStarted(
        JointResize *this,
        __int64 (__fastcall ***a2)(CWin32ApplicationView *this, struct _GUID *a2, void **a3),
        struct tagRECT *a3,
        int a4,
        char a5)
{
  char v7; // si
  char *v10; // rbx
  int v11; // edi
  __int64 (__fastcall ***v12)(CWin32ApplicationView *, struct _GUID *, void **); // r8
  JointResize *v13; // rcx
  struct tagRECT *v14; // rax
  struct tagRECT v15; // xmm0
  struct Windows::Internal::IComPoolTask **v16; // rax
  struct Windows::Internal::IComPoolTask *v17; // rdi
  __int64 v18; // rcx
  DWORD CurrentThreadId; // eax
  struct tagRECT v21; // [rsp+30h] [rbp-D0h] BYREF
  struct tagRECT v22; // [rsp+40h] [rbp-C0h] BYREF
  char *v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT v25; // [rsp+60h] [rbp-A0h]
  int v26; // [rsp+70h] [rbp-90h]
  _QWORD v27[40]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v28[40]; // [rsp+1C0h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+248h]

  v7 = 1;
  *((_BYTE *)this + 136) = 1;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v27,
    (__int64)"JointResize");
  v27[0] = &JointResizeTelemetry::JointResize::`vftable';
  JointResizeTelemetry::JointResize::StartActivity((JointResizeTelemetry::JointResize *)v27);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v28);
  v28[0] = &JointResizeTelemetry::JointResize::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (__int64)this + 344,
    (__int64)v27);
  JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v28);
  JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v27);
  v10 = (char *)this - 88;
  JointResize::RegisterRawInput((JointResize *)((char *)this - 88), 0);
  JointResize::RegisterViewChanges((JointResize *)((char *)this - 88), 1);
  if ( (a5 & 2) != 0 )
  {
    v11 = -2147467259;
LABEL_12:
    JointResize::DestroyGhostDivider((JointResize *)((char *)this - 88));
    JointResize::Cleanup((JointResize *)((char *)this - 88));
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(v10 + 432));
    return (unsigned int)v11;
  }
  v11 = JointResize::CalculateSecondaryView((JointResize *)((char *)this - 88), a2, a4);
  if ( v11 < 0 )
    goto LABEL_12;
  *(_QWORD *)&v21.left = (char *)this - 88;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v21.left);
  v12 = (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))*((_QWORD *)this + 13);
  v22 = *a3;
  v14 = JointResize::ComputeExtendedViewRect(v13, &v21, v12, &v22);
  v23 = (char *)this - 88;
  v24 = (__int64)this - 88;
  *a3 = *v14;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v24);
  v15 = *a3;
  v26 = a4;
  v25 = v15;
  v16 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46d2ac6b30f5d317ef4bcc4e3f77555a______ptr64___lambda_46d2ac6b30f5d317ef4bcc4e3f77555a______ptr64_(
                                                     &v21,
                                                     (__int64)&v23);
  v17 = *v16;
  *v16 = 0LL;
  v18 = *(_QWORD *)&v21.left;
  *(_QWORD *)&v22.left = v17;
  if ( *(_QWORD *)&v21.left )
  {
    *(_QWORD *)&v21.left = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  CurrentThreadId = GetCurrentThreadId();
  v11 = Windows::Internal::ComTaskPool::RunTask(2u, 0, CurrentThreadId, 0, v17, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease((void **)&v22);
  if ( v11 >= 0 )
  {
    v7 = 0;
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x119,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v11);
  }
  if ( this != (JointResize *)88 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))((char *)this - 88);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))((char *)this - 88);
  }
  if ( v7 )
    goto LABEL_12;
  return (unsigned int)v11;
}
