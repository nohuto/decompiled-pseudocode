/*
 * XREFs of ?GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18007BA30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMonitorManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@XZ @ 0x18007AAC8 (-GetMonitorManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIImmersiveMonitorManager@@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::GetMonitor(CWin32ApplicationView *this, struct IImmersiveMonitor **a2)
{
  _QWORD *v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v13; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  ApplicationViewManagement::CGlobals::GetMonitorManager((__int64 *)&v13);
  v4 = v13;
  if ( v13 )
  {
    v6 = *((_QWORD *)this + 21);
    v7 = *v13;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
    v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, GUID *, GUID *, struct IImmersiveMonitor **))(v7 + 88))(
           v4,
           v8,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           a2);
    v5 = v9;
    if ( v9 >= 0 )
      v5 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xD0,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v9);
  }
  else
  {
    v5 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x80070490LL);
  }
  v10 = (__int64)v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v5;
}
