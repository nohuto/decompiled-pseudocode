/*
 * XREFs of ?GetForegroundOperableView@TabletModePositioner@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x1802C6DFC
 * Callers:
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1802CE85C (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1802840BC (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall TabletModePositioner::GetForegroundOperableView(
        TabletModePositioner *this,
        struct IApplicationView **a2)
{
  __int64 v3; // rbx
  int v4; // eax
  struct IApplicationView *v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  TabletModePositionerHelpers *v11; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 42);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v11);
  v4 = (*(__int64 (__fastcall **)(__int64, TabletModePositionerHelpers **))(*(_QWORD *)v3 + 72LL))(v3, &v11);
  v6 = v4;
  if ( v4 >= 0 )
  {
    if ( TabletModePositionerHelpers::IsOperableView(
           (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))v11,
           v5) )
    {
      v4 = (*(__int64 (__fastcall **)(TabletModePositionerHelpers *, int *))(*(_QWORD *)v11 + 88LL))(v11, &v10);
      v6 = v4;
      if ( v4 < 0 )
      {
        v7 = 2001LL;
        goto LABEL_6;
      }
      if ( v10 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v11);
        v6 = 0;
        *a2 = v11;
        goto LABEL_10;
      }
    }
    v6 = -2147023728;
    goto LABEL_10;
  }
  v7 = 1994LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v4);
LABEL_10:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v11);
  return v6;
}
