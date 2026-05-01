/*
 * XREFs of ?GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18007E6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18007888C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::GetMonitor(CWin32ApplicationView *this, struct IImmersiveMonitor **a2)
{
  volatile signed __int32 *v4; // rdi
  __int64 *v5; // rbx
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 *v12; // [rsp+70h] [rbp+18h]
  volatile signed __int32 *v13; // [rsp+78h] [rbp+20h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v13);
  v4 = v13;
  if ( v13 )
  {
    v5 = *(__int64 **)(*((_QWORD *)v13 + 7) + 640LL);
    if ( v5 )
      (*(void (__fastcall **)(__int64 *))(*v5 + 8))(v5);
    v12 = v5;
    if ( _InterlockedExchangeAdd(v4 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v13 + 72LL))(v13, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( v12 )
  {
    v7 = *v12;
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24));
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, GUID *, struct IImmersiveMonitor **))(v7 + 88))(
           v12,
           v8,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           a2);
    v6 = v9;
    if ( v9 >= 0 )
      v6 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xD0,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v9);
  }
  else
  {
    v6 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x80070490LL);
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
  return v6;
}
