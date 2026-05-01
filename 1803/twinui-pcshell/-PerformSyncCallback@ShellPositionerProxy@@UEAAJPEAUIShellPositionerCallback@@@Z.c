/*
 * XREFs of ?PerformSyncCallback@ShellPositionerProxy@@UEAAJPEAUIShellPositionerCallback@@@Z @ 0x1800254C0
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_3793e4c891056231a19fa9236fba9f97___ @ 0x18000BD5C (ShellPositionerHelpers--PerformCallbackOnView__lambda_3793e4c891056231a19fa9236fba9f97___.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___ @ 0x180025720 (ShellPositionerHelpers--PerformCallbackOnView__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___.c)
 * Callees:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3793e4c891056231a19fa9236fba9f97___::Invoke @ 0x18000BFC0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_3793e4c891056231a19fa9236fba9f9.c)
 *     ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x180024250 (-GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___::Invoke @ 0x1800255C0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_ced84d1d4e9be799504b2d8f0a09c0c.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerProxy::PerformSyncCallback(
        ShellPositionerProxy *this,
        struct IShellPositionerCallback *a2)
{
  struct IApplicationView *v3; // rdx
  __int64 (__fastcall *v4)(ShellPositionerManager *, struct IApplicationView *, const struct _GUID *, void **); // rax
  ShellPositionerManager *v5; // rcx
  int PositionerForView; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(__int64, CDesktopPositioner *); // rax
  int v9; // eax
  CDesktopPositioner *v10; // rcx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CDesktopPositioner *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  v3 = (struct IApplicationView *)*((_QWORD *)this + 3);
  v4 = *(__int64 (__fastcall **)(ShellPositionerManager *, struct IApplicationView *, const struct _GUID *, void **))(**((_QWORD **)this + 2) + 24LL);
  v5 = (ShellPositionerManager *)*((_QWORD *)this + 2);
  if ( v4 == ShellPositionerManager::GetPositionerForView )
    PositionerForView = ShellPositionerManager::GetPositionerForView(
                          v5,
                          v3,
                          &GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130,
                          (void **)&v15);
  else
    PositionerForView = v4(v5, v3, &GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130, (void **)&v15);
  v7 = PositionerForView;
  if ( PositionerForView < 0 )
  {
    v12 = 23LL;
  }
  else
  {
    v8 = *(__int64 (__fastcall **)(__int64, CDesktopPositioner *))(*(_QWORD *)a2 + 24LL);
    if ( (char *)v8 == (char *)ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___::Invoke )
    {
      v9 = ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___::Invoke(
             a2,
             v15);
    }
    else if ( v8 == ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3793e4c891056231a19fa9236fba9f97___::Invoke )
    {
      v9 = ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3793e4c891056231a19fa9236fba9f97___::Invoke(
             (__int64)a2,
             v15);
    }
    else
    {
      v9 = v8((__int64)a2, v15);
    }
    v7 = v9;
    if ( v9 >= 0 )
    {
      v7 = 0;
      goto LABEL_8;
    }
    v12 = 24LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\positionerproxy.cpp",
    (const char *)v7,
    v13);
LABEL_8:
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(CDesktopPositioner *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v7;
}
