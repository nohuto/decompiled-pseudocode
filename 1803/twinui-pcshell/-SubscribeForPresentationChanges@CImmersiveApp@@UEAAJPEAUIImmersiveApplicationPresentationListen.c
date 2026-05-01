/*
 * XREFs of ?SubscribeForPresentationChanges@CImmersiveApp@@UEAAJPEAUIImmersiveApplicationPresentationListener@@@Z @ 0x180131790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::SubscribeForPresentationChanges(
        CImmersiveApp *this,
        struct IImmersiveApplicationPresentationListener *a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct IImmersiveApplicationPresentationListener *v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IImmersiveApplicationPresentationListener *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = (struct IImmersiveApplicationPresentationListener *)*((_QWORD *)this + 74);
  if ( v5 )
  {
    if ( v5 != a2 )
    {
      v6 = -2147024713;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x941,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)0x800700B7LL);
      goto LABEL_8;
    }
  }
  else if ( a2 )
  {
    v10 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v10);
    v7 = *((_QWORD *)this + 74);
    *((_QWORD *)this + 74) = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v6 = 0;
LABEL_8:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v6;
}
